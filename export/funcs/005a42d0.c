
void __fastcall FUN_005a42d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1[1] != 0) {
    FUN_0059d580();
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xa8))(0x2c,uVar3);
    }
  }
  *(byte *)(param_1 + 0xd7) = *(byte *)(param_1 + 0xd7) | 1;
  if ((*(byte *)(param_1 + 0xe2) & 4) != 0) {
    FUN_00564700();
  }
  return;
}

