
void __fastcall FUN_00446ac0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1[0xd] == 0) {
    iVar1 = FUN_005792b0(0x19);
    if (iVar1 < 1) {
      return;
    }
  }
  else if (param_1[0xd] == 1) {
    iVar1 = FUN_005792b0(0x1b);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_005792b0(0x1d);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_005792b0(0x1b);
    if (iVar1 == 0) {
      return;
    }
  }
  if ((char)param_1[0x12] == '\0') {
    if (param_1[0xd] == 5) {
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = (**(code **)(*param_1 + 0x18))(0,0);
      FUN_0044b370(uVar2,uVar3,uVar4);
    }
    FUN_0044af60(param_1);
  }
  return;
}

