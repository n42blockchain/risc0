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

// This code is automatically generated

#include "ffi.h"
#include "fp.h"

#include <array>
#include <cassert>
#include <stdexcept>

// clang-format off
namespace risc0::circuit::recursion {

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

Fp step_compute_accum(void* ctx, HostBridge host, size_t steps, size_t cycle, Fp** args) {
  size_t mask = steps - 1;
  std::array<Fp, 96> host_args;
  std::array<Fp, 32> host_outs;
  // loc(unknown)
  Fp x0(2013265910);
  // loc(unknown)
  Fp x1(11);
  // loc(unknown)
  Fp x2(1);
  // loc(unknown)
  Fp x3(0);
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/micro_ops(Reg)"("./zirgen/components/mux.h":49:0))
  auto x4 = args[0][1 * steps + ((cycle - 0) & mask)];
  assert(x4 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/macro_ops(Reg)"("./zirgen/components/mux.h":49:0))
  auto x5 = args[0][2 * steps + ((cycle - 0) & mask)];
  assert(x5 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_load(Reg)"("./zirgen/components/mux.h":49:0))
  auto x6 = args[0][3 * steps + ((cycle - 0) & mask)];
  assert(x6 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_full(Reg)"("./zirgen/components/mux.h":49:0))
  auto x7 = args[0][4 * steps + ((cycle - 0) & mask)];
  assert(x7 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_partial(Reg)"("./zirgen/components/mux.h":49:0))
  auto x8 = args[0][5 * steps + ((cycle - 0) & mask)];
  assert(x8 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_store(Reg)"("./zirgen/components/mux.h":49:0))
  auto x9 = args[0][6 * steps + ((cycle - 0) & mask)];
  assert(x9 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/checked_bytes(Reg)"("./zirgen/components/mux.h":49:0))
  auto x10 = args[0][7 * steps + ((cycle - 0) & mask)];
  assert(x10 != Fp::invalid());
  if (x4 != 0) {
    {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x11 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x11 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x12 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x12 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x13 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x13 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x14 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x14 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x15 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x15 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x16 = args[3][0];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x17 = args[3][1];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x18 = args[3][2];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x19 = args[3][3];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x20 = x16 * x11;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x21 = x17 * x11;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x22 = x18 * x11;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x23 = x19 * x11;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x24 = x20 + x2;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x25 = args[3][4];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x26 = args[3][5];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x27 = args[3][6];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x28 = args[3][7];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x29 = x25 * x12;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x30 = x26 * x12;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x31 = x27 * x12;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x32 = x28 * x12;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x33 = x24 + x29;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x34 = x21 + x30;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x35 = x22 + x31;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x36 = x23 + x32;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x37 = args[3][8];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x38 = args[3][9];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x39 = args[3][10];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x40 = args[3][11];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x41 = x37 * x13;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x42 = x38 * x13;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x43 = x39 * x13;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x44 = x40 * x13;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x45 = x33 + x41;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x46 = x34 + x42;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x47 = x35 + x43;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x48 = x36 + x44;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x49 = args[3][12];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x50 = args[3][13];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x51 = args[3][14];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x52 = args[3][15];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x53 = x49 * x14;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x54 = x50 * x14;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x55 = x51 * x14;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x56 = x52 * x14;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x57 = x45 + x53;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x58 = x46 + x54;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x59 = x47 + x55;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x60 = x48 + x56;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x61 = args[3][16];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x62 = args[3][17];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x63 = args[3][18];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x64 = args[3][19];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x65 = x61 * x15;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x66 = x62 * x15;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x67 = x63 * x15;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x68 = x64 * x15;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x69 = x57 + x65;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x70 = x58 + x66;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x71 = x59 + x67;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x72 = x60 + x68;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x73 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x73 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x74 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x74 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x75 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x75 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x76 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x76 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x77 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x77 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x78 = x16 * x73;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x79 = x17 * x73;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x80 = x18 * x73;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x81 = x19 * x73;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x82 = x78 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x83 = x25 * x74;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x84 = x26 * x74;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x85 = x27 * x74;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x86 = x28 * x74;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x87 = x82 + x83;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x88 = x79 + x84;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x89 = x80 + x85;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x90 = x81 + x86;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x91 = x37 * x75;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x92 = x38 * x75;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x93 = x39 * x75;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x94 = x40 * x75;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x95 = x87 + x91;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x96 = x88 + x92;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x97 = x89 + x93;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x98 = x90 + x94;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x99 = x49 * x76;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x100 = x50 * x76;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x101 = x51 * x76;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x102 = x52 * x76;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x103 = x95 + x99;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x104 = x96 + x100;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x105 = x97 + x101;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x106 = x98 + x102;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x107 = x61 * x77;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x108 = x62 * x77;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x109 = x63 * x77;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x110 = x64 * x77;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x111 = x103 + x107;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x112 = x104 + x108;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x113 = x105 + x109;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x114 = x106 + x110;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x115 = x72 * x112;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x116 = x71 * x113;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x117 = x70 * x114;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x118 = x117 + x116;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x119 = x118 + x115;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x120 = x119 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x121 = x69 * x111;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x122 = x121 + x120;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x123 = x72 * x113;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x124 = x71 * x114;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x125 = x124 + x123;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x126 = x125 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x127 = x70 * x111;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x128 = x69 * x112;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x129 = x128 + x127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x130 = x129 + x126;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x131 = x72 * x114;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x132 = x131 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x133 = x71 * x111;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x134 = x70 * x112;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x135 = x69 * x113;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x136 = x135 + x134;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x137 = x136 + x133;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x138 = x137 + x132;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x139 = x72 * x111;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x140 = x71 * x112;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x141 = x70 * x113;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x142 = x69 * x114;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x143 = x142 + x141;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x144 = x143 + x140;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x145 = x144 + x139;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x146 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x146 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x147 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x147 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x148 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x148 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x149 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x149 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x150 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x150 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x151 = x16 * x146;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x152 = x17 * x146;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x153 = x18 * x146;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x154 = x19 * x146;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x155 = x151 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x156 = x25 * x147;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x157 = x26 * x147;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x158 = x27 * x147;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x159 = x28 * x147;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x160 = x155 + x156;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x161 = x152 + x157;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x162 = x153 + x158;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x163 = x154 + x159;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x164 = x37 * x148;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x165 = x38 * x148;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x166 = x39 * x148;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x167 = x40 * x148;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x168 = x160 + x164;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x169 = x161 + x165;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x170 = x162 + x166;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x171 = x163 + x167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x172 = x49 * x149;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x173 = x50 * x149;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x174 = x51 * x149;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x175 = x52 * x149;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x176 = x168 + x172;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x177 = x169 + x173;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x178 = x170 + x174;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x179 = x171 + x175;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x180 = x61 * x150;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x181 = x62 * x150;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x182 = x63 * x150;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x183 = x64 * x150;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x184 = x176 + x180;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x185 = x177 + x181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x186 = x178 + x182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x187 = x179 + x183;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x188 = x145 * x185;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x189 = x138 * x186;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x190 = x130 * x187;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x191 = x190 + x189;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x192 = x191 + x188;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x193 = x192 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x194 = x122 * x184;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x195 = x194 + x193;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x196 = x145 * x186;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x197 = x138 * x187;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x198 = x197 + x196;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x199 = x198 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x200 = x130 * x184;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x201 = x122 * x185;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x202 = x201 + x200;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x203 = x202 + x199;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x204 = x145 * x187;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x205 = x204 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x206 = x138 * x184;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x207 = x130 * x185;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x208 = x122 * x186;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x209 = x208 + x207;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x210 = x209 + x206;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x211 = x210 + x205;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x212 = x145 * x184;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x213 = x138 * x185;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x214 = x130 * x186;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x215 = x122 * x187;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x216 = x215 + x214;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x217 = x216 + x213;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x218 = x217 + x212;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x219 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x219 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x220 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x220 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x221 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x221 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x222 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x222 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x223 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x223 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x224 = x16 * x219;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x225 = x17 * x219;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x226 = x18 * x219;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x227 = x19 * x219;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x228 = x224 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x229 = x25 * x220;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x230 = x26 * x220;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x231 = x27 * x220;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x232 = x28 * x220;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x233 = x228 + x229;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x234 = x225 + x230;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x235 = x226 + x231;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x236 = x227 + x232;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x237 = x37 * x221;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x238 = x38 * x221;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x239 = x39 * x221;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x240 = x40 * x221;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x241 = x233 + x237;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x242 = x234 + x238;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x243 = x235 + x239;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x244 = x236 + x240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x245 = x49 * x222;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x246 = x50 * x222;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x247 = x51 * x222;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x248 = x52 * x222;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x249 = x241 + x245;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x250 = x242 + x246;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x251 = x243 + x247;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x252 = x244 + x248;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x253 = x61 * x223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x254 = x62 * x223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x255 = x63 * x223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x256 = x64 * x223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x257 = x249 + x253;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x258 = x250 + x254;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x259 = x251 + x255;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x260 = x252 + x256;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x261 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x261 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x262 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x262 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x263 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x263 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x264 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x264 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x265 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x265 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x266 = x16 * x261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x267 = x17 * x261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x268 = x18 * x261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x269 = x19 * x261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x270 = x266 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x271 = x25 * x262;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x272 = x26 * x262;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x273 = x27 * x262;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x274 = x28 * x262;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x275 = x270 + x271;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x276 = x267 + x272;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x277 = x268 + x273;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x278 = x269 + x274;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x279 = x37 * x263;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x280 = x38 * x263;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x281 = x39 * x263;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x282 = x40 * x263;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x283 = x275 + x279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x284 = x276 + x280;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x285 = x277 + x281;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x286 = x278 + x282;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x287 = x49 * x264;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x288 = x50 * x264;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x289 = x51 * x264;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x290 = x52 * x264;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x291 = x283 + x287;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x292 = x284 + x288;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x293 = x285 + x289;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x294 = x286 + x290;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x295 = x61 * x265;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x296 = x62 * x265;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x297 = x63 * x265;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x298 = x64 * x265;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x299 = x291 + x295;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x300 = x292 + x296;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x301 = x293 + x297;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x302 = x294 + x298;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x303 = x260 * x300;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x304 = x259 * x301;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x305 = x258 * x302;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x306 = x305 + x304;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x307 = x306 + x303;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x308 = x307 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x309 = x257 * x299;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x310 = x309 + x308;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x311 = x260 * x301;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x312 = x259 * x302;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x313 = x312 + x311;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x314 = x313 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x315 = x258 * x299;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x316 = x257 * x300;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x317 = x316 + x315;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x318 = x317 + x314;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x319 = x260 * x302;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x320 = x319 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x321 = x259 * x299;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x322 = x258 * x300;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x323 = x257 * x301;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x324 = x323 + x322;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x325 = x324 + x321;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x326 = x325 + x320;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x327 = x260 * x299;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x328 = x259 * x300;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x329 = x258 * x301;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x330 = x257 * x302;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x331 = x330 + x329;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x332 = x331 + x328;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x333 = x332 + x327;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x334 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x334 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x335 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x335 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x336 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x336 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x337 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x337 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x338 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x338 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x339 = x16 * x334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x340 = x17 * x334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x341 = x18 * x334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x342 = x19 * x334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x343 = x339 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x344 = x25 * x335;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x345 = x26 * x335;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x346 = x27 * x335;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x347 = x28 * x335;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x348 = x343 + x344;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x349 = x340 + x345;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x350 = x341 + x346;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x351 = x342 + x347;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x352 = x37 * x336;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x353 = x38 * x336;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x354 = x39 * x336;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x355 = x40 * x336;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x356 = x348 + x352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x357 = x349 + x353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x358 = x350 + x354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x359 = x351 + x355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x360 = x49 * x337;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x361 = x50 * x337;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x362 = x51 * x337;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x363 = x52 * x337;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x364 = x356 + x360;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x365 = x357 + x361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x366 = x358 + x362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x367 = x359 + x363;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x368 = x61 * x338;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x369 = x62 * x338;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x370 = x63 * x338;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x371 = x64 * x338;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x372 = x364 + x368;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x373 = x365 + x369;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x374 = x366 + x370;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x375 = x367 + x371;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x376 = x333 * x373;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x377 = x326 * x374;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x378 = x318 * x375;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x379 = x378 + x377;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x380 = x379 + x376;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x381 = x380 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x382 = x310 * x372;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x383 = x382 + x381;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x384 = x333 * x374;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x385 = x326 * x375;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x386 = x385 + x384;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x387 = x386 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x388 = x318 * x372;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x389 = x310 * x373;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x390 = x389 + x388;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x391 = x390 + x387;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x392 = x333 * x375;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x393 = x392 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x394 = x326 * x372;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x395 = x318 * x373;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x396 = x310 * x374;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x397 = x396 + x395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x398 = x397 + x394;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x399 = x398 + x393;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x400 = x333 * x372;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x401 = x326 * x373;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x402 = x318 * x374;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x403 = x310 * x375;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x404 = x403 + x402;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x405 = x404 + x401;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x406 = x405 + x400;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x407 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x407 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x408 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x408 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x409 = args[2][37 * steps + ((cycle - 0) & mask)];
      assert(x409 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x410 = args[2][38 * steps + ((cycle - 0) & mask)];
      assert(x410 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x411 = args[2][39 * steps + ((cycle - 0) & mask)];
      assert(x411 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x412 = x16 * x407;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x413 = x17 * x407;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x414 = x18 * x407;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x415 = x19 * x407;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x416 = x412 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x417 = x25 * x408;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x418 = x26 * x408;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x419 = x27 * x408;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x420 = x28 * x408;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x421 = x416 + x417;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x422 = x413 + x418;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x423 = x414 + x419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x424 = x415 + x420;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x425 = x37 * x409;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x426 = x38 * x409;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x427 = x39 * x409;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x428 = x40 * x409;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x429 = x421 + x425;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x430 = x422 + x426;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x431 = x423 + x427;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x432 = x424 + x428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x433 = x49 * x410;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x434 = x50 * x410;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x435 = x51 * x410;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x436 = x52 * x410;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x437 = x429 + x433;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x438 = x430 + x434;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x439 = x431 + x435;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x440 = x432 + x436;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x441 = x61 * x411;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x442 = x62 * x411;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x443 = x63 * x411;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x444 = x64 * x411;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x445 = x437 + x441;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x446 = x438 + x442;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x447 = x439 + x443;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x448 = x440 + x444;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x449 = args[2][40 * steps + ((cycle - 0) & mask)];
      assert(x449 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x450 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x450 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x451 = args[2][42 * steps + ((cycle - 0) & mask)];
      assert(x451 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x452 = args[2][43 * steps + ((cycle - 0) & mask)];
      assert(x452 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x453 = args[2][44 * steps + ((cycle - 0) & mask)];
      assert(x453 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x454 = x16 * x449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x455 = x17 * x449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x456 = x18 * x449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x457 = x19 * x449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x458 = x454 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x459 = x25 * x450;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x460 = x26 * x450;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x461 = x27 * x450;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x462 = x28 * x450;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x463 = x458 + x459;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x464 = x455 + x460;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x465 = x456 + x461;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x466 = x457 + x462;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x467 = x37 * x451;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x468 = x38 * x451;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x469 = x39 * x451;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x470 = x40 * x451;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x471 = x463 + x467;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x472 = x464 + x468;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x473 = x465 + x469;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x474 = x466 + x470;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x475 = x49 * x452;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x476 = x50 * x452;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x477 = x51 * x452;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x478 = x52 * x452;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x479 = x471 + x475;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x480 = x472 + x476;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x481 = x473 + x477;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x482 = x474 + x478;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x483 = x61 * x453;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x484 = x62 * x453;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x485 = x63 * x453;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x486 = x64 * x453;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x487 = x479 + x483;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x488 = x480 + x484;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x489 = x481 + x485;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x490 = x482 + x486;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x491 = x448 * x488;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x492 = x447 * x489;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x493 = x446 * x490;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x494 = x493 + x492;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x495 = x494 + x491;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x496 = x495 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x497 = x445 * x487;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x498 = x497 + x496;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x499 = x448 * x489;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x500 = x447 * x490;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x501 = x500 + x499;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x502 = x501 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x503 = x446 * x487;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x504 = x445 * x488;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x505 = x504 + x503;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x506 = x505 + x502;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x507 = x448 * x490;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x508 = x507 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x509 = x447 * x487;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x510 = x446 * x488;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x511 = x445 * x489;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x512 = x511 + x510;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x513 = x512 + x509;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x514 = x513 + x508;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x515 = x448 * x487;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x516 = x447 * x488;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x517 = x446 * x489;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x518 = x445 * x490;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x519 = x518 + x517;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x520 = x519 + x516;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x521 = x520 + x515;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x522 = args[2][45 * steps + ((cycle - 0) & mask)];
      assert(x522 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x523 = args[2][46 * steps + ((cycle - 0) & mask)];
      assert(x523 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x524 = args[2][47 * steps + ((cycle - 0) & mask)];
      assert(x524 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x525 = args[2][48 * steps + ((cycle - 0) & mask)];
      assert(x525 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x526 = args[2][49 * steps + ((cycle - 0) & mask)];
      assert(x526 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x527 = x16 * x522;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x528 = x17 * x522;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x529 = x18 * x522;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x530 = x19 * x522;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x531 = x527 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x532 = x25 * x523;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x533 = x26 * x523;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x534 = x27 * x523;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x535 = x28 * x523;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x536 = x531 + x532;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x537 = x528 + x533;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x538 = x529 + x534;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x539 = x530 + x535;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x540 = x37 * x524;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x541 = x38 * x524;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x542 = x39 * x524;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x543 = x40 * x524;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x544 = x536 + x540;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x545 = x537 + x541;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x546 = x538 + x542;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x547 = x539 + x543;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x548 = x49 * x525;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x549 = x50 * x525;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x550 = x51 * x525;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x551 = x52 * x525;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x552 = x544 + x548;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x553 = x545 + x549;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x554 = x546 + x550;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x555 = x547 + x551;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x556 = x61 * x526;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x557 = x62 * x526;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x558 = x63 * x526;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x559 = x64 * x526;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x560 = x552 + x556;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x561 = x553 + x557;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x562 = x554 + x558;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x563 = x555 + x559;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x564 = x521 * x561;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x565 = x514 * x562;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x566 = x506 * x563;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x567 = x566 + x565;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x568 = x567 + x564;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x569 = x568 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x570 = x498 * x560;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x571 = x570 + x569;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x572 = x521 * x562;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x573 = x514 * x563;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x574 = x573 + x572;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x575 = x574 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x576 = x506 * x560;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x577 = x498 * x561;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x578 = x577 + x576;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x579 = x578 + x575;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x580 = x521 * x563;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x581 = x580 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x582 = x514 * x560;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x583 = x506 * x561;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x584 = x498 * x562;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x585 = x584 + x583;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x586 = x585 + x582;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x587 = x586 + x581;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x588 = x521 * x560;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x589 = x514 * x561;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x590 = x506 * x562;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x591 = x498 * x563;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x592 = x591 + x590;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x593 = x592 + x589;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x594 = x593 + x588;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x595 = args[2][50 * steps + ((cycle - 0) & mask)];
      assert(x595 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x596 = args[2][51 * steps + ((cycle - 0) & mask)];
      assert(x596 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x597 = args[2][52 * steps + ((cycle - 0) & mask)];
      assert(x597 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x598 = args[2][53 * steps + ((cycle - 0) & mask)];
      assert(x598 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x599 = args[2][54 * steps + ((cycle - 0) & mask)];
      assert(x599 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x600 = x16 * x595;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x601 = x17 * x595;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x602 = x18 * x595;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x603 = x19 * x595;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x604 = x600 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x605 = x25 * x596;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x606 = x26 * x596;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x607 = x27 * x596;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x608 = x28 * x596;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x609 = x604 + x605;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x610 = x601 + x606;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x611 = x602 + x607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x612 = x603 + x608;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x613 = x37 * x597;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x614 = x38 * x597;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x615 = x39 * x597;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x616 = x40 * x597;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x617 = x609 + x613;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x618 = x610 + x614;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x619 = x611 + x615;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x620 = x612 + x616;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x621 = x49 * x598;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x622 = x50 * x598;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x623 = x51 * x598;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x624 = x52 * x598;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x625 = x617 + x621;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x626 = x618 + x622;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x627 = x619 + x623;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x628 = x620 + x624;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x629 = x61 * x599;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x630 = x62 * x599;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x631 = x63 * x599;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x632 = x64 * x599;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x633 = x625 + x629;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x634 = x626 + x630;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x635 = x627 + x631;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x636 = x628 + x632;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x637 = args[2][55 * steps + ((cycle - 0) & mask)];
      assert(x637 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x638 = args[2][56 * steps + ((cycle - 0) & mask)];
      assert(x638 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x639 = args[2][57 * steps + ((cycle - 0) & mask)];
      assert(x639 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x640 = args[2][58 * steps + ((cycle - 0) & mask)];
      assert(x640 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x641 = args[2][59 * steps + ((cycle - 0) & mask)];
      assert(x641 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x642 = x16 * x637;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x643 = x17 * x637;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x644 = x18 * x637;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x645 = x19 * x637;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x646 = x642 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x647 = x25 * x638;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x648 = x26 * x638;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x649 = x27 * x638;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x650 = x28 * x638;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x651 = x646 + x647;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x652 = x643 + x648;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x653 = x644 + x649;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x654 = x645 + x650;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x655 = x37 * x639;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x656 = x38 * x639;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x657 = x39 * x639;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x658 = x40 * x639;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x659 = x651 + x655;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x660 = x652 + x656;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x661 = x653 + x657;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x662 = x654 + x658;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x663 = x49 * x640;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x664 = x50 * x640;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x665 = x51 * x640;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x666 = x52 * x640;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x667 = x659 + x663;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x668 = x660 + x664;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x669 = x661 + x665;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x670 = x662 + x666;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x671 = x61 * x641;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x672 = x62 * x641;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x673 = x63 * x641;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x674 = x64 * x641;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x675 = x667 + x671;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x676 = x668 + x672;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x677 = x669 + x673;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x678 = x670 + x674;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x679 = x636 * x676;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x680 = x635 * x677;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x681 = x634 * x678;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x682 = x681 + x680;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x683 = x682 + x679;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x684 = x683 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x685 = x633 * x675;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x686 = x685 + x684;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x687 = x636 * x677;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x688 = x635 * x678;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x689 = x688 + x687;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x690 = x689 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x691 = x634 * x675;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x692 = x633 * x676;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x693 = x692 + x691;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x694 = x693 + x690;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x695 = x636 * x678;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x696 = x695 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x697 = x635 * x675;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x698 = x634 * x676;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x699 = x633 * x677;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x700 = x699 + x698;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x701 = x700 + x697;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x702 = x701 + x696;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x703 = x636 * x675;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x704 = x635 * x676;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x705 = x634 * x677;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x706 = x633 * x678;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x707 = x706 + x705;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x708 = x707 + x704;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x709 = x708 + x703;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x710 = args[2][60 * steps + ((cycle - 0) & mask)];
      assert(x710 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x711 = args[2][61 * steps + ((cycle - 0) & mask)];
      assert(x711 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x712 = args[2][62 * steps + ((cycle - 0) & mask)];
      assert(x712 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x713 = args[2][63 * steps + ((cycle - 0) & mask)];
      assert(x713 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x714 = args[2][64 * steps + ((cycle - 0) & mask)];
      assert(x714 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x715 = x16 * x710;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x716 = x17 * x710;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x717 = x18 * x710;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x718 = x19 * x710;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x719 = x715 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x720 = x25 * x711;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x721 = x26 * x711;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x722 = x27 * x711;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x723 = x28 * x711;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x724 = x719 + x720;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x725 = x716 + x721;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x726 = x717 + x722;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x727 = x718 + x723;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x728 = x37 * x712;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x729 = x38 * x712;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x730 = x39 * x712;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x731 = x40 * x712;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x732 = x724 + x728;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x733 = x725 + x729;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x734 = x726 + x730;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x735 = x727 + x731;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x736 = x49 * x713;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x737 = x50 * x713;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x738 = x51 * x713;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x739 = x52 * x713;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x740 = x732 + x736;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x741 = x733 + x737;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x742 = x734 + x738;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x743 = x735 + x739;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x744 = x61 * x714;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x745 = x62 * x714;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x746 = x63 * x714;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x747 = x64 * x714;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x748 = x740 + x744;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x749 = x741 + x745;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x750 = x742 + x746;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x751 = x743 + x747;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x752 = x709 * x749;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x753 = x702 * x750;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x754 = x694 * x751;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x755 = x754 + x753;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x756 = x755 + x752;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x757 = x756 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x758 = x686 * x748;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x759 = x758 + x757;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x760 = x709 * x750;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x761 = x702 * x751;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x762 = x761 + x760;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x763 = x762 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x764 = x694 * x748;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x765 = x686 * x749;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x766 = x765 + x764;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x767 = x766 + x763;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x768 = x709 * x751;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x769 = x768 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x770 = x702 * x748;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x771 = x694 * x749;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x772 = x686 * x750;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x773 = x772 + x771;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x774 = x773 + x770;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x775 = x774 + x769;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x776 = x709 * x748;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x777 = x702 * x749;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x778 = x694 * x750;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x779 = x686 * x751;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x780 = x779 + x778;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x781 = x780 + x777;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x782 = x781 + x776;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x783 = args[2][65 * steps + ((cycle - 0) & mask)];
      assert(x783 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x784 = args[2][66 * steps + ((cycle - 0) & mask)];
      assert(x784 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x785 = args[2][67 * steps + ((cycle - 0) & mask)];
      assert(x785 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x786 = args[2][68 * steps + ((cycle - 0) & mask)];
      assert(x786 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x787 = args[2][69 * steps + ((cycle - 0) & mask)];
      assert(x787 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x788 = x16 * x783;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x789 = x17 * x783;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x790 = x18 * x783;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x791 = x19 * x783;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x792 = x788 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x793 = x25 * x784;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x794 = x26 * x784;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x795 = x27 * x784;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x796 = x28 * x784;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x797 = x792 + x793;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x798 = x789 + x794;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x799 = x790 + x795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x800 = x791 + x796;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x801 = x37 * x785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x802 = x38 * x785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x803 = x39 * x785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x804 = x40 * x785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x805 = x797 + x801;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x806 = x798 + x802;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x807 = x799 + x803;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x808 = x800 + x804;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x809 = x49 * x786;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x810 = x50 * x786;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x811 = x51 * x786;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x812 = x52 * x786;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x813 = x805 + x809;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x814 = x806 + x810;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x815 = x807 + x811;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x816 = x808 + x812;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x817 = x61 * x787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x818 = x62 * x787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x819 = x63 * x787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x820 = x64 * x787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x821 = x813 + x817;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x822 = x814 + x818;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x823 = x815 + x819;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x824 = x816 + x820;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x825 = args[2][70 * steps + ((cycle - 0) & mask)];
      assert(x825 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x826 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x826 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x827 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x827 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x828 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x828 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x829 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x829 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x830 = x16 * x825;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x831 = x17 * x825;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x832 = x18 * x825;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x833 = x19 * x825;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x834 = x830 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x835 = x25 * x826;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x836 = x26 * x826;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x837 = x27 * x826;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x838 = x28 * x826;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x839 = x834 + x835;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x840 = x831 + x836;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x841 = x832 + x837;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x842 = x833 + x838;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x843 = x37 * x827;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x844 = x38 * x827;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x845 = x39 * x827;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x846 = x40 * x827;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x847 = x839 + x843;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x848 = x840 + x844;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x849 = x841 + x845;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x850 = x842 + x846;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x851 = x49 * x828;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x852 = x50 * x828;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x853 = x51 * x828;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x854 = x52 * x828;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x855 = x847 + x851;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x856 = x848 + x852;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x857 = x849 + x853;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x858 = x850 + x854;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x859 = x61 * x829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x860 = x62 * x829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x861 = x63 * x829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x862 = x64 * x829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x863 = x855 + x859;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x864 = x856 + x860;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x865 = x857 + x861;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x866 = x858 + x862;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x867 = x824 * x864;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x868 = x823 * x865;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x869 = x822 * x866;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x870 = x869 + x868;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x871 = x870 + x867;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x872 = x871 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x873 = x821 * x863;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x874 = x873 + x872;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x875 = x824 * x865;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x876 = x823 * x866;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x877 = x876 + x875;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x878 = x877 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x879 = x822 * x863;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x880 = x821 * x864;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x881 = x880 + x879;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x882 = x881 + x878;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x883 = x824 * x866;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x884 = x883 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x885 = x823 * x863;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x886 = x822 * x864;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x887 = x821 * x865;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x888 = x887 + x886;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x889 = x888 + x885;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x890 = x889 + x884;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x891 = x824 * x863;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x892 = x823 * x864;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x893 = x822 * x865;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x894 = x821 * x866;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x895 = x894 + x893;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x896 = x895 + x892;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x897 = x896 + x891;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x898 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x898 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x899 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x899 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x900 = args[2][77 * steps + ((cycle - 0) & mask)];
      assert(x900 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x901 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x901 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x902 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x902 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x903 = x16 * x898;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x904 = x17 * x898;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x905 = x18 * x898;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x906 = x19 * x898;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x907 = x903 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x908 = x25 * x899;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x909 = x26 * x899;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x910 = x27 * x899;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x911 = x28 * x899;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x912 = x907 + x908;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x913 = x904 + x909;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x914 = x905 + x910;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x915 = x906 + x911;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x916 = x37 * x900;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x917 = x38 * x900;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x918 = x39 * x900;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x919 = x40 * x900;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x920 = x912 + x916;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x921 = x913 + x917;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x922 = x914 + x918;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x923 = x915 + x919;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x924 = x49 * x901;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x925 = x50 * x901;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x926 = x51 * x901;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x927 = x52 * x901;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x928 = x920 + x924;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x929 = x921 + x925;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x930 = x922 + x926;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x931 = x923 + x927;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x932 = x61 * x902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x933 = x62 * x902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x934 = x63 * x902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x935 = x64 * x902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x936 = x928 + x932;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x937 = x929 + x933;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x938 = x930 + x934;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x939 = x931 + x935;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x940 = x897 * x937;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x941 = x890 * x938;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x942 = x882 * x939;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x943 = x942 + x941;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x944 = x943 + x940;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x945 = x944 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x946 = x874 * x936;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x947 = x946 + x945;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x948 = x897 * x938;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x949 = x890 * x939;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x950 = x949 + x948;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x951 = x950 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x952 = x882 * x936;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x953 = x874 * x937;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x954 = x953 + x952;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x955 = x954 + x951;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x956 = x897 * x939;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x957 = x956 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x958 = x890 * x936;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x959 = x882 * x937;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x960 = x874 * x938;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x961 = x960 + x959;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x962 = x961 + x958;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x963 = x962 + x957;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x964 = x897 * x936;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x965 = x890 * x937;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x966 = x882 * x938;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x967 = x874 * x939;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x968 = x967 + x966;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x969 = x968 + x965;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x970 = x969 + x964;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x971 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x971 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x972 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x972 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x973 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x973 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x974 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x974 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x975 = args[2][84 * steps + ((cycle - 0) & mask)];
      assert(x975 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x976 = x16 * x971;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x977 = x17 * x971;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x978 = x18 * x971;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x979 = x19 * x971;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x980 = x976 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x981 = x25 * x972;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x982 = x26 * x972;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x983 = x27 * x972;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x984 = x28 * x972;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x985 = x980 + x981;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x986 = x977 + x982;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x987 = x978 + x983;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x988 = x979 + x984;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x989 = x37 * x973;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x990 = x38 * x973;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x991 = x39 * x973;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x992 = x40 * x973;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x993 = x985 + x989;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x994 = x986 + x990;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x995 = x987 + x991;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x996 = x988 + x992;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x997 = x49 * x974;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x998 = x50 * x974;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x999 = x51 * x974;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1000 = x52 * x974;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1001 = x993 + x997;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1002 = x994 + x998;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1003 = x995 + x999;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1004 = x996 + x1000;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1005 = x61 * x975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1006 = x62 * x975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1007 = x63 * x975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1008 = x64 * x975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1009 = x1001 + x1005;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1010 = x1002 + x1006;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1011 = x1003 + x1007;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1012 = x1004 + x1008;
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x1013 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x1013 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1014 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x1014 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1015 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x1015 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1016 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x1016 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1017 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x1017 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1018 = x16 * x1013;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1019 = x17 * x1013;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1020 = x18 * x1013;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1021 = x19 * x1013;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1022 = x1018 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1023 = x25 * x1014;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1024 = x26 * x1014;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1025 = x27 * x1014;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1026 = x28 * x1014;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1027 = x1022 + x1023;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1028 = x1019 + x1024;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1029 = x1020 + x1025;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1030 = x1021 + x1026;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1031 = x37 * x1015;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1032 = x38 * x1015;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1033 = x39 * x1015;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1034 = x40 * x1015;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1035 = x1027 + x1031;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1036 = x1028 + x1032;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1037 = x1029 + x1033;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1038 = x1030 + x1034;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1039 = x49 * x1016;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1040 = x50 * x1016;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1041 = x51 * x1016;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1042 = x52 * x1016;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1043 = x1035 + x1039;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1044 = x1036 + x1040;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1045 = x1037 + x1041;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1046 = x1038 + x1042;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1047 = x61 * x1017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1048 = x62 * x1017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1049 = x63 * x1017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1050 = x64 * x1017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1051 = x1043 + x1047;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1052 = x1044 + x1048;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1053 = x1045 + x1049;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1054 = x1046 + x1050;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1055 = x1012 * x1052;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1056 = x1011 * x1053;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1057 = x1010 * x1054;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1058 = x1057 + x1056;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1059 = x1058 + x1055;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1060 = x1059 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1061 = x1009 * x1051;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1062 = x1061 + x1060;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1063 = x1012 * x1053;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1064 = x1011 * x1054;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1065 = x1064 + x1063;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1066 = x1065 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1067 = x1010 * x1051;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1068 = x1009 * x1052;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1069 = x1068 + x1067;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1070 = x1069 + x1066;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1071 = x1012 * x1054;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1072 = x1071 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1073 = x1011 * x1051;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1074 = x1010 * x1052;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1075 = x1009 * x1053;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1076 = x1075 + x1074;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1077 = x1076 + x1073;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1078 = x1077 + x1072;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1079 = x1012 * x1051;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1080 = x1011 * x1052;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1081 = x1010 * x1053;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1082 = x1009 * x1054;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1083 = x1082 + x1081;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1084 = x1083 + x1080;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1085 = x1084 + x1079;
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x1086 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x1086 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1087 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x1087 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1088 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x1088 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1089 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x1089 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x1090 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x1090 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1091 = x16 * x1086;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1092 = x17 * x1086;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1093 = x18 * x1086;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1094 = x19 * x1086;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1095 = x1091 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1096 = x25 * x1087;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1097 = x26 * x1087;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1098 = x27 * x1087;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1099 = x28 * x1087;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1100 = x1095 + x1096;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1101 = x1092 + x1097;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1102 = x1093 + x1098;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1103 = x1094 + x1099;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1104 = x37 * x1088;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1105 = x38 * x1088;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1106 = x39 * x1088;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1107 = x40 * x1088;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1108 = x1100 + x1104;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1109 = x1101 + x1105;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1110 = x1102 + x1106;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1111 = x1103 + x1107;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1112 = x49 * x1089;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1113 = x50 * x1089;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1114 = x51 * x1089;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1115 = x52 * x1089;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1116 = x1108 + x1112;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1117 = x1109 + x1113;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1118 = x1110 + x1114;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1119 = x1111 + x1115;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1120 = x61 * x1090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1121 = x62 * x1090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1122 = x63 * x1090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1123 = x64 * x1090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1124 = x1116 + x1120;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1125 = x1117 + x1121;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1126 = x1118 + x1122;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x1127 = x1119 + x1123;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1128 = x1085 * x1125;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1129 = x1078 * x1126;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1130 = x1070 * x1127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1131 = x1130 + x1129;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1132 = x1131 + x1128;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1133 = x1132 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1134 = x1062 * x1124;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1135 = x1134 + x1133;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1136 = x1085 * x1126;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1137 = x1078 * x1127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1138 = x1137 + x1136;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1139 = x1138 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1140 = x1070 * x1124;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1141 = x1062 * x1125;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1142 = x1141 + x1140;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1143 = x1142 + x1139;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1144 = x1085 * x1127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1145 = x1144 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1146 = x1078 * x1124;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1147 = x1070 * x1125;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1148 = x1062 * x1126;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1149 = x1148 + x1147;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1150 = x1149 + x1146;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1151 = x1150 + x1145;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1152 = x1085 * x1124;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1153 = x1078 * x1125;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1154 = x1070 * x1126;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1155 = x1062 * x1127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1156 = x1155 + x1154;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1157 = x1156 + x1153;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x1158 = x1157 + x1152;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1159 = x775 * x775;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1160 = x782 + x782;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1161 = x767 * x1160;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1162 = x1161 - x1159;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1163 = x1162 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1164 = x759 * x759;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1165 = x1164 + x1163;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1166 = x782 * x782;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1167 = x1166 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1168 = x767 * x767;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1169 = x775 + x775;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1170 = x759 * x1169;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1171 = x1170 - x1168;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1172 = x1171 + x1167;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1173 = x1172 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1174 = x1173 * x1172;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1175 = x1165 * x1165;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1176 = x1175 + x1174;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1177 = inv(x1176);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1178 = x1165 * x1177;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1179 = x1172 * x1177;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1180 = x775 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1181 = x1180 * x1179;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1182 = x759 * x1178;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1183 = x1182 + x1181;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1184 = x782 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1185 = x1184 * x1179;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1186 = -x767;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1187 = x1186 * x1178;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1188 = x1187 - x1185;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1189 = x775 * x1178;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1190 = -x759;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1191 = x1190 * x1179;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1192 = x1191 + x1189;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1193 = x782 * x1178;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1194 = x767 * x1179;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1195 = x1194 - x1193;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1196 = x218 * x1188;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1197 = x211 * x1192;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1198 = x203 * x1195;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1199 = x1198 + x1197;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1200 = x1199 + x1196;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1201 = x1200 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1202 = x195 * x1183;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1203 = x1202 + x1201;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1204 = x218 * x1192;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1205 = x211 * x1195;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1206 = x1205 + x1204;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1207 = x1206 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1208 = x203 * x1183;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1209 = x195 * x1188;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1210 = x1209 + x1208;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1211 = x1210 + x1207;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1212 = x218 * x1195;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1213 = x1212 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1214 = x211 * x1183;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1215 = x203 * x1188;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1216 = x195 * x1192;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1217 = x1216 + x1215;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1218 = x1217 + x1214;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1219 = x1218 + x1213;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1220 = x218 * x1183;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1221 = x211 * x1188;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1222 = x203 * x1192;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1223 = x195 * x1195;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1224 = x1223 + x1222;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1225 = x1224 + x1221;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1226 = x1225 + x1220;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1227 = x963 * x963;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1228 = x970 + x970;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1229 = x955 * x1228;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1230 = x1229 - x1227;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1231 = x1230 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1232 = x947 * x947;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1233 = x1232 + x1231;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1234 = x970 * x970;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1235 = x1234 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1236 = x955 * x955;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1237 = x963 + x963;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1238 = x947 * x1237;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1239 = x1238 - x1236;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1240 = x1239 + x1235;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1241 = x1240 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1242 = x1241 * x1240;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1243 = x1233 * x1233;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1244 = x1243 + x1242;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1245 = inv(x1244);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1246 = x1233 * x1245;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1247 = x1240 * x1245;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1248 = x963 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1249 = x1248 * x1247;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1250 = x947 * x1246;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1251 = x1250 + x1249;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1252 = x970 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1253 = x1252 * x1247;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1254 = -x955;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1255 = x1254 * x1246;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1256 = x1255 - x1253;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1257 = x963 * x1246;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1258 = -x947;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1259 = x1258 * x1247;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1260 = x1259 + x1257;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1261 = x970 * x1246;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1262 = x955 * x1247;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1263 = x1262 - x1261;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1264 = x1226 * x391;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1265 = x1219 * x399;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1266 = x1211 * x406;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1267 = x1266 + x1265;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1268 = x1267 + x1264;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1269 = x1268 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1270 = x1203 * x383;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1271 = x1270 + x1269;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1272 = x1226 * x399;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1273 = x1219 * x406;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1274 = x1273 + x1272;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1275 = x1274 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1276 = x1211 * x383;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1277 = x1203 * x391;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1278 = x1277 + x1276;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1279 = x1278 + x1275;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1280 = x1226 * x406;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1281 = x1280 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1282 = x1219 * x383;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1283 = x1211 * x391;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1284 = x1203 * x399;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1285 = x1284 + x1283;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1286 = x1285 + x1282;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1287 = x1286 + x1281;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1288 = x1226 * x383;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1289 = x1219 * x391;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1290 = x1211 * x399;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1291 = x1203 * x406;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1292 = x1291 + x1290;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1293 = x1292 + x1289;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1294 = x1293 + x1288;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1295 = x1294 * x1256;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1296 = x1287 * x1260;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1297 = x1279 * x1263;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1298 = x1297 + x1296;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1299 = x1298 + x1295;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1300 = x1299 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1301 = x1271 * x1251;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1302 = x1301 + x1300;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1303 = x1294 * x1260;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1304 = x1287 * x1263;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1305 = x1304 + x1303;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1306 = x1305 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1307 = x1279 * x1251;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1308 = x1271 * x1256;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1309 = x1308 + x1307;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1310 = x1309 + x1306;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1311 = x1294 * x1263;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1312 = x1311 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1313 = x1287 * x1251;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1314 = x1279 * x1256;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1315 = x1271 * x1260;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1316 = x1315 + x1314;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1317 = x1316 + x1313;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1318 = x1317 + x1312;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1319 = x1294 * x1251;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1320 = x1287 * x1256;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1321 = x1279 * x1260;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1322 = x1271 * x1263;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1323 = x1322 + x1321;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1324 = x1323 + x1320;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1325 = x1324 + x1319;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1326 = x1151 * x1151;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1327 = x1158 + x1158;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1328 = x1143 * x1327;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1329 = x1328 - x1326;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1330 = x1329 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1331 = x1135 * x1135;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1332 = x1331 + x1330;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1333 = x1158 * x1158;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1334 = x1333 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1335 = x1143 * x1143;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1336 = x1151 + x1151;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1337 = x1135 * x1336;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1338 = x1337 - x1335;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1339 = x1338 + x1334;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1340 = x1339 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1341 = x1340 * x1339;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1342 = x1332 * x1332;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1343 = x1342 + x1341;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1344 = inv(x1343);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1345 = x1332 * x1344;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1346 = x1339 * x1344;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1347 = x1151 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1348 = x1347 * x1346;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1349 = x1135 * x1345;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1350 = x1349 + x1348;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1351 = x1158 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1352 = x1351 * x1346;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1353 = -x1143;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1354 = x1353 * x1345;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1355 = x1354 - x1352;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1356 = x1151 * x1345;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1357 = -x1135;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1358 = x1357 * x1346;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1359 = x1358 + x1356;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1360 = x1158 * x1345;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1361 = x1143 * x1346;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1362 = x1361 - x1360;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1363 = x1325 * x579;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1364 = x1318 * x587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1365 = x1310 * x594;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1366 = x1365 + x1364;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1367 = x1366 + x1363;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1368 = x1367 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1369 = x1302 * x571;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1370 = x1369 + x1368;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1371 = x1325 * x587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1372 = x1318 * x594;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1373 = x1372 + x1371;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1374 = x1373 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1375 = x1310 * x571;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1376 = x1302 * x579;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1377 = x1376 + x1375;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1378 = x1377 + x1374;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1379 = x1325 * x594;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1380 = x1379 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1381 = x1318 * x571;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1382 = x1310 * x579;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1383 = x1302 * x587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1384 = x1383 + x1382;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1385 = x1384 + x1381;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1386 = x1385 + x1380;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1387 = x1325 * x571;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1388 = x1318 * x579;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1389 = x1310 * x587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1390 = x1302 * x594;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1391 = x1390 + x1389;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1392 = x1391 + x1388;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1393 = x1392 + x1387;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1394 = x1393 * x1355;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1395 = x1386 * x1359;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1396 = x1378 * x1362;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1397 = x1396 + x1395;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1398 = x1397 + x1394;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1399 = x1398 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1400 = x1370 * x1350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1401 = x1400 + x1399;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1402 = x1393 * x1359;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1403 = x1386 * x1362;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1404 = x1403 + x1402;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1405 = x1404 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1406 = x1378 * x1350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1407 = x1370 * x1355;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1408 = x1407 + x1406;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1409 = x1408 + x1405;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1410 = x1393 * x1362;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1411 = x1410 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1412 = x1386 * x1350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1413 = x1378 * x1355;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1414 = x1370 * x1359;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1415 = x1414 + x1413;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1416 = x1415 + x1412;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1417 = x1416 + x1411;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1418 = x1393 * x1350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1419 = x1386 * x1355;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1420 = x1378 * x1359;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1421 = x1370 * x1362;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1422 = x1421 + x1420;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1423 = x1422 + x1419;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x1424 = x1423 + x1418;
      host_args.at(0) = x1401;
      host_args.at(1) = x1409;
      host_args.at(2) = x1417;
      host_args.at(3) = x1424;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x5 != 0) {
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x1425 = args[0][11 * steps + ((cycle - 0) & mask)];
    assert(x1425 != Fp::invalid());
    if (x1425 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1426 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1426 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1427 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1427 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1428 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1428 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1429 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1429 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1430 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1430 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1431 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1432 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1433 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1434 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1435 = x1431 * x1426;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1436 = x1432 * x1426;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1437 = x1433 * x1426;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1438 = x1434 * x1426;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1439 = x1435 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1440 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1441 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1442 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1443 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1444 = x1440 * x1427;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1445 = x1441 * x1427;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1446 = x1442 * x1427;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1447 = x1443 * x1427;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1448 = x1439 + x1444;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1449 = x1436 + x1445;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1450 = x1437 + x1446;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1451 = x1438 + x1447;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1452 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1453 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1454 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1455 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1456 = x1452 * x1428;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1457 = x1453 * x1428;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1458 = x1454 * x1428;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1459 = x1455 * x1428;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1460 = x1448 + x1456;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1461 = x1449 + x1457;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1462 = x1450 + x1458;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1463 = x1451 + x1459;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1464 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1465 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1466 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1467 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1468 = x1464 * x1429;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1469 = x1465 * x1429;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1470 = x1466 * x1429;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1471 = x1467 * x1429;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1472 = x1460 + x1468;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1473 = x1461 + x1469;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1474 = x1462 + x1470;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1475 = x1463 + x1471;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1476 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1477 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1478 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1479 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1480 = x1476 * x1430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1481 = x1477 * x1430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1482 = x1478 * x1430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1483 = x1479 * x1430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1484 = x1472 + x1480;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1485 = x1473 + x1481;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1486 = x1474 + x1482;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1487 = x1475 + x1483;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1488 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1488 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1489 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1489 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1490 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x1490 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1491 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x1491 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1492 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x1492 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1493 = x1431 * x1488;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1494 = x1432 * x1488;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1495 = x1433 * x1488;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1496 = x1434 * x1488;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1497 = x1493 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1498 = x1440 * x1489;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1499 = x1441 * x1489;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1500 = x1442 * x1489;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1501 = x1443 * x1489;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1502 = x1497 + x1498;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1503 = x1494 + x1499;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1504 = x1495 + x1500;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1505 = x1496 + x1501;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1506 = x1452 * x1490;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1507 = x1453 * x1490;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1508 = x1454 * x1490;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1509 = x1455 * x1490;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1510 = x1502 + x1506;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1511 = x1503 + x1507;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1512 = x1504 + x1508;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1513 = x1505 + x1509;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1514 = x1464 * x1491;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1515 = x1465 * x1491;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1516 = x1466 * x1491;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1517 = x1467 * x1491;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1518 = x1510 + x1514;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1519 = x1511 + x1515;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1520 = x1512 + x1516;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1521 = x1513 + x1517;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1522 = x1476 * x1492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1523 = x1477 * x1492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1524 = x1478 * x1492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1525 = x1479 * x1492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1526 = x1518 + x1522;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1527 = x1519 + x1523;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1528 = x1520 + x1524;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1529 = x1521 + x1525;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1530 = x1487 * x1527;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1531 = x1486 * x1528;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1532 = x1485 * x1529;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1533 = x1532 + x1531;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1534 = x1533 + x1530;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1535 = x1534 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1536 = x1484 * x1526;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1537 = x1536 + x1535;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1538 = x1487 * x1528;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1539 = x1486 * x1529;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1540 = x1539 + x1538;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1541 = x1540 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1542 = x1485 * x1526;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1543 = x1484 * x1527;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1544 = x1543 + x1542;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1545 = x1544 + x1541;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1546 = x1487 * x1529;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1547 = x1546 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1548 = x1486 * x1526;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1549 = x1485 * x1527;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1550 = x1484 * x1528;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1551 = x1550 + x1549;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1552 = x1551 + x1548;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1553 = x1552 + x1547;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1554 = x1487 * x1526;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1555 = x1486 * x1527;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1556 = x1485 * x1528;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1557 = x1484 * x1529;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1558 = x1557 + x1556;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1559 = x1558 + x1555;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1560 = x1559 + x1554;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1561 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x1561 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1562 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x1562 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1563 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x1563 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1564 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x1564 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1565 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x1565 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1566 = x1431 * x1561;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1567 = x1432 * x1561;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1568 = x1433 * x1561;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1569 = x1434 * x1561;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1570 = x1566 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1571 = x1440 * x1562;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1572 = x1441 * x1562;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1573 = x1442 * x1562;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1574 = x1443 * x1562;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1575 = x1570 + x1571;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1576 = x1567 + x1572;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1577 = x1568 + x1573;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1578 = x1569 + x1574;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1579 = x1452 * x1563;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1580 = x1453 * x1563;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1581 = x1454 * x1563;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1582 = x1455 * x1563;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1583 = x1575 + x1579;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1584 = x1576 + x1580;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1585 = x1577 + x1581;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1586 = x1578 + x1582;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1587 = x1464 * x1564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1588 = x1465 * x1564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1589 = x1466 * x1564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1590 = x1467 * x1564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1591 = x1583 + x1587;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1592 = x1584 + x1588;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1593 = x1585 + x1589;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1594 = x1586 + x1590;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1595 = x1476 * x1565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1596 = x1477 * x1565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1597 = x1478 * x1565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1598 = x1479 * x1565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1599 = x1591 + x1595;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1600 = x1592 + x1596;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1601 = x1593 + x1597;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1602 = x1594 + x1598;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1603 = args[2][26 * steps + ((cycle - 0) & mask)];
        assert(x1603 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1604 = args[2][27 * steps + ((cycle - 0) & mask)];
        assert(x1604 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1605 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x1605 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1606 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x1606 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1607 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x1607 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1608 = x1431 * x1603;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1609 = x1432 * x1603;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1610 = x1433 * x1603;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1611 = x1434 * x1603;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1612 = x1608 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1613 = x1440 * x1604;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1614 = x1441 * x1604;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1615 = x1442 * x1604;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1616 = x1443 * x1604;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1617 = x1612 + x1613;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1618 = x1609 + x1614;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1619 = x1610 + x1615;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1620 = x1611 + x1616;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1621 = x1452 * x1605;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1622 = x1453 * x1605;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1623 = x1454 * x1605;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1624 = x1455 * x1605;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1625 = x1617 + x1621;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1626 = x1618 + x1622;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1627 = x1619 + x1623;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1628 = x1620 + x1624;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1629 = x1464 * x1606;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1630 = x1465 * x1606;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1631 = x1466 * x1606;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1632 = x1467 * x1606;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1633 = x1625 + x1629;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1634 = x1626 + x1630;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1635 = x1627 + x1631;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1636 = x1628 + x1632;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1637 = x1476 * x1607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1638 = x1477 * x1607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1639 = x1478 * x1607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1640 = x1479 * x1607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1641 = x1633 + x1637;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1642 = x1634 + x1638;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1643 = x1635 + x1639;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1644 = x1636 + x1640;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1645 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x1645 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1646 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x1646 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1647 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x1647 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1648 = args[2][34 * steps + ((cycle - 0) & mask)];
        assert(x1648 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1649 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x1649 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1650 = x1431 * x1645;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1651 = x1432 * x1645;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1652 = x1433 * x1645;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1653 = x1434 * x1645;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1654 = x1650 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1655 = x1440 * x1646;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1656 = x1441 * x1646;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1657 = x1442 * x1646;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1658 = x1443 * x1646;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1659 = x1654 + x1655;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1660 = x1651 + x1656;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1661 = x1652 + x1657;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1662 = x1653 + x1658;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1663 = x1452 * x1647;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1664 = x1453 * x1647;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1665 = x1454 * x1647;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1666 = x1455 * x1647;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1667 = x1659 + x1663;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1668 = x1660 + x1664;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1669 = x1661 + x1665;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1670 = x1662 + x1666;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1671 = x1464 * x1648;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1672 = x1465 * x1648;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1673 = x1466 * x1648;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1674 = x1467 * x1648;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1675 = x1667 + x1671;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1676 = x1668 + x1672;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1677 = x1669 + x1673;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1678 = x1670 + x1674;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1679 = x1476 * x1649;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1680 = x1477 * x1649;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1681 = x1478 * x1649;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1682 = x1479 * x1649;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1683 = x1675 + x1679;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1684 = x1676 + x1680;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1685 = x1677 + x1681;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1686 = x1678 + x1682;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1687 = x1644 * x1684;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1688 = x1643 * x1685;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1689 = x1642 * x1686;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1690 = x1689 + x1688;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1691 = x1690 + x1687;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1692 = x1691 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1693 = x1641 * x1683;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1694 = x1693 + x1692;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1695 = x1644 * x1685;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1696 = x1643 * x1686;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1697 = x1696 + x1695;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1698 = x1697 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1699 = x1642 * x1683;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1700 = x1641 * x1684;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1701 = x1700 + x1699;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1702 = x1701 + x1698;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1703 = x1644 * x1686;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1704 = x1703 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1705 = x1643 * x1683;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1706 = x1642 * x1684;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1707 = x1641 * x1685;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1708 = x1707 + x1706;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1709 = x1708 + x1705;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1710 = x1709 + x1704;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1711 = x1644 * x1683;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1712 = x1643 * x1684;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1713 = x1642 * x1685;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1714 = x1641 * x1686;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1715 = x1714 + x1713;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1716 = x1715 + x1712;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x1717 = x1716 + x1711;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1718 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x1718 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1719 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x1719 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1720 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x1720 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1721 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x1721 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1722 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x1722 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1723 = x1431 * x1718;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1724 = x1432 * x1718;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1725 = x1433 * x1718;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1726 = x1434 * x1718;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1727 = x1723 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1728 = x1440 * x1719;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1729 = x1441 * x1719;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1730 = x1442 * x1719;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1731 = x1443 * x1719;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1732 = x1727 + x1728;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1733 = x1724 + x1729;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1734 = x1725 + x1730;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1735 = x1726 + x1731;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1736 = x1452 * x1720;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1737 = x1453 * x1720;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1738 = x1454 * x1720;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1739 = x1455 * x1720;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1740 = x1732 + x1736;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1741 = x1733 + x1737;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1742 = x1734 + x1738;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1743 = x1735 + x1739;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1744 = x1464 * x1721;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1745 = x1465 * x1721;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1746 = x1466 * x1721;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1747 = x1467 * x1721;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1748 = x1740 + x1744;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1749 = x1741 + x1745;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1750 = x1742 + x1746;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1751 = x1743 + x1747;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1752 = x1476 * x1722;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1753 = x1477 * x1722;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1754 = x1478 * x1722;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1755 = x1479 * x1722;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1756 = x1748 + x1752;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1757 = x1749 + x1753;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1758 = x1750 + x1754;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1759 = x1751 + x1755;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1760 = x1710 * x1710;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1761 = x1717 + x1717;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1762 = x1702 * x1761;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1763 = x1762 - x1760;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1764 = x1763 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1765 = x1694 * x1694;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1766 = x1765 + x1764;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1767 = x1717 * x1717;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1768 = x1767 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1769 = x1702 * x1702;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1770 = x1710 + x1710;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1771 = x1694 * x1770;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1772 = x1771 - x1769;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1773 = x1772 + x1768;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1774 = x1773 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1775 = x1774 * x1773;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1776 = x1766 * x1766;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1777 = x1776 + x1775;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1778 = inv(x1777);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1779 = x1766 * x1778;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1780 = x1773 * x1778;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1781 = x1710 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1782 = x1781 * x1780;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1783 = x1694 * x1779;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1784 = x1783 + x1782;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1785 = x1717 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1786 = x1785 * x1780;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1787 = -x1702;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1788 = x1787 * x1779;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1789 = x1788 - x1786;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1790 = x1710 * x1779;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1791 = -x1694;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1792 = x1791 * x1780;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1793 = x1792 + x1790;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1794 = x1717 * x1779;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1795 = x1702 * x1780;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1796 = x1795 - x1794;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1797 = x1560 * x1789;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1798 = x1553 * x1793;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1799 = x1545 * x1796;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1800 = x1799 + x1798;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1801 = x1800 + x1797;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1802 = x1801 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1803 = x1537 * x1784;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1804 = x1803 + x1802;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1805 = x1560 * x1793;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1806 = x1553 * x1796;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1807 = x1806 + x1805;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1808 = x1807 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1809 = x1545 * x1784;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1810 = x1537 * x1789;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1811 = x1810 + x1809;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1812 = x1811 + x1808;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1813 = x1560 * x1796;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1814 = x1813 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1815 = x1553 * x1784;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1816 = x1545 * x1789;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1817 = x1537 * x1793;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1818 = x1817 + x1816;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1819 = x1818 + x1815;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1820 = x1819 + x1814;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1821 = x1560 * x1784;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1822 = x1553 * x1789;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1823 = x1545 * x1793;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1824 = x1537 * x1796;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1825 = x1824 + x1823;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1826 = x1825 + x1822;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1827 = x1826 + x1821;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1828 = x1758 * x1758;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1829 = x1759 + x1759;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1830 = x1757 * x1829;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1831 = x1830 - x1828;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1832 = x1831 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1833 = x1756 * x1756;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1834 = x1833 + x1832;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1835 = x1759 * x1759;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1836 = x1835 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1837 = x1757 * x1757;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1838 = x1758 + x1758;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1839 = x1756 * x1838;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1840 = x1839 - x1837;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1841 = x1840 + x1836;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1842 = x1841 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1843 = x1842 * x1841;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1844 = x1834 * x1834;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1845 = x1844 + x1843;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1846 = inv(x1845);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1847 = x1834 * x1846;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1848 = x1841 * x1846;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1849 = x1758 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1850 = x1849 * x1848;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1851 = x1756 * x1847;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1852 = x1851 + x1850;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1853 = x1759 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1854 = x1853 * x1848;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1855 = -x1757;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1856 = x1855 * x1847;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1857 = x1856 - x1854;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1858 = x1758 * x1847;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1859 = -x1756;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1860 = x1859 * x1848;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1861 = x1860 + x1858;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1862 = x1759 * x1847;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1863 = x1757 * x1848;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1864 = x1863 - x1862;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1865 = x1827 * x1600;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1866 = x1820 * x1601;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1867 = x1812 * x1602;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1868 = x1867 + x1866;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1869 = x1868 + x1865;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1870 = x1869 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1871 = x1804 * x1599;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1872 = x1871 + x1870;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1873 = x1827 * x1601;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1874 = x1820 * x1602;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1875 = x1874 + x1873;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1876 = x1875 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1877 = x1812 * x1599;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1878 = x1804 * x1600;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1879 = x1878 + x1877;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1880 = x1879 + x1876;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1881 = x1827 * x1602;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1882 = x1881 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1883 = x1820 * x1599;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1884 = x1812 * x1600;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1885 = x1804 * x1601;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1886 = x1885 + x1884;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1887 = x1886 + x1883;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1888 = x1887 + x1882;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1889 = x1827 * x1599;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1890 = x1820 * x1600;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1891 = x1812 * x1601;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1892 = x1804 * x1602;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1893 = x1892 + x1891;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1894 = x1893 + x1890;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1895 = x1894 + x1889;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1896 = x1895 * x1857;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1897 = x1888 * x1861;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1898 = x1880 * x1864;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1899 = x1898 + x1897;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1900 = x1899 + x1896;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1901 = x1900 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1902 = x1872 * x1852;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1903 = x1902 + x1901;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1904 = x1895 * x1861;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1905 = x1888 * x1864;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1906 = x1905 + x1904;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1907 = x1906 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1908 = x1880 * x1852;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1909 = x1872 * x1857;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1910 = x1909 + x1908;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1911 = x1910 + x1907;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1912 = x1895 * x1864;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1913 = x1912 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1914 = x1888 * x1852;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1915 = x1880 * x1857;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1916 = x1872 * x1861;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1917 = x1916 + x1915;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1918 = x1917 + x1914;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1919 = x1918 + x1913;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1920 = x1895 * x1852;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1921 = x1888 * x1857;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1922 = x1880 * x1861;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1923 = x1872 * x1864;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1924 = x1923 + x1922;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1925 = x1924 + x1921;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x1926 = x1925 + x1920;
        host_args.at(0) = x1903;
        host_args.at(1) = x1911;
        host_args.at(2) = x1919;
        host_args.at(3) = x1926;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x1927 = args[0][12 * steps + ((cycle - 0) & mask)];
    assert(x1927 != Fp::invalid());
    if (x1927 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1928 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x1928 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1929 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x1929 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1930 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x1930 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1931 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x1931 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1932 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x1932 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1933 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1934 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1935 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1936 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1937 = x1933 * x1928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1938 = x1934 * x1928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1939 = x1935 * x1928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1940 = x1936 * x1928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1941 = x1937 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1942 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1943 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1944 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1945 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1946 = x1942 * x1929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1947 = x1943 * x1929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1948 = x1944 * x1929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1949 = x1945 * x1929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1950 = x1941 + x1946;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1951 = x1938 + x1947;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1952 = x1939 + x1948;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1953 = x1940 + x1949;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1954 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1955 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1956 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1957 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1958 = x1954 * x1930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1959 = x1955 * x1930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1960 = x1956 * x1930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1961 = x1957 * x1930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1962 = x1950 + x1958;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1963 = x1951 + x1959;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1964 = x1952 + x1960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1965 = x1953 + x1961;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1966 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1967 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1968 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1969 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1970 = x1966 * x1931;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1971 = x1967 * x1931;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1972 = x1968 * x1931;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1973 = x1969 * x1931;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1974 = x1962 + x1970;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1975 = x1963 + x1971;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1976 = x1964 + x1972;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1977 = x1965 + x1973;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1978 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1979 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1980 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x1981 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1982 = x1978 * x1932;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1983 = x1979 * x1932;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1984 = x1980 * x1932;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1985 = x1981 * x1932;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1986 = x1974 + x1982;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1987 = x1975 + x1983;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1988 = x1976 + x1984;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1989 = x1977 + x1985;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x1990 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x1990 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1991 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x1991 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1992 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x1992 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1993 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x1993 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x1994 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x1994 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1995 = x1933 * x1990;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1996 = x1934 * x1990;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1997 = x1935 * x1990;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1998 = x1936 * x1990;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x1999 = x1995 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2000 = x1942 * x1991;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2001 = x1943 * x1991;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2002 = x1944 * x1991;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2003 = x1945 * x1991;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2004 = x1999 + x2000;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2005 = x1996 + x2001;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2006 = x1997 + x2002;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2007 = x1998 + x2003;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2008 = x1954 * x1992;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2009 = x1955 * x1992;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2010 = x1956 * x1992;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2011 = x1957 * x1992;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2012 = x2004 + x2008;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2013 = x2005 + x2009;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2014 = x2006 + x2010;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2015 = x2007 + x2011;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2016 = x1966 * x1993;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2017 = x1967 * x1993;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2018 = x1968 * x1993;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2019 = x1969 * x1993;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2020 = x2012 + x2016;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2021 = x2013 + x2017;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2022 = x2014 + x2018;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2023 = x2015 + x2019;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2024 = x1978 * x1994;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2025 = x1979 * x1994;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2026 = x1980 * x1994;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2027 = x1981 * x1994;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2028 = x2020 + x2024;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2029 = x2021 + x2025;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2030 = x2022 + x2026;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2031 = x2023 + x2027;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2032 = x1989 * x2029;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2033 = x1988 * x2030;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2034 = x1987 * x2031;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2035 = x2034 + x2033;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2036 = x2035 + x2032;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2037 = x2036 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2038 = x1986 * x2028;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2039 = x2038 + x2037;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2040 = x1989 * x2030;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2041 = x1988 * x2031;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2042 = x2041 + x2040;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2043 = x2042 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2044 = x1987 * x2028;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2045 = x1986 * x2029;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2046 = x2045 + x2044;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2047 = x2046 + x2043;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2048 = x1989 * x2031;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2049 = x2048 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2050 = x1988 * x2028;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2051 = x1987 * x2029;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2052 = x1986 * x2030;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2053 = x2052 + x2051;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2054 = x2053 + x2050;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2055 = x2054 + x2049;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2056 = x1989 * x2028;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2057 = x1988 * x2029;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2058 = x1987 * x2030;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2059 = x1986 * x2031;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2060 = x2059 + x2058;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2061 = x2060 + x2057;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2062 = x2061 + x2056;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2063 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x2063 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2064 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x2064 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2065 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x2065 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2066 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x2066 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2067 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x2067 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2068 = x1933 * x2063;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2069 = x1934 * x2063;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2070 = x1935 * x2063;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2071 = x1936 * x2063;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2072 = x2068 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2073 = x1942 * x2064;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2074 = x1943 * x2064;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2075 = x1944 * x2064;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2076 = x1945 * x2064;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2077 = x2072 + x2073;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2078 = x2069 + x2074;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2079 = x2070 + x2075;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2080 = x2071 + x2076;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2081 = x1954 * x2065;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2082 = x1955 * x2065;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2083 = x1956 * x2065;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2084 = x1957 * x2065;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2085 = x2077 + x2081;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2086 = x2078 + x2082;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2087 = x2079 + x2083;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2088 = x2080 + x2084;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2089 = x1966 * x2066;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2090 = x1967 * x2066;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2091 = x1968 * x2066;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2092 = x1969 * x2066;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2093 = x2085 + x2089;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2094 = x2086 + x2090;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2095 = x2087 + x2091;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2096 = x2088 + x2092;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2097 = x1978 * x2067;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2098 = x1979 * x2067;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2099 = x1980 * x2067;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2100 = x1981 * x2067;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2101 = x2093 + x2097;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2102 = x2094 + x2098;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2103 = x2095 + x2099;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2104 = x2096 + x2100;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2105 = args[2][26 * steps + ((cycle - 0) & mask)];
        assert(x2105 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2106 = args[2][27 * steps + ((cycle - 0) & mask)];
        assert(x2106 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2107 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x2107 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2108 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x2108 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2109 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x2109 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2110 = x1933 * x2105;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2111 = x1934 * x2105;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2112 = x1935 * x2105;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2113 = x1936 * x2105;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2114 = x2110 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2115 = x1942 * x2106;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2116 = x1943 * x2106;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2117 = x1944 * x2106;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2118 = x1945 * x2106;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2119 = x2114 + x2115;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2120 = x2111 + x2116;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2121 = x2112 + x2117;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2122 = x2113 + x2118;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2123 = x1954 * x2107;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2124 = x1955 * x2107;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2125 = x1956 * x2107;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2126 = x1957 * x2107;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2127 = x2119 + x2123;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2128 = x2120 + x2124;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2129 = x2121 + x2125;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2130 = x2122 + x2126;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2131 = x1966 * x2108;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2132 = x1967 * x2108;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2133 = x1968 * x2108;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2134 = x1969 * x2108;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2135 = x2127 + x2131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2136 = x2128 + x2132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2137 = x2129 + x2133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2138 = x2130 + x2134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2139 = x1978 * x2109;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2140 = x1979 * x2109;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2141 = x1980 * x2109;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2142 = x1981 * x2109;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2143 = x2135 + x2139;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2144 = x2136 + x2140;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2145 = x2137 + x2141;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2146 = x2138 + x2142;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2147 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x2147 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2148 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x2148 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2149 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x2149 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2150 = args[2][34 * steps + ((cycle - 0) & mask)];
        assert(x2150 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2151 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x2151 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2152 = x1933 * x2147;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2153 = x1934 * x2147;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2154 = x1935 * x2147;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2155 = x1936 * x2147;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2156 = x2152 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2157 = x1942 * x2148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2158 = x1943 * x2148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2159 = x1944 * x2148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2160 = x1945 * x2148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2161 = x2156 + x2157;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2162 = x2153 + x2158;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2163 = x2154 + x2159;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2164 = x2155 + x2160;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2165 = x1954 * x2149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2166 = x1955 * x2149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2167 = x1956 * x2149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2168 = x1957 * x2149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2169 = x2161 + x2165;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2170 = x2162 + x2166;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2171 = x2163 + x2167;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2172 = x2164 + x2168;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2173 = x1966 * x2150;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2174 = x1967 * x2150;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2175 = x1968 * x2150;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2176 = x1969 * x2150;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2177 = x2169 + x2173;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2178 = x2170 + x2174;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2179 = x2171 + x2175;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2180 = x2172 + x2176;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2181 = x1978 * x2151;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2182 = x1979 * x2151;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2183 = x1980 * x2151;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2184 = x1981 * x2151;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2185 = x2177 + x2181;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2186 = x2178 + x2182;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2187 = x2179 + x2183;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2188 = x2180 + x2184;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2189 = x2146 * x2186;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2190 = x2145 * x2187;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2191 = x2144 * x2188;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2192 = x2191 + x2190;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2193 = x2192 + x2189;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2194 = x2193 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2195 = x2143 * x2185;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2196 = x2195 + x2194;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2197 = x2146 * x2187;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2198 = x2145 * x2188;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2199 = x2198 + x2197;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2200 = x2199 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2201 = x2144 * x2185;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2202 = x2143 * x2186;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2203 = x2202 + x2201;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2204 = x2203 + x2200;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2205 = x2146 * x2188;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2206 = x2205 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2207 = x2145 * x2185;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2208 = x2144 * x2186;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2209 = x2143 * x2187;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2210 = x2209 + x2208;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2211 = x2210 + x2207;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2212 = x2211 + x2206;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2213 = x2146 * x2185;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2214 = x2145 * x2186;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2215 = x2144 * x2187;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2216 = x2143 * x2188;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2217 = x2216 + x2215;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2218 = x2217 + x2214;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2219 = x2218 + x2213;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2220 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x2220 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2221 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x2221 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2222 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x2222 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2223 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2223 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2224 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2224 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2225 = x1933 * x2220;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2226 = x1934 * x2220;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2227 = x1935 * x2220;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2228 = x1936 * x2220;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2229 = x2225 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2230 = x1942 * x2221;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2231 = x1943 * x2221;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2232 = x1944 * x2221;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2233 = x1945 * x2221;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2234 = x2229 + x2230;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2235 = x2226 + x2231;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2236 = x2227 + x2232;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2237 = x2228 + x2233;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2238 = x1954 * x2222;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2239 = x1955 * x2222;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2240 = x1956 * x2222;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2241 = x1957 * x2222;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2242 = x2234 + x2238;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2243 = x2235 + x2239;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2244 = x2236 + x2240;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2245 = x2237 + x2241;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2246 = x1966 * x2223;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2247 = x1967 * x2223;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2248 = x1968 * x2223;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2249 = x1969 * x2223;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2250 = x2242 + x2246;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2251 = x2243 + x2247;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2252 = x2244 + x2248;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2253 = x2245 + x2249;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2254 = x1978 * x2224;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2255 = x1979 * x2224;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2256 = x1980 * x2224;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2257 = x1981 * x2224;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2258 = x2250 + x2254;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2259 = x2251 + x2255;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2260 = x2252 + x2256;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2261 = x2253 + x2257;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2262 = x2212 * x2212;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2263 = x2219 + x2219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2264 = x2204 * x2263;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2265 = x2264 - x2262;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2266 = x2265 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2267 = x2196 * x2196;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2268 = x2267 + x2266;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2269 = x2219 * x2219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2270 = x2269 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2271 = x2204 * x2204;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2272 = x2212 + x2212;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2273 = x2196 * x2272;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2274 = x2273 - x2271;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2275 = x2274 + x2270;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2276 = x2275 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2277 = x2276 * x2275;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2278 = x2268 * x2268;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2279 = x2278 + x2277;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2280 = inv(x2279);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2281 = x2268 * x2280;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2282 = x2275 * x2280;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2283 = x2212 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2284 = x2283 * x2282;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2285 = x2196 * x2281;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2286 = x2285 + x2284;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2287 = x2219 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2288 = x2287 * x2282;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2289 = -x2204;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2290 = x2289 * x2281;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2291 = x2290 - x2288;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2292 = x2212 * x2281;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2293 = -x2196;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2294 = x2293 * x2282;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2295 = x2294 + x2292;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2296 = x2219 * x2281;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2297 = x2204 * x2282;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2298 = x2297 - x2296;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2299 = x2062 * x2291;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2300 = x2055 * x2295;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2301 = x2047 * x2298;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2302 = x2301 + x2300;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2303 = x2302 + x2299;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2304 = x2303 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2305 = x2039 * x2286;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2306 = x2305 + x2304;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2307 = x2062 * x2295;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2308 = x2055 * x2298;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2309 = x2308 + x2307;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2310 = x2309 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2311 = x2047 * x2286;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2312 = x2039 * x2291;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2313 = x2312 + x2311;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2314 = x2313 + x2310;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2315 = x2062 * x2298;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2316 = x2315 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2317 = x2055 * x2286;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2318 = x2047 * x2291;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2319 = x2039 * x2295;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2320 = x2319 + x2318;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2321 = x2320 + x2317;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2322 = x2321 + x2316;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2323 = x2062 * x2286;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2324 = x2055 * x2291;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2325 = x2047 * x2295;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2326 = x2039 * x2298;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2327 = x2326 + x2325;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2328 = x2327 + x2324;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2329 = x2328 + x2323;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2330 = x2260 * x2260;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2331 = x2261 + x2261;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2332 = x2259 * x2331;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2333 = x2332 - x2330;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2334 = x2333 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2335 = x2258 * x2258;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2336 = x2335 + x2334;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2337 = x2261 * x2261;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2338 = x2337 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2339 = x2259 * x2259;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2340 = x2260 + x2260;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2341 = x2258 * x2340;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2342 = x2341 - x2339;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2343 = x2342 + x2338;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2344 = x2343 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2345 = x2344 * x2343;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2346 = x2336 * x2336;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2347 = x2346 + x2345;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2348 = inv(x2347);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2349 = x2336 * x2348;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2350 = x2343 * x2348;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2351 = x2260 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2352 = x2351 * x2350;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2353 = x2258 * x2349;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2354 = x2353 + x2352;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2355 = x2261 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2356 = x2355 * x2350;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2357 = -x2259;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2358 = x2357 * x2349;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2359 = x2358 - x2356;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2360 = x2260 * x2349;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2361 = -x2258;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2362 = x2361 * x2350;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2363 = x2362 + x2360;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2364 = x2261 * x2349;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2365 = x2259 * x2350;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2366 = x2365 - x2364;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2367 = x2329 * x2102;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2368 = x2322 * x2103;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2369 = x2314 * x2104;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2370 = x2369 + x2368;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2371 = x2370 + x2367;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2372 = x2371 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2373 = x2306 * x2101;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2374 = x2373 + x2372;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2375 = x2329 * x2103;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2376 = x2322 * x2104;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2377 = x2376 + x2375;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2378 = x2377 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2379 = x2314 * x2101;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2380 = x2306 * x2102;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2381 = x2380 + x2379;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2382 = x2381 + x2378;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2383 = x2329 * x2104;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2384 = x2383 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2385 = x2322 * x2101;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2386 = x2314 * x2102;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2387 = x2306 * x2103;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2388 = x2387 + x2386;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2389 = x2388 + x2385;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2390 = x2389 + x2384;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2391 = x2329 * x2101;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2392 = x2322 * x2102;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2393 = x2314 * x2103;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2394 = x2306 * x2104;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2395 = x2394 + x2393;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2396 = x2395 + x2392;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2397 = x2396 + x2391;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2398 = x2397 * x2359;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2399 = x2390 * x2363;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2400 = x2382 * x2366;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2401 = x2400 + x2399;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2402 = x2401 + x2398;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2403 = x2402 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2404 = x2374 * x2354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2405 = x2404 + x2403;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2406 = x2397 * x2363;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2407 = x2390 * x2366;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2408 = x2407 + x2406;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2409 = x2408 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2410 = x2382 * x2354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2411 = x2374 * x2359;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2412 = x2411 + x2410;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2413 = x2412 + x2409;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2414 = x2397 * x2366;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2415 = x2414 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2416 = x2390 * x2354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2417 = x2382 * x2359;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2418 = x2374 * x2363;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2419 = x2418 + x2417;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2420 = x2419 + x2416;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2421 = x2420 + x2415;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2422 = x2397 * x2354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2423 = x2390 * x2359;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2424 = x2382 * x2363;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2425 = x2374 * x2366;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2426 = x2425 + x2424;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2427 = x2426 + x2423;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2428 = x2427 + x2422;
        host_args.at(0) = x2405;
        host_args.at(1) = x2413;
        host_args.at(2) = x2421;
        host_args.at(3) = x2428;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x2429 = args[0][13 * steps + ((cycle - 0) & mask)];
    assert(x2429 != Fp::invalid());
    if (x2429 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2430 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2430 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2431 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2431 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2432 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2432 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2433 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2433 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2434 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2434 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2435 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2436 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2437 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2438 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2439 = x2435 * x2430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2440 = x2436 * x2430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2441 = x2437 * x2430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2442 = x2438 * x2430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2443 = x2439 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2444 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2445 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2446 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2447 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2448 = x2444 * x2431;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2449 = x2445 * x2431;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2450 = x2446 * x2431;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2451 = x2447 * x2431;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2452 = x2443 + x2448;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2453 = x2440 + x2449;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2454 = x2441 + x2450;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2455 = x2442 + x2451;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2456 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2457 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2458 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2459 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2460 = x2456 * x2432;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2461 = x2457 * x2432;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2462 = x2458 * x2432;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2463 = x2459 * x2432;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2464 = x2452 + x2460;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2465 = x2453 + x2461;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2466 = x2454 + x2462;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2467 = x2455 + x2463;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2468 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2469 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2470 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2471 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2472 = x2468 * x2433;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2473 = x2469 * x2433;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2474 = x2470 * x2433;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2475 = x2471 * x2433;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2476 = x2464 + x2472;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2477 = x2465 + x2473;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2478 = x2466 + x2474;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2479 = x2467 + x2475;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2480 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2481 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2482 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2483 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2484 = x2480 * x2434;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2485 = x2481 * x2434;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2486 = x2482 * x2434;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2487 = x2483 * x2434;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2488 = x2476 + x2484;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2489 = x2477 + x2485;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2490 = x2478 + x2486;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2491 = x2479 + x2487;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2492 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2492 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2493 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2493 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2494 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x2494 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2495 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x2495 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2496 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x2496 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2497 = x2435 * x2492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2498 = x2436 * x2492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2499 = x2437 * x2492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2500 = x2438 * x2492;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2501 = x2497 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2502 = x2444 * x2493;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2503 = x2445 * x2493;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2504 = x2446 * x2493;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2505 = x2447 * x2493;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2506 = x2501 + x2502;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2507 = x2498 + x2503;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2508 = x2499 + x2504;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2509 = x2500 + x2505;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2510 = x2456 * x2494;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2511 = x2457 * x2494;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2512 = x2458 * x2494;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2513 = x2459 * x2494;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2514 = x2506 + x2510;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2515 = x2507 + x2511;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2516 = x2508 + x2512;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2517 = x2509 + x2513;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2518 = x2468 * x2495;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2519 = x2469 * x2495;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2520 = x2470 * x2495;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2521 = x2471 * x2495;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2522 = x2514 + x2518;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2523 = x2515 + x2519;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2524 = x2516 + x2520;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2525 = x2517 + x2521;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2526 = x2480 * x2496;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2527 = x2481 * x2496;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2528 = x2482 * x2496;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2529 = x2483 * x2496;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2530 = x2522 + x2526;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2531 = x2523 + x2527;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2532 = x2524 + x2528;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2533 = x2525 + x2529;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2534 = x2491 * x2531;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2535 = x2490 * x2532;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2536 = x2489 * x2533;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2537 = x2536 + x2535;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2538 = x2537 + x2534;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2539 = x2538 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2540 = x2488 * x2530;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2541 = x2540 + x2539;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2542 = x2491 * x2532;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2543 = x2490 * x2533;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2544 = x2543 + x2542;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2545 = x2544 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2546 = x2489 * x2530;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2547 = x2488 * x2531;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2548 = x2547 + x2546;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2549 = x2548 + x2545;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2550 = x2491 * x2533;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2551 = x2550 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2552 = x2490 * x2530;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2553 = x2489 * x2531;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2554 = x2488 * x2532;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2555 = x2554 + x2553;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2556 = x2555 + x2552;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2557 = x2556 + x2551;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2558 = x2491 * x2530;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2559 = x2490 * x2531;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2560 = x2489 * x2532;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2561 = x2488 * x2533;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2562 = x2561 + x2560;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2563 = x2562 + x2559;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2564 = x2563 + x2558;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2565 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x2565 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2566 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x2566 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2567 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x2567 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2568 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x2568 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2569 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x2569 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2570 = x2435 * x2565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2571 = x2436 * x2565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2572 = x2437 * x2565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2573 = x2438 * x2565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2574 = x2570 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2575 = x2444 * x2566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2576 = x2445 * x2566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2577 = x2446 * x2566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2578 = x2447 * x2566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2579 = x2574 + x2575;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2580 = x2571 + x2576;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2581 = x2572 + x2577;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2582 = x2573 + x2578;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2583 = x2456 * x2567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2584 = x2457 * x2567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2585 = x2458 * x2567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2586 = x2459 * x2567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2587 = x2579 + x2583;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2588 = x2580 + x2584;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2589 = x2581 + x2585;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2590 = x2582 + x2586;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2591 = x2468 * x2568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2592 = x2469 * x2568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2593 = x2470 * x2568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2594 = x2471 * x2568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2595 = x2587 + x2591;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2596 = x2588 + x2592;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2597 = x2589 + x2593;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2598 = x2590 + x2594;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2599 = x2480 * x2569;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2600 = x2481 * x2569;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2601 = x2482 * x2569;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2602 = x2483 * x2569;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2603 = x2595 + x2599;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2604 = x2596 + x2600;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2605 = x2597 + x2601;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2606 = x2598 + x2602;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2607 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x2607 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2608 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x2608 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2609 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x2609 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2610 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2610 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2611 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2611 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2612 = x2435 * x2607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2613 = x2436 * x2607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2614 = x2437 * x2607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2615 = x2438 * x2607;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2616 = x2612 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2617 = x2444 * x2608;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2618 = x2445 * x2608;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2619 = x2446 * x2608;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2620 = x2447 * x2608;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2621 = x2616 + x2617;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2622 = x2613 + x2618;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2623 = x2614 + x2619;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2624 = x2615 + x2620;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2625 = x2456 * x2609;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2626 = x2457 * x2609;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2627 = x2458 * x2609;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2628 = x2459 * x2609;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2629 = x2621 + x2625;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2630 = x2622 + x2626;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2631 = x2623 + x2627;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2632 = x2624 + x2628;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2633 = x2468 * x2610;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2634 = x2469 * x2610;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2635 = x2470 * x2610;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2636 = x2471 * x2610;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2637 = x2629 + x2633;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2638 = x2630 + x2634;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2639 = x2631 + x2635;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2640 = x2632 + x2636;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2641 = x2480 * x2611;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2642 = x2481 * x2611;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2643 = x2482 * x2611;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2644 = x2483 * x2611;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2645 = x2637 + x2641;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2646 = x2638 + x2642;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2647 = x2639 + x2643;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2648 = x2640 + x2644;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2649 = x2606 * x2646;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2650 = x2605 * x2647;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2651 = x2604 * x2648;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2652 = x2651 + x2650;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2653 = x2652 + x2649;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2654 = x2653 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2655 = x2603 * x2645;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2656 = x2655 + x2654;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2657 = x2606 * x2647;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2658 = x2605 * x2648;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2659 = x2658 + x2657;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2660 = x2659 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2661 = x2604 * x2645;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2662 = x2603 * x2646;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2663 = x2662 + x2661;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2664 = x2663 + x2660;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2665 = x2606 * x2648;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2666 = x2665 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2667 = x2605 * x2645;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2668 = x2604 * x2646;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2669 = x2603 * x2647;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2670 = x2669 + x2668;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2671 = x2670 + x2667;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2672 = x2671 + x2666;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2673 = x2606 * x2645;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2674 = x2605 * x2646;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2675 = x2604 * x2647;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2676 = x2603 * x2648;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2677 = x2676 + x2675;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2678 = x2677 + x2674;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2679 = x2678 + x2673;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2680 = x2672 * x2672;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2681 = x2679 + x2679;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2682 = x2664 * x2681;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2683 = x2682 - x2680;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2684 = x2683 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2685 = x2656 * x2656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2686 = x2685 + x2684;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2687 = x2679 * x2679;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2688 = x2687 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2689 = x2664 * x2664;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2690 = x2672 + x2672;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2691 = x2656 * x2690;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2692 = x2691 - x2689;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2693 = x2692 + x2688;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2694 = x2693 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2695 = x2694 * x2693;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2696 = x2686 * x2686;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2697 = x2696 + x2695;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2698 = inv(x2697);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2699 = x2686 * x2698;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2700 = x2693 * x2698;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2701 = x2672 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2702 = x2701 * x2700;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2703 = x2656 * x2699;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2704 = x2703 + x2702;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2705 = x2679 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2706 = x2705 * x2700;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2707 = -x2664;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2708 = x2707 * x2699;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2709 = x2708 - x2706;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2710 = x2672 * x2699;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2711 = -x2656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2712 = x2711 * x2700;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2713 = x2712 + x2710;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2714 = x2679 * x2699;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2715 = x2664 * x2700;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2716 = x2715 - x2714;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2717 = x2564 * x2709;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2718 = x2557 * x2713;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2719 = x2549 * x2716;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2720 = x2719 + x2718;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2721 = x2720 + x2717;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2722 = x2721 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2723 = x2541 * x2704;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2724 = x2723 + x2722;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2725 = x2564 * x2713;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2726 = x2557 * x2716;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2727 = x2726 + x2725;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2728 = x2727 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2729 = x2549 * x2704;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2730 = x2541 * x2709;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2731 = x2730 + x2729;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2732 = x2731 + x2728;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2733 = x2564 * x2716;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2734 = x2733 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2735 = x2557 * x2704;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2736 = x2549 * x2709;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2737 = x2541 * x2713;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2738 = x2737 + x2736;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2739 = x2738 + x2735;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2740 = x2739 + x2734;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2741 = x2564 * x2704;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2742 = x2557 * x2709;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2743 = x2549 * x2713;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2744 = x2541 * x2716;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2745 = x2744 + x2743;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2746 = x2745 + x2742;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2747 = x2746 + x2741;
        host_args.at(0) = x2724;
        host_args.at(1) = x2732;
        host_args.at(2) = x2740;
        host_args.at(3) = x2747;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x2748 = args[0][14 * steps + ((cycle - 0) & mask)];
    assert(x2748 != Fp::invalid());
    if (x2748 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2749 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x2749 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2750 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x2750 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2751 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x2751 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2752 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x2752 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2753 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x2753 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2754 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2755 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2756 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2757 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2758 = x2754 * x2749;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2759 = x2755 * x2749;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2760 = x2756 * x2749;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2761 = x2757 * x2749;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2762 = x2758 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2763 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2764 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2765 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2766 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2767 = x2763 * x2750;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2768 = x2764 * x2750;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2769 = x2765 * x2750;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2770 = x2766 * x2750;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2771 = x2762 + x2767;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2772 = x2759 + x2768;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2773 = x2760 + x2769;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2774 = x2761 + x2770;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2775 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2776 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2777 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2778 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2779 = x2775 * x2751;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2780 = x2776 * x2751;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2781 = x2777 * x2751;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2782 = x2778 * x2751;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2783 = x2771 + x2779;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2784 = x2772 + x2780;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2785 = x2773 + x2781;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2786 = x2774 + x2782;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2787 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2788 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2789 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2790 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2791 = x2787 * x2752;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2792 = x2788 * x2752;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2793 = x2789 * x2752;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2794 = x2790 * x2752;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2795 = x2783 + x2791;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2796 = x2784 + x2792;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2797 = x2785 + x2793;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2798 = x2786 + x2794;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2799 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2800 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2801 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x2802 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2803 = x2799 * x2753;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2804 = x2800 * x2753;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2805 = x2801 * x2753;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2806 = x2802 * x2753;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2807 = x2795 + x2803;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2808 = x2796 + x2804;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2809 = x2797 + x2805;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2810 = x2798 + x2806;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2811 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x2811 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2812 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x2812 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2813 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x2813 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2814 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x2814 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2815 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x2815 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2816 = x2754 * x2811;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2817 = x2755 * x2811;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2818 = x2756 * x2811;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2819 = x2757 * x2811;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2820 = x2816 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2821 = x2763 * x2812;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2822 = x2764 * x2812;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2823 = x2765 * x2812;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2824 = x2766 * x2812;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2825 = x2820 + x2821;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2826 = x2817 + x2822;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2827 = x2818 + x2823;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2828 = x2819 + x2824;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2829 = x2775 * x2813;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2830 = x2776 * x2813;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2831 = x2777 * x2813;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2832 = x2778 * x2813;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2833 = x2825 + x2829;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2834 = x2826 + x2830;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2835 = x2827 + x2831;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2836 = x2828 + x2832;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2837 = x2787 * x2814;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2838 = x2788 * x2814;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2839 = x2789 * x2814;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2840 = x2790 * x2814;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2841 = x2833 + x2837;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2842 = x2834 + x2838;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2843 = x2835 + x2839;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2844 = x2836 + x2840;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2845 = x2799 * x2815;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2846 = x2800 * x2815;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2847 = x2801 * x2815;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2848 = x2802 * x2815;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2849 = x2841 + x2845;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2850 = x2842 + x2846;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2851 = x2843 + x2847;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2852 = x2844 + x2848;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2853 = x2810 * x2850;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2854 = x2809 * x2851;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2855 = x2808 * x2852;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2856 = x2855 + x2854;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2857 = x2856 + x2853;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2858 = x2857 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2859 = x2807 * x2849;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2860 = x2859 + x2858;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2861 = x2810 * x2851;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2862 = x2809 * x2852;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2863 = x2862 + x2861;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2864 = x2863 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2865 = x2808 * x2849;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2866 = x2807 * x2850;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2867 = x2866 + x2865;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2868 = x2867 + x2864;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2869 = x2810 * x2852;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2870 = x2869 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2871 = x2809 * x2849;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2872 = x2808 * x2850;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2873 = x2807 * x2851;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2874 = x2873 + x2872;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2875 = x2874 + x2871;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2876 = x2875 + x2870;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2877 = x2810 * x2849;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2878 = x2809 * x2850;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2879 = x2808 * x2851;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2880 = x2807 * x2852;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2881 = x2880 + x2879;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2882 = x2881 + x2878;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2883 = x2882 + x2877;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2884 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x2884 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2885 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x2885 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2886 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x2886 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2887 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x2887 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2888 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x2888 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2889 = x2754 * x2884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2890 = x2755 * x2884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2891 = x2756 * x2884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2892 = x2757 * x2884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2893 = x2889 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2894 = x2763 * x2885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2895 = x2764 * x2885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2896 = x2765 * x2885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2897 = x2766 * x2885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2898 = x2893 + x2894;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2899 = x2890 + x2895;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2900 = x2891 + x2896;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2901 = x2892 + x2897;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2902 = x2775 * x2886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2903 = x2776 * x2886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2904 = x2777 * x2886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2905 = x2778 * x2886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2906 = x2898 + x2902;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2907 = x2899 + x2903;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2908 = x2900 + x2904;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2909 = x2901 + x2905;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2910 = x2787 * x2887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2911 = x2788 * x2887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2912 = x2789 * x2887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2913 = x2790 * x2887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2914 = x2906 + x2910;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2915 = x2907 + x2911;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2916 = x2908 + x2912;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2917 = x2909 + x2913;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2918 = x2799 * x2888;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2919 = x2800 * x2888;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2920 = x2801 * x2888;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2921 = x2802 * x2888;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2922 = x2914 + x2918;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2923 = x2915 + x2919;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2924 = x2916 + x2920;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2925 = x2917 + x2921;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x2926 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x2926 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2927 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x2927 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2928 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x2928 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2929 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x2929 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x2930 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x2930 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2931 = x2754 * x2926;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2932 = x2755 * x2926;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2933 = x2756 * x2926;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2934 = x2757 * x2926;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2935 = x2931 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2936 = x2763 * x2927;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2937 = x2764 * x2927;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2938 = x2765 * x2927;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2939 = x2766 * x2927;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2940 = x2935 + x2936;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2941 = x2932 + x2937;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2942 = x2933 + x2938;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2943 = x2934 + x2939;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2944 = x2775 * x2928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2945 = x2776 * x2928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2946 = x2777 * x2928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2947 = x2778 * x2928;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2948 = x2940 + x2944;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2949 = x2941 + x2945;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2950 = x2942 + x2946;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2951 = x2943 + x2947;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2952 = x2787 * x2929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2953 = x2788 * x2929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2954 = x2789 * x2929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2955 = x2790 * x2929;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2956 = x2948 + x2952;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2957 = x2949 + x2953;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2958 = x2950 + x2954;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2959 = x2951 + x2955;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2960 = x2799 * x2930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2961 = x2800 * x2930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2962 = x2801 * x2930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2963 = x2802 * x2930;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2964 = x2956 + x2960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2965 = x2957 + x2961;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2966 = x2958 + x2962;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x2967 = x2959 + x2963;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2968 = x2925 * x2965;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2969 = x2924 * x2966;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2970 = x2923 * x2967;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2971 = x2970 + x2969;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2972 = x2971 + x2968;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2973 = x2972 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2974 = x2922 * x2964;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2975 = x2974 + x2973;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2976 = x2925 * x2966;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2977 = x2924 * x2967;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2978 = x2977 + x2976;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2979 = x2978 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2980 = x2923 * x2964;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2981 = x2922 * x2965;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2982 = x2981 + x2980;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2983 = x2982 + x2979;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2984 = x2925 * x2967;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2985 = x2984 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2986 = x2924 * x2964;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2987 = x2923 * x2965;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2988 = x2922 * x2966;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2989 = x2988 + x2987;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2990 = x2989 + x2986;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2991 = x2990 + x2985;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2992 = x2925 * x2964;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2993 = x2924 * x2965;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2994 = x2923 * x2966;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2995 = x2922 * x2967;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2996 = x2995 + x2994;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2997 = x2996 + x2993;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x2998 = x2997 + x2992;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x2999 = x2991 * x2991;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3000 = x2998 + x2998;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3001 = x2983 * x3000;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3002 = x3001 - x2999;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3003 = x3002 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3004 = x2975 * x2975;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3005 = x3004 + x3003;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3006 = x2998 * x2998;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3007 = x3006 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3008 = x2983 * x2983;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3009 = x2991 + x2991;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3010 = x2975 * x3009;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3011 = x3010 - x3008;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3012 = x3011 + x3007;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3013 = x3012 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3014 = x3013 * x3012;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3015 = x3005 * x3005;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3016 = x3015 + x3014;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3017 = inv(x3016);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3018 = x3005 * x3017;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3019 = x3012 * x3017;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3020 = x2991 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3021 = x3020 * x3019;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3022 = x2975 * x3018;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3023 = x3022 + x3021;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3024 = x2998 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3025 = x3024 * x3019;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3026 = -x2983;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3027 = x3026 * x3018;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3028 = x3027 - x3025;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3029 = x2991 * x3018;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3030 = -x2975;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3031 = x3030 * x3019;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3032 = x3031 + x3029;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3033 = x2998 * x3018;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3034 = x2983 * x3019;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3035 = x3034 - x3033;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3036 = x2883 * x3028;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3037 = x2876 * x3032;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3038 = x2868 * x3035;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3039 = x3038 + x3037;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3040 = x3039 + x3036;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3041 = x3040 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3042 = x2860 * x3023;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3043 = x3042 + x3041;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3044 = x2883 * x3032;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3045 = x2876 * x3035;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3046 = x3045 + x3044;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3047 = x3046 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3048 = x2868 * x3023;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3049 = x2860 * x3028;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3050 = x3049 + x3048;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3051 = x3050 + x3047;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3052 = x2883 * x3035;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3053 = x3052 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3054 = x2876 * x3023;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3055 = x2868 * x3028;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3056 = x2860 * x3032;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3057 = x3056 + x3055;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3058 = x3057 + x3054;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3059 = x3058 + x3053;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3060 = x2883 * x3023;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3061 = x2876 * x3028;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3062 = x2868 * x3032;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3063 = x2860 * x3035;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3064 = x3063 + x3062;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3065 = x3064 + x3061;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3066 = x3065 + x3060;
        host_args.at(0) = x3043;
        host_args.at(1) = x3051;
        host_args.at(2) = x3059;
        host_args.at(3) = x3066;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x3067 = args[0][15 * steps + ((cycle - 0) & mask)];
    assert(x3067 != Fp::invalid());
    if (x3067 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3068 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3068 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3069 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3069 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3070 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3070 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3071 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3071 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3072 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3072 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3073 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3074 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3075 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3076 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3077 = x3073 * x3068;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3078 = x3074 * x3068;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3079 = x3075 * x3068;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3080 = x3076 * x3068;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3081 = x3077 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3082 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3083 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3084 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3085 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3086 = x3082 * x3069;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3087 = x3083 * x3069;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3088 = x3084 * x3069;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3089 = x3085 * x3069;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3090 = x3081 + x3086;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3091 = x3078 + x3087;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3092 = x3079 + x3088;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3093 = x3080 + x3089;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3094 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3095 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3096 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3097 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3098 = x3094 * x3070;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3099 = x3095 * x3070;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3100 = x3096 * x3070;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3101 = x3097 * x3070;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3102 = x3090 + x3098;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3103 = x3091 + x3099;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3104 = x3092 + x3100;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3105 = x3093 + x3101;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3106 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3107 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3108 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3109 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3110 = x3106 * x3071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3111 = x3107 * x3071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3112 = x3108 * x3071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3113 = x3109 * x3071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3114 = x3102 + x3110;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3115 = x3103 + x3111;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3116 = x3104 + x3112;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3117 = x3105 + x3113;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3118 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3119 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3120 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3121 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3122 = x3118 * x3072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3123 = x3119 * x3072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3124 = x3120 * x3072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3125 = x3121 * x3072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3126 = x3114 + x3122;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3127 = x3115 + x3123;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3128 = x3116 + x3124;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3129 = x3117 + x3125;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3130 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3130 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3131 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3131 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3132 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x3132 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3133 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x3133 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3134 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x3134 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3135 = x3073 * x3130;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3136 = x3074 * x3130;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3137 = x3075 * x3130;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3138 = x3076 * x3130;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3139 = x3135 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3140 = x3082 * x3131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3141 = x3083 * x3131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3142 = x3084 * x3131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3143 = x3085 * x3131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3144 = x3139 + x3140;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3145 = x3136 + x3141;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3146 = x3137 + x3142;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3147 = x3138 + x3143;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3148 = x3094 * x3132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3149 = x3095 * x3132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3150 = x3096 * x3132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3151 = x3097 * x3132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3152 = x3144 + x3148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3153 = x3145 + x3149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3154 = x3146 + x3150;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3155 = x3147 + x3151;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3156 = x3106 * x3133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3157 = x3107 * x3133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3158 = x3108 * x3133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3159 = x3109 * x3133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3160 = x3152 + x3156;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3161 = x3153 + x3157;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3162 = x3154 + x3158;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3163 = x3155 + x3159;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3164 = x3118 * x3134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3165 = x3119 * x3134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3166 = x3120 * x3134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3167 = x3121 * x3134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3168 = x3160 + x3164;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3169 = x3161 + x3165;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3170 = x3162 + x3166;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3171 = x3163 + x3167;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3172 = x3129 * x3169;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3173 = x3128 * x3170;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3174 = x3127 * x3171;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3175 = x3174 + x3173;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3176 = x3175 + x3172;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3177 = x3176 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3178 = x3126 * x3168;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3179 = x3178 + x3177;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3180 = x3129 * x3170;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3181 = x3128 * x3171;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3182 = x3181 + x3180;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3183 = x3182 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3184 = x3127 * x3168;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3185 = x3126 * x3169;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3186 = x3185 + x3184;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3187 = x3186 + x3183;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3188 = x3129 * x3171;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3189 = x3188 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3190 = x3128 * x3168;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3191 = x3127 * x3169;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3192 = x3126 * x3170;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3193 = x3192 + x3191;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3194 = x3193 + x3190;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3195 = x3194 + x3189;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3196 = x3129 * x3168;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3197 = x3128 * x3169;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3198 = x3127 * x3170;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3199 = x3126 * x3171;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3200 = x3199 + x3198;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3201 = x3200 + x3197;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3202 = x3201 + x3196;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3203 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x3203 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3204 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x3204 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3205 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x3205 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3206 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x3206 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3207 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x3207 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3208 = x3073 * x3203;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3209 = x3074 * x3203;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3210 = x3075 * x3203;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3211 = x3076 * x3203;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3212 = x3208 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3213 = x3082 * x3204;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3214 = x3083 * x3204;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3215 = x3084 * x3204;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3216 = x3085 * x3204;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3217 = x3212 + x3213;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3218 = x3209 + x3214;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3219 = x3210 + x3215;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3220 = x3211 + x3216;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3221 = x3094 * x3205;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3222 = x3095 * x3205;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3223 = x3096 * x3205;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3224 = x3097 * x3205;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3225 = x3217 + x3221;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3226 = x3218 + x3222;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3227 = x3219 + x3223;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3228 = x3220 + x3224;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3229 = x3106 * x3206;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3230 = x3107 * x3206;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3231 = x3108 * x3206;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3232 = x3109 * x3206;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3233 = x3225 + x3229;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3234 = x3226 + x3230;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3235 = x3227 + x3231;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3236 = x3228 + x3232;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3237 = x3118 * x3207;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3238 = x3119 * x3207;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3239 = x3120 * x3207;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3240 = x3121 * x3207;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3241 = x3233 + x3237;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3242 = x3234 + x3238;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3243 = x3235 + x3239;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3244 = x3236 + x3240;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3245 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x3245 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3246 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x3246 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3247 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x3247 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3248 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3248 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3249 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3249 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3250 = x3073 * x3245;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3251 = x3074 * x3245;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3252 = x3075 * x3245;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3253 = x3076 * x3245;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3254 = x3250 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3255 = x3082 * x3246;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3256 = x3083 * x3246;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3257 = x3084 * x3246;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3258 = x3085 * x3246;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3259 = x3254 + x3255;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3260 = x3251 + x3256;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3261 = x3252 + x3257;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3262 = x3253 + x3258;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3263 = x3094 * x3247;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3264 = x3095 * x3247;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3265 = x3096 * x3247;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3266 = x3097 * x3247;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3267 = x3259 + x3263;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3268 = x3260 + x3264;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3269 = x3261 + x3265;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3270 = x3262 + x3266;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3271 = x3106 * x3248;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3272 = x3107 * x3248;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3273 = x3108 * x3248;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3274 = x3109 * x3248;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3275 = x3267 + x3271;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3276 = x3268 + x3272;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3277 = x3269 + x3273;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3278 = x3270 + x3274;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3279 = x3118 * x3249;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3280 = x3119 * x3249;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3281 = x3120 * x3249;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3282 = x3121 * x3249;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3283 = x3275 + x3279;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3284 = x3276 + x3280;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3285 = x3277 + x3281;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3286 = x3278 + x3282;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3287 = x3244 * x3284;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3288 = x3243 * x3285;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3289 = x3242 * x3286;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3290 = x3289 + x3288;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3291 = x3290 + x3287;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3292 = x3291 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3293 = x3241 * x3283;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3294 = x3293 + x3292;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3295 = x3244 * x3285;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3296 = x3243 * x3286;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3297 = x3296 + x3295;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3298 = x3297 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3299 = x3242 * x3283;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3300 = x3241 * x3284;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3301 = x3300 + x3299;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3302 = x3301 + x3298;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3303 = x3244 * x3286;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3304 = x3303 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3305 = x3243 * x3283;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3306 = x3242 * x3284;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3307 = x3241 * x3285;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3308 = x3307 + x3306;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3309 = x3308 + x3305;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3310 = x3309 + x3304;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3311 = x3244 * x3283;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3312 = x3243 * x3284;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3313 = x3242 * x3285;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3314 = x3241 * x3286;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3315 = x3314 + x3313;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3316 = x3315 + x3312;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3317 = x3316 + x3311;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3318 = x3310 * x3310;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3319 = x3317 + x3317;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3320 = x3302 * x3319;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3321 = x3320 - x3318;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3322 = x3321 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3323 = x3294 * x3294;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3324 = x3323 + x3322;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3325 = x3317 * x3317;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3326 = x3325 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3327 = x3302 * x3302;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3328 = x3310 + x3310;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3329 = x3294 * x3328;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3330 = x3329 - x3327;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3331 = x3330 + x3326;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3332 = x3331 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3333 = x3332 * x3331;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3334 = x3324 * x3324;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3335 = x3334 + x3333;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3336 = inv(x3335);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3337 = x3324 * x3336;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3338 = x3331 * x3336;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3339 = x3310 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3340 = x3339 * x3338;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3341 = x3294 * x3337;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3342 = x3341 + x3340;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3343 = x3317 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3344 = x3343 * x3338;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3345 = -x3302;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3346 = x3345 * x3337;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3347 = x3346 - x3344;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3348 = x3310 * x3337;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3349 = -x3294;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3350 = x3349 * x3338;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3351 = x3350 + x3348;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3352 = x3317 * x3337;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3353 = x3302 * x3338;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3354 = x3353 - x3352;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3355 = x3202 * x3347;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3356 = x3195 * x3351;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3357 = x3187 * x3354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3358 = x3357 + x3356;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3359 = x3358 + x3355;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3360 = x3359 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3361 = x3179 * x3342;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3362 = x3361 + x3360;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3363 = x3202 * x3351;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3364 = x3195 * x3354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3365 = x3364 + x3363;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3366 = x3365 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3367 = x3187 * x3342;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3368 = x3179 * x3347;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3369 = x3368 + x3367;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3370 = x3369 + x3366;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3371 = x3202 * x3354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3372 = x3371 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3373 = x3195 * x3342;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3374 = x3187 * x3347;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3375 = x3179 * x3351;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3376 = x3375 + x3374;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3377 = x3376 + x3373;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3378 = x3377 + x3372;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3379 = x3202 * x3342;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3380 = x3195 * x3347;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3381 = x3187 * x3351;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3382 = x3179 * x3354;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3383 = x3382 + x3381;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3384 = x3383 + x3380;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3385 = x3384 + x3379;
        host_args.at(0) = x3362;
        host_args.at(1) = x3370;
        host_args.at(2) = x3378;
        host_args.at(3) = x3385;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x3386 = args[0][16 * steps + ((cycle - 0) & mask)];
    assert(x3386 != Fp::invalid());
    if (x3386 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3387 = args[2][11 * steps + ((cycle - 0) & mask)];
        assert(x3387 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3388 = args[2][12 * steps + ((cycle - 0) & mask)];
        assert(x3388 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3389 = args[2][13 * steps + ((cycle - 0) & mask)];
        assert(x3389 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3390 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x3390 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3391 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3391 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3392 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3393 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3394 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3395 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3396 = x3392 * x3387;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3397 = x3393 * x3387;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3398 = x3394 * x3387;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3399 = x3395 * x3387;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3400 = x3396 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3401 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3402 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3403 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3404 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3405 = x3401 * x3388;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3406 = x3402 * x3388;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3407 = x3403 * x3388;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3408 = x3404 * x3388;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3409 = x3400 + x3405;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3410 = x3397 + x3406;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3411 = x3398 + x3407;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3412 = x3399 + x3408;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3413 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3414 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3415 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3416 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3417 = x3413 * x3389;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3418 = x3414 * x3389;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3419 = x3415 * x3389;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3420 = x3416 * x3389;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3421 = x3409 + x3417;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3422 = x3410 + x3418;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3423 = x3411 + x3419;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3424 = x3412 + x3420;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3425 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3426 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3427 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3428 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3429 = x3425 * x3390;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3430 = x3426 * x3390;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3431 = x3427 * x3390;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3432 = x3428 * x3390;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3433 = x3421 + x3429;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3434 = x3422 + x3430;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3435 = x3423 + x3431;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3436 = x3424 + x3432;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3437 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3438 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3439 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3440 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3441 = x3437 * x3391;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3442 = x3438 * x3391;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3443 = x3439 * x3391;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3444 = x3440 * x3391;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3445 = x3433 + x3441;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3446 = x3434 + x3442;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3447 = x3435 + x3443;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3448 = x3436 + x3444;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3449 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3449 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3450 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3450 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3451 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x3451 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3452 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x3452 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3453 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x3453 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3454 = x3392 * x3449;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3455 = x3393 * x3449;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3456 = x3394 * x3449;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3457 = x3395 * x3449;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3458 = x3454 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3459 = x3401 * x3450;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3460 = x3402 * x3450;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3461 = x3403 * x3450;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3462 = x3404 * x3450;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3463 = x3458 + x3459;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3464 = x3455 + x3460;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3465 = x3456 + x3461;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3466 = x3457 + x3462;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3467 = x3413 * x3451;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3468 = x3414 * x3451;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3469 = x3415 * x3451;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3470 = x3416 * x3451;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3471 = x3463 + x3467;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3472 = x3464 + x3468;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3473 = x3465 + x3469;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3474 = x3466 + x3470;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3475 = x3425 * x3452;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3476 = x3426 * x3452;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3477 = x3427 * x3452;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3478 = x3428 * x3452;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3479 = x3471 + x3475;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3480 = x3472 + x3476;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3481 = x3473 + x3477;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3482 = x3474 + x3478;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3483 = x3437 * x3453;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3484 = x3438 * x3453;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3485 = x3439 * x3453;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3486 = x3440 * x3453;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3487 = x3479 + x3483;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3488 = x3480 + x3484;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3489 = x3481 + x3485;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3490 = x3482 + x3486;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3491 = x3448 * x3488;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3492 = x3447 * x3489;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3493 = x3446 * x3490;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3494 = x3493 + x3492;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3495 = x3494 + x3491;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3496 = x3495 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3497 = x3445 * x3487;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3498 = x3497 + x3496;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3499 = x3448 * x3489;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3500 = x3447 * x3490;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3501 = x3500 + x3499;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3502 = x3501 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3503 = x3446 * x3487;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3504 = x3445 * x3488;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3505 = x3504 + x3503;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3506 = x3505 + x3502;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3507 = x3448 * x3490;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3508 = x3507 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3509 = x3447 * x3487;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3510 = x3446 * x3488;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3511 = x3445 * x3489;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3512 = x3511 + x3510;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3513 = x3512 + x3509;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3514 = x3513 + x3508;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3515 = x3448 * x3487;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3516 = x3447 * x3488;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3517 = x3446 * x3489;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3518 = x3445 * x3490;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3519 = x3518 + x3517;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3520 = x3519 + x3516;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3521 = x3520 + x3515;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3522 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x3522 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3523 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x3523 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3524 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x3524 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3525 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x3525 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3526 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x3526 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3527 = x3392 * x3522;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3528 = x3393 * x3522;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3529 = x3394 * x3522;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3530 = x3395 * x3522;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3531 = x3527 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3532 = x3401 * x3523;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3533 = x3402 * x3523;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3534 = x3403 * x3523;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3535 = x3404 * x3523;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3536 = x3531 + x3532;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3537 = x3528 + x3533;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3538 = x3529 + x3534;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3539 = x3530 + x3535;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3540 = x3413 * x3524;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3541 = x3414 * x3524;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3542 = x3415 * x3524;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3543 = x3416 * x3524;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3544 = x3536 + x3540;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3545 = x3537 + x3541;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3546 = x3538 + x3542;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3547 = x3539 + x3543;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3548 = x3425 * x3525;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3549 = x3426 * x3525;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3550 = x3427 * x3525;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3551 = x3428 * x3525;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3552 = x3544 + x3548;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3553 = x3545 + x3549;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3554 = x3546 + x3550;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3555 = x3547 + x3551;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3556 = x3437 * x3526;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3557 = x3438 * x3526;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3558 = x3439 * x3526;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3559 = x3440 * x3526;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3560 = x3552 + x3556;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3561 = x3553 + x3557;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3562 = x3554 + x3558;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3563 = x3555 + x3559;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3564 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x3564 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3565 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x3565 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3566 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x3566 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3567 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x3567 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3568 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x3568 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3569 = x3392 * x3564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3570 = x3393 * x3564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3571 = x3394 * x3564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3572 = x3395 * x3564;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3573 = x3569 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3574 = x3401 * x3565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3575 = x3402 * x3565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3576 = x3403 * x3565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3577 = x3404 * x3565;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3578 = x3573 + x3574;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3579 = x3570 + x3575;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3580 = x3571 + x3576;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3581 = x3572 + x3577;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3582 = x3413 * x3566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3583 = x3414 * x3566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3584 = x3415 * x3566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3585 = x3416 * x3566;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3586 = x3578 + x3582;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3587 = x3579 + x3583;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3588 = x3580 + x3584;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3589 = x3581 + x3585;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3590 = x3425 * x3567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3591 = x3426 * x3567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3592 = x3427 * x3567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3593 = x3428 * x3567;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3594 = x3586 + x3590;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3595 = x3587 + x3591;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3596 = x3588 + x3592;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3597 = x3589 + x3593;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3598 = x3437 * x3568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3599 = x3438 * x3568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3600 = x3439 * x3568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3601 = x3440 * x3568;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3602 = x3594 + x3598;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3603 = x3595 + x3599;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3604 = x3596 + x3600;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3605 = x3597 + x3601;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3606 = x3563 * x3603;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3607 = x3562 * x3604;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3608 = x3561 * x3605;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3609 = x3608 + x3607;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3610 = x3609 + x3606;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3611 = x3610 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3612 = x3560 * x3602;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3613 = x3612 + x3611;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3614 = x3563 * x3604;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3615 = x3562 * x3605;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3616 = x3615 + x3614;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3617 = x3616 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3618 = x3561 * x3602;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3619 = x3560 * x3603;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3620 = x3619 + x3618;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3621 = x3620 + x3617;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3622 = x3563 * x3605;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3623 = x3622 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3624 = x3562 * x3602;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3625 = x3561 * x3603;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3626 = x3560 * x3604;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3627 = x3626 + x3625;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3628 = x3627 + x3624;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3629 = x3628 + x3623;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3630 = x3563 * x3602;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3631 = x3562 * x3603;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3632 = x3561 * x3604;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3633 = x3560 * x3605;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3634 = x3633 + x3632;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3635 = x3634 + x3631;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3636 = x3635 + x3630;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3637 = x3629 * x3629;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3638 = x3636 + x3636;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3639 = x3621 * x3638;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3640 = x3639 - x3637;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3641 = x3640 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3642 = x3613 * x3613;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3643 = x3642 + x3641;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3644 = x3636 * x3636;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3645 = x3644 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3646 = x3621 * x3621;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3647 = x3629 + x3629;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3648 = x3613 * x3647;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3649 = x3648 - x3646;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3650 = x3649 + x3645;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3651 = x3650 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3652 = x3651 * x3650;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3653 = x3643 * x3643;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3654 = x3653 + x3652;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3655 = inv(x3654);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3656 = x3643 * x3655;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3657 = x3650 * x3655;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3658 = x3629 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3659 = x3658 * x3657;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3660 = x3613 * x3656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3661 = x3660 + x3659;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3662 = x3636 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3663 = x3662 * x3657;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3664 = -x3621;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3665 = x3664 * x3656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3666 = x3665 - x3663;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3667 = x3629 * x3656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3668 = -x3613;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3669 = x3668 * x3657;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3670 = x3669 + x3667;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3671 = x3636 * x3656;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3672 = x3621 * x3657;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3673 = x3672 - x3671;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3674 = x3521 * x3666;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3675 = x3514 * x3670;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3676 = x3506 * x3673;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3677 = x3676 + x3675;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3678 = x3677 + x3674;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3679 = x3678 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3680 = x3498 * x3661;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3681 = x3680 + x3679;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3682 = x3521 * x3670;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3683 = x3514 * x3673;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3684 = x3683 + x3682;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3685 = x3684 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3686 = x3506 * x3661;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3687 = x3498 * x3666;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3688 = x3687 + x3686;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3689 = x3688 + x3685;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3690 = x3521 * x3673;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3691 = x3690 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3692 = x3514 * x3661;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3693 = x3506 * x3666;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3694 = x3498 * x3670;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3695 = x3694 + x3693;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3696 = x3695 + x3692;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3697 = x3696 + x3691;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3698 = x3521 * x3661;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3699 = x3514 * x3666;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3700 = x3506 * x3670;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3701 = x3498 * x3673;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3702 = x3701 + x3700;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3703 = x3702 + x3699;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x3704 = x3703 + x3698;
        host_args.at(0) = x3681;
        host_args.at(1) = x3689;
        host_args.at(2) = x3697;
        host_args.at(3) = x3704;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":39:0)
    auto x3705 = args[0][17 * steps + ((cycle - 0) & mask)];
    assert(x3705 != Fp::invalid());
    if (x3705 != 0) {
      {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3706 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x3706 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3707 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x3707 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3708 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x3708 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3709 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x3709 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3710 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x3710 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3711 = args[3][0];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3712 = args[3][1];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3713 = args[3][2];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3714 = args[3][3];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3715 = x3711 * x3706;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3716 = x3712 * x3706;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3717 = x3713 * x3706;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3718 = x3714 * x3706;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3719 = x3715 + x2;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3720 = args[3][4];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3721 = args[3][5];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3722 = args[3][6];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3723 = args[3][7];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3724 = x3720 * x3707;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3725 = x3721 * x3707;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3726 = x3722 * x3707;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3727 = x3723 * x3707;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3728 = x3719 + x3724;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3729 = x3716 + x3725;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3730 = x3717 + x3726;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3731 = x3718 + x3727;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3732 = args[3][8];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3733 = args[3][9];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3734 = args[3][10];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3735 = args[3][11];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3736 = x3732 * x3708;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3737 = x3733 * x3708;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3738 = x3734 * x3708;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3739 = x3735 * x3708;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3740 = x3728 + x3736;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3741 = x3729 + x3737;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3742 = x3730 + x3738;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3743 = x3731 + x3739;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3744 = args[3][12];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3745 = args[3][13];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3746 = args[3][14];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3747 = args[3][15];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3748 = x3744 * x3709;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3749 = x3745 * x3709;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3750 = x3746 * x3709;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3751 = x3747 * x3709;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3752 = x3740 + x3748;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3753 = x3741 + x3749;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3754 = x3742 + x3750;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3755 = x3743 + x3751;
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3756 = args[3][16];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3757 = args[3][17];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3758 = args[3][18];
        // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
        auto x3759 = args[3][19];
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3760 = x3756 * x3710;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3761 = x3757 * x3710;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3762 = x3758 * x3710;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3763 = x3759 * x3710;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3764 = x3752 + x3760;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3765 = x3753 + x3761;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3766 = x3754 + x3762;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3767 = x3755 + x3763;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3768 = args[2][20 * steps + ((cycle - 0) & mask)];
        assert(x3768 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3769 = args[2][21 * steps + ((cycle - 0) & mask)];
        assert(x3769 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3770 = args[2][22 * steps + ((cycle - 0) & mask)];
        assert(x3770 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3771 = args[2][23 * steps + ((cycle - 0) & mask)];
        assert(x3771 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3772 = args[2][24 * steps + ((cycle - 0) & mask)];
        assert(x3772 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3773 = x3711 * x3768;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3774 = x3712 * x3768;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3775 = x3713 * x3768;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3776 = x3714 * x3768;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3777 = x3773 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3778 = x3720 * x3769;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3779 = x3721 * x3769;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3780 = x3722 * x3769;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3781 = x3723 * x3769;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3782 = x3777 + x3778;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3783 = x3774 + x3779;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3784 = x3775 + x3780;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3785 = x3776 + x3781;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3786 = x3732 * x3770;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3787 = x3733 * x3770;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3788 = x3734 * x3770;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3789 = x3735 * x3770;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3790 = x3782 + x3786;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3791 = x3783 + x3787;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3792 = x3784 + x3788;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3793 = x3785 + x3789;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3794 = x3744 * x3771;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3795 = x3745 * x3771;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3796 = x3746 * x3771;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3797 = x3747 * x3771;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3798 = x3790 + x3794;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3799 = x3791 + x3795;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3800 = x3792 + x3796;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3801 = x3793 + x3797;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3802 = x3756 * x3772;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3803 = x3757 * x3772;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3804 = x3758 * x3772;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3805 = x3759 * x3772;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3806 = x3798 + x3802;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3807 = x3799 + x3803;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3808 = x3800 + x3804;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3809 = x3801 + x3805;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3810 = x3767 * x3807;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3811 = x3766 * x3808;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3812 = x3765 * x3809;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3813 = x3812 + x3811;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3814 = x3813 + x3810;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3815 = x3814 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3816 = x3764 * x3806;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3817 = x3816 + x3815;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3818 = x3767 * x3808;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3819 = x3766 * x3809;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3820 = x3819 + x3818;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3821 = x3820 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3822 = x3765 * x3806;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3823 = x3764 * x3807;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3824 = x3823 + x3822;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3825 = x3824 + x3821;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3826 = x3767 * x3809;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3827 = x3826 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3828 = x3766 * x3806;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3829 = x3765 * x3807;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3830 = x3764 * x3808;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3831 = x3830 + x3829;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3832 = x3831 + x3828;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3833 = x3832 + x3827;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3834 = x3767 * x3806;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3835 = x3766 * x3807;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3836 = x3765 * x3808;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3837 = x3764 * x3809;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3838 = x3837 + x3836;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3839 = x3838 + x3835;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3840 = x3839 + x3834;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3841 = args[2][25 * steps + ((cycle - 0) & mask)];
        assert(x3841 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3842 = args[2][26 * steps + ((cycle - 0) & mask)];
        assert(x3842 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3843 = args[2][27 * steps + ((cycle - 0) & mask)];
        assert(x3843 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3844 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x3844 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3845 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x3845 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3846 = x3711 * x3841;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3847 = x3712 * x3841;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3848 = x3713 * x3841;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3849 = x3714 * x3841;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3850 = x3846 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3851 = x3720 * x3842;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3852 = x3721 * x3842;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3853 = x3722 * x3842;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3854 = x3723 * x3842;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3855 = x3850 + x3851;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3856 = x3847 + x3852;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3857 = x3848 + x3853;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3858 = x3849 + x3854;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3859 = x3732 * x3843;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3860 = x3733 * x3843;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3861 = x3734 * x3843;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3862 = x3735 * x3843;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3863 = x3855 + x3859;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3864 = x3856 + x3860;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3865 = x3857 + x3861;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3866 = x3858 + x3862;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3867 = x3744 * x3844;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3868 = x3745 * x3844;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3869 = x3746 * x3844;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3870 = x3747 * x3844;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3871 = x3863 + x3867;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3872 = x3864 + x3868;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3873 = x3865 + x3869;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3874 = x3866 + x3870;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3875 = x3756 * x3845;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3876 = x3757 * x3845;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3877 = x3758 * x3845;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3878 = x3759 * x3845;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3879 = x3871 + x3875;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3880 = x3872 + x3876;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3881 = x3873 + x3877;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3882 = x3874 + x3878;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3883 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x3883 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3884 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x3884 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3885 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x3885 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3886 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x3886 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3887 = args[2][34 * steps + ((cycle - 0) & mask)];
        assert(x3887 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3888 = x3711 * x3883;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3889 = x3712 * x3883;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3890 = x3713 * x3883;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3891 = x3714 * x3883;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3892 = x3888 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3893 = x3720 * x3884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3894 = x3721 * x3884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3895 = x3722 * x3884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3896 = x3723 * x3884;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3897 = x3892 + x3893;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3898 = x3889 + x3894;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3899 = x3890 + x3895;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3900 = x3891 + x3896;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3901 = x3732 * x3885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3902 = x3733 * x3885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3903 = x3734 * x3885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3904 = x3735 * x3885;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3905 = x3897 + x3901;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3906 = x3898 + x3902;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3907 = x3899 + x3903;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3908 = x3900 + x3904;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3909 = x3744 * x3886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3910 = x3745 * x3886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3911 = x3746 * x3886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3912 = x3747 * x3886;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3913 = x3905 + x3909;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3914 = x3906 + x3910;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3915 = x3907 + x3911;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3916 = x3908 + x3912;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3917 = x3756 * x3887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3918 = x3757 * x3887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3919 = x3758 * x3887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3920 = x3759 * x3887;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3921 = x3913 + x3917;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3922 = x3914 + x3918;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3923 = x3915 + x3919;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3924 = x3916 + x3920;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3925 = x3882 * x3922;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3926 = x3881 * x3923;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3927 = x3880 * x3924;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3928 = x3927 + x3926;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3929 = x3928 + x3925;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3930 = x3929 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3931 = x3879 * x3921;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3932 = x3931 + x3930;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3933 = x3882 * x3923;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3934 = x3881 * x3924;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3935 = x3934 + x3933;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3936 = x3935 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3937 = x3880 * x3921;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3938 = x3879 * x3922;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3939 = x3938 + x3937;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3940 = x3939 + x3936;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3941 = x3882 * x3924;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3942 = x3941 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3943 = x3881 * x3921;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3944 = x3880 * x3922;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3945 = x3879 * x3923;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3946 = x3945 + x3944;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3947 = x3946 + x3943;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3948 = x3947 + x3942;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3949 = x3882 * x3921;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3950 = x3881 * x3922;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3951 = x3880 * x3923;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3952 = x3879 * x3924;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3953 = x3952 + x3951;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3954 = x3953 + x3950;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x3955 = x3954 + x3949;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3956 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x3956 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3957 = args[2][36 * steps + ((cycle - 0) & mask)];
        assert(x3957 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3958 = args[2][37 * steps + ((cycle - 0) & mask)];
        assert(x3958 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3959 = args[2][38 * steps + ((cycle - 0) & mask)];
        assert(x3959 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3960 = args[2][39 * steps + ((cycle - 0) & mask)];
        assert(x3960 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3961 = x3711 * x3956;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3962 = x3712 * x3956;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3963 = x3713 * x3956;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3964 = x3714 * x3956;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3965 = x3961 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3966 = x3720 * x3957;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3967 = x3721 * x3957;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3968 = x3722 * x3957;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3969 = x3723 * x3957;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3970 = x3965 + x3966;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3971 = x3962 + x3967;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3972 = x3963 + x3968;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3973 = x3964 + x3969;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3974 = x3732 * x3958;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3975 = x3733 * x3958;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3976 = x3734 * x3958;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3977 = x3735 * x3958;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3978 = x3970 + x3974;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3979 = x3971 + x3975;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3980 = x3972 + x3976;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3981 = x3973 + x3977;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3982 = x3744 * x3959;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3983 = x3745 * x3959;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3984 = x3746 * x3959;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3985 = x3747 * x3959;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3986 = x3978 + x3982;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3987 = x3979 + x3983;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3988 = x3980 + x3984;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3989 = x3981 + x3985;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3990 = x3756 * x3960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3991 = x3757 * x3960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3992 = x3758 * x3960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3993 = x3759 * x3960;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3994 = x3986 + x3990;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3995 = x3987 + x3991;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3996 = x3988 + x3992;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x3997 = x3989 + x3993;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x3998 = args[2][40 * steps + ((cycle - 0) & mask)];
        assert(x3998 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x3999 = args[2][41 * steps + ((cycle - 0) & mask)];
        assert(x3999 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4000 = args[2][42 * steps + ((cycle - 0) & mask)];
        assert(x4000 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4001 = args[2][43 * steps + ((cycle - 0) & mask)];
        assert(x4001 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4002 = args[2][44 * steps + ((cycle - 0) & mask)];
        assert(x4002 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4003 = x3711 * x3998;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4004 = x3712 * x3998;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4005 = x3713 * x3998;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4006 = x3714 * x3998;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4007 = x4003 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4008 = x3720 * x3999;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4009 = x3721 * x3999;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4010 = x3722 * x3999;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4011 = x3723 * x3999;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4012 = x4007 + x4008;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4013 = x4004 + x4009;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4014 = x4005 + x4010;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4015 = x4006 + x4011;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4016 = x3732 * x4000;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4017 = x3733 * x4000;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4018 = x3734 * x4000;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4019 = x3735 * x4000;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4020 = x4012 + x4016;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4021 = x4013 + x4017;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4022 = x4014 + x4018;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4023 = x4015 + x4019;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4024 = x3744 * x4001;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4025 = x3745 * x4001;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4026 = x3746 * x4001;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4027 = x3747 * x4001;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4028 = x4020 + x4024;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4029 = x4021 + x4025;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4030 = x4022 + x4026;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4031 = x4023 + x4027;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4032 = x3756 * x4002;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4033 = x3757 * x4002;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4034 = x3758 * x4002;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4035 = x3759 * x4002;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4036 = x4028 + x4032;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4037 = x4029 + x4033;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4038 = x4030 + x4034;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4039 = x4031 + x4035;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4040 = x3997 * x4037;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4041 = x3996 * x4038;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4042 = x3995 * x4039;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4043 = x4042 + x4041;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4044 = x4043 + x4040;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4045 = x4044 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4046 = x3994 * x4036;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4047 = x4046 + x4045;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4048 = x3997 * x4038;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4049 = x3996 * x4039;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4050 = x4049 + x4048;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4051 = x4050 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4052 = x3995 * x4036;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4053 = x3994 * x4037;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4054 = x4053 + x4052;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4055 = x4054 + x4051;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4056 = x3997 * x4039;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4057 = x4056 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4058 = x3996 * x4036;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4059 = x3995 * x4037;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4060 = x3994 * x4038;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4061 = x4060 + x4059;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4062 = x4061 + x4058;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4063 = x4062 + x4057;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4064 = x3997 * x4036;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4065 = x3996 * x4037;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4066 = x3995 * x4038;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4067 = x3994 * x4039;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4068 = x4067 + x4066;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4069 = x4068 + x4065;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4070 = x4069 + x4064;
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x4071 = args[2][45 * steps + ((cycle - 0) & mask)];
        assert(x4071 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4072 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x4072 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4073 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x4073 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4074 = args[2][48 * steps + ((cycle - 0) & mask)];
        assert(x4074 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4075 = args[2][49 * steps + ((cycle - 0) & mask)];
        assert(x4075 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4076 = x3711 * x4071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4077 = x3712 * x4071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4078 = x3713 * x4071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4079 = x3714 * x4071;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4080 = x4076 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4081 = x3720 * x4072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4082 = x3721 * x4072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4083 = x3722 * x4072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4084 = x3723 * x4072;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4085 = x4080 + x4081;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4086 = x4077 + x4082;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4087 = x4078 + x4083;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4088 = x4079 + x4084;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4089 = x3732 * x4073;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4090 = x3733 * x4073;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4091 = x3734 * x4073;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4092 = x3735 * x4073;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4093 = x4085 + x4089;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4094 = x4086 + x4090;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4095 = x4087 + x4091;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4096 = x4088 + x4092;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4097 = x3744 * x4074;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4098 = x3745 * x4074;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4099 = x3746 * x4074;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4100 = x3747 * x4074;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4101 = x4093 + x4097;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4102 = x4094 + x4098;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4103 = x4095 + x4099;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4104 = x4096 + x4100;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4105 = x3756 * x4075;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4106 = x3757 * x4075;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4107 = x3758 * x4075;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4108 = x3759 * x4075;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4109 = x4101 + x4105;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4110 = x4102 + x4106;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4111 = x4103 + x4107;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4112 = x4104 + x4108;
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
        auto x4113 = args[2][0 * steps + ((cycle - 0) & mask)];
        assert(x4113 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4114 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x4114 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4115 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x4115 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4116 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x4116 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
        auto x4117 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x4117 != Fp::invalid());
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4118 = x3711 * x4113;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4119 = x3712 * x4113;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4120 = x3713 * x4113;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4121 = x3714 * x4113;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4122 = x4118 + x2;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4123 = x3720 * x4114;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4124 = x3721 * x4114;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4125 = x3722 * x4114;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4126 = x3723 * x4114;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4127 = x4122 + x4123;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4128 = x4119 + x4124;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4129 = x4120 + x4125;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4130 = x4121 + x4126;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4131 = x3732 * x4115;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4132 = x3733 * x4115;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4133 = x3734 * x4115;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4134 = x3735 * x4115;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4135 = x4127 + x4131;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4136 = x4128 + x4132;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4137 = x4129 + x4133;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4138 = x4130 + x4134;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4139 = x3744 * x4116;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4140 = x3745 * x4116;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4141 = x3746 * x4116;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4142 = x3747 * x4116;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4143 = x4135 + x4139;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4144 = x4136 + x4140;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4145 = x4137 + x4141;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4146 = x4138 + x4142;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4147 = x3756 * x4117;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4148 = x3757 * x4117;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4149 = x3758 * x4117;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4150 = x3759 * x4117;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4151 = x4143 + x4147;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4152 = x4144 + x4148;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4153 = x4145 + x4149;
        // loc("./zirgen/components/plonk.h":218:0)
        auto x4154 = x4146 + x4150;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4155 = x4112 * x4152;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4156 = x4111 * x4153;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4157 = x4110 * x4154;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4158 = x4157 + x4156;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4159 = x4158 + x4155;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4160 = x4159 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4161 = x4109 * x4151;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4162 = x4161 + x4160;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4163 = x4112 * x4153;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4164 = x4111 * x4154;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4165 = x4164 + x4163;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4166 = x4165 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4167 = x4110 * x4151;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4168 = x4109 * x4152;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4169 = x4168 + x4167;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4170 = x4169 + x4166;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4171 = x4112 * x4154;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4172 = x4171 * x0;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4173 = x4111 * x4151;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4174 = x4110 * x4152;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4175 = x4109 * x4153;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4176 = x4175 + x4174;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4177 = x4176 + x4173;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4178 = x4177 + x4172;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4179 = x4112 * x4151;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4180 = x4111 * x4152;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4181 = x4110 * x4153;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4182 = x4109 * x4154;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4183 = x4182 + x4181;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4184 = x4183 + x4180;
        // loc("./zirgen/components/plonk.h":220:0)
        auto x4185 = x4184 + x4179;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4186 = x4063 * x4063;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4187 = x4070 + x4070;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4188 = x4055 * x4187;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4189 = x4188 - x4186;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4190 = x4189 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4191 = x4047 * x4047;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4192 = x4191 + x4190;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4193 = x4070 * x4070;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4194 = x4193 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4195 = x4055 * x4055;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4196 = x4063 + x4063;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4197 = x4047 * x4196;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4198 = x4197 - x4195;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4199 = x4198 + x4194;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4200 = x4199 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4201 = x4200 * x4199;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4202 = x4192 * x4192;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4203 = x4202 + x4201;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4204 = inv(x4203);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4205 = x4192 * x4204;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4206 = x4199 * x4204;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4207 = x4063 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4208 = x4207 * x4206;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4209 = x4047 * x4205;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4210 = x4209 + x4208;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4211 = x4070 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4212 = x4211 * x4206;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4213 = -x4055;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4214 = x4213 * x4205;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4215 = x4214 - x4212;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4216 = x4063 * x4205;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4217 = -x4047;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4218 = x4217 * x4206;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4219 = x4218 + x4216;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4220 = x4070 * x4205;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4221 = x4055 * x4206;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4222 = x4221 - x4220;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4223 = x3840 * x4215;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4224 = x3833 * x4219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4225 = x3825 * x4222;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4226 = x4225 + x4224;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4227 = x4226 + x4223;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4228 = x4227 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4229 = x3817 * x4210;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4230 = x4229 + x4228;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4231 = x3840 * x4219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4232 = x3833 * x4222;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4233 = x4232 + x4231;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4234 = x4233 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4235 = x3825 * x4210;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4236 = x3817 * x4215;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4237 = x4236 + x4235;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4238 = x4237 + x4234;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4239 = x3840 * x4222;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4240 = x4239 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4241 = x3833 * x4210;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4242 = x3825 * x4215;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4243 = x3817 * x4219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4244 = x4243 + x4242;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4245 = x4244 + x4241;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4246 = x4245 + x4240;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4247 = x3840 * x4210;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4248 = x3833 * x4215;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4249 = x3825 * x4219;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4250 = x3817 * x4222;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4251 = x4250 + x4249;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4252 = x4251 + x4248;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4253 = x4252 + x4247;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4254 = x4178 * x4178;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4255 = x4185 + x4185;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4256 = x4170 * x4255;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4257 = x4256 - x4254;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4258 = x4257 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4259 = x4162 * x4162;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4260 = x4259 + x4258;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4261 = x4185 * x4185;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4262 = x4261 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4263 = x4170 * x4170;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4264 = x4178 + x4178;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4265 = x4162 * x4264;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4266 = x4265 - x4263;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4267 = x4266 + x4262;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4268 = x4267 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4269 = x4268 * x4267;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4270 = x4260 * x4260;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4271 = x4270 + x4269;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4272 = inv(x4271);
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4273 = x4260 * x4272;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4274 = x4267 * x4272;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4275 = x4178 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4276 = x4275 * x4274;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4277 = x4162 * x4273;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4278 = x4277 + x4276;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4279 = x4185 * x1;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4280 = x4279 * x4274;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4281 = -x4170;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4282 = x4281 * x4273;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4283 = x4282 - x4280;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4284 = x4178 * x4273;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4285 = -x4162;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4286 = x4285 * x4274;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4287 = x4286 + x4284;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4288 = x4185 * x4273;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4289 = x4170 * x4274;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4290 = x4289 - x4288;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4291 = x4253 * x3940;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4292 = x4246 * x3948;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4293 = x4238 * x3955;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4294 = x4293 + x4292;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4295 = x4294 + x4291;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4296 = x4295 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4297 = x4230 * x3932;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4298 = x4297 + x4296;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4299 = x4253 * x3948;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4300 = x4246 * x3955;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4301 = x4300 + x4299;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4302 = x4301 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4303 = x4238 * x3932;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4304 = x4230 * x3940;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4305 = x4304 + x4303;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4306 = x4305 + x4302;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4307 = x4253 * x3955;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4308 = x4307 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4309 = x4246 * x3932;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4310 = x4238 * x3940;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4311 = x4230 * x3948;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4312 = x4311 + x4310;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4313 = x4312 + x4309;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4314 = x4313 + x4308;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4315 = x4253 * x3932;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4316 = x4246 * x3940;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4317 = x4238 * x3948;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4318 = x4230 * x3955;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4319 = x4318 + x4317;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4320 = x4319 + x4316;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4321 = x4320 + x4315;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4322 = x4321 * x4283;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4323 = x4314 * x4287;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4324 = x4306 * x4290;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4325 = x4324 + x4323;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4326 = x4325 + x4322;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4327 = x4326 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4328 = x4298 * x4278;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4329 = x4328 + x4327;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4330 = x4321 * x4287;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4331 = x4314 * x4290;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4332 = x4331 + x4330;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4333 = x4332 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4334 = x4306 * x4278;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4335 = x4298 * x4283;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4336 = x4335 + x4334;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4337 = x4336 + x4333;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4338 = x4321 * x4290;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4339 = x4338 * x0;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4340 = x4314 * x4278;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4341 = x4306 * x4283;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4342 = x4298 * x4287;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4343 = x4342 + x4341;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4344 = x4343 + x4340;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4345 = x4344 + x4339;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4346 = x4321 * x4278;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4347 = x4314 * x4283;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4348 = x4306 * x4287;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4349 = x4298 * x4290;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4350 = x4349 + x4348;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4351 = x4350 + x4347;
        // loc("./zirgen/components/plonk.h":262:0)
        auto x4352 = x4351 + x4346;
        host_args.at(0) = x4329;
        host_args.at(1) = x4337;
        host_args.at(2) = x4345;
        host_args.at(3) = x4352;
        host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
      }
    }
  }
  if (x6 != 0) {
    {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4353 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x4353 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4354 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x4354 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4355 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x4355 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4356 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x4356 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4357 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x4357 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4358 = args[3][0];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4359 = args[3][1];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4360 = args[3][2];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4361 = args[3][3];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4362 = x4358 * x4353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4363 = x4359 * x4353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4364 = x4360 * x4353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4365 = x4361 * x4353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4366 = x4362 + x2;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4367 = args[3][4];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4368 = args[3][5];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4369 = args[3][6];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4370 = args[3][7];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4371 = x4367 * x4354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4372 = x4368 * x4354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4373 = x4369 * x4354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4374 = x4370 * x4354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4375 = x4366 + x4371;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4376 = x4363 + x4372;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4377 = x4364 + x4373;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4378 = x4365 + x4374;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4379 = args[3][8];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4380 = args[3][9];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4381 = args[3][10];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4382 = args[3][11];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4383 = x4379 * x4355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4384 = x4380 * x4355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4385 = x4381 * x4355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4386 = x4382 * x4355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4387 = x4375 + x4383;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4388 = x4376 + x4384;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4389 = x4377 + x4385;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4390 = x4378 + x4386;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4391 = args[3][12];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4392 = args[3][13];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4393 = args[3][14];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4394 = args[3][15];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4395 = x4391 * x4356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4396 = x4392 * x4356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4397 = x4393 * x4356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4398 = x4394 * x4356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4399 = x4387 + x4395;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4400 = x4388 + x4396;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4401 = x4389 + x4397;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4402 = x4390 + x4398;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4403 = args[3][16];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4404 = args[3][17];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4405 = args[3][18];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x4406 = args[3][19];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4407 = x4403 * x4357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4408 = x4404 * x4357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4409 = x4405 * x4357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4410 = x4406 * x4357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4411 = x4399 + x4407;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4412 = x4400 + x4408;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4413 = x4401 + x4409;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4414 = x4402 + x4410;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4415 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x4415 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4416 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x4416 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4417 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x4417 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4418 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x4418 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4419 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x4419 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4420 = x4358 * x4415;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4421 = x4359 * x4415;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4422 = x4360 * x4415;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4423 = x4361 * x4415;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4424 = x4420 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4425 = x4367 * x4416;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4426 = x4368 * x4416;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4427 = x4369 * x4416;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4428 = x4370 * x4416;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4429 = x4424 + x4425;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4430 = x4421 + x4426;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4431 = x4422 + x4427;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4432 = x4423 + x4428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4433 = x4379 * x4417;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4434 = x4380 * x4417;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4435 = x4381 * x4417;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4436 = x4382 * x4417;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4437 = x4429 + x4433;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4438 = x4430 + x4434;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4439 = x4431 + x4435;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4440 = x4432 + x4436;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4441 = x4391 * x4418;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4442 = x4392 * x4418;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4443 = x4393 * x4418;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4444 = x4394 * x4418;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4445 = x4437 + x4441;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4446 = x4438 + x4442;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4447 = x4439 + x4443;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4448 = x4440 + x4444;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4449 = x4403 * x4419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4450 = x4404 * x4419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4451 = x4405 * x4419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4452 = x4406 * x4419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4453 = x4445 + x4449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4454 = x4446 + x4450;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4455 = x4447 + x4451;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4456 = x4448 + x4452;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4457 = x4414 * x4454;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4458 = x4413 * x4455;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4459 = x4412 * x4456;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4460 = x4459 + x4458;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4461 = x4460 + x4457;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4462 = x4461 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4463 = x4411 * x4453;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4464 = x4463 + x4462;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4465 = x4414 * x4455;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4466 = x4413 * x4456;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4467 = x4466 + x4465;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4468 = x4467 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4469 = x4412 * x4453;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4470 = x4411 * x4454;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4471 = x4470 + x4469;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4472 = x4471 + x4468;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4473 = x4414 * x4456;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4474 = x4473 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4475 = x4413 * x4453;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4476 = x4412 * x4454;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4477 = x4411 * x4455;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4478 = x4477 + x4476;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4479 = x4478 + x4475;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4480 = x4479 + x4474;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4481 = x4414 * x4453;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4482 = x4413 * x4454;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4483 = x4412 * x4455;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4484 = x4411 * x4456;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4485 = x4484 + x4483;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4486 = x4485 + x4482;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4487 = x4486 + x4481;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4488 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x4488 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4489 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x4489 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4490 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x4490 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4491 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x4491 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4492 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x4492 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4493 = x4358 * x4488;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4494 = x4359 * x4488;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4495 = x4360 * x4488;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4496 = x4361 * x4488;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4497 = x4493 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4498 = x4367 * x4489;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4499 = x4368 * x4489;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4500 = x4369 * x4489;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4501 = x4370 * x4489;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4502 = x4497 + x4498;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4503 = x4494 + x4499;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4504 = x4495 + x4500;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4505 = x4496 + x4501;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4506 = x4379 * x4490;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4507 = x4380 * x4490;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4508 = x4381 * x4490;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4509 = x4382 * x4490;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4510 = x4502 + x4506;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4511 = x4503 + x4507;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4512 = x4504 + x4508;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4513 = x4505 + x4509;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4514 = x4391 * x4491;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4515 = x4392 * x4491;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4516 = x4393 * x4491;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4517 = x4394 * x4491;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4518 = x4510 + x4514;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4519 = x4511 + x4515;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4520 = x4512 + x4516;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4521 = x4513 + x4517;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4522 = x4403 * x4492;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4523 = x4404 * x4492;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4524 = x4405 * x4492;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4525 = x4406 * x4492;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4526 = x4518 + x4522;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4527 = x4519 + x4523;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4528 = x4520 + x4524;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4529 = x4521 + x4525;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4530 = x4487 * x4527;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4531 = x4480 * x4528;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4532 = x4472 * x4529;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4533 = x4532 + x4531;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4534 = x4533 + x4530;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4535 = x4534 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4536 = x4464 * x4526;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4537 = x4536 + x4535;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4538 = x4487 * x4528;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4539 = x4480 * x4529;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4540 = x4539 + x4538;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4541 = x4540 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4542 = x4472 * x4526;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4543 = x4464 * x4527;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4544 = x4543 + x4542;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4545 = x4544 + x4541;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4546 = x4487 * x4529;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4547 = x4546 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4548 = x4480 * x4526;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4549 = x4472 * x4527;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4550 = x4464 * x4528;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4551 = x4550 + x4549;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4552 = x4551 + x4548;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4553 = x4552 + x4547;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4554 = x4487 * x4526;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4555 = x4480 * x4527;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4556 = x4472 * x4528;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4557 = x4464 * x4529;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4558 = x4557 + x4556;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4559 = x4558 + x4555;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4560 = x4559 + x4554;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4561 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x4561 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4562 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x4562 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4563 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x4563 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4564 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x4564 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4565 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x4565 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4566 = x4358 * x4561;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4567 = x4359 * x4561;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4568 = x4360 * x4561;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4569 = x4361 * x4561;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4570 = x4566 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4571 = x4367 * x4562;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4572 = x4368 * x4562;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4573 = x4369 * x4562;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4574 = x4370 * x4562;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4575 = x4570 + x4571;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4576 = x4567 + x4572;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4577 = x4568 + x4573;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4578 = x4569 + x4574;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4579 = x4379 * x4563;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4580 = x4380 * x4563;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4581 = x4381 * x4563;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4582 = x4382 * x4563;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4583 = x4575 + x4579;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4584 = x4576 + x4580;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4585 = x4577 + x4581;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4586 = x4578 + x4582;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4587 = x4391 * x4564;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4588 = x4392 * x4564;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4589 = x4393 * x4564;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4590 = x4394 * x4564;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4591 = x4583 + x4587;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4592 = x4584 + x4588;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4593 = x4585 + x4589;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4594 = x4586 + x4590;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4595 = x4403 * x4565;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4596 = x4404 * x4565;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4597 = x4405 * x4565;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4598 = x4406 * x4565;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4599 = x4591 + x4595;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4600 = x4592 + x4596;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4601 = x4593 + x4597;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4602 = x4594 + x4598;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4603 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x4603 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4604 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x4604 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4605 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x4605 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4606 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x4606 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4607 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x4607 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4608 = x4358 * x4603;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4609 = x4359 * x4603;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4610 = x4360 * x4603;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4611 = x4361 * x4603;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4612 = x4608 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4613 = x4367 * x4604;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4614 = x4368 * x4604;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4615 = x4369 * x4604;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4616 = x4370 * x4604;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4617 = x4612 + x4613;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4618 = x4609 + x4614;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4619 = x4610 + x4615;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4620 = x4611 + x4616;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4621 = x4379 * x4605;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4622 = x4380 * x4605;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4623 = x4381 * x4605;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4624 = x4382 * x4605;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4625 = x4617 + x4621;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4626 = x4618 + x4622;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4627 = x4619 + x4623;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4628 = x4620 + x4624;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4629 = x4391 * x4606;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4630 = x4392 * x4606;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4631 = x4393 * x4606;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4632 = x4394 * x4606;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4633 = x4625 + x4629;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4634 = x4626 + x4630;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4635 = x4627 + x4631;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4636 = x4628 + x4632;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4637 = x4403 * x4607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4638 = x4404 * x4607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4639 = x4405 * x4607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4640 = x4406 * x4607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4641 = x4633 + x4637;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4642 = x4634 + x4638;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4643 = x4635 + x4639;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4644 = x4636 + x4640;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4645 = x4602 * x4642;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4646 = x4601 * x4643;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4647 = x4600 * x4644;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4648 = x4647 + x4646;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4649 = x4648 + x4645;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4650 = x4649 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4651 = x4599 * x4641;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4652 = x4651 + x4650;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4653 = x4602 * x4643;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4654 = x4601 * x4644;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4655 = x4654 + x4653;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4656 = x4655 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4657 = x4600 * x4641;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4658 = x4599 * x4642;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4659 = x4658 + x4657;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4660 = x4659 + x4656;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4661 = x4602 * x4644;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4662 = x4661 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4663 = x4601 * x4641;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4664 = x4600 * x4642;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4665 = x4599 * x4643;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4666 = x4665 + x4664;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4667 = x4666 + x4663;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4668 = x4667 + x4662;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4669 = x4602 * x4641;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4670 = x4601 * x4642;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4671 = x4600 * x4643;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4672 = x4599 * x4644;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4673 = x4672 + x4671;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4674 = x4673 + x4670;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4675 = x4674 + x4669;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4676 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x4676 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4677 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x4677 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4678 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x4678 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4679 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x4679 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4680 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x4680 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4681 = x4358 * x4676;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4682 = x4359 * x4676;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4683 = x4360 * x4676;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4684 = x4361 * x4676;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4685 = x4681 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4686 = x4367 * x4677;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4687 = x4368 * x4677;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4688 = x4369 * x4677;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4689 = x4370 * x4677;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4690 = x4685 + x4686;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4691 = x4682 + x4687;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4692 = x4683 + x4688;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4693 = x4684 + x4689;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4694 = x4379 * x4678;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4695 = x4380 * x4678;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4696 = x4381 * x4678;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4697 = x4382 * x4678;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4698 = x4690 + x4694;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4699 = x4691 + x4695;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4700 = x4692 + x4696;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4701 = x4693 + x4697;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4702 = x4391 * x4679;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4703 = x4392 * x4679;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4704 = x4393 * x4679;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4705 = x4394 * x4679;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4706 = x4698 + x4702;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4707 = x4699 + x4703;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4708 = x4700 + x4704;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4709 = x4701 + x4705;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4710 = x4403 * x4680;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4711 = x4404 * x4680;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4712 = x4405 * x4680;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4713 = x4406 * x4680;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4714 = x4706 + x4710;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4715 = x4707 + x4711;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4716 = x4708 + x4712;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4717 = x4709 + x4713;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4718 = x4675 * x4715;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4719 = x4668 * x4716;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4720 = x4660 * x4717;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4721 = x4720 + x4719;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4722 = x4721 + x4718;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4723 = x4722 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4724 = x4652 * x4714;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4725 = x4724 + x4723;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4726 = x4675 * x4716;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4727 = x4668 * x4717;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4728 = x4727 + x4726;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4729 = x4728 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4730 = x4660 * x4714;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4731 = x4652 * x4715;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4732 = x4731 + x4730;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4733 = x4732 + x4729;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4734 = x4675 * x4717;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4735 = x4734 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4736 = x4668 * x4714;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4737 = x4660 * x4715;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4738 = x4652 * x4716;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4739 = x4738 + x4737;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4740 = x4739 + x4736;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4741 = x4740 + x4735;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4742 = x4675 * x4714;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4743 = x4668 * x4715;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4744 = x4660 * x4716;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4745 = x4652 * x4717;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4746 = x4745 + x4744;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4747 = x4746 + x4743;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4748 = x4747 + x4742;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4749 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x4749 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4750 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x4750 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4751 = args[2][37 * steps + ((cycle - 0) & mask)];
      assert(x4751 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4752 = args[2][38 * steps + ((cycle - 0) & mask)];
      assert(x4752 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4753 = args[2][39 * steps + ((cycle - 0) & mask)];
      assert(x4753 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4754 = x4358 * x4749;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4755 = x4359 * x4749;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4756 = x4360 * x4749;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4757 = x4361 * x4749;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4758 = x4754 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4759 = x4367 * x4750;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4760 = x4368 * x4750;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4761 = x4369 * x4750;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4762 = x4370 * x4750;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4763 = x4758 + x4759;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4764 = x4755 + x4760;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4765 = x4756 + x4761;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4766 = x4757 + x4762;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4767 = x4379 * x4751;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4768 = x4380 * x4751;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4769 = x4381 * x4751;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4770 = x4382 * x4751;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4771 = x4763 + x4767;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4772 = x4764 + x4768;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4773 = x4765 + x4769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4774 = x4766 + x4770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4775 = x4391 * x4752;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4776 = x4392 * x4752;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4777 = x4393 * x4752;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4778 = x4394 * x4752;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4779 = x4771 + x4775;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4780 = x4772 + x4776;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4781 = x4773 + x4777;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4782 = x4774 + x4778;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4783 = x4403 * x4753;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4784 = x4404 * x4753;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4785 = x4405 * x4753;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4786 = x4406 * x4753;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4787 = x4779 + x4783;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4788 = x4780 + x4784;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4789 = x4781 + x4785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4790 = x4782 + x4786;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4791 = args[2][40 * steps + ((cycle - 0) & mask)];
      assert(x4791 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4792 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x4792 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4793 = args[2][42 * steps + ((cycle - 0) & mask)];
      assert(x4793 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4794 = args[2][43 * steps + ((cycle - 0) & mask)];
      assert(x4794 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4795 = args[2][44 * steps + ((cycle - 0) & mask)];
      assert(x4795 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4796 = x4358 * x4791;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4797 = x4359 * x4791;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4798 = x4360 * x4791;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4799 = x4361 * x4791;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4800 = x4796 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4801 = x4367 * x4792;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4802 = x4368 * x4792;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4803 = x4369 * x4792;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4804 = x4370 * x4792;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4805 = x4800 + x4801;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4806 = x4797 + x4802;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4807 = x4798 + x4803;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4808 = x4799 + x4804;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4809 = x4379 * x4793;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4810 = x4380 * x4793;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4811 = x4381 * x4793;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4812 = x4382 * x4793;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4813 = x4805 + x4809;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4814 = x4806 + x4810;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4815 = x4807 + x4811;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4816 = x4808 + x4812;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4817 = x4391 * x4794;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4818 = x4392 * x4794;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4819 = x4393 * x4794;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4820 = x4394 * x4794;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4821 = x4813 + x4817;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4822 = x4814 + x4818;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4823 = x4815 + x4819;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4824 = x4816 + x4820;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4825 = x4403 * x4795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4826 = x4404 * x4795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4827 = x4405 * x4795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4828 = x4406 * x4795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4829 = x4821 + x4825;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4830 = x4822 + x4826;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4831 = x4823 + x4827;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4832 = x4824 + x4828;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4833 = x4790 * x4830;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4834 = x4789 * x4831;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4835 = x4788 * x4832;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4836 = x4835 + x4834;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4837 = x4836 + x4833;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4838 = x4837 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4839 = x4787 * x4829;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4840 = x4839 + x4838;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4841 = x4790 * x4831;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4842 = x4789 * x4832;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4843 = x4842 + x4841;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4844 = x4843 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4845 = x4788 * x4829;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4846 = x4787 * x4830;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4847 = x4846 + x4845;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4848 = x4847 + x4844;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4849 = x4790 * x4832;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4850 = x4849 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4851 = x4789 * x4829;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4852 = x4788 * x4830;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4853 = x4787 * x4831;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4854 = x4853 + x4852;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4855 = x4854 + x4851;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4856 = x4855 + x4850;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4857 = x4790 * x4829;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4858 = x4789 * x4830;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4859 = x4788 * x4831;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4860 = x4787 * x4832;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4861 = x4860 + x4859;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4862 = x4861 + x4858;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4863 = x4862 + x4857;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4864 = args[2][45 * steps + ((cycle - 0) & mask)];
      assert(x4864 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4865 = args[2][46 * steps + ((cycle - 0) & mask)];
      assert(x4865 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4866 = args[2][47 * steps + ((cycle - 0) & mask)];
      assert(x4866 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4867 = args[2][48 * steps + ((cycle - 0) & mask)];
      assert(x4867 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4868 = args[2][49 * steps + ((cycle - 0) & mask)];
      assert(x4868 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4869 = x4358 * x4864;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4870 = x4359 * x4864;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4871 = x4360 * x4864;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4872 = x4361 * x4864;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4873 = x4869 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4874 = x4367 * x4865;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4875 = x4368 * x4865;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4876 = x4369 * x4865;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4877 = x4370 * x4865;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4878 = x4873 + x4874;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4879 = x4870 + x4875;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4880 = x4871 + x4876;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4881 = x4872 + x4877;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4882 = x4379 * x4866;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4883 = x4380 * x4866;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4884 = x4381 * x4866;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4885 = x4382 * x4866;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4886 = x4878 + x4882;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4887 = x4879 + x4883;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4888 = x4880 + x4884;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4889 = x4881 + x4885;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4890 = x4391 * x4867;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4891 = x4392 * x4867;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4892 = x4393 * x4867;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4893 = x4394 * x4867;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4894 = x4886 + x4890;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4895 = x4887 + x4891;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4896 = x4888 + x4892;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4897 = x4889 + x4893;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4898 = x4403 * x4868;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4899 = x4404 * x4868;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4900 = x4405 * x4868;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4901 = x4406 * x4868;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4902 = x4894 + x4898;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4903 = x4895 + x4899;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4904 = x4896 + x4900;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4905 = x4897 + x4901;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4906 = x4863 * x4903;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4907 = x4856 * x4904;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4908 = x4848 * x4905;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4909 = x4908 + x4907;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4910 = x4909 + x4906;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4911 = x4910 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4912 = x4840 * x4902;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4913 = x4912 + x4911;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4914 = x4863 * x4904;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4915 = x4856 * x4905;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4916 = x4915 + x4914;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4917 = x4916 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4918 = x4848 * x4902;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4919 = x4840 * x4903;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4920 = x4919 + x4918;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4921 = x4920 + x4917;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4922 = x4863 * x4905;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4923 = x4922 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4924 = x4856 * x4902;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4925 = x4848 * x4903;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4926 = x4840 * x4904;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4927 = x4926 + x4925;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4928 = x4927 + x4924;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4929 = x4928 + x4923;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4930 = x4863 * x4902;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4931 = x4856 * x4903;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4932 = x4848 * x4904;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4933 = x4840 * x4905;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4934 = x4933 + x4932;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4935 = x4934 + x4931;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x4936 = x4935 + x4930;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4937 = args[2][50 * steps + ((cycle - 0) & mask)];
      assert(x4937 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4938 = args[2][51 * steps + ((cycle - 0) & mask)];
      assert(x4938 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4939 = args[2][52 * steps + ((cycle - 0) & mask)];
      assert(x4939 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4940 = args[2][53 * steps + ((cycle - 0) & mask)];
      assert(x4940 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4941 = args[2][54 * steps + ((cycle - 0) & mask)];
      assert(x4941 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4942 = x4358 * x4937;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4943 = x4359 * x4937;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4944 = x4360 * x4937;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4945 = x4361 * x4937;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4946 = x4942 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4947 = x4367 * x4938;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4948 = x4368 * x4938;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4949 = x4369 * x4938;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4950 = x4370 * x4938;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4951 = x4946 + x4947;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4952 = x4943 + x4948;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4953 = x4944 + x4949;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4954 = x4945 + x4950;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4955 = x4379 * x4939;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4956 = x4380 * x4939;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4957 = x4381 * x4939;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4958 = x4382 * x4939;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4959 = x4951 + x4955;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4960 = x4952 + x4956;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4961 = x4953 + x4957;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4962 = x4954 + x4958;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4963 = x4391 * x4940;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4964 = x4392 * x4940;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4965 = x4393 * x4940;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4966 = x4394 * x4940;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4967 = x4959 + x4963;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4968 = x4960 + x4964;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4969 = x4961 + x4965;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4970 = x4962 + x4966;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4971 = x4403 * x4941;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4972 = x4404 * x4941;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4973 = x4405 * x4941;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4974 = x4406 * x4941;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4975 = x4967 + x4971;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4976 = x4968 + x4972;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4977 = x4969 + x4973;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4978 = x4970 + x4974;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x4979 = args[2][55 * steps + ((cycle - 0) & mask)];
      assert(x4979 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4980 = args[2][56 * steps + ((cycle - 0) & mask)];
      assert(x4980 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4981 = args[2][57 * steps + ((cycle - 0) & mask)];
      assert(x4981 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4982 = args[2][58 * steps + ((cycle - 0) & mask)];
      assert(x4982 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x4983 = args[2][59 * steps + ((cycle - 0) & mask)];
      assert(x4983 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4984 = x4358 * x4979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4985 = x4359 * x4979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4986 = x4360 * x4979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4987 = x4361 * x4979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4988 = x4984 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4989 = x4367 * x4980;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4990 = x4368 * x4980;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4991 = x4369 * x4980;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4992 = x4370 * x4980;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4993 = x4988 + x4989;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4994 = x4985 + x4990;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4995 = x4986 + x4991;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4996 = x4987 + x4992;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4997 = x4379 * x4981;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4998 = x4380 * x4981;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x4999 = x4381 * x4981;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5000 = x4382 * x4981;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5001 = x4993 + x4997;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5002 = x4994 + x4998;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5003 = x4995 + x4999;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5004 = x4996 + x5000;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5005 = x4391 * x4982;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5006 = x4392 * x4982;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5007 = x4393 * x4982;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5008 = x4394 * x4982;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5009 = x5001 + x5005;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5010 = x5002 + x5006;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5011 = x5003 + x5007;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5012 = x5004 + x5008;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5013 = x4403 * x4983;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5014 = x4404 * x4983;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5015 = x4405 * x4983;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5016 = x4406 * x4983;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5017 = x5009 + x5013;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5018 = x5010 + x5014;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5019 = x5011 + x5015;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5020 = x5012 + x5016;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5021 = x4978 * x5018;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5022 = x4977 * x5019;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5023 = x4976 * x5020;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5024 = x5023 + x5022;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5025 = x5024 + x5021;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5026 = x5025 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5027 = x4975 * x5017;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5028 = x5027 + x5026;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5029 = x4978 * x5019;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5030 = x4977 * x5020;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5031 = x5030 + x5029;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5032 = x5031 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5033 = x4976 * x5017;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5034 = x4975 * x5018;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5035 = x5034 + x5033;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5036 = x5035 + x5032;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5037 = x4978 * x5020;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5038 = x5037 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5039 = x4977 * x5017;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5040 = x4976 * x5018;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5041 = x4975 * x5019;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5042 = x5041 + x5040;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5043 = x5042 + x5039;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5044 = x5043 + x5038;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5045 = x4978 * x5017;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5046 = x4977 * x5018;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5047 = x4976 * x5019;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5048 = x4975 * x5020;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5049 = x5048 + x5047;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5050 = x5049 + x5046;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5051 = x5050 + x5045;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5052 = args[2][60 * steps + ((cycle - 0) & mask)];
      assert(x5052 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5053 = args[2][61 * steps + ((cycle - 0) & mask)];
      assert(x5053 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5054 = args[2][62 * steps + ((cycle - 0) & mask)];
      assert(x5054 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5055 = args[2][63 * steps + ((cycle - 0) & mask)];
      assert(x5055 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5056 = args[2][64 * steps + ((cycle - 0) & mask)];
      assert(x5056 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5057 = x4358 * x5052;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5058 = x4359 * x5052;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5059 = x4360 * x5052;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5060 = x4361 * x5052;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5061 = x5057 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5062 = x4367 * x5053;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5063 = x4368 * x5053;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5064 = x4369 * x5053;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5065 = x4370 * x5053;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5066 = x5061 + x5062;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5067 = x5058 + x5063;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5068 = x5059 + x5064;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5069 = x5060 + x5065;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5070 = x4379 * x5054;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5071 = x4380 * x5054;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5072 = x4381 * x5054;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5073 = x4382 * x5054;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5074 = x5066 + x5070;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5075 = x5067 + x5071;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5076 = x5068 + x5072;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5077 = x5069 + x5073;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5078 = x4391 * x5055;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5079 = x4392 * x5055;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5080 = x4393 * x5055;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5081 = x4394 * x5055;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5082 = x5074 + x5078;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5083 = x5075 + x5079;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5084 = x5076 + x5080;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5085 = x5077 + x5081;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5086 = x4403 * x5056;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5087 = x4404 * x5056;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5088 = x4405 * x5056;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5089 = x4406 * x5056;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5090 = x5082 + x5086;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5091 = x5083 + x5087;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5092 = x5084 + x5088;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5093 = x5085 + x5089;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5094 = x5051 * x5091;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5095 = x5044 * x5092;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5096 = x5036 * x5093;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5097 = x5096 + x5095;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5098 = x5097 + x5094;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5099 = x5098 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5100 = x5028 * x5090;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5101 = x5100 + x5099;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5102 = x5051 * x5092;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5103 = x5044 * x5093;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5104 = x5103 + x5102;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5105 = x5104 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5106 = x5036 * x5090;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5107 = x5028 * x5091;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5108 = x5107 + x5106;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5109 = x5108 + x5105;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5110 = x5051 * x5093;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5111 = x5110 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5112 = x5044 * x5090;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5113 = x5036 * x5091;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5114 = x5028 * x5092;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5115 = x5114 + x5113;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5116 = x5115 + x5112;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5117 = x5116 + x5111;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5118 = x5051 * x5090;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5119 = x5044 * x5091;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5120 = x5036 * x5092;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5121 = x5028 * x5093;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5122 = x5121 + x5120;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5123 = x5122 + x5119;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5124 = x5123 + x5118;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5125 = args[2][65 * steps + ((cycle - 0) & mask)];
      assert(x5125 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5126 = args[2][66 * steps + ((cycle - 0) & mask)];
      assert(x5126 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5127 = args[2][67 * steps + ((cycle - 0) & mask)];
      assert(x5127 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5128 = args[2][68 * steps + ((cycle - 0) & mask)];
      assert(x5128 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5129 = args[2][69 * steps + ((cycle - 0) & mask)];
      assert(x5129 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5130 = x4358 * x5125;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5131 = x4359 * x5125;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5132 = x4360 * x5125;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5133 = x4361 * x5125;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5134 = x5130 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5135 = x4367 * x5126;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5136 = x4368 * x5126;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5137 = x4369 * x5126;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5138 = x4370 * x5126;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5139 = x5134 + x5135;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5140 = x5131 + x5136;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5141 = x5132 + x5137;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5142 = x5133 + x5138;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5143 = x4379 * x5127;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5144 = x4380 * x5127;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5145 = x4381 * x5127;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5146 = x4382 * x5127;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5147 = x5139 + x5143;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5148 = x5140 + x5144;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5149 = x5141 + x5145;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5150 = x5142 + x5146;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5151 = x4391 * x5128;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5152 = x4392 * x5128;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5153 = x4393 * x5128;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5154 = x4394 * x5128;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5155 = x5147 + x5151;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5156 = x5148 + x5152;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5157 = x5149 + x5153;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5158 = x5150 + x5154;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5159 = x4403 * x5129;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5160 = x4404 * x5129;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5161 = x4405 * x5129;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5162 = x4406 * x5129;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5163 = x5155 + x5159;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5164 = x5156 + x5160;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5165 = x5157 + x5161;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5166 = x5158 + x5162;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5167 = args[2][70 * steps + ((cycle - 0) & mask)];
      assert(x5167 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5168 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x5168 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5169 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x5169 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5170 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x5170 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5171 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x5171 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5172 = x4358 * x5167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5173 = x4359 * x5167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5174 = x4360 * x5167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5175 = x4361 * x5167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5176 = x5172 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5177 = x4367 * x5168;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5178 = x4368 * x5168;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5179 = x4369 * x5168;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5180 = x4370 * x5168;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5181 = x5176 + x5177;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5182 = x5173 + x5178;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5183 = x5174 + x5179;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5184 = x5175 + x5180;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5185 = x4379 * x5169;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5186 = x4380 * x5169;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5187 = x4381 * x5169;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5188 = x4382 * x5169;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5189 = x5181 + x5185;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5190 = x5182 + x5186;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5191 = x5183 + x5187;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5192 = x5184 + x5188;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5193 = x4391 * x5170;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5194 = x4392 * x5170;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5195 = x4393 * x5170;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5196 = x4394 * x5170;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5197 = x5189 + x5193;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5198 = x5190 + x5194;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5199 = x5191 + x5195;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5200 = x5192 + x5196;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5201 = x4403 * x5171;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5202 = x4404 * x5171;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5203 = x4405 * x5171;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5204 = x4406 * x5171;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5205 = x5197 + x5201;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5206 = x5198 + x5202;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5207 = x5199 + x5203;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5208 = x5200 + x5204;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5209 = x5166 * x5206;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5210 = x5165 * x5207;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5211 = x5164 * x5208;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5212 = x5211 + x5210;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5213 = x5212 + x5209;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5214 = x5213 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5215 = x5163 * x5205;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5216 = x5215 + x5214;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5217 = x5166 * x5207;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5218 = x5165 * x5208;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5219 = x5218 + x5217;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5220 = x5219 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5221 = x5164 * x5205;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5222 = x5163 * x5206;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5223 = x5222 + x5221;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5224 = x5223 + x5220;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5225 = x5166 * x5208;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5226 = x5225 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5227 = x5165 * x5205;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5228 = x5164 * x5206;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5229 = x5163 * x5207;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5230 = x5229 + x5228;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5231 = x5230 + x5227;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5232 = x5231 + x5226;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5233 = x5166 * x5205;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5234 = x5165 * x5206;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5235 = x5164 * x5207;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5236 = x5163 * x5208;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5237 = x5236 + x5235;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5238 = x5237 + x5234;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5239 = x5238 + x5233;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5240 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x5240 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5241 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x5241 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5242 = args[2][77 * steps + ((cycle - 0) & mask)];
      assert(x5242 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5243 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x5243 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5244 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x5244 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5245 = x4358 * x5240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5246 = x4359 * x5240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5247 = x4360 * x5240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5248 = x4361 * x5240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5249 = x5245 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5250 = x4367 * x5241;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5251 = x4368 * x5241;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5252 = x4369 * x5241;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5253 = x4370 * x5241;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5254 = x5249 + x5250;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5255 = x5246 + x5251;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5256 = x5247 + x5252;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5257 = x5248 + x5253;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5258 = x4379 * x5242;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5259 = x4380 * x5242;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5260 = x4381 * x5242;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5261 = x4382 * x5242;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5262 = x5254 + x5258;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5263 = x5255 + x5259;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5264 = x5256 + x5260;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5265 = x5257 + x5261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5266 = x4391 * x5243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5267 = x4392 * x5243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5268 = x4393 * x5243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5269 = x4394 * x5243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5270 = x5262 + x5266;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5271 = x5263 + x5267;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5272 = x5264 + x5268;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5273 = x5265 + x5269;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5274 = x4403 * x5244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5275 = x4404 * x5244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5276 = x4405 * x5244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5277 = x4406 * x5244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5278 = x5270 + x5274;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5279 = x5271 + x5275;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5280 = x5272 + x5276;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5281 = x5273 + x5277;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5282 = x5239 * x5279;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5283 = x5232 * x5280;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5284 = x5224 * x5281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5285 = x5284 + x5283;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5286 = x5285 + x5282;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5287 = x5286 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5288 = x5216 * x5278;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5289 = x5288 + x5287;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5290 = x5239 * x5280;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5291 = x5232 * x5281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5292 = x5291 + x5290;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5293 = x5292 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5294 = x5224 * x5278;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5295 = x5216 * x5279;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5296 = x5295 + x5294;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5297 = x5296 + x5293;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5298 = x5239 * x5281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5299 = x5298 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5300 = x5232 * x5278;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5301 = x5224 * x5279;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5302 = x5216 * x5280;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5303 = x5302 + x5301;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5304 = x5303 + x5300;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5305 = x5304 + x5299;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5306 = x5239 * x5278;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5307 = x5232 * x5279;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5308 = x5224 * x5280;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5309 = x5216 * x5281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5310 = x5309 + x5308;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5311 = x5310 + x5307;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5312 = x5311 + x5306;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5313 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x5313 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5314 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x5314 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5315 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x5315 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5316 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x5316 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5317 = args[2][84 * steps + ((cycle - 0) & mask)];
      assert(x5317 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5318 = x4358 * x5313;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5319 = x4359 * x5313;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5320 = x4360 * x5313;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5321 = x4361 * x5313;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5322 = x5318 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5323 = x4367 * x5314;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5324 = x4368 * x5314;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5325 = x4369 * x5314;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5326 = x4370 * x5314;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5327 = x5322 + x5323;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5328 = x5319 + x5324;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5329 = x5320 + x5325;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5330 = x5321 + x5326;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5331 = x4379 * x5315;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5332 = x4380 * x5315;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5333 = x4381 * x5315;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5334 = x4382 * x5315;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5335 = x5327 + x5331;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5336 = x5328 + x5332;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5337 = x5329 + x5333;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5338 = x5330 + x5334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5339 = x4391 * x5316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5340 = x4392 * x5316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5341 = x4393 * x5316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5342 = x4394 * x5316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5343 = x5335 + x5339;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5344 = x5336 + x5340;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5345 = x5337 + x5341;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5346 = x5338 + x5342;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5347 = x4403 * x5317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5348 = x4404 * x5317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5349 = x4405 * x5317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5350 = x4406 * x5317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5351 = x5343 + x5347;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5352 = x5344 + x5348;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5353 = x5345 + x5349;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5354 = x5346 + x5350;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5355 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x5355 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5356 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x5356 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5357 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x5357 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5358 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x5358 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5359 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x5359 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5360 = x4358 * x5355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5361 = x4359 * x5355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5362 = x4360 * x5355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5363 = x4361 * x5355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5364 = x5360 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5365 = x4367 * x5356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5366 = x4368 * x5356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5367 = x4369 * x5356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5368 = x4370 * x5356;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5369 = x5364 + x5365;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5370 = x5361 + x5366;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5371 = x5362 + x5367;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5372 = x5363 + x5368;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5373 = x4379 * x5357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5374 = x4380 * x5357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5375 = x4381 * x5357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5376 = x4382 * x5357;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5377 = x5369 + x5373;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5378 = x5370 + x5374;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5379 = x5371 + x5375;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5380 = x5372 + x5376;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5381 = x4391 * x5358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5382 = x4392 * x5358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5383 = x4393 * x5358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5384 = x4394 * x5358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5385 = x5377 + x5381;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5386 = x5378 + x5382;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5387 = x5379 + x5383;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5388 = x5380 + x5384;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5389 = x4403 * x5359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5390 = x4404 * x5359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5391 = x4405 * x5359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5392 = x4406 * x5359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5393 = x5385 + x5389;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5394 = x5386 + x5390;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5395 = x5387 + x5391;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5396 = x5388 + x5392;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5397 = x5354 * x5394;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5398 = x5353 * x5395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5399 = x5352 * x5396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5400 = x5399 + x5398;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5401 = x5400 + x5397;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5402 = x5401 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5403 = x5351 * x5393;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5404 = x5403 + x5402;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5405 = x5354 * x5395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5406 = x5353 * x5396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5407 = x5406 + x5405;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5408 = x5407 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5409 = x5352 * x5393;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5410 = x5351 * x5394;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5411 = x5410 + x5409;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5412 = x5411 + x5408;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5413 = x5354 * x5396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5414 = x5413 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5415 = x5353 * x5393;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5416 = x5352 * x5394;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5417 = x5351 * x5395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5418 = x5417 + x5416;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5419 = x5418 + x5415;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5420 = x5419 + x5414;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5421 = x5354 * x5393;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5422 = x5353 * x5394;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5423 = x5352 * x5395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5424 = x5351 * x5396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5425 = x5424 + x5423;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5426 = x5425 + x5422;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5427 = x5426 + x5421;
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5428 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x5428 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5429 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x5429 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5430 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x5430 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5431 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x5431 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5432 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x5432 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5433 = x4358 * x5428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5434 = x4359 * x5428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5435 = x4360 * x5428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5436 = x4361 * x5428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5437 = x5433 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5438 = x4367 * x5429;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5439 = x4368 * x5429;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5440 = x4369 * x5429;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5441 = x4370 * x5429;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5442 = x5437 + x5438;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5443 = x5434 + x5439;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5444 = x5435 + x5440;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5445 = x5436 + x5441;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5446 = x4379 * x5430;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5447 = x4380 * x5430;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5448 = x4381 * x5430;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5449 = x4382 * x5430;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5450 = x5442 + x5446;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5451 = x5443 + x5447;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5452 = x5444 + x5448;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5453 = x5445 + x5449;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5454 = x4391 * x5431;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5455 = x4392 * x5431;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5456 = x4393 * x5431;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5457 = x4394 * x5431;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5458 = x5450 + x5454;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5459 = x5451 + x5455;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5460 = x5452 + x5456;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5461 = x5453 + x5457;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5462 = x4403 * x5432;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5463 = x4404 * x5432;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5464 = x4405 * x5432;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5465 = x4406 * x5432;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5466 = x5458 + x5462;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5467 = x5459 + x5463;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5468 = x5460 + x5464;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5469 = x5461 + x5465;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5470 = x5427 * x5467;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5471 = x5420 * x5468;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5472 = x5412 * x5469;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5473 = x5472 + x5471;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5474 = x5473 + x5470;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5475 = x5474 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5476 = x5404 * x5466;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5477 = x5476 + x5475;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5478 = x5427 * x5468;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5479 = x5420 * x5469;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5480 = x5479 + x5478;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5481 = x5480 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5482 = x5412 * x5466;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5483 = x5404 * x5467;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5484 = x5483 + x5482;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5485 = x5484 + x5481;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5486 = x5427 * x5469;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5487 = x5486 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5488 = x5420 * x5466;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5489 = x5412 * x5467;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5490 = x5404 * x5468;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5491 = x5490 + x5489;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5492 = x5491 + x5488;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5493 = x5492 + x5487;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5494 = x5427 * x5466;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5495 = x5420 * x5467;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5496 = x5412 * x5468;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5497 = x5404 * x5469;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5498 = x5497 + x5496;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5499 = x5498 + x5495;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5500 = x5499 + x5494;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5501 = x5117 * x5117;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5502 = x5124 + x5124;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5503 = x5109 * x5502;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5504 = x5503 - x5501;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5505 = x5504 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5506 = x5101 * x5101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5507 = x5506 + x5505;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5508 = x5124 * x5124;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5509 = x5508 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5510 = x5109 * x5109;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5511 = x5117 + x5117;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5512 = x5101 * x5511;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5513 = x5512 - x5510;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5514 = x5513 + x5509;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5515 = x5514 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5516 = x5515 * x5514;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5517 = x5507 * x5507;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5518 = x5517 + x5516;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5519 = inv(x5518);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5520 = x5507 * x5519;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5521 = x5514 * x5519;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5522 = x5117 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5523 = x5522 * x5521;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5524 = x5101 * x5520;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5525 = x5524 + x5523;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5526 = x5124 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5527 = x5526 * x5521;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5528 = -x5109;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5529 = x5528 * x5520;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5530 = x5529 - x5527;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5531 = x5117 * x5520;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5532 = -x5101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5533 = x5532 * x5521;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5534 = x5533 + x5531;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5535 = x5124 * x5520;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5536 = x5109 * x5521;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5537 = x5536 - x5535;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5538 = x4560 * x5530;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5539 = x4553 * x5534;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5540 = x4545 * x5537;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5541 = x5540 + x5539;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5542 = x5541 + x5538;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5543 = x5542 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5544 = x4537 * x5525;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5545 = x5544 + x5543;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5546 = x4560 * x5534;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5547 = x4553 * x5537;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5548 = x5547 + x5546;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5549 = x5548 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5550 = x4545 * x5525;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5551 = x4537 * x5530;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5552 = x5551 + x5550;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5553 = x5552 + x5549;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5554 = x4560 * x5537;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5555 = x5554 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5556 = x4553 * x5525;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5557 = x4545 * x5530;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5558 = x4537 * x5534;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5559 = x5558 + x5557;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5560 = x5559 + x5556;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5561 = x5560 + x5555;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5562 = x4560 * x5525;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5563 = x4553 * x5530;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5564 = x4545 * x5534;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5565 = x4537 * x5537;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5566 = x5565 + x5564;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5567 = x5566 + x5563;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5568 = x5567 + x5562;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5569 = x5305 * x5305;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5570 = x5312 + x5312;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5571 = x5297 * x5570;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5572 = x5571 - x5569;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5573 = x5572 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5574 = x5289 * x5289;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5575 = x5574 + x5573;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5576 = x5312 * x5312;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5577 = x5576 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5578 = x5297 * x5297;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5579 = x5305 + x5305;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5580 = x5289 * x5579;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5581 = x5580 - x5578;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5582 = x5581 + x5577;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5583 = x5582 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5584 = x5583 * x5582;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5585 = x5575 * x5575;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5586 = x5585 + x5584;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5587 = inv(x5586);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5588 = x5575 * x5587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5589 = x5582 * x5587;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5590 = x5305 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5591 = x5590 * x5589;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5592 = x5289 * x5588;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5593 = x5592 + x5591;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5594 = x5312 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5595 = x5594 * x5589;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5596 = -x5297;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5597 = x5596 * x5588;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5598 = x5597 - x5595;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5599 = x5305 * x5588;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5600 = -x5289;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5601 = x5600 * x5589;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5602 = x5601 + x5599;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5603 = x5312 * x5588;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5604 = x5297 * x5589;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5605 = x5604 - x5603;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5606 = x5568 * x4733;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5607 = x5561 * x4741;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5608 = x5553 * x4748;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5609 = x5608 + x5607;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5610 = x5609 + x5606;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5611 = x5610 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5612 = x5545 * x4725;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5613 = x5612 + x5611;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5614 = x5568 * x4741;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5615 = x5561 * x4748;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5616 = x5615 + x5614;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5617 = x5616 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5618 = x5553 * x4725;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5619 = x5545 * x4733;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5620 = x5619 + x5618;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5621 = x5620 + x5617;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5622 = x5568 * x4748;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5623 = x5622 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5624 = x5561 * x4725;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5625 = x5553 * x4733;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5626 = x5545 * x4741;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5627 = x5626 + x5625;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5628 = x5627 + x5624;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5629 = x5628 + x5623;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5630 = x5568 * x4725;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5631 = x5561 * x4733;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5632 = x5553 * x4741;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5633 = x5545 * x4748;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5634 = x5633 + x5632;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5635 = x5634 + x5631;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5636 = x5635 + x5630;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5637 = x5636 * x5598;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5638 = x5629 * x5602;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5639 = x5621 * x5605;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5640 = x5639 + x5638;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5641 = x5640 + x5637;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5642 = x5641 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5643 = x5613 * x5593;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5644 = x5643 + x5642;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5645 = x5636 * x5602;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5646 = x5629 * x5605;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5647 = x5646 + x5645;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5648 = x5647 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5649 = x5621 * x5593;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5650 = x5613 * x5598;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5651 = x5650 + x5649;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5652 = x5651 + x5648;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5653 = x5636 * x5605;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5654 = x5653 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5655 = x5629 * x5593;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5656 = x5621 * x5598;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5657 = x5613 * x5602;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5658 = x5657 + x5656;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5659 = x5658 + x5655;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5660 = x5659 + x5654;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5661 = x5636 * x5593;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5662 = x5629 * x5598;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5663 = x5621 * x5602;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5664 = x5613 * x5605;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5665 = x5664 + x5663;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5666 = x5665 + x5662;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5667 = x5666 + x5661;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5668 = x5493 * x5493;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5669 = x5500 + x5500;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5670 = x5485 * x5669;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5671 = x5670 - x5668;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5672 = x5671 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5673 = x5477 * x5477;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5674 = x5673 + x5672;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5675 = x5500 * x5500;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5676 = x5675 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5677 = x5485 * x5485;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5678 = x5493 + x5493;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5679 = x5477 * x5678;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5680 = x5679 - x5677;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5681 = x5680 + x5676;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5682 = x5681 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5683 = x5682 * x5681;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5684 = x5674 * x5674;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5685 = x5684 + x5683;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5686 = inv(x5685);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5687 = x5674 * x5686;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5688 = x5681 * x5686;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5689 = x5493 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5690 = x5689 * x5688;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5691 = x5477 * x5687;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5692 = x5691 + x5690;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5693 = x5500 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5694 = x5693 * x5688;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5695 = -x5485;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5696 = x5695 * x5687;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5697 = x5696 - x5694;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5698 = x5493 * x5687;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5699 = -x5477;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5700 = x5699 * x5688;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5701 = x5700 + x5698;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5702 = x5500 * x5687;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5703 = x5485 * x5688;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5704 = x5703 - x5702;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5705 = x5667 * x4921;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5706 = x5660 * x4929;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5707 = x5652 * x4936;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5708 = x5707 + x5706;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5709 = x5708 + x5705;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5710 = x5709 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5711 = x5644 * x4913;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5712 = x5711 + x5710;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5713 = x5667 * x4929;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5714 = x5660 * x4936;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5715 = x5714 + x5713;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5716 = x5715 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5717 = x5652 * x4913;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5718 = x5644 * x4921;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5719 = x5718 + x5717;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5720 = x5719 + x5716;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5721 = x5667 * x4936;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5722 = x5721 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5723 = x5660 * x4913;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5724 = x5652 * x4921;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5725 = x5644 * x4929;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5726 = x5725 + x5724;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5727 = x5726 + x5723;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5728 = x5727 + x5722;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5729 = x5667 * x4913;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5730 = x5660 * x4921;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5731 = x5652 * x4929;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5732 = x5644 * x4936;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5733 = x5732 + x5731;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5734 = x5733 + x5730;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5735 = x5734 + x5729;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5736 = x5735 * x5697;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5737 = x5728 * x5701;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5738 = x5720 * x5704;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5739 = x5738 + x5737;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5740 = x5739 + x5736;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5741 = x5740 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5742 = x5712 * x5692;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5743 = x5742 + x5741;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5744 = x5735 * x5701;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5745 = x5728 * x5704;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5746 = x5745 + x5744;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5747 = x5746 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5748 = x5720 * x5692;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5749 = x5712 * x5697;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5750 = x5749 + x5748;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5751 = x5750 + x5747;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5752 = x5735 * x5704;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5753 = x5752 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5754 = x5728 * x5692;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5755 = x5720 * x5697;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5756 = x5712 * x5701;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5757 = x5756 + x5755;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5758 = x5757 + x5754;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5759 = x5758 + x5753;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5760 = x5735 * x5692;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5761 = x5728 * x5697;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5762 = x5720 * x5701;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5763 = x5712 * x5704;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5764 = x5763 + x5762;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5765 = x5764 + x5761;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x5766 = x5765 + x5760;
      host_args.at(0) = x5743;
      host_args.at(1) = x5751;
      host_args.at(2) = x5759;
      host_args.at(3) = x5766;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x7 != 0) {
    {
      host_args.at(0) = x2;
      host_args.at(1) = x3;
      host_args.at(2) = x3;
      host_args.at(3) = x3;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x8 != 0) {
    {
      host_args.at(0) = x2;
      host_args.at(1) = x3;
      host_args.at(2) = x3;
      host_args.at(3) = x3;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x9 != 0) {
    {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5767 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x5767 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5768 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x5768 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5769 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x5769 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5770 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x5770 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5771 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x5771 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5772 = args[3][0];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5773 = args[3][1];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5774 = args[3][2];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5775 = args[3][3];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5776 = x5772 * x5767;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5777 = x5773 * x5767;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5778 = x5774 * x5767;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5779 = x5775 * x5767;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5780 = x5776 + x2;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5781 = args[3][4];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5782 = args[3][5];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5783 = args[3][6];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5784 = args[3][7];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5785 = x5781 * x5768;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5786 = x5782 * x5768;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5787 = x5783 * x5768;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5788 = x5784 * x5768;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5789 = x5780 + x5785;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5790 = x5777 + x5786;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5791 = x5778 + x5787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5792 = x5779 + x5788;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5793 = args[3][8];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5794 = args[3][9];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5795 = args[3][10];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5796 = args[3][11];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5797 = x5793 * x5769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5798 = x5794 * x5769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5799 = x5795 * x5769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5800 = x5796 * x5769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5801 = x5789 + x5797;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5802 = x5790 + x5798;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5803 = x5791 + x5799;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5804 = x5792 + x5800;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5805 = args[3][12];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5806 = args[3][13];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5807 = args[3][14];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5808 = args[3][15];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5809 = x5805 * x5770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5810 = x5806 * x5770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5811 = x5807 * x5770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5812 = x5808 * x5770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5813 = x5801 + x5809;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5814 = x5802 + x5810;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5815 = x5803 + x5811;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5816 = x5804 + x5812;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5817 = args[3][16];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5818 = args[3][17];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5819 = args[3][18];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x5820 = args[3][19];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5821 = x5817 * x5771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5822 = x5818 * x5771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5823 = x5819 * x5771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5824 = x5820 * x5771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5825 = x5813 + x5821;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5826 = x5814 + x5822;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5827 = x5815 + x5823;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5828 = x5816 + x5824;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5829 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x5829 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5830 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x5830 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5831 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x5831 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5832 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x5832 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5833 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x5833 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5834 = x5772 * x5829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5835 = x5773 * x5829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5836 = x5774 * x5829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5837 = x5775 * x5829;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5838 = x5834 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5839 = x5781 * x5830;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5840 = x5782 * x5830;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5841 = x5783 * x5830;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5842 = x5784 * x5830;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5843 = x5838 + x5839;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5844 = x5835 + x5840;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5845 = x5836 + x5841;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5846 = x5837 + x5842;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5847 = x5793 * x5831;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5848 = x5794 * x5831;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5849 = x5795 * x5831;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5850 = x5796 * x5831;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5851 = x5843 + x5847;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5852 = x5844 + x5848;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5853 = x5845 + x5849;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5854 = x5846 + x5850;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5855 = x5805 * x5832;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5856 = x5806 * x5832;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5857 = x5807 * x5832;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5858 = x5808 * x5832;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5859 = x5851 + x5855;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5860 = x5852 + x5856;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5861 = x5853 + x5857;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5862 = x5854 + x5858;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5863 = x5817 * x5833;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5864 = x5818 * x5833;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5865 = x5819 * x5833;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5866 = x5820 * x5833;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5867 = x5859 + x5863;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5868 = x5860 + x5864;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5869 = x5861 + x5865;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5870 = x5862 + x5866;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5871 = x5828 * x5868;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5872 = x5827 * x5869;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5873 = x5826 * x5870;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5874 = x5873 + x5872;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5875 = x5874 + x5871;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5876 = x5875 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5877 = x5825 * x5867;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5878 = x5877 + x5876;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5879 = x5828 * x5869;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5880 = x5827 * x5870;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5881 = x5880 + x5879;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5882 = x5881 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5883 = x5826 * x5867;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5884 = x5825 * x5868;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5885 = x5884 + x5883;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5886 = x5885 + x5882;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5887 = x5828 * x5870;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5888 = x5887 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5889 = x5827 * x5867;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5890 = x5826 * x5868;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5891 = x5825 * x5869;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5892 = x5891 + x5890;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5893 = x5892 + x5889;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5894 = x5893 + x5888;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5895 = x5828 * x5867;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5896 = x5827 * x5868;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5897 = x5826 * x5869;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5898 = x5825 * x5870;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5899 = x5898 + x5897;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5900 = x5899 + x5896;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5901 = x5900 + x5895;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5902 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x5902 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5903 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x5903 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5904 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x5904 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5905 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x5905 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5906 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x5906 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5907 = x5772 * x5902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5908 = x5773 * x5902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5909 = x5774 * x5902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5910 = x5775 * x5902;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5911 = x5907 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5912 = x5781 * x5903;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5913 = x5782 * x5903;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5914 = x5783 * x5903;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5915 = x5784 * x5903;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5916 = x5911 + x5912;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5917 = x5908 + x5913;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5918 = x5909 + x5914;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5919 = x5910 + x5915;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5920 = x5793 * x5904;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5921 = x5794 * x5904;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5922 = x5795 * x5904;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5923 = x5796 * x5904;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5924 = x5916 + x5920;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5925 = x5917 + x5921;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5926 = x5918 + x5922;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5927 = x5919 + x5923;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5928 = x5805 * x5905;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5929 = x5806 * x5905;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5930 = x5807 * x5905;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5931 = x5808 * x5905;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5932 = x5924 + x5928;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5933 = x5925 + x5929;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5934 = x5926 + x5930;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5935 = x5927 + x5931;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5936 = x5817 * x5906;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5937 = x5818 * x5906;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5938 = x5819 * x5906;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5939 = x5820 * x5906;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5940 = x5932 + x5936;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5941 = x5933 + x5937;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5942 = x5934 + x5938;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5943 = x5935 + x5939;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5944 = x5901 * x5941;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5945 = x5894 * x5942;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5946 = x5886 * x5943;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5947 = x5946 + x5945;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5948 = x5947 + x5944;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5949 = x5948 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5950 = x5878 * x5940;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5951 = x5950 + x5949;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5952 = x5901 * x5942;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5953 = x5894 * x5943;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5954 = x5953 + x5952;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5955 = x5954 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5956 = x5886 * x5940;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5957 = x5878 * x5941;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5958 = x5957 + x5956;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5959 = x5958 + x5955;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5960 = x5901 * x5943;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5961 = x5960 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5962 = x5894 * x5940;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5963 = x5886 * x5941;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5964 = x5878 * x5942;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5965 = x5964 + x5963;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5966 = x5965 + x5962;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5967 = x5966 + x5961;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5968 = x5901 * x5940;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5969 = x5894 * x5941;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5970 = x5886 * x5942;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5971 = x5878 * x5943;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5972 = x5971 + x5970;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5973 = x5972 + x5969;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x5974 = x5973 + x5968;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x5975 = args[2][20 * steps + ((cycle - 0) & mask)];
      assert(x5975 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5976 = args[2][21 * steps + ((cycle - 0) & mask)];
      assert(x5976 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5977 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x5977 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5978 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x5978 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x5979 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x5979 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5980 = x5772 * x5975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5981 = x5773 * x5975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5982 = x5774 * x5975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5983 = x5775 * x5975;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5984 = x5980 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5985 = x5781 * x5976;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5986 = x5782 * x5976;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5987 = x5783 * x5976;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5988 = x5784 * x5976;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5989 = x5984 + x5985;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5990 = x5981 + x5986;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5991 = x5982 + x5987;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5992 = x5983 + x5988;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5993 = x5793 * x5977;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5994 = x5794 * x5977;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5995 = x5795 * x5977;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5996 = x5796 * x5977;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5997 = x5989 + x5993;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5998 = x5990 + x5994;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x5999 = x5991 + x5995;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6000 = x5992 + x5996;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6001 = x5805 * x5978;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6002 = x5806 * x5978;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6003 = x5807 * x5978;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6004 = x5808 * x5978;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6005 = x5997 + x6001;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6006 = x5998 + x6002;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6007 = x5999 + x6003;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6008 = x6000 + x6004;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6009 = x5817 * x5979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6010 = x5818 * x5979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6011 = x5819 * x5979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6012 = x5820 * x5979;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6013 = x6005 + x6009;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6014 = x6006 + x6010;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6015 = x6007 + x6011;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6016 = x6008 + x6012;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6017 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x6017 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6018 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x6018 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6019 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x6019 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6020 = args[2][28 * steps + ((cycle - 0) & mask)];
      assert(x6020 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6021 = args[2][29 * steps + ((cycle - 0) & mask)];
      assert(x6021 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6022 = x5772 * x6017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6023 = x5773 * x6017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6024 = x5774 * x6017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6025 = x5775 * x6017;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6026 = x6022 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6027 = x5781 * x6018;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6028 = x5782 * x6018;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6029 = x5783 * x6018;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6030 = x5784 * x6018;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6031 = x6026 + x6027;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6032 = x6023 + x6028;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6033 = x6024 + x6029;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6034 = x6025 + x6030;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6035 = x5793 * x6019;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6036 = x5794 * x6019;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6037 = x5795 * x6019;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6038 = x5796 * x6019;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6039 = x6031 + x6035;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6040 = x6032 + x6036;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6041 = x6033 + x6037;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6042 = x6034 + x6038;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6043 = x5805 * x6020;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6044 = x5806 * x6020;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6045 = x5807 * x6020;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6046 = x5808 * x6020;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6047 = x6039 + x6043;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6048 = x6040 + x6044;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6049 = x6041 + x6045;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6050 = x6042 + x6046;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6051 = x5817 * x6021;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6052 = x5818 * x6021;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6053 = x5819 * x6021;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6054 = x5820 * x6021;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6055 = x6047 + x6051;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6056 = x6048 + x6052;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6057 = x6049 + x6053;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6058 = x6050 + x6054;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6059 = x6016 * x6056;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6060 = x6015 * x6057;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6061 = x6014 * x6058;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6062 = x6061 + x6060;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6063 = x6062 + x6059;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6064 = x6063 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6065 = x6013 * x6055;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6066 = x6065 + x6064;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6067 = x6016 * x6057;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6068 = x6015 * x6058;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6069 = x6068 + x6067;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6070 = x6069 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6071 = x6014 * x6055;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6072 = x6013 * x6056;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6073 = x6072 + x6071;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6074 = x6073 + x6070;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6075 = x6016 * x6058;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6076 = x6075 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6077 = x6015 * x6055;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6078 = x6014 * x6056;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6079 = x6013 * x6057;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6080 = x6079 + x6078;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6081 = x6080 + x6077;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6082 = x6081 + x6076;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6083 = x6016 * x6055;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6084 = x6015 * x6056;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6085 = x6014 * x6057;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6086 = x6013 * x6058;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6087 = x6086 + x6085;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6088 = x6087 + x6084;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6089 = x6088 + x6083;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6090 = args[2][30 * steps + ((cycle - 0) & mask)];
      assert(x6090 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6091 = args[2][31 * steps + ((cycle - 0) & mask)];
      assert(x6091 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6092 = args[2][32 * steps + ((cycle - 0) & mask)];
      assert(x6092 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6093 = args[2][33 * steps + ((cycle - 0) & mask)];
      assert(x6093 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6094 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x6094 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6095 = x5772 * x6090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6096 = x5773 * x6090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6097 = x5774 * x6090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6098 = x5775 * x6090;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6099 = x6095 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6100 = x5781 * x6091;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6101 = x5782 * x6091;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6102 = x5783 * x6091;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6103 = x5784 * x6091;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6104 = x6099 + x6100;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6105 = x6096 + x6101;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6106 = x6097 + x6102;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6107 = x6098 + x6103;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6108 = x5793 * x6092;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6109 = x5794 * x6092;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6110 = x5795 * x6092;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6111 = x5796 * x6092;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6112 = x6104 + x6108;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6113 = x6105 + x6109;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6114 = x6106 + x6110;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6115 = x6107 + x6111;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6116 = x5805 * x6093;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6117 = x5806 * x6093;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6118 = x5807 * x6093;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6119 = x5808 * x6093;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6120 = x6112 + x6116;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6121 = x6113 + x6117;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6122 = x6114 + x6118;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6123 = x6115 + x6119;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6124 = x5817 * x6094;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6125 = x5818 * x6094;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6126 = x5819 * x6094;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6127 = x5820 * x6094;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6128 = x6120 + x6124;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6129 = x6121 + x6125;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6130 = x6122 + x6126;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6131 = x6123 + x6127;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6132 = x6089 * x6129;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6133 = x6082 * x6130;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6134 = x6074 * x6131;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6135 = x6134 + x6133;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6136 = x6135 + x6132;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6137 = x6136 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6138 = x6066 * x6128;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6139 = x6138 + x6137;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6140 = x6089 * x6130;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6141 = x6082 * x6131;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6142 = x6141 + x6140;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6143 = x6142 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6144 = x6074 * x6128;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6145 = x6066 * x6129;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6146 = x6145 + x6144;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6147 = x6146 + x6143;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6148 = x6089 * x6131;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6149 = x6148 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6150 = x6082 * x6128;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6151 = x6074 * x6129;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6152 = x6066 * x6130;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6153 = x6152 + x6151;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6154 = x6153 + x6150;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6155 = x6154 + x6149;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6156 = x6089 * x6128;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6157 = x6082 * x6129;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6158 = x6074 * x6130;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6159 = x6066 * x6131;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6160 = x6159 + x6158;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6161 = x6160 + x6157;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6162 = x6161 + x6156;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6163 = args[2][35 * steps + ((cycle - 0) & mask)];
      assert(x6163 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6164 = args[2][36 * steps + ((cycle - 0) & mask)];
      assert(x6164 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6165 = args[2][37 * steps + ((cycle - 0) & mask)];
      assert(x6165 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6166 = args[2][38 * steps + ((cycle - 0) & mask)];
      assert(x6166 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6167 = args[2][39 * steps + ((cycle - 0) & mask)];
      assert(x6167 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6168 = x5772 * x6163;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6169 = x5773 * x6163;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6170 = x5774 * x6163;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6171 = x5775 * x6163;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6172 = x6168 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6173 = x5781 * x6164;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6174 = x5782 * x6164;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6175 = x5783 * x6164;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6176 = x5784 * x6164;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6177 = x6172 + x6173;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6178 = x6169 + x6174;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6179 = x6170 + x6175;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6180 = x6171 + x6176;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6181 = x5793 * x6165;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6182 = x5794 * x6165;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6183 = x5795 * x6165;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6184 = x5796 * x6165;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6185 = x6177 + x6181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6186 = x6178 + x6182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6187 = x6179 + x6183;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6188 = x6180 + x6184;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6189 = x5805 * x6166;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6190 = x5806 * x6166;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6191 = x5807 * x6166;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6192 = x5808 * x6166;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6193 = x6185 + x6189;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6194 = x6186 + x6190;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6195 = x6187 + x6191;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6196 = x6188 + x6192;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6197 = x5817 * x6167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6198 = x5818 * x6167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6199 = x5819 * x6167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6200 = x5820 * x6167;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6201 = x6193 + x6197;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6202 = x6194 + x6198;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6203 = x6195 + x6199;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6204 = x6196 + x6200;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6205 = args[2][40 * steps + ((cycle - 0) & mask)];
      assert(x6205 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6206 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x6206 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6207 = args[2][42 * steps + ((cycle - 0) & mask)];
      assert(x6207 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6208 = args[2][43 * steps + ((cycle - 0) & mask)];
      assert(x6208 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6209 = args[2][44 * steps + ((cycle - 0) & mask)];
      assert(x6209 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6210 = x5772 * x6205;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6211 = x5773 * x6205;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6212 = x5774 * x6205;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6213 = x5775 * x6205;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6214 = x6210 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6215 = x5781 * x6206;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6216 = x5782 * x6206;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6217 = x5783 * x6206;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6218 = x5784 * x6206;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6219 = x6214 + x6215;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6220 = x6211 + x6216;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6221 = x6212 + x6217;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6222 = x6213 + x6218;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6223 = x5793 * x6207;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6224 = x5794 * x6207;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6225 = x5795 * x6207;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6226 = x5796 * x6207;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6227 = x6219 + x6223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6228 = x6220 + x6224;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6229 = x6221 + x6225;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6230 = x6222 + x6226;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6231 = x5805 * x6208;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6232 = x5806 * x6208;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6233 = x5807 * x6208;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6234 = x5808 * x6208;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6235 = x6227 + x6231;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6236 = x6228 + x6232;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6237 = x6229 + x6233;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6238 = x6230 + x6234;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6239 = x5817 * x6209;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6240 = x5818 * x6209;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6241 = x5819 * x6209;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6242 = x5820 * x6209;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6243 = x6235 + x6239;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6244 = x6236 + x6240;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6245 = x6237 + x6241;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6246 = x6238 + x6242;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6247 = x6204 * x6244;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6248 = x6203 * x6245;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6249 = x6202 * x6246;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6250 = x6249 + x6248;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6251 = x6250 + x6247;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6252 = x6251 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6253 = x6201 * x6243;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6254 = x6253 + x6252;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6255 = x6204 * x6245;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6256 = x6203 * x6246;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6257 = x6256 + x6255;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6258 = x6257 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6259 = x6202 * x6243;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6260 = x6201 * x6244;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6261 = x6260 + x6259;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6262 = x6261 + x6258;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6263 = x6204 * x6246;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6264 = x6263 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6265 = x6203 * x6243;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6266 = x6202 * x6244;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6267 = x6201 * x6245;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6268 = x6267 + x6266;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6269 = x6268 + x6265;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6270 = x6269 + x6264;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6271 = x6204 * x6243;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6272 = x6203 * x6244;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6273 = x6202 * x6245;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6274 = x6201 * x6246;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6275 = x6274 + x6273;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6276 = x6275 + x6272;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6277 = x6276 + x6271;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6278 = args[2][45 * steps + ((cycle - 0) & mask)];
      assert(x6278 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6279 = args[2][46 * steps + ((cycle - 0) & mask)];
      assert(x6279 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6280 = args[2][47 * steps + ((cycle - 0) & mask)];
      assert(x6280 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6281 = args[2][48 * steps + ((cycle - 0) & mask)];
      assert(x6281 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6282 = args[2][49 * steps + ((cycle - 0) & mask)];
      assert(x6282 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6283 = x5772 * x6278;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6284 = x5773 * x6278;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6285 = x5774 * x6278;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6286 = x5775 * x6278;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6287 = x6283 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6288 = x5781 * x6279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6289 = x5782 * x6279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6290 = x5783 * x6279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6291 = x5784 * x6279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6292 = x6287 + x6288;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6293 = x6284 + x6289;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6294 = x6285 + x6290;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6295 = x6286 + x6291;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6296 = x5793 * x6280;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6297 = x5794 * x6280;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6298 = x5795 * x6280;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6299 = x5796 * x6280;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6300 = x6292 + x6296;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6301 = x6293 + x6297;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6302 = x6294 + x6298;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6303 = x6295 + x6299;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6304 = x5805 * x6281;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6305 = x5806 * x6281;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6306 = x5807 * x6281;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6307 = x5808 * x6281;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6308 = x6300 + x6304;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6309 = x6301 + x6305;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6310 = x6302 + x6306;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6311 = x6303 + x6307;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6312 = x5817 * x6282;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6313 = x5818 * x6282;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6314 = x5819 * x6282;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6315 = x5820 * x6282;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6316 = x6308 + x6312;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6317 = x6309 + x6313;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6318 = x6310 + x6314;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6319 = x6311 + x6315;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6320 = x6277 * x6317;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6321 = x6270 * x6318;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6322 = x6262 * x6319;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6323 = x6322 + x6321;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6324 = x6323 + x6320;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6325 = x6324 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6326 = x6254 * x6316;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6327 = x6326 + x6325;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6328 = x6277 * x6318;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6329 = x6270 * x6319;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6330 = x6329 + x6328;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6331 = x6330 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6332 = x6262 * x6316;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6333 = x6254 * x6317;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6334 = x6333 + x6332;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6335 = x6334 + x6331;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6336 = x6277 * x6319;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6337 = x6336 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6338 = x6270 * x6316;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6339 = x6262 * x6317;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6340 = x6254 * x6318;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6341 = x6340 + x6339;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6342 = x6341 + x6338;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6343 = x6342 + x6337;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6344 = x6277 * x6316;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6345 = x6270 * x6317;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6346 = x6262 * x6318;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6347 = x6254 * x6319;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6348 = x6347 + x6346;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6349 = x6348 + x6345;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6350 = x6349 + x6344;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6351 = args[2][50 * steps + ((cycle - 0) & mask)];
      assert(x6351 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6352 = args[2][51 * steps + ((cycle - 0) & mask)];
      assert(x6352 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6353 = args[2][52 * steps + ((cycle - 0) & mask)];
      assert(x6353 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6354 = args[2][53 * steps + ((cycle - 0) & mask)];
      assert(x6354 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6355 = args[2][54 * steps + ((cycle - 0) & mask)];
      assert(x6355 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6356 = x5772 * x6351;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6357 = x5773 * x6351;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6358 = x5774 * x6351;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6359 = x5775 * x6351;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6360 = x6356 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6361 = x5781 * x6352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6362 = x5782 * x6352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6363 = x5783 * x6352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6364 = x5784 * x6352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6365 = x6360 + x6361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6366 = x6357 + x6362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6367 = x6358 + x6363;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6368 = x6359 + x6364;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6369 = x5793 * x6353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6370 = x5794 * x6353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6371 = x5795 * x6353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6372 = x5796 * x6353;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6373 = x6365 + x6369;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6374 = x6366 + x6370;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6375 = x6367 + x6371;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6376 = x6368 + x6372;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6377 = x5805 * x6354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6378 = x5806 * x6354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6379 = x5807 * x6354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6380 = x5808 * x6354;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6381 = x6373 + x6377;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6382 = x6374 + x6378;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6383 = x6375 + x6379;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6384 = x6376 + x6380;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6385 = x5817 * x6355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6386 = x5818 * x6355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6387 = x5819 * x6355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6388 = x5820 * x6355;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6389 = x6381 + x6385;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6390 = x6382 + x6386;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6391 = x6383 + x6387;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6392 = x6384 + x6388;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6393 = args[2][55 * steps + ((cycle - 0) & mask)];
      assert(x6393 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6394 = args[2][56 * steps + ((cycle - 0) & mask)];
      assert(x6394 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6395 = args[2][57 * steps + ((cycle - 0) & mask)];
      assert(x6395 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6396 = args[2][58 * steps + ((cycle - 0) & mask)];
      assert(x6396 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6397 = args[2][59 * steps + ((cycle - 0) & mask)];
      assert(x6397 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6398 = x5772 * x6393;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6399 = x5773 * x6393;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6400 = x5774 * x6393;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6401 = x5775 * x6393;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6402 = x6398 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6403 = x5781 * x6394;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6404 = x5782 * x6394;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6405 = x5783 * x6394;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6406 = x5784 * x6394;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6407 = x6402 + x6403;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6408 = x6399 + x6404;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6409 = x6400 + x6405;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6410 = x6401 + x6406;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6411 = x5793 * x6395;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6412 = x5794 * x6395;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6413 = x5795 * x6395;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6414 = x5796 * x6395;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6415 = x6407 + x6411;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6416 = x6408 + x6412;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6417 = x6409 + x6413;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6418 = x6410 + x6414;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6419 = x5805 * x6396;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6420 = x5806 * x6396;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6421 = x5807 * x6396;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6422 = x5808 * x6396;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6423 = x6415 + x6419;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6424 = x6416 + x6420;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6425 = x6417 + x6421;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6426 = x6418 + x6422;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6427 = x5817 * x6397;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6428 = x5818 * x6397;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6429 = x5819 * x6397;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6430 = x5820 * x6397;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6431 = x6423 + x6427;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6432 = x6424 + x6428;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6433 = x6425 + x6429;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6434 = x6426 + x6430;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6435 = x6392 * x6432;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6436 = x6391 * x6433;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6437 = x6390 * x6434;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6438 = x6437 + x6436;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6439 = x6438 + x6435;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6440 = x6439 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6441 = x6389 * x6431;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6442 = x6441 + x6440;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6443 = x6392 * x6433;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6444 = x6391 * x6434;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6445 = x6444 + x6443;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6446 = x6445 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6447 = x6390 * x6431;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6448 = x6389 * x6432;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6449 = x6448 + x6447;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6450 = x6449 + x6446;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6451 = x6392 * x6434;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6452 = x6451 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6453 = x6391 * x6431;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6454 = x6390 * x6432;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6455 = x6389 * x6433;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6456 = x6455 + x6454;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6457 = x6456 + x6453;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6458 = x6457 + x6452;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6459 = x6392 * x6431;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6460 = x6391 * x6432;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6461 = x6390 * x6433;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6462 = x6389 * x6434;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6463 = x6462 + x6461;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6464 = x6463 + x6460;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6465 = x6464 + x6459;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6466 = args[2][60 * steps + ((cycle - 0) & mask)];
      assert(x6466 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6467 = args[2][61 * steps + ((cycle - 0) & mask)];
      assert(x6467 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6468 = args[2][62 * steps + ((cycle - 0) & mask)];
      assert(x6468 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6469 = args[2][63 * steps + ((cycle - 0) & mask)];
      assert(x6469 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6470 = args[2][64 * steps + ((cycle - 0) & mask)];
      assert(x6470 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6471 = x5772 * x6466;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6472 = x5773 * x6466;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6473 = x5774 * x6466;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6474 = x5775 * x6466;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6475 = x6471 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6476 = x5781 * x6467;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6477 = x5782 * x6467;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6478 = x5783 * x6467;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6479 = x5784 * x6467;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6480 = x6475 + x6476;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6481 = x6472 + x6477;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6482 = x6473 + x6478;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6483 = x6474 + x6479;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6484 = x5793 * x6468;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6485 = x5794 * x6468;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6486 = x5795 * x6468;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6487 = x5796 * x6468;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6488 = x6480 + x6484;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6489 = x6481 + x6485;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6490 = x6482 + x6486;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6491 = x6483 + x6487;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6492 = x5805 * x6469;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6493 = x5806 * x6469;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6494 = x5807 * x6469;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6495 = x5808 * x6469;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6496 = x6488 + x6492;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6497 = x6489 + x6493;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6498 = x6490 + x6494;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6499 = x6491 + x6495;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6500 = x5817 * x6470;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6501 = x5818 * x6470;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6502 = x5819 * x6470;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6503 = x5820 * x6470;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6504 = x6496 + x6500;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6505 = x6497 + x6501;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6506 = x6498 + x6502;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6507 = x6499 + x6503;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6508 = x6465 * x6505;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6509 = x6458 * x6506;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6510 = x6450 * x6507;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6511 = x6510 + x6509;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6512 = x6511 + x6508;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6513 = x6512 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6514 = x6442 * x6504;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6515 = x6514 + x6513;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6516 = x6465 * x6506;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6517 = x6458 * x6507;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6518 = x6517 + x6516;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6519 = x6518 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6520 = x6450 * x6504;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6521 = x6442 * x6505;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6522 = x6521 + x6520;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6523 = x6522 + x6519;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6524 = x6465 * x6507;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6525 = x6524 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6526 = x6458 * x6504;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6527 = x6450 * x6505;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6528 = x6442 * x6506;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6529 = x6528 + x6527;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6530 = x6529 + x6526;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6531 = x6530 + x6525;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6532 = x6465 * x6504;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6533 = x6458 * x6505;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6534 = x6450 * x6506;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6535 = x6442 * x6507;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6536 = x6535 + x6534;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6537 = x6536 + x6533;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6538 = x6537 + x6532;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6539 = args[2][65 * steps + ((cycle - 0) & mask)];
      assert(x6539 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6540 = args[2][66 * steps + ((cycle - 0) & mask)];
      assert(x6540 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6541 = args[2][67 * steps + ((cycle - 0) & mask)];
      assert(x6541 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6542 = args[2][68 * steps + ((cycle - 0) & mask)];
      assert(x6542 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6543 = args[2][69 * steps + ((cycle - 0) & mask)];
      assert(x6543 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6544 = x5772 * x6539;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6545 = x5773 * x6539;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6546 = x5774 * x6539;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6547 = x5775 * x6539;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6548 = x6544 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6549 = x5781 * x6540;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6550 = x5782 * x6540;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6551 = x5783 * x6540;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6552 = x5784 * x6540;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6553 = x6548 + x6549;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6554 = x6545 + x6550;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6555 = x6546 + x6551;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6556 = x6547 + x6552;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6557 = x5793 * x6541;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6558 = x5794 * x6541;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6559 = x5795 * x6541;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6560 = x5796 * x6541;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6561 = x6553 + x6557;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6562 = x6554 + x6558;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6563 = x6555 + x6559;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6564 = x6556 + x6560;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6565 = x5805 * x6542;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6566 = x5806 * x6542;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6567 = x5807 * x6542;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6568 = x5808 * x6542;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6569 = x6561 + x6565;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6570 = x6562 + x6566;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6571 = x6563 + x6567;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6572 = x6564 + x6568;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6573 = x5817 * x6543;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6574 = x5818 * x6543;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6575 = x5819 * x6543;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6576 = x5820 * x6543;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6577 = x6569 + x6573;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6578 = x6570 + x6574;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6579 = x6571 + x6575;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6580 = x6572 + x6576;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6581 = args[2][70 * steps + ((cycle - 0) & mask)];
      assert(x6581 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6582 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x6582 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6583 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x6583 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6584 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x6584 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6585 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x6585 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6586 = x5772 * x6581;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6587 = x5773 * x6581;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6588 = x5774 * x6581;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6589 = x5775 * x6581;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6590 = x6586 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6591 = x5781 * x6582;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6592 = x5782 * x6582;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6593 = x5783 * x6582;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6594 = x5784 * x6582;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6595 = x6590 + x6591;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6596 = x6587 + x6592;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6597 = x6588 + x6593;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6598 = x6589 + x6594;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6599 = x5793 * x6583;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6600 = x5794 * x6583;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6601 = x5795 * x6583;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6602 = x5796 * x6583;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6603 = x6595 + x6599;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6604 = x6596 + x6600;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6605 = x6597 + x6601;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6606 = x6598 + x6602;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6607 = x5805 * x6584;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6608 = x5806 * x6584;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6609 = x5807 * x6584;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6610 = x5808 * x6584;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6611 = x6603 + x6607;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6612 = x6604 + x6608;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6613 = x6605 + x6609;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6614 = x6606 + x6610;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6615 = x5817 * x6585;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6616 = x5818 * x6585;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6617 = x5819 * x6585;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6618 = x5820 * x6585;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6619 = x6611 + x6615;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6620 = x6612 + x6616;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6621 = x6613 + x6617;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6622 = x6614 + x6618;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6623 = x6580 * x6620;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6624 = x6579 * x6621;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6625 = x6578 * x6622;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6626 = x6625 + x6624;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6627 = x6626 + x6623;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6628 = x6627 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6629 = x6577 * x6619;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6630 = x6629 + x6628;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6631 = x6580 * x6621;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6632 = x6579 * x6622;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6633 = x6632 + x6631;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6634 = x6633 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6635 = x6578 * x6619;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6636 = x6577 * x6620;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6637 = x6636 + x6635;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6638 = x6637 + x6634;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6639 = x6580 * x6622;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6640 = x6639 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6641 = x6579 * x6619;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6642 = x6578 * x6620;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6643 = x6577 * x6621;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6644 = x6643 + x6642;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6645 = x6644 + x6641;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6646 = x6645 + x6640;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6647 = x6580 * x6619;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6648 = x6579 * x6620;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6649 = x6578 * x6621;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6650 = x6577 * x6622;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6651 = x6650 + x6649;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6652 = x6651 + x6648;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6653 = x6652 + x6647;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6654 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x6654 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6655 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x6655 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6656 = args[2][77 * steps + ((cycle - 0) & mask)];
      assert(x6656 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6657 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x6657 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6658 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x6658 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6659 = x5772 * x6654;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6660 = x5773 * x6654;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6661 = x5774 * x6654;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6662 = x5775 * x6654;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6663 = x6659 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6664 = x5781 * x6655;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6665 = x5782 * x6655;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6666 = x5783 * x6655;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6667 = x5784 * x6655;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6668 = x6663 + x6664;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6669 = x6660 + x6665;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6670 = x6661 + x6666;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6671 = x6662 + x6667;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6672 = x5793 * x6656;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6673 = x5794 * x6656;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6674 = x5795 * x6656;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6675 = x5796 * x6656;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6676 = x6668 + x6672;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6677 = x6669 + x6673;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6678 = x6670 + x6674;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6679 = x6671 + x6675;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6680 = x5805 * x6657;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6681 = x5806 * x6657;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6682 = x5807 * x6657;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6683 = x5808 * x6657;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6684 = x6676 + x6680;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6685 = x6677 + x6681;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6686 = x6678 + x6682;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6687 = x6679 + x6683;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6688 = x5817 * x6658;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6689 = x5818 * x6658;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6690 = x5819 * x6658;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6691 = x5820 * x6658;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6692 = x6684 + x6688;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6693 = x6685 + x6689;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6694 = x6686 + x6690;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6695 = x6687 + x6691;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6696 = x6653 * x6693;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6697 = x6646 * x6694;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6698 = x6638 * x6695;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6699 = x6698 + x6697;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6700 = x6699 + x6696;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6701 = x6700 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6702 = x6630 * x6692;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6703 = x6702 + x6701;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6704 = x6653 * x6694;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6705 = x6646 * x6695;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6706 = x6705 + x6704;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6707 = x6706 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6708 = x6638 * x6692;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6709 = x6630 * x6693;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6710 = x6709 + x6708;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6711 = x6710 + x6707;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6712 = x6653 * x6695;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6713 = x6712 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6714 = x6646 * x6692;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6715 = x6638 * x6693;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6716 = x6630 * x6694;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6717 = x6716 + x6715;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6718 = x6717 + x6714;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6719 = x6718 + x6713;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6720 = x6653 * x6692;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6721 = x6646 * x6693;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6722 = x6638 * x6694;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6723 = x6630 * x6695;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6724 = x6723 + x6722;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6725 = x6724 + x6721;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6726 = x6725 + x6720;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6727 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x6727 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6728 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x6728 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6729 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x6729 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6730 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x6730 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6731 = args[2][84 * steps + ((cycle - 0) & mask)];
      assert(x6731 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6732 = x5772 * x6727;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6733 = x5773 * x6727;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6734 = x5774 * x6727;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6735 = x5775 * x6727;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6736 = x6732 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6737 = x5781 * x6728;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6738 = x5782 * x6728;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6739 = x5783 * x6728;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6740 = x5784 * x6728;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6741 = x6736 + x6737;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6742 = x6733 + x6738;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6743 = x6734 + x6739;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6744 = x6735 + x6740;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6745 = x5793 * x6729;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6746 = x5794 * x6729;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6747 = x5795 * x6729;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6748 = x5796 * x6729;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6749 = x6741 + x6745;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6750 = x6742 + x6746;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6751 = x6743 + x6747;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6752 = x6744 + x6748;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6753 = x5805 * x6730;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6754 = x5806 * x6730;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6755 = x5807 * x6730;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6756 = x5808 * x6730;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6757 = x6749 + x6753;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6758 = x6750 + x6754;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6759 = x6751 + x6755;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6760 = x6752 + x6756;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6761 = x5817 * x6731;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6762 = x5818 * x6731;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6763 = x5819 * x6731;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6764 = x5820 * x6731;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6765 = x6757 + x6761;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6766 = x6758 + x6762;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6767 = x6759 + x6763;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6768 = x6760 + x6764;
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6769 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x6769 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6770 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x6770 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6771 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x6771 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6772 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x6772 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6773 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x6773 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6774 = x5772 * x6769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6775 = x5773 * x6769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6776 = x5774 * x6769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6777 = x5775 * x6769;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6778 = x6774 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6779 = x5781 * x6770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6780 = x5782 * x6770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6781 = x5783 * x6770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6782 = x5784 * x6770;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6783 = x6778 + x6779;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6784 = x6775 + x6780;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6785 = x6776 + x6781;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6786 = x6777 + x6782;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6787 = x5793 * x6771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6788 = x5794 * x6771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6789 = x5795 * x6771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6790 = x5796 * x6771;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6791 = x6783 + x6787;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6792 = x6784 + x6788;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6793 = x6785 + x6789;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6794 = x6786 + x6790;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6795 = x5805 * x6772;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6796 = x5806 * x6772;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6797 = x5807 * x6772;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6798 = x5808 * x6772;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6799 = x6791 + x6795;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6800 = x6792 + x6796;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6801 = x6793 + x6797;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6802 = x6794 + x6798;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6803 = x5817 * x6773;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6804 = x5818 * x6773;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6805 = x5819 * x6773;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6806 = x5820 * x6773;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6807 = x6799 + x6803;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6808 = x6800 + x6804;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6809 = x6801 + x6805;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6810 = x6802 + x6806;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6811 = x6768 * x6808;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6812 = x6767 * x6809;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6813 = x6766 * x6810;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6814 = x6813 + x6812;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6815 = x6814 + x6811;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6816 = x6815 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6817 = x6765 * x6807;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6818 = x6817 + x6816;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6819 = x6768 * x6809;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6820 = x6767 * x6810;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6821 = x6820 + x6819;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6822 = x6821 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6823 = x6766 * x6807;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6824 = x6765 * x6808;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6825 = x6824 + x6823;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6826 = x6825 + x6822;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6827 = x6768 * x6810;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6828 = x6827 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6829 = x6767 * x6807;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6830 = x6766 * x6808;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6831 = x6765 * x6809;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6832 = x6831 + x6830;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6833 = x6832 + x6829;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6834 = x6833 + x6828;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6835 = x6768 * x6807;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6836 = x6767 * x6808;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6837 = x6766 * x6809;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6838 = x6765 * x6810;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6839 = x6838 + x6837;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6840 = x6839 + x6836;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6841 = x6840 + x6835;
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x6842 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x6842 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6843 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x6843 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6844 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x6844 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6845 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x6845 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x6846 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x6846 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6847 = x5772 * x6842;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6848 = x5773 * x6842;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6849 = x5774 * x6842;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6850 = x5775 * x6842;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6851 = x6847 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6852 = x5781 * x6843;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6853 = x5782 * x6843;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6854 = x5783 * x6843;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6855 = x5784 * x6843;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6856 = x6851 + x6852;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6857 = x6848 + x6853;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6858 = x6849 + x6854;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6859 = x6850 + x6855;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6860 = x5793 * x6844;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6861 = x5794 * x6844;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6862 = x5795 * x6844;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6863 = x5796 * x6844;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6864 = x6856 + x6860;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6865 = x6857 + x6861;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6866 = x6858 + x6862;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6867 = x6859 + x6863;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6868 = x5805 * x6845;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6869 = x5806 * x6845;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6870 = x5807 * x6845;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6871 = x5808 * x6845;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6872 = x6864 + x6868;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6873 = x6865 + x6869;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6874 = x6866 + x6870;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6875 = x6867 + x6871;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6876 = x5817 * x6846;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6877 = x5818 * x6846;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6878 = x5819 * x6846;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6879 = x5820 * x6846;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6880 = x6872 + x6876;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6881 = x6873 + x6877;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6882 = x6874 + x6878;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x6883 = x6875 + x6879;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6884 = x6841 * x6881;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6885 = x6834 * x6882;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6886 = x6826 * x6883;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6887 = x6886 + x6885;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6888 = x6887 + x6884;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6889 = x6888 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6890 = x6818 * x6880;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6891 = x6890 + x6889;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6892 = x6841 * x6882;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6893 = x6834 * x6883;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6894 = x6893 + x6892;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6895 = x6894 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6896 = x6826 * x6880;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6897 = x6818 * x6881;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6898 = x6897 + x6896;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6899 = x6898 + x6895;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6900 = x6841 * x6883;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6901 = x6900 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6902 = x6834 * x6880;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6903 = x6826 * x6881;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6904 = x6818 * x6882;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6905 = x6904 + x6903;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6906 = x6905 + x6902;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6907 = x6906 + x6901;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6908 = x6841 * x6880;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6909 = x6834 * x6881;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6910 = x6826 * x6882;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6911 = x6818 * x6883;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6912 = x6911 + x6910;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6913 = x6912 + x6909;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x6914 = x6913 + x6908;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6915 = x6531 * x6531;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6916 = x6538 + x6538;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6917 = x6523 * x6916;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6918 = x6917 - x6915;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6919 = x6918 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6920 = x6515 * x6515;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6921 = x6920 + x6919;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6922 = x6538 * x6538;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6923 = x6922 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6924 = x6523 * x6523;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6925 = x6531 + x6531;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6926 = x6515 * x6925;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6927 = x6926 - x6924;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6928 = x6927 + x6923;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6929 = x6928 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6930 = x6929 * x6928;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6931 = x6921 * x6921;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6932 = x6931 + x6930;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6933 = inv(x6932);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6934 = x6921 * x6933;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6935 = x6928 * x6933;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6936 = x6531 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6937 = x6936 * x6935;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6938 = x6515 * x6934;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6939 = x6938 + x6937;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6940 = x6538 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6941 = x6940 * x6935;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6942 = -x6523;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6943 = x6942 * x6934;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6944 = x6943 - x6941;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6945 = x6531 * x6934;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6946 = -x6515;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6947 = x6946 * x6935;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6948 = x6947 + x6945;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6949 = x6538 * x6934;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6950 = x6523 * x6935;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6951 = x6950 - x6949;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6952 = x5974 * x6944;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6953 = x5967 * x6948;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6954 = x5959 * x6951;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6955 = x6954 + x6953;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6956 = x6955 + x6952;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6957 = x6956 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6958 = x5951 * x6939;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6959 = x6958 + x6957;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6960 = x5974 * x6948;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6961 = x5967 * x6951;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6962 = x6961 + x6960;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6963 = x6962 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6964 = x5959 * x6939;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6965 = x5951 * x6944;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6966 = x6965 + x6964;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6967 = x6966 + x6963;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6968 = x5974 * x6951;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6969 = x6968 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6970 = x5967 * x6939;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6971 = x5959 * x6944;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6972 = x5951 * x6948;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6973 = x6972 + x6971;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6974 = x6973 + x6970;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6975 = x6974 + x6969;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6976 = x5974 * x6939;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6977 = x5967 * x6944;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6978 = x5959 * x6948;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6979 = x5951 * x6951;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6980 = x6979 + x6978;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6981 = x6980 + x6977;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6982 = x6981 + x6976;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6983 = x6719 * x6719;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6984 = x6726 + x6726;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6985 = x6711 * x6984;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6986 = x6985 - x6983;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6987 = x6986 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6988 = x6703 * x6703;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6989 = x6988 + x6987;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6990 = x6726 * x6726;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6991 = x6990 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6992 = x6711 * x6711;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6993 = x6719 + x6719;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6994 = x6703 * x6993;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6995 = x6994 - x6992;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6996 = x6995 + x6991;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6997 = x6996 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6998 = x6997 * x6996;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x6999 = x6989 * x6989;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7000 = x6999 + x6998;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7001 = inv(x7000);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7002 = x6989 * x7001;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7003 = x6996 * x7001;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7004 = x6719 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7005 = x7004 * x7003;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7006 = x6703 * x7002;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7007 = x7006 + x7005;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7008 = x6726 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7009 = x7008 * x7003;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7010 = -x6711;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7011 = x7010 * x7002;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7012 = x7011 - x7009;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7013 = x6719 * x7002;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7014 = -x6703;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7015 = x7014 * x7003;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7016 = x7015 + x7013;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7017 = x6726 * x7002;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7018 = x6711 * x7003;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7019 = x7018 - x7017;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7020 = x6982 * x6147;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7021 = x6975 * x6155;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7022 = x6967 * x6162;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7023 = x7022 + x7021;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7024 = x7023 + x7020;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7025 = x7024 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7026 = x6959 * x6139;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7027 = x7026 + x7025;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7028 = x6982 * x6155;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7029 = x6975 * x6162;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7030 = x7029 + x7028;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7031 = x7030 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7032 = x6967 * x6139;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7033 = x6959 * x6147;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7034 = x7033 + x7032;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7035 = x7034 + x7031;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7036 = x6982 * x6162;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7037 = x7036 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7038 = x6975 * x6139;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7039 = x6967 * x6147;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7040 = x6959 * x6155;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7041 = x7040 + x7039;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7042 = x7041 + x7038;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7043 = x7042 + x7037;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7044 = x6982 * x6139;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7045 = x6975 * x6147;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7046 = x6967 * x6155;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7047 = x6959 * x6162;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7048 = x7047 + x7046;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7049 = x7048 + x7045;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7050 = x7049 + x7044;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7051 = x7050 * x7012;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7052 = x7043 * x7016;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7053 = x7035 * x7019;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7054 = x7053 + x7052;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7055 = x7054 + x7051;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7056 = x7055 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7057 = x7027 * x7007;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7058 = x7057 + x7056;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7059 = x7050 * x7016;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7060 = x7043 * x7019;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7061 = x7060 + x7059;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7062 = x7061 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7063 = x7035 * x7007;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7064 = x7027 * x7012;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7065 = x7064 + x7063;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7066 = x7065 + x7062;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7067 = x7050 * x7019;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7068 = x7067 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7069 = x7043 * x7007;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7070 = x7035 * x7012;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7071 = x7027 * x7016;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7072 = x7071 + x7070;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7073 = x7072 + x7069;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7074 = x7073 + x7068;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7075 = x7050 * x7007;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7076 = x7043 * x7012;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7077 = x7035 * x7016;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7078 = x7027 * x7019;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7079 = x7078 + x7077;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7080 = x7079 + x7076;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7081 = x7080 + x7075;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7082 = x6907 * x6907;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7083 = x6914 + x6914;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7084 = x6899 * x7083;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7085 = x7084 - x7082;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7086 = x7085 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7087 = x6891 * x6891;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7088 = x7087 + x7086;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7089 = x6914 * x6914;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7090 = x7089 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7091 = x6899 * x6899;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7092 = x6907 + x6907;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7093 = x6891 * x7092;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7094 = x7093 - x7091;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7095 = x7094 + x7090;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7096 = x7095 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7097 = x7096 * x7095;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7098 = x7088 * x7088;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7099 = x7098 + x7097;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7100 = inv(x7099);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7101 = x7088 * x7100;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7102 = x7095 * x7100;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7103 = x6907 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7104 = x7103 * x7102;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7105 = x6891 * x7101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7106 = x7105 + x7104;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7107 = x6914 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7108 = x7107 * x7102;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7109 = -x6899;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7110 = x7109 * x7101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7111 = x7110 - x7108;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7112 = x6907 * x7101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7113 = -x6891;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7114 = x7113 * x7102;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7115 = x7114 + x7112;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7116 = x6914 * x7101;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7117 = x6899 * x7102;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7118 = x7117 - x7116;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7119 = x7081 * x6335;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7120 = x7074 * x6343;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7121 = x7066 * x6350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7122 = x7121 + x7120;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7123 = x7122 + x7119;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7124 = x7123 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7125 = x7058 * x6327;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7126 = x7125 + x7124;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7127 = x7081 * x6343;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7128 = x7074 * x6350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7129 = x7128 + x7127;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7130 = x7129 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7131 = x7066 * x6327;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7132 = x7058 * x6335;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7133 = x7132 + x7131;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7134 = x7133 + x7130;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7135 = x7081 * x6350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7136 = x7135 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7137 = x7074 * x6327;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7138 = x7066 * x6335;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7139 = x7058 * x6343;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7140 = x7139 + x7138;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7141 = x7140 + x7137;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7142 = x7141 + x7136;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7143 = x7081 * x6327;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7144 = x7074 * x6335;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7145 = x7066 * x6343;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7146 = x7058 * x6350;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7147 = x7146 + x7145;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7148 = x7147 + x7144;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7149 = x7148 + x7143;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7150 = x7149 * x7111;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7151 = x7142 * x7115;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7152 = x7134 * x7118;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7153 = x7152 + x7151;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7154 = x7153 + x7150;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7155 = x7154 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7156 = x7126 * x7106;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7157 = x7156 + x7155;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7158 = x7149 * x7115;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7159 = x7142 * x7118;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7160 = x7159 + x7158;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7161 = x7160 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7162 = x7134 * x7106;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7163 = x7126 * x7111;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7164 = x7163 + x7162;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7165 = x7164 + x7161;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7166 = x7149 * x7118;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7167 = x7166 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7168 = x7142 * x7106;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7169 = x7134 * x7111;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7170 = x7126 * x7115;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7171 = x7170 + x7169;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7172 = x7171 + x7168;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7173 = x7172 + x7167;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7174 = x7149 * x7106;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7175 = x7142 * x7111;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7176 = x7134 * x7115;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7177 = x7126 * x7118;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7178 = x7177 + x7176;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7179 = x7178 + x7175;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7180 = x7179 + x7174;
      host_args.at(0) = x7157;
      host_args.at(1) = x7165;
      host_args.at(2) = x7173;
      host_args.at(3) = x7180;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x10 != 0) {
    {
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x7181 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x7181 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7182 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x7182 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7183 = args[2][7 * steps + ((cycle - 0) & mask)];
      assert(x7183 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7184 = args[2][8 * steps + ((cycle - 0) & mask)];
      assert(x7184 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7185 = args[2][9 * steps + ((cycle - 0) & mask)];
      assert(x7185 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7186 = args[3][0];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7187 = args[3][1];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7188 = args[3][2];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7189 = args[3][3];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7190 = x7186 * x7181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7191 = x7187 * x7181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7192 = x7188 * x7181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7193 = x7189 * x7181;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7194 = x7190 + x2;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7195 = args[3][4];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7196 = args[3][5];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7197 = args[3][6];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7198 = args[3][7];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7199 = x7195 * x7182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7200 = x7196 * x7182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7201 = x7197 * x7182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7202 = x7198 * x7182;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7203 = x7194 + x7199;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7204 = x7191 + x7200;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7205 = x7192 + x7201;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7206 = x7193 + x7202;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7207 = args[3][8];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7208 = args[3][9];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7209 = args[3][10];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7210 = args[3][11];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7211 = x7207 * x7183;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7212 = x7208 * x7183;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7213 = x7209 * x7183;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7214 = x7210 * x7183;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7215 = x7203 + x7211;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7216 = x7204 + x7212;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7217 = x7205 + x7213;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7218 = x7206 + x7214;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7219 = args[3][12];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7220 = args[3][13];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7221 = args[3][14];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7222 = args[3][15];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7223 = x7219 * x7184;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7224 = x7220 * x7184;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7225 = x7221 * x7184;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7226 = x7222 * x7184;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7227 = x7215 + x7223;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7228 = x7216 + x7224;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7229 = x7217 + x7225;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7230 = x7218 + x7226;
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[0](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7231 = args[3][16];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[1](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7232 = args[3][17];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[2](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7233 = args[3][18];
      // loc("top(recursion::Top)/recursion::WomHeader/FpExtReg/elem[3](Reg)"("./zirgen/components/plonk.h":218:0))
      auto x7234 = args[3][19];
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7235 = x7231 * x7185;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7236 = x7232 * x7185;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7237 = x7233 * x7185;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7238 = x7234 * x7185;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7239 = x7227 + x7235;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7240 = x7228 + x7236;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7241 = x7229 + x7237;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7242 = x7230 + x7238;
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x7243 = args[2][10 * steps + ((cycle - 0) & mask)];
      assert(x7243 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7244 = args[2][11 * steps + ((cycle - 0) & mask)];
      assert(x7244 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7245 = args[2][12 * steps + ((cycle - 0) & mask)];
      assert(x7245 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7246 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x7246 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7247 = args[2][14 * steps + ((cycle - 0) & mask)];
      assert(x7247 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7248 = x7186 * x7243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7249 = x7187 * x7243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7250 = x7188 * x7243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7251 = x7189 * x7243;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7252 = x7248 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7253 = x7195 * x7244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7254 = x7196 * x7244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7255 = x7197 * x7244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7256 = x7198 * x7244;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7257 = x7252 + x7253;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7258 = x7249 + x7254;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7259 = x7250 + x7255;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7260 = x7251 + x7256;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7261 = x7207 * x7245;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7262 = x7208 * x7245;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7263 = x7209 * x7245;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7264 = x7210 * x7245;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7265 = x7257 + x7261;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7266 = x7258 + x7262;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7267 = x7259 + x7263;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7268 = x7260 + x7264;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7269 = x7219 * x7246;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7270 = x7220 * x7246;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7271 = x7221 * x7246;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7272 = x7222 * x7246;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7273 = x7265 + x7269;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7274 = x7266 + x7270;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7275 = x7267 + x7271;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7276 = x7268 + x7272;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7277 = x7231 * x7247;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7278 = x7232 * x7247;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7279 = x7233 * x7247;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7280 = x7234 * x7247;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7281 = x7273 + x7277;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7282 = x7274 + x7278;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7283 = x7275 + x7279;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7284 = x7276 + x7280;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7285 = x7242 * x7282;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7286 = x7241 * x7283;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7287 = x7240 * x7284;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7288 = x7287 + x7286;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7289 = x7288 + x7285;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7290 = x7289 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7291 = x7239 * x7281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7292 = x7291 + x7290;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7293 = x7242 * x7283;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7294 = x7241 * x7284;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7295 = x7294 + x7293;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7296 = x7295 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7297 = x7240 * x7281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7298 = x7239 * x7282;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7299 = x7298 + x7297;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7300 = x7299 + x7296;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7301 = x7242 * x7284;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7302 = x7301 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7303 = x7241 * x7281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7304 = x7240 * x7282;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7305 = x7239 * x7283;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7306 = x7305 + x7304;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7307 = x7306 + x7303;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7308 = x7307 + x7302;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7309 = x7242 * x7281;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7310 = x7241 * x7282;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7311 = x7240 * x7283;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7312 = x7239 * x7284;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7313 = x7312 + x7311;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7314 = x7313 + x7310;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7315 = x7314 + x7309;
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x7316 = args[2][15 * steps + ((cycle - 0) & mask)];
      assert(x7316 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7317 = args[2][16 * steps + ((cycle - 0) & mask)];
      assert(x7317 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7318 = args[2][17 * steps + ((cycle - 0) & mask)];
      assert(x7318 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7319 = args[2][18 * steps + ((cycle - 0) & mask)];
      assert(x7319 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7320 = args[2][19 * steps + ((cycle - 0) & mask)];
      assert(x7320 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7321 = x7186 * x7316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7322 = x7187 * x7316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7323 = x7188 * x7316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7324 = x7189 * x7316;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7325 = x7321 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7326 = x7195 * x7317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7327 = x7196 * x7317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7328 = x7197 * x7317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7329 = x7198 * x7317;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7330 = x7325 + x7326;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7331 = x7322 + x7327;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7332 = x7323 + x7328;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7333 = x7324 + x7329;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7334 = x7207 * x7318;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7335 = x7208 * x7318;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7336 = x7209 * x7318;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7337 = x7210 * x7318;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7338 = x7330 + x7334;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7339 = x7331 + x7335;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7340 = x7332 + x7336;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7341 = x7333 + x7337;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7342 = x7219 * x7319;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7343 = x7220 * x7319;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7344 = x7221 * x7319;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7345 = x7222 * x7319;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7346 = x7338 + x7342;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7347 = x7339 + x7343;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7348 = x7340 + x7344;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7349 = x7341 + x7345;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7350 = x7231 * x7320;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7351 = x7232 * x7320;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7352 = x7233 * x7320;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7353 = x7234 * x7320;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7354 = x7346 + x7350;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7355 = x7347 + x7351;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7356 = x7348 + x7352;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7357 = x7349 + x7353;
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":22:0))
      auto x7358 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x7358 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7359 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x7359 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7360 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x7360 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7361 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x7361 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":44:0))
      auto x7362 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x7362 != Fp::invalid());
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7363 = x7186 * x7358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7364 = x7187 * x7358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7365 = x7188 * x7358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7366 = x7189 * x7358;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7367 = x7363 + x2;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7368 = x7195 * x7359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7369 = x7196 * x7359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7370 = x7197 * x7359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7371 = x7198 * x7359;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7372 = x7367 + x7368;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7373 = x7364 + x7369;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7374 = x7365 + x7370;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7375 = x7366 + x7371;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7376 = x7207 * x7360;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7377 = x7208 * x7360;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7378 = x7209 * x7360;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7379 = x7210 * x7360;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7380 = x7372 + x7376;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7381 = x7373 + x7377;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7382 = x7374 + x7378;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7383 = x7375 + x7379;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7384 = x7219 * x7361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7385 = x7220 * x7361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7386 = x7221 * x7361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7387 = x7222 * x7361;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7388 = x7380 + x7384;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7389 = x7381 + x7385;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7390 = x7382 + x7386;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7391 = x7383 + x7387;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7392 = x7231 * x7362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7393 = x7232 * x7362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7394 = x7233 * x7362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7395 = x7234 * x7362;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7396 = x7388 + x7392;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7397 = x7389 + x7393;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7398 = x7390 + x7394;
      // loc("./zirgen/components/plonk.h":218:0)
      auto x7399 = x7391 + x7395;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7400 = x7357 * x7397;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7401 = x7356 * x7398;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7402 = x7355 * x7399;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7403 = x7402 + x7401;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7404 = x7403 + x7400;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7405 = x7404 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7406 = x7354 * x7396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7407 = x7406 + x7405;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7408 = x7357 * x7398;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7409 = x7356 * x7399;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7410 = x7409 + x7408;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7411 = x7410 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7412 = x7355 * x7396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7413 = x7354 * x7397;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7414 = x7413 + x7412;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7415 = x7414 + x7411;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7416 = x7357 * x7399;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7417 = x7416 * x0;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7418 = x7356 * x7396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7419 = x7355 * x7397;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7420 = x7354 * x7398;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7421 = x7420 + x7419;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7422 = x7421 + x7418;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7423 = x7422 + x7417;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7424 = x7357 * x7396;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7425 = x7356 * x7397;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7426 = x7355 * x7398;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7427 = x7354 * x7399;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7428 = x7427 + x7426;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7429 = x7428 + x7425;
      // loc("./zirgen/components/plonk.h":220:0)
      auto x7430 = x7429 + x7424;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7431 = x7423 * x7423;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7432 = x7430 + x7430;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7433 = x7415 * x7432;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7434 = x7433 - x7431;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7435 = x7434 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7436 = x7407 * x7407;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7437 = x7436 + x7435;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7438 = x7430 * x7430;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7439 = x7438 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7440 = x7415 * x7415;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7441 = x7423 + x7423;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7442 = x7407 * x7441;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7443 = x7442 - x7440;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7444 = x7443 + x7439;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7445 = x7444 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7446 = x7445 * x7444;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7447 = x7437 * x7437;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7448 = x7447 + x7446;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7449 = inv(x7448);
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7450 = x7437 * x7449;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7451 = x7444 * x7449;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7452 = x7423 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7453 = x7452 * x7451;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7454 = x7407 * x7450;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7455 = x7454 + x7453;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7456 = x7430 * x1;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7457 = x7456 * x7451;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7458 = -x7415;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7459 = x7458 * x7450;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7460 = x7459 - x7457;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7461 = x7423 * x7450;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7462 = -x7407;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7463 = x7462 * x7451;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7464 = x7463 + x7461;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7465 = x7430 * x7450;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7466 = x7415 * x7451;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7467 = x7466 - x7465;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7468 = x7315 * x7460;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7469 = x7308 * x7464;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7470 = x7300 * x7467;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7471 = x7470 + x7469;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7472 = x7471 + x7468;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7473 = x7472 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7474 = x7292 * x7455;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7475 = x7474 + x7473;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7476 = x7315 * x7464;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7477 = x7308 * x7467;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7478 = x7477 + x7476;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7479 = x7478 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7480 = x7300 * x7455;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7481 = x7292 * x7460;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7482 = x7481 + x7480;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7483 = x7482 + x7479;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7484 = x7315 * x7467;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7485 = x7484 * x0;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7486 = x7308 * x7455;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7487 = x7300 * x7460;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7488 = x7292 * x7464;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7489 = x7488 + x7487;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7490 = x7489 + x7486;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7491 = x7490 + x7485;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7492 = x7315 * x7455;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7493 = x7308 * x7460;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7494 = x7300 * x7464;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7495 = x7292 * x7467;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7496 = x7495 + x7494;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7497 = x7496 + x7493;
      // loc("./zirgen/components/plonk.h":262:0)
      auto x7498 = x7497 + x7492;
      host_args.at(0) = x7475;
      host_args.at(1) = x7483;
      host_args.at(2) = x7491;
      host_args.at(3) = x7498;
      host(ctx, "plonkWriteAccum", "wom", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  return x3;
}

} // namespace risc0::circuit::recursion
// clang-format on
