
undefined4 * __fastcall FUN_004e08b0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_5d;
  void *local_4c [17];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be6c1;
  local_4c[0x10] = ExceptionList;
  ExceptionList = local_4c + 0x10;
  FUN_004e6020();
  uVar5 = 0;
  local_4 = 0;
  FUN_0055e340();
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x14a) = local_5d;
  uVar2 = FUN_0042a7e0(0,0);
  param_1[0x14b] = uVar2;
  param_1[0x14c] = 0;
  local_4._0_1_ = 2;
  FUN_004dfbd0();
  *(undefined1 *)(param_1 + 0x158) = local_5d;
  *(undefined1 *)((int)param_1 + 0x561) = local_5d;
  *(undefined1 *)(param_1 + 0x15b) = 0;
  FUN_004e7f60();
  *(undefined1 *)(param_1 + 0x15f) = local_5d;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x138] = &PTR_LAB_005d89b4;
  *param_1 = &PTR_FUN_005d896c;
  param_1[0xe] = &PTR_LAB_005d88b4;
  param_1[0x2d] = &PTR_OnReceive_005d88a4;
  param_1[0xd9] = &PTR_LAB_005d8898;
  param_1[0xe1] = &PTR_LAB_005d8890;
  DAT_00674b04 = param_1;
  param_1[0x135] = 0xbe978d50;
  param_1[0x136] = 0xbebbe76d;
  uVar3 = 0xffffffff;
  param_1[0x137] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  pcVar6 = "Target";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  pcVar6 = "Target";
  pcVar7 = (char *)(param_1 + 2);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(undefined1 *)(uVar3 + 8 + (int)param_1) = 0;
  param_1[1] = uVar3;
  FUN_004e0ee0(0,0);
  uVar3 = 0xffffffff;
  pcVar6 = "HUD_Target";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  pcVar6 = "HUD_Target";
  pcVar7 = (char *)(param_1 + 0x14);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(undefined1 *)(uVar3 + 0x50 + (int)param_1) = 0;
  param_1[0x13] = uVar3;
  param_1[0x12d] = 0xbec624dd;
  param_1[0x12e] = 0xbe947ae1;
  param_1[0x12f] = 0xbf800000;
  param_1[0x12] = "HUD_Target";
  param_1[0x130] = 0x3de147ae;
  param_1[0x131] = 0x3de147ae;
  if (*(int *)(param_1 + 0xe6) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xe6),(Watchable *)0x0);
  }
  *(undefined1 *)(param_1 + 0x157) = 0;
  param_1[0x156] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  param_1[0x196] = 0xbf800000;
  param_1[0x197] = 0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  uVar2 = FUN_004177b0("HudSmall");
  param_1[0x199] = uVar2;
  uVar2 = FUN_004177b0("PlayerName");
  param_1[0x19a] = uVar2;
  local_4c[0] = (void *)0x5f;
  local_4c[1] = (void *)0x21;
  local_4c[2] = (void *)0x22;
  local_4c[3] = (void *)0xcc;
  local_4c[4] = (void *)0x54;
  local_4c[5] = (void *)0x58;
  local_4c[6] = (void *)0x59;
  local_4c[7] = (void *)0x8b;
  local_4c[8] = (void *)0x24;
  local_4c[9] = (void *)0x25;
  local_4c[10] = (void *)0x26;
  local_4c[0xb] = (void *)0xbb;
  local_4c[0xc] = (void *)0xc9;
  local_4c[0xd] = (void *)0xca;
  local_4c[0xe] = (void *)0x23;
  local_4c[0xf] = (void *)0x8a;
  do {
    FUN_005760d0(local_4c[uVar5]);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  *(undefined1 *)(param_1 + 0x19b) = 1;
  ExceptionList = local_4c[0x10];
  return param_1;
}

