
void __thiscall FUN_00406cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    return;
  }
  fVar1 = (float10)FUN_004022f0(param_2,*(int *)(param_1 + 4),param_3,param_4);
  *(float *)(param_1 + 0xc) = (float)fVar1;
  return;
}

