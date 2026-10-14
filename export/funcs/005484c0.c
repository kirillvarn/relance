
void __thiscall FUN_005484c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 == (int *)0x0) || ((piVar2[0x13] & 0x303U) != 0x303)) {
    piVar2 = (int *)0x0;
  }
  if ((char)piVar2[0x38] < '\0') {
    FUN_00516060(param_1,param_3,param_2);
  }
  bVar1 = SinglePlayer();
  if (!bVar1) {
    (**(code **)(*piVar2 + 0xb4))(param_2,param_3);
  }
  return;
}

