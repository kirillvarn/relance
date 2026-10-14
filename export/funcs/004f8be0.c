
undefined4 __thiscall FUN_004f8be0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfe;
  iVar2 = FUN_005792b0(0x26);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,param_2);
  }
  return 1;
}

