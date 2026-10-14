
/* WARNING: Type propagation algorithm not settling */

undefined4 * __fastcall FUN_004e8fe0(undefined4 *param_1)

{
  BaseWatcher *this;
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uStack_21c;
  char *pcStack_218;
  uint *puStack_214;
  undefined4 ***pppuStack_210;
  char *pcStack_20c;
  undefined4 **ppuStack_208;
  undefined4 uStack_204;
  undefined1 **ppuStack_200;
  undefined4 uStack_1fc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_1f8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_1f4;
  undefined4 uStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  undefined4 **ppuStack_1e4;
  float fStack_1e0;
  undefined1 *puStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 **ppuStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  undefined4 *puStack_1c0;
  undefined4 uStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1b0;
  uint auStack_1ac [4];
  char *pcStack_19c;
  char *pcStack_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  undefined4 *puStack_18c;
  undefined4 uStack_188;
  undefined1 *puStack_184;
  undefined4 uStack_180;
  undefined4 *puStack_17c;
  undefined4 uStack_178;
  char *pcStack_174;
  undefined4 uStack_15c;
  undefined1 uStack_159;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_124 [12];
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined4 *local_110;
  void *pvStack_ac;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bec1f;
  pvStack_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 10);
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)this = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  pcStack_174 = (char *)0x4e9029;
  local_110 = param_1;
  BaseWatcher::set(this,(Watchable *)0x0);
  local_4 = 1;
  *param_1 = &PTR_FUN_005d6eac;
  param_1[0xd] = 0;
  pcStack_174 = (char *)0x4e9047;
  BaseWatcher::set(this,(Watchable *)0x0);
  param_1[0xc] = 0;
  local_4 = 2;
  FUN_0059f860();
  param_1[0xd9] = &PTR_LAB_005cbed8;
  *(undefined1 *)(param_1 + 0xdc) = uStack_159;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe0] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)((int)param_1 + 0x3ad) = 0;
  *(undefined1 *)((int)param_1 + 0x3ae) = 0;
  *(undefined1 *)((int)param_1 + 0x3af) = 1;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)((int)param_1 + 0x3b1) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  local_4._0_1_ = 5;
  param_1[0xed] = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)((int)param_1 + 0x3e1) = 0;
  *(undefined1 *)((int)param_1 + 0x3e2) = 0;
  *(undefined1 *)((int)param_1 + 0x3e3) = 1;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0x3e5) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0xffffffff;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  FUN_00420d40();
  param_1[0x11c] = 0x3f800000;
  param_1[0x11b] = 0x3f800000;
  param_1[0x11a] = 0x3f800000;
  param_1[0x119] = 0x3f800000;
  param_1[0x11d] = 0x3f800000;
  param_1[0x114] = &PTR_FUN_005d2efc;
  param_1[0x118] = 0xffffffff;
  local_4._0_1_ = 6;
  FUN_00420d40();
  param_1[0x126] = 0x3f800000;
  param_1[0x125] = 0x3f800000;
  param_1[0x124] = 0x3f800000;
  param_1[0x123] = 0x3f800000;
  param_1[0x127] = 0x3f800000;
  param_1[0x11e] = &PTR_FUN_005d2efc;
  param_1[0x122] = 0xffffffff;
  local_4._0_1_ = 7;
  FUN_00420d40();
  param_1[0x130] = 0x3f800000;
  param_1[0x12f] = 0x3f800000;
  param_1[0x12e] = 0x3f800000;
  param_1[0x12d] = 0x3f800000;
  param_1[0x131] = 0x3f800000;
  param_1[0x128] = &PTR_FUN_005d2efc;
  param_1[300] = 0xffffffff;
  local_4._0_1_ = 8;
  FUN_00420d40();
  param_1[0x13a] = 0x3f800000;
  param_1[0x139] = 0x3f800000;
  param_1[0x138] = 0x3f800000;
  param_1[0x137] = 0x3f800000;
  param_1[0x13b] = 0x3f800000;
  param_1[0x132] = &PTR_FUN_005d2efc;
  param_1[0x136] = 0xffffffff;
  local_4._0_1_ = 9;
  FUN_00420d40();
  param_1[0x144] = 0x3f800000;
  param_1[0x143] = 0x3f800000;
  param_1[0x142] = 0x3f800000;
  param_1[0x141] = 0x3f800000;
  param_1[0x145] = 0x3f800000;
  param_1[0x13c] = &PTR_FUN_005d2efc;
  param_1[0x140] = 0xffffffff;
  local_4._0_1_ = 10;
  FUN_00420d40();
  param_1[0x14e] = 0x3f800000;
  param_1[0x14d] = 0x3f800000;
  param_1[0x14c] = 0x3f800000;
  param_1[0x14b] = 0x3f800000;
  param_1[0x14f] = 0x3f800000;
  param_1[0x146] = &PTR_FUN_005d2efc;
  param_1[0x14a] = 0xffffffff;
  local_4._0_1_ = 0xb;
  FUN_00420d40();
  param_1[0x158] = 0x3f800000;
  param_1[0x157] = 0x3f800000;
  param_1[0x156] = 0x3f800000;
  param_1[0x155] = 0x3f800000;
  param_1[0x159] = 0x3f800000;
  param_1[0x150] = &PTR_FUN_005d2efc;
  param_1[0x154] = 0xffffffff;
  local_4._0_1_ = 0xc;
  FUN_00420d40();
  param_1[0x162] = 0x3f800000;
  param_1[0x161] = 0x3f800000;
  param_1[0x160] = 0x3f800000;
  param_1[0x15f] = 0x3f800000;
  param_1[0x163] = 0x3f800000;
  param_1[0x15a] = &PTR_FUN_005d2efc;
  param_1[0x15e] = 0xffffffff;
  local_4._0_1_ = 0xd;
  FUN_00420d40();
  param_1[0x16c] = 0x3f800000;
  param_1[0x16b] = 0x3f800000;
  param_1[0x16a] = 0x3f800000;
  param_1[0x169] = 0x3f800000;
  param_1[0x16d] = 0x3f800000;
  param_1[0x164] = &PTR_FUN_005d2efc;
  param_1[0x168] = 0xffffffff;
  local_4._0_1_ = 0xe;
  FUN_00420d40();
  param_1[0x176] = 0x3f800000;
  param_1[0x175] = 0x3f800000;
  param_1[0x174] = 0x3f800000;
  param_1[0x173] = 0x3f800000;
  param_1[0x177] = 0x3f800000;
  param_1[0x16e] = &PTR_FUN_005d2efc;
  param_1[0x172] = 0xffffffff;
  local_4._0_1_ = 0xf;
  FUN_00420d40();
  param_1[0x180] = 0x3f800000;
  param_1[0x17f] = 0x3f800000;
  param_1[0x17e] = 0x3f800000;
  param_1[0x17d] = 0x3f800000;
  param_1[0x181] = 0x3f800000;
  param_1[0x178] = &PTR_FUN_005d2efc;
  param_1[0x17c] = 0xffffffff;
  local_4._0_1_ = 0x10;
  FUN_00420d40();
  param_1[0x192] = 0x3f800000;
  param_1[0x191] = 0x3f800000;
  param_1[400] = 0x3f800000;
  param_1[399] = 0x3f800000;
  param_1[0x193] = 0x3f800000;
  param_1[0x18a] = &PTR_FUN_005d2efc;
  param_1[0x18e] = 0xffffffff;
  local_4._0_1_ = 0x11;
  FUN_00420d40();
  param_1[0x19c] = 0x3f800000;
  param_1[0x19b] = 0x3f800000;
  param_1[0x19a] = 0x3f800000;
  param_1[0x199] = 0x3f800000;
  param_1[0x19d] = 0x3f800000;
  param_1[0x194] = &PTR_FUN_005d2efc;
  param_1[0x198] = 0xffffffff;
  local_4._0_1_ = 0x12;
  FUN_00420d40();
  param_1[0x1a6] = 0x3f800000;
  param_1[0x1a5] = 0x3f800000;
  param_1[0x1a4] = 0x3f800000;
  param_1[0x1a3] = 0x3f800000;
  param_1[0x1a7] = 0x3f800000;
  param_1[0x19e] = &PTR_FUN_005d2efc;
  param_1[0x1a2] = 0xffffffff;
  local_4._0_1_ = 0x13;
  FUN_00420d40();
  param_1[0x1b0] = 0x3f800000;
  param_1[0x1af] = 0x3f800000;
  param_1[0x1ae] = 0x3f800000;
  param_1[0x1ad] = 0x3f800000;
  param_1[0x1b1] = 0x3f800000;
  param_1[0x1a8] = &PTR_FUN_005d2efc;
  param_1[0x1ac] = 0xffffffff;
  local_4._0_1_ = 0x14;
  FUN_00420d40();
  param_1[0x1ba] = 0x3f800000;
  param_1[0x1b9] = 0x3f800000;
  param_1[0x1b8] = 0x3f800000;
  param_1[0x1b7] = 0x3f800000;
  param_1[0x1bb] = 0x3f800000;
  param_1[0x1b2] = &PTR_FUN_005d2efc;
  param_1[0x1b6] = 0xffffffff;
  local_4._0_1_ = 0x15;
  FUN_00420d40();
  param_1[0x1c4] = 0x3f800000;
  param_1[0x1c3] = 0x3f800000;
  param_1[0x1c2] = 0x3f800000;
  param_1[0x1c1] = 0x3f800000;
  param_1[0x1c5] = 0x3f800000;
  param_1[0x1bc] = &PTR_FUN_005d2efc;
  param_1[0x1c0] = 0xffffffff;
  local_4._0_1_ = 0x16;
  FUN_00420d40();
  param_1[0x1ce] = 0x3f800000;
  param_1[0x1cd] = 0x3f800000;
  param_1[0x1cc] = 0x3f800000;
  param_1[0x1cb] = 0x3f800000;
  param_1[0x1cf] = 0x3f800000;
  param_1[0x1c6] = &PTR_FUN_005d2efc;
  param_1[0x1ca] = 0xffffffff;
  local_4._0_1_ = 0x17;
  FUN_00420d40();
  param_1[0x1d8] = 0x3f800000;
  param_1[0x1d7] = 0x3f800000;
  param_1[0x1d6] = 0x3f800000;
  param_1[0x1d5] = 0x3f800000;
  param_1[0x1d9] = 0x3f800000;
  param_1[0x1d0] = &PTR_FUN_005d2efc;
  param_1[0x1d4] = 0xffffffff;
  local_4._0_1_ = 0x18;
  FUN_004144b0();
  local_4._0_1_ = 0x19;
  FUN_004144b0();
  local_4._0_1_ = 0x1a;
  FUN_004144b0();
  local_4._0_1_ = 0x1b;
  FUN_004144b0();
  local_4._0_1_ = 0x1c;
  FUN_004144b0();
  local_4._0_1_ = 0x1d;
  *(undefined1 *)(param_1 + 0x23f) = uStack_159;
  *(undefined1 *)((int)param_1 + 0x8fd) = uStack_159;
  *(undefined1 *)(param_1 + 0x242) = 0;
  FUN_004f34c0();
  local_4._0_1_ = 0x1e;
  *(undefined1 *)(param_1 + 0x244) = uStack_159;
  pcStack_174 = (char *)0x4e96ff;
  pvVar3 = operator_new(0x28);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x245] = pvVar3;
  param_1[0x246] = 0;
  pcStack_174 = "Targetable_Objects";
  puStack_17c = param_1 + 2;
  uStack_178 = 0x20;
  *param_1 = &PTR_FUN_005d950c;
  param_1[0xe] = &PTR_LAB_005d9454;
  param_1[0x2d] = &PTR_OnReceive_005d9448;
  param_1[0xd9] = &PTR_LAB_005d9440;
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  uStack_180 = 0x4e9752;
  DAT_00674b70 = param_1;
  uVar4 = FUN_00417c50();
  param_1[1] = uVar4;
  pcStack_174 = (char *)0x4e9763;
  (**(code **)(param_1[0xe] + 0x14))();
  pcStack_174 = (char *)0x0;
  uStack_178 = 0;
  puStack_17c = (undefined4 *)0x4e976c;
  cVar1 = FUN_004b5060();
  if (cVar1 != '\0') {
    pcStack_174 = (char *)0x6;
    uStack_178 = 0x4e977d;
    FUN_005760d0();
  }
  pcStack_174 = "Targetable_Objects";
  puStack_17c = param_1 + 0x14;
  uStack_178 = 0x20;
  uStack_180 = 0x4e978d;
  uVar4 = FUN_00417c50();
  param_1[0x13] = uVar4;
  param_1[0x12] = "Targetable_Objects";
  *(undefined1 *)((int)param_1 + 0x3b1) = 1;
  *(undefined1 *)(param_1 + 0xf9) = 1;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0x102] = 0;
  param_1[0xe0] = 0x200;
  param_1[0xed] = 0x200;
  param_1[0x108] = DAT_005d8ef0;
  param_1[0x109] = DAT_005d8ef0;
  *(undefined1 *)(param_1 + 0x10a) = 1;
  param_1[0x10b] = DAT_005d8ef4;
  pcStack_174 = (char *)0x0;
  param_1[0x10c] = DAT_005d8ef4;
  *(undefined1 *)(param_1 + 0x10d) = 1;
  uStack_178 = 0;
  param_1[0x10e] = DAT_005d8efc;
  puStack_17c = (undefined4 *)0x1;
  *(undefined1 *)(param_1 + 0x10f) = 1;
  uStack_180 = 0x453;
  param_1[0x110] = DAT_005d8f00;
  *(undefined1 *)(param_1 + 0x111) = 0;
  puStack_184 = (undefined1 *)0x3f800000;
  uStack_188 = 0x3cf5c28f;
  *(undefined2 *)((int)param_1 + 0x446) = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  param_1[0x112] = 0;
  puStack_18c = (undefined4 *)DAT_005d8f0c;
  puStack_190 = (undefined4 *)0x0;
  puStack_194 = &uStack_154;
  pcStack_198 = "HudSmall";
  pcStack_19c = "ReticleRangeText";
  uStack_118 = 0xff;
  uStack_117 = 0xff;
  uStack_116 = 0xff;
  uStack_115 = 0xff;
  uStack_154 = 0x3b449ba6;
  local_150 = 0;
  local_14c = 0;
  auStack_1ac[3] = 0x4e98a8;
  piVar5 = (int *)FUN_005a0e30();
  pcStack_174 = (char *)0x0;
  uStack_178 = 1;
  param_1[0x103] = piVar5;
  puStack_17c = (undefined4 *)0x1;
  uStack_180 = 0x4e98bd;
  (**(code **)(*piVar5 + 0xa8))();
  uStack_180 = 1;
  puStack_184 = auStack_124;
  uStack_188 = 0x33;
  puStack_18c = (undefined4 *)0x4e98d4;
  (**(code **)(*(int *)param_1[0x103] + 0xa8))();
  uStack_13c = 0x3c9374bc;
  uStack_138 = 0x3c9374bc;
  uStack_134 = 0;
  local_148 = 0x3e010625;
  puStack_18c = (undefined4 *)&stack0xfffffe94;
  puStack_190 = (undefined4 *)0x0;
  puStack_194 = (undefined4 *)0x0;
  pcStack_198 = (char *)0x0;
  pcStack_19c = (char *)0x1;
  auStack_1ac[3] = 0;
  auStack_1ac[2] = 0;
  auStack_1ac[1] = 1;
  auStack_1ac[0] = 0;
  puStack_1b0 = (undefined4 *)0x0;
  puStack_1b4 = (undefined4 *)0x0;
  puStack_1b8 = &uStack_13c;
  uStack_1bc = 0;
  puStack_1c0 = &local_148;
  pcStack_1c4 = "Interface\\hud\\HUD_missilealert.3db";
  pcStack_1c8 = "MissileAlert";
  uStack_144 = 0x3e5a1cac;
  uStack_140 = 0xbf19999a;
  uStack_1cc = 0x4e994f;
  piVar5 = (int *)FUN_005a0db0();
  puStack_18c = &DAT_00679ba8;
  puStack_190 = &DAT_00679ba8;
  param_1[0x104] = piVar5;
  puStack_194 = (undefined4 *)0x18;
  pcStack_198 = (char *)0x4e996b;
  (**(code **)(*piVar5 + 0xa8))();
  pcStack_198 = (char *)0x0;
  pcStack_19c = (char *)0x4d0;
  auStack_1ac[3] = 3;
  auStack_1ac[2] = 0x4e9981;
  (**(code **)(*(int *)param_1[0x104] + 0xa8))();
  auStack_1ac[2] = 0;
  auStack_1ac[1] = 1;
  auStack_1ac[0] = 1;
  puStack_1b0 = (undefined4 *)0x4e9994;
  (**(code **)(*(int *)param_1[0x104] + 0xa8))();
  puStack_1b0 = (undefined4 *)&stack0xfffffe94;
  puStack_1b4 = (undefined4 *)0x0;
  puStack_1b8 = (undefined4 *)0x0;
  uStack_1bc = 0;
  puStack_1c0 = (undefined4 *)0x1;
  pcStack_1c4 = (char *)0x0;
  pcStack_1c8 = (char *)0x0;
  uStack_1cc = 1;
  uStack_1d0 = 0;
  ppuStack_1d4 = (undefined4 **)0x0;
  puStack_1d8 = (undefined4 *)0x0;
  puStack_1dc = &stack0xfffffea0;
  fStack_1e0 = 0.0;
  ppuStack_1e4 = &puStack_190;
  pcStack_1e8 = "Interface\\hud\\HUD_trailalert.3db";
  pcStack_1ec = "TrailAlert";
  puStack_190 = (undefined4 *)0xbe010625;
  puStack_18c = (undefined4 *)0x3e5a1cac;
  uStack_188 = 0xbf19999a;
  uStack_1f0 = 0x4e9a1b;
  piVar5 = (int *)FUN_005a0db0();
  puStack_1b0 = &DAT_00679ba8;
  puStack_1b4 = &DAT_00679ba8;
  param_1[0x105] = piVar5;
  puStack_1b8 = (undefined4 *)0x18;
  uStack_1bc = 0x4e9a37;
  (**(code **)(*piVar5 + 0xa8))();
  uStack_1bc = 0;
  puStack_1c0 = (undefined4 *)0x616;
  pcStack_1c4 = (char *)0x3;
  pcStack_1c8 = (char *)0x4e9a4d;
  (**(code **)(*(int *)param_1[0x105] + 0xa8))();
  pcStack_1c8 = (char *)0x0;
  uStack_1cc = 1;
  uStack_1d0 = 1;
  ppuStack_1d4 = (undefined4 **)0x4e9a60;
  (**(code **)(*(int *)param_1[0x105] + 0xa8))();
  ppuStack_1d4 = &puStack_190;
  puStack_1d8 = (undefined4 *)0x0;
  puStack_1dc = (undefined1 *)0x0;
  fStack_1e0 = 0.0;
  ppuStack_1e4 = (undefined4 **)0x1;
  pcStack_1e8 = (char *)0x0;
  pcStack_1ec = (char *)0x0;
  uStack_1f0 = 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  uStack_1fc = (undefined4 *)0x0;
  ppuStack_200 = &puStack_184;
  uStack_204 = 0;
  ppuStack_208 = &puStack_1b4;
  pcStack_20c = "Interface\\hud\\HUD_radiationalert.3db";
  pppuStack_210 = (undefined4 ***)0x5d938c;
  puStack_190 = (undefined4 *)0x0;
  puStack_18c = (undefined4 *)0x0;
  uStack_188 = 0;
  puStack_184 = (undefined1 *)0x3c9374bc;
  uStack_180 = 0x3c9374bc;
  puStack_17c = (undefined4 *)0x0;
  puStack_1b4 = (undefined4 *)0x3e010625;
  puStack_1b0 = (undefined4 *)0x3e353f7d;
  auStack_1ac[0] = 0xbf19999a;
  puStack_214 = (uint *)0x4e9ae7;
  piVar5 = (int *)FUN_005a0db0();
  ppuStack_1d4 = (undefined4 **)&DAT_00679ba8;
  puStack_1d8 = &DAT_00679ba8;
  param_1[0x106] = piVar5;
  puStack_1dc = (undefined1 *)0x18;
  fStack_1e0 = 7.218776e-39;
  (**(code **)(*piVar5 + 0xa8))();
  fStack_1e0 = 0.0;
  ppuStack_1e4 = (undefined4 **)0x617;
  pcStack_1e8 = (char *)0x3;
  pcStack_1ec = (char *)0x4e9b19;
  (**(code **)(*(int *)param_1[0x106] + 0xa8))();
  pcStack_1ec = (char *)0x0;
  uStack_1f0 = 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x4e9b2c;
  (**(code **)(*(int *)param_1[0x106] + 0xa8))();
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&puStack_1b4;
  uStack_1fc = (undefined4 *)0x0;
  ppuStack_200 = (undefined1 **)0x0;
  uStack_204 = 0;
  ppuStack_208 = (undefined4 **)0x1;
  pcStack_20c = (char *)0x0;
  pppuStack_210 = (undefined4 ***)0x0;
  puStack_214 = (uint *)0x1;
  pcStack_218 = (char *)0x0;
  uStack_21c = 0;
  puStack_1b4 = (undefined4 *)0x0;
  puStack_1b0 = (undefined4 *)0x0;
  auStack_1ac[0] = 0;
  auStack_1ac[1] = 0x3c9374bc;
  auStack_1ac[2] = 0x3c9374bc;
  auStack_1ac[3] = 0;
  puStack_1d8 = (undefined4 *)0xbe010625;
  ppuStack_1d4 = (undefined4 **)0x3e353f7d;
  uStack_1d0 = 0xbf19999a;
  piVar5 = (int *)FUN_005a0db0("LagAlert","Interface\\multiplayer\\MULTI_lag.3db",&puStack_1d8,0,
                               auStack_1ac + 1,0);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00679ba8;
  uStack_1fc = &DAT_00679ba8;
  param_1[0x107] = piVar5;
  ppuStack_200 = (undefined1 **)0x18;
  uStack_204 = 0x4e9bbd;
  (**(code **)(*piVar5 + 0xa8))();
  uStack_204 = 0;
  ppuStack_208 = (undefined4 **)0x1;
  pcStack_20c = (char *)0x1;
  pppuStack_210 = (undefined4 ***)0x4e9bd0;
  (**(code **)(*(int *)param_1[0x107] + 0xa8))();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targetarrow.3db";
  uStack_21c = 0x4e9be3;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targetarrowhat.3db";
  uStack_21c = 0x4e9bf6;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targetarrowplayer.3db";
  uStack_21c = 0x4e9c09;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targethealth.3db";
  uStack_21c = 0x4e9c1e;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targetshields.3db";
  uStack_21c = 0x4e9c33;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_targetarrowquotes.3db";
  uStack_21c = 0x4e9c46;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_nonselectedarrow.3db";
  uStack_21c = 0x4e9c59;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_nonselectedarrowhat.3db";
  uStack_21c = 0x4e9c6c;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_nonselectedplayerarrow.3db";
  uStack_21c = 0x4e9c7f;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_lootarrow.3db";
  uStack_21c = 0x4e9c92;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_nonselectedarrowquotes.3db";
  uStack_21c = 0x4e9ca5;
  FUN_0059ec80();
  pppuStack_210 = &ppuStack_1e4;
  puStack_214 = (uint *)0x4e9cb1;
  FUN_0059f0d0();
  param_1[0x182] = fStack_1e0;
  param_1[0x184] = (float)ppuStack_1e4 - fStack_1e0;
  pppuStack_210 = &ppuStack_1e4;
  param_1[0x185] = ppuStack_1d4;
  param_1[0x183] = uStack_1d0;
  puStack_214 = (uint *)0x4e9ce9;
  FUN_0059f0d0();
  pppuStack_210 = (undefined4 ***)0x1;
  param_1[0x188] = (float)ppuStack_1e4 - fStack_1e0;
  puStack_214 = (uint *)0x0;
  param_1[0x187] = uStack_1d0;
  pcStack_218 = "interface\\hud\\hud_reticle.3db";
  param_1[0x186] = fStack_1e0;
  param_1[0x189] = ppuStack_1d4;
  uStack_21c = 0x4e9d2a;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_reticle_quotes.3db";
  uStack_21c = 0x4e9d3d;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_reticle_arrows.3db";
  uStack_21c = 0x4e9d50;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_reticle_health.3db";
  uStack_21c = 0x4e9d65;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_reticle_shields.3db";
  uStack_21c = 0x4e9d78;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_waypointreticle.3db";
  uStack_21c = 0x4e9d8b;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_selectedwaypoint.3db";
  uStack_21c = 0x4e9d9e;
  FUN_0059ec80();
  pppuStack_210 = (undefined4 ***)0x1;
  puStack_214 = (uint *)0x0;
  pcStack_218 = "interface\\hud\\hud_nonselectedwaypoint.3db";
  uStack_21c = 0x4e9db1;
  FUN_0059ec80();
  pppuStack_210 = &ppuStack_1e4;
  puStack_214 = (uint *)0x4e9dc1;
  FUN_0059f0d0();
  pppuStack_210 = &ppuStack_1e4;
  param_1[0x1da] = (float)ppuStack_1e4 - fStack_1e0;
  param_1[0x1db] = (float)puStack_1dc - (float)puStack_1d8;
  puStack_214 = (uint *)0x4e9de9;
  FUN_0059f0d0();
  param_1[0x1dc] = fStack_1e0;
  pppuStack_210 = &ppuStack_1e4;
  param_1[0x1df] = (float)puStack_1dc - (float)puStack_1d8;
  param_1[0x1dd] = puStack_1d8;
  param_1[0x1de] = (float)ppuStack_1e4 - fStack_1e0;
  puStack_214 = (uint *)0x4e9e25;
  FUN_0059f0d0();
  param_1[0x1e0] = fStack_1e0;
  pppuStack_210 = &ppuStack_1e4;
  param_1[0x1e2] = (float)ppuStack_1e4 - fStack_1e0;
  param_1[0x1e3] = puStack_1dc;
  param_1[0x1e1] = puStack_1d8;
  puStack_214 = (uint *)0x4e9e61;
  FUN_0059f0d0();
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  param_1[0x1e6] = (float)ppuStack_1e4 - fStack_1e0;
  param_1[0x1e4] = fStack_1e0;
  param_1[0x1e5] = puStack_1d8;
  param_1[0x1e7] = puStack_1dc;
  *(undefined1 *)(param_1 + 0x113) = 0;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "CurrentTargetCorner";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "CurrentTargetCorner";
    pcVar10 = *(char **)(pbStack_1f4 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f4,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1e8] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "CurrentTargetHat";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "CurrentTargetHat";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1ec] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "WaypointTarget";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "WaypointTarget";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1ed] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "WaypointArrow";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "WaypointArrow";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1ee] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "LootArrow";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "LootArrow";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1ef] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "NSTargetArrow";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "NSTargetArrow";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1f0] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "NSTargetHat";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "NSTargetHat";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1f1] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "PlayerArrow";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "PlayerArrow";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1f2] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "CurrentTargetArrow";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "CurrentTargetArrow";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1e9] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "CurrentTargetArrowOutline";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "CurrentTargetArrowOutline";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1ea] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "CurrentTargetArrowHat";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "CurrentTargetArrowHat";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1eb] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "NSArrowBackground";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "NSArrowBackground";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[499] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "LootArrowBackground";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "LootArrowBackground";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[500] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "WaypointArrowBackground";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  pbStack_1f4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar7;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
                     uVar7,true);
  if (bVar2) {
    pcVar9 = "WaypointArrowBackground";
    pcVar10 = *(char **)(pbStack_1f8 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbStack_1f8,uVar7);
  }
  uVar4 = FUN_0055a360();
  param_1[0x1f5] = uVar4;
  uStack_21c = CONCAT31(uStack_21c._1_3_,uStack_1fc._3_1_);
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,false);
  uVar7 = 0xffffffff;
  pcVar9 = "PlayerArrowBackground";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_21c,
             "PlayerArrowBackground",~uVar7 - 1);
  uVar4 = FUN_0055a360();
  param_1[0x1f6] = uVar4;
  uVar4 = FUN_004177b0("HudSmall");
  param_1[0x23d] = uVar4;
  uVar4 = FUN_004177b0("PlayerName");
  param_1[0x23e] = uVar4;
  iVar6 = FUN_004347e0(DAT_0067eca8,0x442,auStack_1ac,0x80);
  if (iVar6 == 0) {
    auStack_1ac[0] = auStack_1ac[0] & 0xffff0000;
  }
  pppuStack_210 = (undefined4 ***)param_1[0x23d];
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((float)param_1[0x1da] + (float)param_1[0x1da]);
  puStack_214 = (uint *)0x4ea54c;
  FUN_004ea670();
  pppuStack_210 = (undefined4 ***)0xbf800000;
  puStack_214 = (uint *)pbStack_1f8;
  pcStack_218 = (char *)0x4ea55d;
  FUN_004145d0();
  pppuStack_210 = (undefined4 ***)auStack_1ac;
  puStack_214 = (uint *)0x4ea569;
  FUN_00415860();
  pppuStack_210 = (undefined4 ***)0x80;
  puStack_214 = auStack_1ac;
  pcStack_218 = (char *)0x443;
  uStack_21c = DAT_0067eca8;
  iVar6 = FUN_004347e0();
  if (iVar6 == 0) {
    auStack_1ac[0] = auStack_1ac[0] & 0xffff0000;
  }
  pbStack_1f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((float)param_1[0x1da] + (float)param_1[0x1da]);
  if (param_1[0x20b] != param_1[0x23d]) {
    param_1[0x20b] = param_1[0x23d];
    uVar7 = 0;
    pppuStack_210 = (undefined4 ***)0x4ea5be;
    iVar6 = FUN_005995f0();
    if (iVar6 != 0) {
      do {
        pppuStack_210 = (undefined4 ***)param_1[0x20b];
        puStack_214 = (uint *)0x4ea5d1;
        (**(code **)(**(int **)(param_1[0x208] + uVar7 * 8) + 8))();
        uVar7 = uVar7 + 1;
        pppuStack_210 = (undefined4 ***)0x4ea5da;
        uVar8 = FUN_005995f0();
      } while (uVar7 < uVar8);
    }
    param_1[0x20e] = 0;
  }
  pppuStack_210 = (undefined4 ***)0xbf800000;
  puStack_214 = (uint *)pbStack_1f8;
  pcStack_218 = (char *)0x4ea5f2;
  FUN_004145d0();
  pppuStack_210 = (undefined4 ***)auStack_1ac;
  puStack_214 = (uint *)0x4ea5fe;
  FUN_00415860();
  param_1[0x211] = 0;
  param_1[0x212] = 0xffffffff;
  param_1[0x213] = 0xffffffff;
  param_1[0x22f] = 0xffffffff;
  param_1[0x214] = 0;
  param_1[0x249] = 0;
  param_1[0x248] = 0;
  param_1[0x247] = 0;
  *(undefined1 *)(param_1 + 0x24a) = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  ExceptionList = pvStack_ac;
  return param_1;
}

