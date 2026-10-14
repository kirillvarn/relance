
undefined4 * __fastcall FUN_004f3af0(undefined4 *param_1)

{
  BaseWatcher *this;
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf1fe;
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
  piVar1 = param_1 + 0xe;
  local_4 = 2;
  FUN_0059f860();
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_005d9784;
  *piVar1 = (int)&PTR_LAB_005d96cc;
  param_1[0x2d] = &PTR_OnReceive_005d96bc;
  pcVar5 = "Waypoint";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  pcVar5 = "Waypoint";
  pcVar6 = (char *)(param_1 + 2);
  DAT_00674bc8 = param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 *)(uVar3 + 8 + (int)param_1) = 0;
  param_1[1] = uVar3;
  (**(code **)(*piVar1 + 0x7c))(0,0,0xbf800000);
  (**(code **)(*piVar1 + 0x14))(param_1 + 0x26);
  FUN_004b5060(0,0);
  uVar3 = 0xffffffff;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  pcVar5 = "HUD_Waypoint";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  pcVar5 = "HUD_Waypoint";
  pcVar6 = (char *)(param_1 + 0x14);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(char *)((int)(param_1 + 0x14) + uVar3) = '\0';
  param_1[0x13] = uVar3;
  param_1[0xdb] = 0xffffffff;
  param_1[0xe1] = 0xffffffff;
  param_1[0x12] = "HUD_Waypoint";
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xdf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  ExceptionList = param_1;
  return param_1;
}

