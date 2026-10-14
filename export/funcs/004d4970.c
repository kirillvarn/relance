
void FUN_004d4970(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}

