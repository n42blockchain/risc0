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

use anyhow::{bail, Result};

use super::{Executor, Prover, ProverOpts};
use crate::{
    get_prover_server, host::server::session::NullSegmentRef, ExecutorEnv, ExecutorImpl,
    InnerReceipt, ProveInfo, Receipt, SegmentInfo, SessionInfo, VerifierContext,
};

/// A [Prover] implementation that selects a [crate::ProverServer] by calling
/// [get_prover_server].
pub struct LocalProver {
    name: String,
}

impl LocalProver {
    /// Construct a [LocalProver].
    pub fn new(name: &str) -> Self {
        Self {
            name: name.to_string(),
        }
    }
}

impl Prover for LocalProver {
    fn prove_with_ctx(
        &self,
        env: ExecutorEnv<'_>,
        ctx: &VerifierContext,
        elf: &[u8],
        opts: &ProverOpts,
    ) -> Result<ProveInfo> {
        get_prover_server(opts)?.prove_with_ctx(env, ctx, elf)
    }

    fn get_name(&self) -> String {
        self.name.clone()
    }

    fn compress(&self, opts: &ProverOpts, receipt: &Receipt) -> Result<Receipt> {
        match receipt.inner {
            InnerReceipt::Succinct(_) | InnerReceipt::Compact(_) => Ok(receipt.clone()),
            InnerReceipt::Composite(ref inner) => Ok(Receipt {
                inner: InnerReceipt::Succinct(get_prover_server(opts)?.compress(inner)?),
                journal: receipt.journal.clone(),
            }),
            InnerReceipt::Fake { .. } => {
                bail!("BonsaiProver does not support compress on a composite receipt")
            }
        }
    }
}

impl Executor for LocalProver {
    fn execute(&self, env: ExecutorEnv<'_>, elf: &[u8]) -> Result<SessionInfo> {
        let mut exec = ExecutorImpl::from_elf(env, elf)?;
        let mut segments = Vec::new();
        let session = exec.run_with_callback(|segment| {
            segments.push(SegmentInfo {
                po2: segment.inner.po2 as u32,
                cycles: segment.inner.insn_cycles as u32,
            });
            Ok(Box::new(NullSegmentRef))
        })?;
        Ok(SessionInfo {
            segments,
            journal: session.journal.unwrap_or_default(),
            exit_code: session.exit_code,
        })
    }
}
