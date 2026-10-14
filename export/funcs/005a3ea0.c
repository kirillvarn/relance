
undefined4 __thiscall FUN_005a3ea0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1 + 0x18);
  }
  return 1;
}

