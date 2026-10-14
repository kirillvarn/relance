
void __thiscall FUN_00456740(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if (piVar1 != *(int **)(param_1 + 8)) {
    do {
      if ((*(int *)(piVar1[2] + 0xb0) == param_2) && (*(char *)(piVar1[2] + 0x2d) != '\0')) {
        FUN_0044f970(param_3);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

