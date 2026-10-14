
undefined4 * __fastcall FUN_004d5bd0(undefined4 *param_1)

{
  BaseWatcher *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be0f7;
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
  uVar2 = 0xffffffff;
  param_1[0xd9] = 0;
  *param_1 = &PTR_FUN_005d7f74;
  param_1[0xe] = &PTR_LAB_005d7ebc;
  param_1[0x2d] = &PTR_OnReceive_005d7eb0;
  *(undefined2 *)(param_1 + 0xda) = 0;
  *(undefined2 *)(param_1 + 0xf2) = 0;
  pcVar4 = "HUD_CruiseProgress";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  pcVar4 = "HUD_CruiseProgress";
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
  FUN_004d5db0(0,0);
  uVar2 = 0xffffffff;
  pcVar4 = "HUD_CruiseProgress";
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
  pcVar4 = "HUD_CruiseProgress";
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
  *(char *)((int)(param_1 + 0x14) + uVar2) = '\0';
  param_1[0x13] = uVar2;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  param_1[0x12] = "HUD_CruiseProgress";
  *(undefined1 *)(param_1 + 0x10a) = 0;
  ExceptionList = local_c;
  return param_1;
}

