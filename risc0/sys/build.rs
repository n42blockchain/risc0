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

use std::{
    env,
    path::{Path, PathBuf},
};

use risc0_build_kernel::{KernelBuild, KernelType};

fn main() {
    let manifest_dir = PathBuf::from(env::var("CARGO_MANIFEST_DIR").unwrap());
    println!(
        "cargo:cxx_root={}",
        manifest_dir.join("cxx").to_string_lossy()
    );

    if env::var("CARGO_FEATURE_CUDA").is_ok() {
        println!(
            "cargo:cuda_root={}",
            manifest_dir.join("kernels/zkp/cuda").to_string_lossy()
        );
        build_cuda_kernels();
    }

    if env::var("CARGO_FEATURE_METAL").is_ok() {
        println!(
            "cargo:metal_root={}",
            manifest_dir.join("kernels/zkp/metal").to_string_lossy()
        );
        build_metal_kernels();
    }
}

fn build_cuda_kernels() {
    const CUDA_KERNELS: &[(&str, &str, &[&str])] = &[(
        "zkp",
        "all.cu",
        &[
            "eltwise.cu",
            "fri.cu",
            "mix.cu",
            "ntt.cu",
            "poseidon.cu",
            "poseidon2.cu",
            "sha.cu",
            "zk.cu",
            "sha256.h",
        ],
    )];

    let inc_path = Path::new("kernels/zkp/cuda");
    for (name, src, deps) in CUDA_KERNELS {
        let dir = Path::new("kernels").join(name).join("cuda");
        let dep_paths = deps.iter().map(|x| dir.join(x));
        let out = format!("cuda_kernels_{name}");
        KernelBuild::new(KernelType::Cuda)
            .file(dir.join(src))
            .include(inc_path)
            .deps(dep_paths)
            .compile(&out);
    }

    // This is a workaround for compilation errors when compiling with clang++.
    std::env::set_var("CXX", "g++");

    println!("cargo:rerun-if-changed=kernels/zkp/cuda/supra_ntt_api.cu");

    cc::Build::new()
        .cuda(true)
        .define("FEATURE_BABY_BEAR", None)
        .file("kernels/zkp/cuda/supra_ntt_api.cu")
        .include(env::var("DEP_SPPARK_ROOT").unwrap())
        .compile("supra_ntt");
}

fn build_metal_kernels() {
    const METAL_KERNELS: &[(&str, &[&str])] = &[(
        "zkp",
        &[
            "eltwise.metal",
            "fri.metal",
            "mix.metal",
            "ntt.metal",
            "poseidon.metal",
            "poseidon2.metal",
            "sha.metal",
            "zk.metal",
        ],
    )];

    let inc_path = Path::new("kernels/zkp/metal");
    for (name, srcs) in METAL_KERNELS {
        let dir = Path::new("kernels").join(name).join("metal");
        let src_paths = srcs.iter().map(|x| dir.join(x));
        let out = format!("metal_kernels_{name}");
        KernelBuild::new(KernelType::Metal)
            .files(src_paths)
            .include(inc_path)
            .dep(inc_path.join("sha256.h"))
            .compile(&out);
    }
}
