
void __fastcall FUN_00447210(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [9];
  
  iVar3 = 0;
  DAT_00668a9c = param_1;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      FUN_00458160(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x78));
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 != 0) {
    FUN_005b7ec6(iVar3,0x44,*(undefined4 *)(iVar3 + -4),FUN_00446c80);
    FUN_005b7e1d(iVar3 + -4);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00447620(3);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00447620(3);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_00457e30();
  if (*(int *)(param_1 + 0x70) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*(int *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  local_34 = 0xffffffff;
  iVar2 = FUN_0041c540(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc),*(undefined4 *)Data_exref,0,0
                       ,iVar3 + 0x20,param_1 + 0x20,&local_34);
  *(int *)(param_1 + 0x70) = iVar2;
  if (iVar2 != -1) {
    FUN_004482b0(iVar2);
    uStack_30 = *(undefined4 *)(param_1 + 0x34);
    uStack_2c = *(undefined4 *)(param_1 + 0x38);
    uStack_28 = *(undefined4 *)(param_1 + 0x3c);
    puVar4 = (undefined4 *)(param_1 + 0x40);
    puVar5 = auStack_24;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00448c40(*(undefined4 *)(param_1 + 0x70),&uStack_30);
    *(bool *)(param_1 + 0x13) = **(char **)(iVar3 + 0x10) != '\0';
    FUN_00457f10(*(undefined4 *)(param_1 + 0x70));
    bVar1 = RtcSlider::is_enabled("ship_loadouts");
    if (bVar1) {
      FUN_004581b0(*(undefined4 *)(param_1 + 0x6c));
      FUN_00458220(*(undefined4 *)(param_1 + 0x6c));
    }
    FUN_00447690();
  }
  FUN_005595a0(iVar3,local_34);
  return;
}

