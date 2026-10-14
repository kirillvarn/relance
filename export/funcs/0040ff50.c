
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040ff50(int param_1)

{
  float fVar1;
  float *unaff_retaddr;
  float in_stack_00000014;
  undefined1 local_c [4];
  float *pfStack_8;
  float *pfStack_4;
  
  if (DAT_006164d8 == (int *)0x0) {
    DAT_006164d8 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_006164d8 + 0x3c))(DAT_006164d8);
  if (in_stack_00000014 <= -*(float *)(param_1 + 0xa4)) {
    fVar1 = _DAT_005c7500 / in_stack_00000014;
    *pfStack_8 = (float)local_c * *(float *)(param_1 + 0x78) * fVar1 + *(float *)(param_1 + 0x68);
    *pfStack_4 = (float)(param_1 + 4) * *(float *)(param_1 + 0x7c) * fVar1 +
                 *(float *)(param_1 + 0x6c);
    *unaff_retaddr = -in_stack_00000014;
    return 1;
  }
  return 0;
}

