
undefined4 FUN_00429c20(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    fVar1 = (float10)FUN_005b3510(2);
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
    *param_2 = (float)(fVar2 * (float10)(float)fVar1);
    return 0;
  }
  return 0xfffffff9;
}

