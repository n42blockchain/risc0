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

#![cfg(feature = "prove")]

use risc0_circuit_keccak::{
    prove::zkr::get_keccak_zkr, KECCAK_CONTROL_IDS, KECCAK_CONTROL_ROOT, KECCAK_PO2_RANGE,
};
use risc0_circuit_keccak_methods::{KECCAK_ELF, KECCAK_ID};
use risc0_zkp::{
    core::{digest::Digest, hash::poseidon2::Poseidon2HashSuite},
    digest,
};
use risc0_zkvm::{get_prover_server, recursion::MerkleGroup, ExecutorEnv, ProverOpts};

fn run_test(po2: usize, claim_digest: Digest) {
    let to_guest: (Digest, u32) = (claim_digest, po2 as u32);

    let env = ExecutorEnv::builder()
        .write(&to_guest)
        .unwrap()
        .build()
        .unwrap();

    let prover = get_prover_server(&ProverOpts::fast()).unwrap();

    // Produce a receipt by proving the specified ELF binary.
    let receipt = prover.prove(env, KECCAK_ELF).unwrap().receipt;

    // Make sure this receipt actually depends on the assumption;
    // otherwise this test might give a false negative.
    assert!(!receipt
        .inner
        .composite()
        .unwrap()
        .assumption_receipts
        .is_empty());

    // Make sure the receipt verifies OK
    receipt.verify(KECCAK_ID).unwrap();
}

#[test]
fn keccak_po2_16() {
    run_test(
        16,
        digest!("822a0c0b9cd04788833b9366addf8343c27563733ec1f3fc4ca405915e1ae162"),
    );
}

#[test]
#[ignore]
fn keccak_po2_17() {
    run_test(
        17,
        digest!("a1b1e7b58b6e1ab761bd4f55cc763d9eef886b26e0942e4a3916d0c465f3d962"),
    );
}

fn compute_control_ids() -> Vec<Digest> {
    let mut ret = vec![];
    for po2 in KECCAK_PO2_RANGE {
        let program = get_keccak_zkr(po2).unwrap();
        let hash_suite = Poseidon2HashSuite::new_suite();
        ret.push(program.compute_control_id(hash_suite))
    }
    ret
}

fn compute_control_root() -> Digest {
    let control_ids = compute_control_ids();
    let hash_suite = Poseidon2HashSuite::new_suite();
    let hashfn = hash_suite.hashfn.as_ref();
    let group = MerkleGroup::new(control_ids).unwrap();
    group.calc_root(hashfn)
}

// Makes sure our included control IDs are what we expect
#[test]
fn control_ids() {
    assert_eq!(KECCAK_CONTROL_IDS, compute_control_ids());
}

#[test]
fn control_roots() {
    assert_eq!(KECCAK_CONTROL_ROOT, compute_control_root());
}
