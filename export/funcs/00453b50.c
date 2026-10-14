
undefined4 __fastcall FUN_00453b50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  uVar2 = 0;
  if (piVar1 != *(int **)(param_1 + 4)) {
    uVar2 = piVar1[2];
  }
  return uVar2;
}

