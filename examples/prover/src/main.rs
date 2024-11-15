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

//! This is an example of how the public 1.0 API can be used to build a proving service.
//! It's not meant to be used in production since it doesn't handle failures.
//! This is also not an optimal implementation; many performance improvements could be made.

mod plan;
mod task_mgr;
mod worker;

use std::{cell::RefCell, collections::HashMap, rc::Rc};

use anyhow::Result;
use num_bigint::BigUint;
use risc0_bigint2_methods::{RSA_ELF, RSA_ID};
use risc0_zkvm::{
    sha::Digest, ApiClient, Asset, AssetRequest, CoprocessorCallback, ExecutorEnv, InnerReceipt,
    ProveZkrRequest, ProverOpts, Receipt, SuccinctReceipt, Unknown,
};

use self::{plan::Planner, task_mgr::TaskManager};

fn main() {
    prover_example();
}

struct Coprocessor {
    pub(crate) receipts: HashMap<Digest, SuccinctReceipt<Unknown>>,
}

impl Coprocessor {
    fn new() -> Self {
        Self {
            receipts: HashMap::new(),
        }
    }
}

impl CoprocessorCallback for Coprocessor {
    fn prove_zkr(&mut self, proof_request: ProveZkrRequest) -> Result<()> {
        let client = ApiClient::from_env().unwrap();
        let claim_digest = proof_request.claim_digest;
        let receipt = client.prove_zkr(proof_request, AssetRequest::Inline)?;
        self.receipts.insert(claim_digest, receipt);
        Ok(())
    }
}

