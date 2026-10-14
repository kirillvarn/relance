
void __thiscall FUN_005a1750(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 4) != (int *)0x0) && (*(char *)(param_1 + 0x328) != '\0')) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x31c);
      param_2[1] = *(undefined4 *)(param_1 + 800);
      param_2[2] = *(undefined4 *)(param_1 + 0x324);
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

