
void __thiscall FUN_0053ecb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  FUN_00542790(param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  if ((iVar3 == 0) || (((byte)*(undefined4 *)(iVar3 + 0x4c) & 3) != 3)) {
    iVar3 = FUN_0054bb00();
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xb4);
  }
  iVar4 = FUN_0054bb00();
  if (iVar3 == iVar4) {
    piVar1 = *(int **)(param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (((byte)piVar1[0x13] & 0xa7) == 0xa7)) {
      (**(code **)(*piVar1 + 0x50))(param_2,*(undefined4 *)UPDATE_DEFAULT_exref);
      return;
    }
    (**(code **)(iRam00000000 + 0x50))(param_2,*(undefined4 *)UPDATE_DEFAULT_exref);
    return;
  }
  bVar2 = SinglePlayer();
  if (!bVar2) {
    piVar1 = *(int **)(param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (((byte)piVar1[0x13] & 0xa7) == 0xa7)) {
      (**(code **)(*piVar1 + 0x50))(param_2,*(undefined4 *)UPDATE_DUMB_exref);
      return;
    }
    (**(code **)(iRam00000000 + 0x50))(param_2,*(undefined4 *)UPDATE_DUMB_exref);
  }
  return;
}

