
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00501810(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float10 extraout_ST0;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    local_8[0] = 0;
  }
  else {
    local_8[0] = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 4;
  }
  if (param_2 == _DAT_005c75dc) {
    return (float10)*(float *)(*(int *)(param_1 + 4) + local_8[0] * 4);
  }
  modf((double)((float)local_8[0] * param_2),(double *)local_8);
  iVar1 = ftol();
  pfVar2 = (float *)(iVar1 * 0x10 + *(int *)(param_1 + 0x14));
  return ((extraout_ST0 * (float10)*(float *)(iVar1 * 0x10 + 0xc + *(int *)(param_1 + 0x14)) +
          (float10)pfVar2[2]) * extraout_ST0 + (float10)pfVar2[1]) * extraout_ST0 + (float10)*pfVar2
  ;
}