fn prover_example() {
    println!("Submitting proof request...");

    let mut task_manager = TaskManager::new();
    let mut planner = Planner::default();

    const BASE: &[u8] = b"00024f2f68423c422bb8b7b6ea3f3382a379e635f9501bd9e1f09922407b5c4326fb959eadd237ed80972767deeb416749b137fc5c80876126f154f2c129a04c05970e08396dbd5d1285b4fb3a63b80855101bc3bbc9d90dd0500efd79989267ab36d4e2a361761c6ea1e172c741ec59b0aee1f1956b3ba947ed0b0cc2d45b47c041ee2a47bcc53345bd4714831b5d3125ad9a940f8efcc30ae51fc37ee6e3e4e2bd5f43ff762d7dc23017cd67a56ed00f30f09661839a10c2a487ebc1314c5bf77f0f305d040649741f357b6bb478bd72864845c3b62691c6f80199c923d2efd2e9f75751e26dc26495d3ff848d53c0424b5451d644a9903fb8c93bab50227e59c4e05029c1c50d434bd368dc0880910548804093bdd59da572d5513e57c078354f73aa35ba72d39e22e351449849d158a0ec8bc0069cd09f3dbcb7f02c089a054c35dbf7469089a43c679c3eb7f972c6cd569dcc8bf2540b1188083b77c8517a635ea037ec1b46c0f1cec0770c8d25959f80ae0068656c6c6f20776f726c64";
    const MODULUS: &[u8] = b"a79633c36a2e9a91cac9505c300edb9a0aa8105f115856024fe27dac4910ab2fad99fe3700ddf532a3c86c5171d28177d55b3112fe73f46917a58006ac747ae396557fe84e62ba0cefd55858258e2aecd756a855ca7bd81be968fc3b908a310508828275065ab91b6f8f7964ef5684ee7fd5188c097a99323dfbe1302ab8723d97f9d1a30b89b9fb7504e8fe1e85f858ae2f07818ff8c89f7f9dbd051e52f5dae0eb33ab85d826906817f6712003c866f878874c503ec4ee02457a3c7012c6c77f66bfe23518d2eddbbe9fc3dbb8ad944d9a38e333c7caa86138f5121b89563067c4bac9c32a26cd7c21830315f8e1c5b3783104f24648f7bf8556500b04d8bf11bc7e777aa5e0653c5af9b085c2c08a16f7d2b4bc323d1b32a5cc8f4ab39f374d30efa01f8009aeb60358e5f22345fea8a123e46f394bcc669d183348b6eb29fa5f972ebe90aa64684973f4e67c0ea7d82c5a05c4a837a0a63c86b201c54cbcb1dbabf26a5bbd533b0ec91892716b7deb54c061d2e8696391f210e16b4714dd";
    const EXPECTED: &[u8] = b"6bc245902f8b3c05089a85c2e17e8d00da0b61ac57990bd1fca990ebcb5cf7c1bfbf9adcf72c95ffba1034b62da58361290779dbf92f1e789621dd4cf8926552b5887aff88eeae89eb3dbb7e0bc7d6dd3f93db38ea3f79c0e1ca2fa866a40cad41055e7451c1d180639ecdf69e4e431efa658424c3cb242fd1acf75ce84665a857b50e5e8e5049b6159d926ed193b14f58ef8fd9aab33f308f9a1753daeb4bca467c057822a01a3e3901e2e064a5d8f336ea1ad665055f608f5e0e864ddf9c0c3723a505d649e3be66b10ee525c442e156ec61b288e7913c015804c89d9f983504a0dcf88d5399af4b53f30761484cdd49ef4eff3b6942d10bdbeedbca7b91f1cd20d031d51bf9b34342ad1809d0c4752cfb12ca7a77748c791ede7c06ef89c1017c2a9f81dd270cd504b57c292712e982efc4acd967a260b7c5cf3432a15b05f1da140a7de981338a4aa06b3858a936ef669567f4b9652fc43e806d5575b8bcf2d2a2aef6c33ffa6eeea67b8369d78d6fd952678189bd51d838011111bfa856";
    let base = BigUint::parse_bytes(BASE, 16).unwrap();
    let modulus = BigUint::parse_bytes(MODULUS, 16).unwrap();
    let expected = BigUint::parse_bytes(EXPECTED, 16).unwrap();

    let coprocessor = Rc::new(RefCell::new(Coprocessor::new()));
    let env = ExecutorEnv::builder()
        .write(&(base, modulus))
        .unwrap()
        .coprocessor_callback_ref(coprocessor.clone())
        // Use a low segment size to generate more jobs in this example.
        .segment_limit_po2(17)
        .build()
        .unwrap();

    let client = ApiClient::from_env().unwrap();
    let mut segment_idx = 0;
    let session = client
        .execute(
            &env,
            Asset::Inline(RSA_ELF.into()),
            AssetRequest::Inline,
            |info, segment| {
                println!("{info:?}");
                planner.enqueue_segment(segment_idx).unwrap();
                task_manager.add_segment(segment_idx, segment);
                while let Some(task) = planner.next_task() {
                    task_manager.add_task(task.clone());
                }
                segment_idx += 1;
                Ok(())
            },
        )
        .unwrap();

    assert_eq!(session.journal.decode::<BigUint>().unwrap(), expected);

    planner.finish().unwrap();

    println!("Plan:");
    println!("{planner:?}");

    while let Some(task) = planner.next_task() {
        task_manager.add_task(task.clone());
    }

    let conditional_receipt = task_manager.run();

    let output = conditional_receipt
        .claim
        .as_value()
        .unwrap()
        .output
        .as_value()
        .unwrap()
        .as_ref()
        .unwrap();
    let assumptions = output.assumptions.as_value().unwrap();

    let coprocessor = coprocessor.borrow();
    let mut succinct_receipt = conditional_receipt.clone();
    for assumption in assumptions.iter() {
        let assumption = assumption.as_value().unwrap();
        println!("{assumption:?}");
        let assumption_receipt = coprocessor.receipts.get(&assumption.claim).unwrap().clone();
        let opts = ProverOpts::default();
        succinct_receipt = client
            .resolve(
                &opts,
                succinct_receipt.try_into().unwrap(),
                assumption_receipt.try_into().unwrap(),
                AssetRequest::Inline,
            )
            .unwrap();
    }

    let receipt = Receipt::new(
        InnerReceipt::Succinct(succinct_receipt),
        session.journal.bytes.clone(),
    );
    let asset = receipt.try_into().unwrap();
    client.verify(asset, RSA_ID).unwrap();
    println!("Receipt verified!");
}

#[test]
fn smoke_test() {
    prover_example();
}
