
void __thiscall FUN_00441ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(param_1 + 1000);
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 1000) = 0;
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iVar3 = FUN_005a0db0("ScaledBackground",param_3,param_4,0,&local_3c,0,0,0,1,0,0,1,0,0,0,&local_48)
  ;
  *(int *)(param_1 + 1000) = iVar3;
  uStack_10 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar3 = (**(code **)(**(int **)Engine_exref + 0xa0))
                    (*(int **)Engine_exref,*(undefined4 *)(iVar3 + 0x84));
  uStack_14 = *(undefined4 *)(iVar3 + 0x24);
  uStack_10 = *(undefined4 *)(iVar3 + 0x28);
  uStack_c = *(undefined4 *)(iVar3 + 0x2c);
  if (DAT_00668828 == (int *)0x0) {
    DAT_00668828 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00668828 + 0x10))(DAT_00668828,&uStack_38,&uStack_38,uStack_4);
  (**(code **)(**(int **)Engine_exref + 0x9c))
            (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 1000) + 0x84),&local_48);
  (**(code **)(**(int **)Engine_exref + 0x6c))
            (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 1000) + 0x84),0,0);
  return;
}

