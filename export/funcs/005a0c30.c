
void __thiscall FUN_005a0c30(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xa8))(1,param_2,0);
    }
  }
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 3;
    return;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  return;
}

