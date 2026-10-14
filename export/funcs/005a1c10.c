
void __fastcall FUN_005a1c10(int param_1)

{
  int *piVar1;
  
  FUN_004144f0();
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  return;
}

