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

#include "ffi.h"

#include "extern.h"
#include "fp.h"
#include "fpext.h"

#include <cstdint>
#include <stdexcept>

using namespace risc0;
using namespace risc0::circuit::rv32im;

extern "C" const char* risc0_circuit_string_ptr(risc0_string* str) {
  return str->str.c_str();
}

extern "C" void risc0_circuit_string_free(risc0_string* str) {
  delete str;
}

extern "C" void
risc0_circuit_rv32im_step_exec(risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp** args) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    // printf("step_exec(%p, %lu, %lu, %p)\n", ctx, steps, cycle, args);
    circuit::rv32im::step_exec(ctx, steps, cycle, args);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_inject_backs_ram(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp* data) {
  ffi_wrap(err, 0, [&] {
    circuit::rv32im::inject_backs_ram(ctx, steps, cycle, data);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_step_verify_mem(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp** args) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    circuit::rv32im::step_verify_mem(ctx, steps, cycle, args);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_inject_backs_bytes(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp* data) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    circuit::rv32im::inject_backs_bytes(ctx, steps, cycle, data);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_step_verify_bytes(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp** args) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    circuit::rv32im::step_verify_bytes(ctx, steps, cycle, args);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_step_compute_accum(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp** args) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    // printf("step_compute_accum(%p, %lu, %lu, %p)\n", ctx, steps, cycle, args);
    circuit::rv32im::step_compute_accum(ctx, steps, cycle, args);
    return 0;
  });
}

extern "C" void risc0_circuit_rv32im_step_verify_accum(
    risc0_error* err, void* ctx, size_t steps, size_t cycle, Fp** args) {
  ffi_wrap<uint32_t>(err, 0, [&] {
    // printf("step_verify_accum(%p, %lu, %lu, %p)\n", ctx, steps, cycle, args);
    circuit::rv32im::step_verify_accum(ctx, steps, cycle, args);
    return 0;
  });
}

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
#endif

extern "C" FpExt
risc0_circuit_rv32im_poly_fp(size_t cycle, size_t steps, FpExt* poly_mix, Fp** args) {
  return circuit::rv32im::poly_fp(cycle, steps, poly_mix, args);
}
