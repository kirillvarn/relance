
void __thiscall FUN_0052dbf0(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
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
  
  if ((*(CEGun **)(param_1 + 4) != (CEGun *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
    bVar2 = CEGun::IsJointInMotion(*(CEGun **)(param_1 + 4));
    if (bVar2) {
      if (*(int **)(param_1 + 0x40) != (int *)0x0) {
        iVar1 = **(int **)(param_1 + 0x40);
        uVar3 = FUN_0042ae40(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4) + 0x84,0);
        (**(code **)(iVar1 + 0x58))(uVar3);
        FUN_0052cd40(uStack_4);
        return;
      }
    }
    else {
      bVar2 = CEGun::IsJointInMotion(*(CEGun **)(param_1 + 4));
      if ((!bVar2) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x40) + 0x60))();
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
        (**(code **)(**(int **)(param_1 + 0x40) + 0x94))(0xffffffff,&uStack_30);
      }
    }
  }
  FUN_0052cd40(param_2);
  return;
}

