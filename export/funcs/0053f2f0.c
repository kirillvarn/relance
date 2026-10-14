
void __thiscall FUN_0053f2f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_00539bc0(0x67,param_2);
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (((byte)piVar1[0x13] & 0x67) == 0x67)) {
    (**(code **)(*piVar1 + 0x4c))(param_2);
    return;
  }
  (**(code **)(iRam00000000 + 0x4c))(param_2);
  return;
}

