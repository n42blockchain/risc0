// Copyright 2024 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

use std::{fmt::Write, process::Command};

use clap::Parser;
use risc0_circuit_recursion::zkr::{get_all_zkrs, get_zkr};
use risc0_zkp::{
    core::{
        digest::Digest,
        hash::{
            blake2b::Blake2bCpuHashSuite, poseidon2::Poseidon2HashSuite,
            poseidon_254::Poseidon254HashSuite, sha::Sha256HashSuite,
        },
    },
    field::baby_bear::BabyBear,
    hal::cpu::CpuHal,
};
use risc0_zkvm::{
    recursion::{Program, Prover as RecursionProver},
    Loader,
};

#[derive(Parser)]
pub struct Bootstrap;

const CONTROL_ID_PATH_RV32IM: &str = "risc0/circuit/rv32im/src/control_id.rs";
const CONTROL_ID_PATH_RECURSION: &str = "risc0/circuit/recursion/src/control_id.rs";

impl Bootstrap {
    pub fn run(&self) {
        let poseidon2_control_ids = Self::generate_rv32im_control_ids();
        Self::generate_recursion_control_ids(poseidon2_control_ids);
    }

    fn generate_rv32im_control_ids() -> Vec<Digest> {
        tracing::info!("computing control IDs with SHA-256");
        let control_id_sha256 = Loader::compute_control_id_table(&CpuHal::new(Sha256HashSuite::<
            BabyBear,
        >::new_suite(
        )));
        tracing::info!("computing control IDs with Poseidon2");
        let control_id_poseidon2 =
            Loader::compute_control_id_table(&CpuHal::new(Poseidon2HashSuite::new_suite()));
        tracing::info!("computing control IDs with Blake2b");
        let control_id_blake2b =
            Loader::compute_control_id_table(&CpuHal::new(Blake2bCpuHashSuite::new_suite()));

        let contents = format!(
            include_str!("templates/control_id_rv32im.rs"),
            control_id_sha256[0],
            control_id_sha256[1],
            control_id_sha256[2],
            control_id_sha256[3],
            control_id_sha256[4],
            control_id_sha256[5],
            control_id_sha256[6],
            control_id_sha256[7],
            control_id_sha256[8],
            control_id_sha256[9],
            control_id_sha256[10],
            control_id_poseidon2[0],
            control_id_poseidon2[1],
            control_id_poseidon2[2],
            control_id_poseidon2[3],
            control_id_poseidon2[4],
            control_id_poseidon2[5],
            control_id_poseidon2[6],
            control_id_poseidon2[7],
            control_id_poseidon2[8],
            control_id_poseidon2[9],
            control_id_poseidon2[10],
            control_id_blake2b[0],
            control_id_blake2b[1],
            control_id_blake2b[2],
            control_id_blake2b[3],
            control_id_blake2b[4],
            control_id_blake2b[5],
            control_id_blake2b[6],
            control_id_blake2b[7],
            control_id_blake2b[8],
            control_id_blake2b[9],
            control_id_blake2b[10],
        );
        tracing::debug!("contents of rv32im control_id.rs:\n{contents}");

        tracing::info!("writing control ids to {CONTROL_ID_PATH_RV32IM}");
        std::fs::write(CONTROL_ID_PATH_RV32IM, contents).unwrap();

        // Use rustfmt to format the file.
        Command::new("rustfmt")
            .arg(CONTROL_ID_PATH_RV32IM)
            .status()
            .expect("failed to format {CONTROL_ID_PATH_RV32IM}");

        control_id_poseidon2
    }

    fn generate_recursion_control_ids(mut valid_control_ids: Vec<Digest>) {
        tracing::info!("unzipping recursion programs (zkrs)");
        let zkrs = get_all_zkrs().unwrap();
        let zkr_control_ids: Vec<(String, Digest)> = zkrs
            .into_iter()
            .map(|(name, encoded_program)| {
                let program = Program::from_encoded(&encoded_program);

                tracing::info!("computing control ID for {name} with Poseidon2");
                let control_id = program.compute_control_id(Poseidon2HashSuite::new_suite());
                valid_control_ids.push(control_id);

                tracing::debug!("{name} control id: {control_id:?}");
                (name, control_id)
            })
            .collect();

        // Calculate a Merkle root for the allowed control IDs and add it to the file.
        let merkle_group = RecursionProver::bootstrap_allowed_tree(valid_control_ids);
        let hash_suite = Poseidon2HashSuite::new_suite();
        let hashfn = hash_suite.hashfn.as_ref();
        let allowed_ids_root = merkle_group.calc_root(hashfn);

        let mut inner = String::new();
        for (name, digest) in zkr_control_ids.iter() {
            writeln!(&mut inner, r#"("{name}", "{digest}"),"#).unwrap();
        }

        let bn254_control_id = Self::generate_identity_bn254_control_id();
        let contents = format!(
            include_str!("templates/control_id_zkr.rs"),
            allowed_ids_root,
            zkr_control_ids.len(),
            inner,
            bn254_control_id
        );

        tracing::info!("writing control ids to {CONTROL_ID_PATH_RECURSION}");
        std::fs::write(CONTROL_ID_PATH_RECURSION, contents).unwrap();

        // Use rustfmt to format the file.
        Command::new("rustfmt")
            .arg(CONTROL_ID_PATH_RECURSION)
            .status()
            .expect("failed to format {CONTROL_ID_PATH_RECURSION}");
    }

    pub fn generate_identity_bn254_control_id() -> Digest {
        let encoded_program = get_zkr("identity.zkr").unwrap();
        let program = Program::from_encoded(&encoded_program);
        let digest = program.compute_control_id(Poseidon254HashSuite::new_suite());

        // NOTE: we need to byte-reverse the BN254_CONTROL_ID because
        // (apparently) groth16 digests are represented as a single
        // little-endian field element
        let bytes: Vec<u8> = digest.as_bytes().iter().rev().cloned().collect();
        Digest::try_from(bytes.as_slice()).unwrap()
    }
}
