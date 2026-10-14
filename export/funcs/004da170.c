
undefined4 * __fastcall FUN_004da170(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_109;
  undefined4 *local_fc [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be3f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_fc[0x3b] = param_1;
  FUN_004e6020();
  local_4 = 0;
  FUN_0055e340();
  *(undefined1 *)(param_1 + 0x163) = local_109;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined1 *)(param_1 + 0x177) = local_109;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *param_1 = &PTR_FUN_005d85bc;
  param_1[0xe] = &PTR_LAB_005d8504;
  param_1[0x2d] = &PTR_OnReceive_005d84f4;
  param_1[0xd9] = &PTR_LAB_005d84e8;
  param_1[0xe1] = &PTR_LAB_005d84e0;
  param_1[0x138] = &PTR_LAB_005d84d4;
  DAT_00674aa0 = param_1;
  param_1[0x135] = 0x3e970a3d;
  param_1[0x136] = 0xbebbe76d;
  param_1[0x137] = 0;
  param_1[0x168] = 1;
  param_1[0x169] = 1;
  uVar2 = 0xffffffff;
  pcVar4 = "Test_Status";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  pcVar4 = "Test_Status";
  pcVar5 = (char *)(param_1 + 2);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined1 *)(uVar2 + 8 + (int)param_1) = 0;
  param_1[1] = uVar2;
  FUN_004da930(0,0);
  uVar2 = 0xffffffff;
  pcVar4 = "HUD_Status";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  pcVar4 = "HUD_Status";
  pcVar5 = (char *)(param_1 + 0x14);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined1 *)(uVar2 + 0x50 + (int)param_1) = 0;
  param_1[0x13] = uVar2;
  param_1[0x12d] = 0x3ed60419;
  param_1[0x12e] = 0xbe947ae1;
  param_1[0x12f] = 0xbf800000;
  param_1[0x12] = "HUD_Status";
  param_1[0x130] = 0x3de147ae;
  param_1[0x131] = 0x3de147ae;
  *(undefined1 *)(param_1 + 0x140) = 1;
  param_1[0x141] = 0;
  param_1[0x162] = DAT_005d8484;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined1 *)((int)param_1 + 0x585) = 0;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  *(undefined1 *)((int)param_1 + 0x586) = 0;
  *(undefined1 *)((int)param_1 + 0x5b9) = 0;
  *(undefined1 *)((int)param_1 + 0x5ba) = 0;
  param_1[0x172] = 0;
  local_fc[0] = (undefined4 *)0x5e;
  local_fc[1] = (undefined4 *)0xbc;
  local_fc[2] = (undefined4 *)0xc0;
  local_fc[3] = (undefined4 *)0xc1;
  local_fc[4] = (undefined4 *)0xbd;
  local_fc[5] = (undefined4 *)0xbe;
  local_fc[6] = (undefined4 *)0x3a;
  local_fc[7] = (undefined4 *)0x3c;
  local_fc[8] = (undefined4 *)0x3b;
  local_fc[9] = (undefined4 *)0x3e;
  local_fc[10] = (undefined4 *)0x3d;
  local_fc[0xb] = (undefined4 *)0x56;
  local_fc[0xc] = (undefined4 *)0x57;
  local_fc[0xd] = (undefined4 *)0xa1;
  local_fc[0xe] = (undefined4 *)0xa2;
  local_fc[0xf] = (undefined4 *)0xa3;
  local_fc[0x10] = (undefined4 *)0xa4;
  local_fc[0x11] = (undefined4 *)0xa5;
  local_fc[0x12] = (undefined4 *)0xa6;
  local_fc[0x13] = (undefined4 *)0xa7;
  local_fc[0x14] = (undefined4 *)0xa8;
  local_fc[0x15] = (undefined4 *)0xa9;
  local_fc[0x16] = (undefined4 *)0xaa;
  local_fc[0x17] = (undefined4 *)0x97;
  local_fc[0x18] = (undefined4 *)0x98;
  local_fc[0x19] = (undefined4 *)0x99;
  local_fc[0x1a] = (undefined4 *)0x9a;
  local_fc[0x1b] = (undefined4 *)0x9b;
  local_fc[0x1c] = (undefined4 *)0x9c;
  local_fc[0x1d] = (undefined4 *)0x9d;
  local_fc[0x1e] = (undefined4 *)0x9e;
  local_fc[0x1f] = (undefined4 *)0x9f;
  local_fc[0x20] = (undefined4 *)0xa0;
  local_fc[0x21] = (undefined4 *)0xab;
  local_fc[0x22] = (undefined4 *)0xac;
  local_fc[0x23] = (undefined4 *)0xad;
  local_fc[0x24] = (undefined4 *)0xae;
  local_fc[0x25] = (undefined4 *)0xaf;
  local_fc[0x26] = (undefined4 *)0xb0;
  local_fc[0x27] = (undefined4 *)0xb1;
  local_fc[0x28] = (undefined4 *)0xb2;
  local_fc[0x29] = (undefined4 *)0xb3;
  local_fc[0x2a] = (undefined4 *)0xb4;
  local_fc[0x2b] = (undefined4 *)0xb5;
  local_fc[0x2c] = (undefined4 *)0xb6;
  local_fc[0x2d] = (undefined4 *)0x91;
  local_fc[0x2e] = (undefined4 *)0x92;
  local_fc[0x2f] = (undefined4 *)0x93;
  local_fc[0x30] = (undefined4 *)0x94;
  local_fc[0x31] = (undefined4 *)0x95;
  local_fc[0x32] = (undefined4 *)0x96;
  local_fc[0x33] = (undefined4 *)0x8f;
  local_fc[0x34] = (undefined4 *)0x90;
  local_fc[0x35] = (undefined4 *)0xf;
  local_fc[0x36] = (undefined4 *)0xb7;
  local_fc[0x37] = (undefined4 *)0xb8;
  local_fc[0x38] = (undefined4 *)0xb9;
  local_fc[0x39] = (undefined4 *)0xba;
  local_fc[0x3a] = (undefined4 *)0x6f;
  uVar2 = 0;
  do {
    FUN_005760d0(local_fc[uVar2]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x3b);
  *(undefined1 *)((int)param_1 + 0x5cd) = 0;
  *(undefined1 *)(param_1 + 0x173) = 1;
  ExceptionList = local_c;
  return param_1;
}

