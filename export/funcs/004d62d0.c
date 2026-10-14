
undefined4 * __fastcall FUN_004d62d0(undefined4 *param_1)

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
  
  puStack_8 = &LAB_005be1af;
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
  local_4._0_1_ = 3;
  FUN_004d72a0("interface\\hud\\HUD_damagebottom.3db",0x43340000);
  local_4._0_1_ = 4;
  FUN_004d72a0("interface\\hud\\HUD_damagebottom.3db",0);
  local_4._0_1_ = 5;
  FUN_004d72a0("interface\\hud\\HUD_damagebottom.3db",0xc2b40000);
  local_4._0_1_ = 6;
  FUN_004d72a0("interface\\hud\\HUD_damagebottom.3db",0x42b40000);
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_005d8104;
  *piVar1 = (int)&PTR_LAB_005d804c;
  param_1[0x2d] = &PTR_OnReceive_005d803c;
  pcVar5 = "DamageIndicator";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = CONCAT31(local_4._1_3_,7);
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  pcVar5 = "DamageIndicator";
  pcVar6 = (char *)(param_1 + 2);
  DAT_00674a10 = param_1;
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
  pcVar5 = "HUD_DamageIndicator";
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
  pcVar5 = "HUD_DamageIndicator";
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
  param_1[0x12] = "HUD_DamageIndicator";
  ExceptionList = param_1;
  return param_1;
}

