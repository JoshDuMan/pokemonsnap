#include <common.h>

extern Vtx pkmn_1031_vtx[];
extern Gfx pkmn_1031_part0[];

extern u8 D_80125FF8_34CC78[];

#include "assets/volcano/pkmn_1031/first.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part0.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part1.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part2.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part3.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part4.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part5.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part6.gfx.inc.c"
#include "assets/volcano/pkmn_1031/part7.gfx.inc.c"
#include "assets/volcano/pkmn_1031/last.gfx.inc.c"
#include "assets/volcano/pkmn_1031/model.vtx.inc.c"

DObjPayloadTypeC pkmn_1031_gfxdata[] = {
    { 1, pkmn_1031_first },
    { 4, NULL },
    { 1, pkmn_1031_part1 },
    { 4, NULL },
    { 1, pkmn_1031_part2 },
    { 4, NULL },
    { 1, pkmn_1031_part3 },
    { 4, NULL },
    { 1, pkmn_1031_part4 },
    { 4, NULL },
    { 1, pkmn_1031_part5 },
    { 4, NULL },
    { 1, pkmn_1031_part6 },
    { 4, NULL },
    { 1, pkmn_1031_last },
    { 4, NULL },
};

UnkEC64Arg3 pkmn_1031_model[] = {
    { 0,
      NULL,
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 1,
      NULL,
      { -14.431688, -62.086559, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[0],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 1,
      NULL,
      { 144.705017, -564.064697, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[2],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 1,
      NULL,
      { 546.540283, 4686.126465, 297.392639 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[4],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 4.374820, 4.374820, 4.374820 } },
    { 1,
      NULL,
      { -289.959991, 3203.085693, 310.401978 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[6],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 4.374820, 4.374820, 4.374820 } },
    { 1,
      NULL,
      { 227.951981, 3081.696777, -210.098099 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[8],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 2.500002, 2.500002, 2.500002 } },
    { 1,
      NULL,
      { 297.017212, 1965.299194, 440.255493 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[10],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 2.500002, 2.500002, 2.500002 } },
    { 1,
      NULL,
      { -196.361801, 1508.263062, -24.632191 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[12],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 2.0, 2.0, 2.0 } },
    { 1,
      NULL,
      { -53.832520, 745.727356, -131.390884 },
      { 0.0, 0.0, 0.0 },
      { 1.0, 1.0, 1.0 } },
    { 0x8002,
      &pkmn_1031_gfxdata[14],
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 2.0, 2.0, 2.0 } },
    { 18,
      NULL,
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 },
      { 0.0, 0.0, 0.0 } },
};
