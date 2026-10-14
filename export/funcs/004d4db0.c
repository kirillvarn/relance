
undefined4 * __fastcall FUN_004d4db0(undefined4 *param_1)

{
  BaseWatcher *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be045;
  local_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 10);
  ExceptionList = &local_c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)this = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_005d6eac;
  param_1[0xd] = 0;
  local_4 = 1;
  if (*(int *)this != 0) {
    BaseWatcher::set_pointer(this,(Watchable *)0x0);
  }
  param_1[0xc] = 0;
  local_4 = 2;
  FUN_0059f860();
  param_1[0xd9] = &PTR_LAB_005cbed8;
  uVar2 = 0xffffffff;
  *param_1 = &PTR_FUN_005d7d0c;
  param_1[0xe] = &PTR_LAB_005d7c54;
  param_1[0x2d] = &PTR_OnReceive_005d7c44;
  param_1[0xd9] = &PTR_LAB_005d7c3c;
  pcVar5 = "Core";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  puVar4 = &DAT_005d7c1c;
  puVar6 = param_1 + 2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(undefined1 *)(uVar2 + 8 + (int)param_1) = 0;
  param_1[1] = uVar2;
  FUN_004d4fa0(0,0);
  uVar2 = 0xffffffff;
  pcVar5 = "HUD_Core";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  puVar4 = &DAT_005d7c2c;
  puVar6 = param_1 + 0x14;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(undefined1 *)(uVar2 + (int)(param_1 + 0x14)) = 0;
  param_1[0x13] = uVar2;
  param_1[0x12] = &DAT_005d7c2c;
  param_1[0xdf] = 0xfffffc19;
  param_1[0xe0] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

