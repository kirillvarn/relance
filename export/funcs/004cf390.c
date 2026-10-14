
undefined4 * __fastcall FUN_004cf390(undefined4 *param_1)

{
  BaseWatcher *this;
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  CEquip *pCVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdc93;
  pvStack_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 10);
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)this = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  BaseWatcher::set(this,(Watchable *)0x0);
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
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x104) = local_15;
  pvVar2 = operator_new(0x24);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0x105] = pvVar2;
  param_1[0x106] = 0;
  uVar7 = 0xffffffff;
  *param_1 = &PTR_FUN_005d7a5c;
  param_1[0xe] = &PTR_LAB_005d79a4;
  param_1[0x2d] = &PTR_OnReceive_005d7994;
  param_1[0xd9] = &PTR_LAB_005d798c;
  pcVar9 = "ContactList";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x1f < uVar7) {
    uVar7 = 0x1f;
  }
  pcVar9 = "ContactList";
  pcVar10 = (char *)(param_1 + 2);
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
  *(undefined1 *)(uVar7 + 8 + (int)param_1) = 0;
  param_1[1] = uVar7;
  FUN_004cf6a0(0,0);
  uVar7 = 0xffffffff;
  pcVar9 = "HUD_ContactList";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  if (0x1f < uVar7) {
    uVar7 = 0x1f;
  }
  pcVar9 = "HUD_ContactList";
  pcVar10 = (char *)(param_1 + 0x14);
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
  *(char *)((int)(param_1 + 0x14) + uVar7) = '\0';
  param_1[0x13] = uVar7;
  param_1[0x12] = "HUD_ContactList";
  param_1[0x107] = 0;
  param_1[0x108] = DAT_005d7964;
  param_1[0x10e] = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  param_1[0x111] = 0xffffffff;
  param_1[0x110] = 0;
  piVar3 = (int *)FUN_0054baf0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x150))();
    if ((iVar4 == 0) || ((*(uint *)(iVar4 + 0x4c) & 0x503) != 0x503)) {
      iVar4 = 0;
    }
    pCVar5 = CEquipManager::FindFirst((CEquipManager *)(iVar4 + 0xe4),0x80000);
    param_1[0x110] = pCVar5;
  }
  uVar6 = FUN_004177b0("HudSmall");
  param_1[0x113] = uVar6;
  uVar6 = FUN_004177b0("PlayerName");
  param_1[0x11d] = 0;
  param_1[0x114] = uVar6;
  DAT_0067494c = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

