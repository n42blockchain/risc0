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

#include "steps.cuh"
#include "witgen.h"

namespace risc0::circuit::keccak::cuda {

__device__ TopStateStruct back_TopState(ExecContext& ctx,
                                        Index distance0,
                                        BoundLayout<TopStateLayout> layout1) {
  // TopState(zirgen/circuit/keccak2/top.zir:35)
  TopStateBitsStruct800Array x2 = map(
      Val800Array{
          Val(0),   Val(1),   Val(2),   Val(3),   Val(4),   Val(5),   Val(6),   Val(7),   Val(8),
          Val(9),   Val(10),  Val(11),  Val(12),  Val(13),  Val(14),  Val(15),  Val(16),  Val(17),
          Val(18),  Val(19),  Val(20),  Val(21),  Val(22),  Val(23),  Val(24),  Val(25),  Val(26),
          Val(27),  Val(28),  Val(29),  Val(30),  Val(31),  Val(32),  Val(33),  Val(34),  Val(35),
          Val(36),  Val(37),  Val(38),  Val(39),  Val(40),  Val(41),  Val(42),  Val(43),  Val(44),
          Val(45),  Val(46),  Val(47),  Val(48),  Val(49),  Val(50),  Val(51),  Val(52),  Val(53),
          Val(54),  Val(55),  Val(56),  Val(57),  Val(58),  Val(59),  Val(60),  Val(61),  Val(62),
          Val(63),  Val(64),  Val(65),  Val(66),  Val(67),  Val(68),  Val(69),  Val(70),  Val(71),
          Val(72),  Val(73),  Val(74),  Val(75),  Val(76),  Val(77),  Val(78),  Val(79),  Val(80),
          Val(81),  Val(82),  Val(83),  Val(84),  Val(85),  Val(86),  Val(87),  Val(88),  Val(89),
          Val(90),  Val(91),  Val(92),  Val(93),  Val(94),  Val(95),  Val(96),  Val(97),  Val(98),
          Val(99),  Val(100), Val(101), Val(102), Val(103), Val(104), Val(105), Val(106), Val(107),
          Val(108), Val(109), Val(110), Val(111), Val(112), Val(113), Val(114), Val(115), Val(116),
          Val(117), Val(118), Val(119), Val(120), Val(121), Val(122), Val(123), Val(124), Val(125),
          Val(126), Val(127), Val(128), Val(129), Val(130), Val(131), Val(132), Val(133), Val(134),
          Val(135), Val(136), Val(137), Val(138), Val(139), Val(140), Val(141), Val(142), Val(143),
          Val(144), Val(145), Val(146), Val(147), Val(148), Val(149), Val(150), Val(151), Val(152),
          Val(153), Val(154), Val(155), Val(156), Val(157), Val(158), Val(159), Val(160), Val(161),
          Val(162), Val(163), Val(164), Val(165), Val(166), Val(167), Val(168), Val(169), Val(170),
          Val(171), Val(172), Val(173), Val(174), Val(175), Val(176), Val(177), Val(178), Val(179),
          Val(180), Val(181), Val(182), Val(183), Val(184), Val(185), Val(186), Val(187), Val(188),
          Val(189), Val(190), Val(191), Val(192), Val(193), Val(194), Val(195), Val(196), Val(197),
          Val(198), Val(199), Val(200), Val(201), Val(202), Val(203), Val(204), Val(205), Val(206),
          Val(207), Val(208), Val(209), Val(210), Val(211), Val(212), Val(213), Val(214), Val(215),
          Val(216), Val(217), Val(218), Val(219), Val(220), Val(221), Val(222), Val(223), Val(224),
          Val(225), Val(226), Val(227), Val(228), Val(229), Val(230), Val(231), Val(232), Val(233),
          Val(234), Val(235), Val(236), Val(237), Val(238), Val(239), Val(240), Val(241), Val(242),
          Val(243), Val(244), Val(245), Val(246), Val(247), Val(248), Val(249), Val(250), Val(251),
          Val(252), Val(253), Val(254), Val(255), Val(256), Val(257), Val(258), Val(259), Val(260),
          Val(261), Val(262), Val(263), Val(264), Val(265), Val(266), Val(267), Val(268), Val(269),
          Val(270), Val(271), Val(272), Val(273), Val(274), Val(275), Val(276), Val(277), Val(278),
          Val(279), Val(280), Val(281), Val(282), Val(283), Val(284), Val(285), Val(286), Val(287),
          Val(288), Val(289), Val(290), Val(291), Val(292), Val(293), Val(294), Val(295), Val(296),
          Val(297), Val(298), Val(299), Val(300), Val(301), Val(302), Val(303), Val(304), Val(305),
          Val(306), Val(307), Val(308), Val(309), Val(310), Val(311), Val(312), Val(313), Val(314),
          Val(315), Val(316), Val(317), Val(318), Val(319), Val(320), Val(321), Val(322), Val(323),
          Val(324), Val(325), Val(326), Val(327), Val(328), Val(329), Val(330), Val(331), Val(332),
          Val(333), Val(334), Val(335), Val(336), Val(337), Val(338), Val(339), Val(340), Val(341),
          Val(342), Val(343), Val(344), Val(345), Val(346), Val(347), Val(348), Val(349), Val(350),
          Val(351), Val(352), Val(353), Val(354), Val(355), Val(356), Val(357), Val(358), Val(359),
          Val(360), Val(361), Val(362), Val(363), Val(364), Val(365), Val(366), Val(367), Val(368),
          Val(369), Val(370), Val(371), Val(372), Val(373), Val(374), Val(375), Val(376), Val(377),
          Val(378), Val(379), Val(380), Val(381), Val(382), Val(383), Val(384), Val(385), Val(386),
          Val(387), Val(388), Val(389), Val(390), Val(391), Val(392), Val(393), Val(394), Val(395),
          Val(396), Val(397), Val(398), Val(399), Val(400), Val(401), Val(402), Val(403), Val(404),
          Val(405), Val(406), Val(407), Val(408), Val(409), Val(410), Val(411), Val(412), Val(413),
          Val(414), Val(415), Val(416), Val(417), Val(418), Val(419), Val(420), Val(421), Val(422),
          Val(423), Val(424), Val(425), Val(426), Val(427), Val(428), Val(429), Val(430), Val(431),
          Val(432), Val(433), Val(434), Val(435), Val(436), Val(437), Val(438), Val(439), Val(440),
          Val(441), Val(442), Val(443), Val(444), Val(445), Val(446), Val(447), Val(448), Val(449),
          Val(450), Val(451), Val(452), Val(453), Val(454), Val(455), Val(456), Val(457), Val(458),
          Val(459), Val(460), Val(461), Val(462), Val(463), Val(464), Val(465), Val(466), Val(467),
          Val(468), Val(469), Val(470), Val(471), Val(472), Val(473), Val(474), Val(475), Val(476),
          Val(477), Val(478), Val(479), Val(480), Val(481), Val(482), Val(483), Val(484), Val(485),
          Val(486), Val(487), Val(488), Val(489), Val(490), Val(491), Val(492), Val(493), Val(494),
          Val(495), Val(496), Val(497), Val(498), Val(499), Val(500), Val(501), Val(502), Val(503),
          Val(504), Val(505), Val(506), Val(507), Val(508), Val(509), Val(510), Val(511), Val(512),
          Val(513), Val(514), Val(515), Val(516), Val(517), Val(518), Val(519), Val(520), Val(521),
          Val(522), Val(523), Val(524), Val(525), Val(526), Val(527), Val(528), Val(529), Val(530),
          Val(531), Val(532), Val(533), Val(534), Val(535), Val(536), Val(537), Val(538), Val(539),
          Val(540), Val(541), Val(542), Val(543), Val(544), Val(545), Val(546), Val(547), Val(548),
          Val(549), Val(550), Val(551), Val(552), Val(553), Val(554), Val(555), Val(556), Val(557),
          Val(558), Val(559), Val(560), Val(561), Val(562), Val(563), Val(564), Val(565), Val(566),
          Val(567), Val(568), Val(569), Val(570), Val(571), Val(572), Val(573), Val(574), Val(575),
          Val(576), Val(577), Val(578), Val(579), Val(580), Val(581), Val(582), Val(583), Val(584),
          Val(585), Val(586), Val(587), Val(588), Val(589), Val(590), Val(591), Val(592), Val(593),
          Val(594), Val(595), Val(596), Val(597), Val(598), Val(599), Val(600), Val(601), Val(602),
          Val(603), Val(604), Val(605), Val(606), Val(607), Val(608), Val(609), Val(610), Val(611),
          Val(612), Val(613), Val(614), Val(615), Val(616), Val(617), Val(618), Val(619), Val(620),
          Val(621), Val(622), Val(623), Val(624), Val(625), Val(626), Val(627), Val(628), Val(629),
          Val(630), Val(631), Val(632), Val(633), Val(634), Val(635), Val(636), Val(637), Val(638),
          Val(639), Val(640), Val(641), Val(642), Val(643), Val(644), Val(645), Val(646), Val(647),
          Val(648), Val(649), Val(650), Val(651), Val(652), Val(653), Val(654), Val(655), Val(656),
          Val(657), Val(658), Val(659), Val(660), Val(661), Val(662), Val(663), Val(664), Val(665),
          Val(666), Val(667), Val(668), Val(669), Val(670), Val(671), Val(672), Val(673), Val(674),
          Val(675), Val(676), Val(677), Val(678), Val(679), Val(680), Val(681), Val(682), Val(683),
          Val(684), Val(685), Val(686), Val(687), Val(688), Val(689), Val(690), Val(691), Val(692),
          Val(693), Val(694), Val(695), Val(696), Val(697), Val(698), Val(699), Val(700), Val(701),
          Val(702), Val(703), Val(704), Val(705), Val(706), Val(707), Val(708), Val(709), Val(710),
          Val(711), Val(712), Val(713), Val(714), Val(715), Val(716), Val(717), Val(718), Val(719),
          Val(720), Val(721), Val(722), Val(723), Val(724), Val(725), Val(726), Val(727), Val(728),
          Val(729), Val(730), Val(731), Val(732), Val(733), Val(734), Val(735), Val(736), Val(737),
          Val(738), Val(739), Val(740), Val(741), Val(742), Val(743), Val(744), Val(745), Val(746),
          Val(747), Val(748), Val(749), Val(750), Val(751), Val(752), Val(753), Val(754), Val(755),
          Val(756), Val(757), Val(758), Val(759), Val(760), Val(761), Val(762), Val(763), Val(764),
          Val(765), Val(766), Val(767), Val(768), Val(769), Val(770), Val(771), Val(772), Val(773),
          Val(774), Val(775), Val(776), Val(777), Val(778), Val(779), Val(780), Val(781), Val(782),
          Val(783), Val(784), Val(785), Val(786), Val(787), Val(788), Val(789), Val(790), Val(791),
          Val(792), Val(793), Val(794), Val(795), Val(796), Val(797), Val(798), Val(799)},
      LAYOUT_LOOKUP(layout1, bits),
      ([&](Val800Array::value_type x3, BoundLayout<NondetRegLayout800LayoutArray::value_type> x4) {
        // TopState(zirgen/circuit/keccak2/top.zir:36)
        NondetRegStruct x5 = back_Reg(ctx, distance0, x4);
        return TopStateBitsStruct{._super = x5};
      }));
  // TopState(zirgen/circuit/keccak2/top.zir:39)
  TopStateKflatStruct100Array x6 = map(
      Val100Array{
          Val(0),  Val(1),  Val(2),  Val(3),  Val(4),  Val(5),  Val(6),  Val(7),  Val(8),  Val(9),
          Val(10), Val(11), Val(12), Val(13), Val(14), Val(15), Val(16), Val(17), Val(18), Val(19),
          Val(20), Val(21), Val(22), Val(23), Val(24), Val(25), Val(26), Val(27), Val(28), Val(29),
          Val(30), Val(31), Val(32), Val(33), Val(34), Val(35), Val(36), Val(37), Val(38), Val(39),
          Val(40), Val(41), Val(42), Val(43), Val(44), Val(45), Val(46), Val(47), Val(48), Val(49),
          Val(50), Val(51), Val(52), Val(53), Val(54), Val(55), Val(56), Val(57), Val(58), Val(59),
          Val(60), Val(61), Val(62), Val(63), Val(64), Val(65), Val(66), Val(67), Val(68), Val(69),
          Val(70), Val(71), Val(72), Val(73), Val(74), Val(75), Val(76), Val(77), Val(78), Val(79),
          Val(80), Val(81), Val(82), Val(83), Val(84), Val(85), Val(86), Val(87), Val(88), Val(89),
          Val(90), Val(91), Val(92), Val(93), Val(94), Val(95), Val(96), Val(97), Val(98), Val(99)},
      LAYOUT_LOOKUP(layout1, kflat),
      ([&](Val100Array::value_type x7, BoundLayout<NondetRegLayout100LayoutArray::value_type> x8) {
        // TopState(zirgen/circuit/keccak2/top.zir:40)
        NondetRegStruct x9 = back_Reg(ctx, distance0, x8);
        return TopStateKflatStruct{._super = x9};
      }));
  // TopState(zirgen/circuit/keccak2/top.zir:42)
  NondetRegStruct16Array x10 = map(
      Val16Array{Val(0),
                 Val(1),
                 Val(2),
                 Val(3),
                 Val(4),
                 Val(5),
                 Val(6),
                 Val(7),
                 Val(8),
                 Val(9),
                 Val(10),
                 Val(11),
                 Val(12),
                 Val(13),
                 Val(14),
                 Val(15)},
      LAYOUT_LOOKUP(layout1, sflat),
      ([&](Val16Array::value_type x11, BoundLayout<NondetRegLayout16LayoutArray::value_type> x12) {
        // TopState(zirgen/circuit/keccak2/top.zir:43)
        NondetRegStruct x13 = back_Reg(ctx, distance0, x12);
        return x13;
      }));
  return TopStateStruct{.bits = x2, .kflat = x6, .sflat = x10};
}
__device__ TopStateStruct exec_ShutdownCycle(ExecContext& ctx,
                                             TopStateStruct arg0,
                                             BoundLayout<TopStateLayout> layout1,
                                             GlobalBuf global2) {
  // ShutdownCycle(zirgen/circuit/keccak2/top.zir:394)
  BoundLayout<_globalLayout> x3 = BIND_LAYOUT(kLayoutGlobal, global2);
  // Log(<preamble>:22)
  // ShutdownCycle(zirgen/circuit/keccak2/top.zir:395)
  INVOKE_EXTERN(ctx, log, "ShutdownCycle", std::initializer_list<Val>{});
  // ShutdownCycle(zirgen/circuit/keccak2/top.zir:394)
  Val16Array x4 = Val16Array{arg0.sflat[0]._super,
                             arg0.sflat[1]._super,
                             arg0.sflat[2]._super,
                             arg0.sflat[3]._super,
                             arg0.sflat[4]._super,
                             arg0.sflat[5]._super,
                             arg0.sflat[6]._super,
                             arg0.sflat[7]._super,
                             arg0.sflat[8]._super,
                             arg0.sflat[9]._super,
                             arg0.sflat[10]._super,
                             arg0.sflat[11]._super,
                             arg0.sflat[12]._super,
                             arg0.sflat[13]._super,
                             arg0.sflat[14]._super,
                             arg0.sflat[15]._super};
  // ShutdownCycle(zirgen/circuit/keccak2/top.zir:396)
  DigestRegStruct x5 = exec_DigestReg(ctx, x4, LAYOUT_LOOKUP(x3, finalDigest));
  // ShutdownCycle(zirgen/circuit/keccak2/top.zir:399)
  TopStateStruct x6 = exec_TopState(
      ctx,
      Val800Array{
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
          Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0)},
      Val100Array{Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0),
                  Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0), Val(0)},
      x4,
      layout1);
  return x6;
}

} // namespace risc0::circuit::keccak::cuda
