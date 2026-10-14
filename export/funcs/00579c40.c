
void __thiscall FUN_00579c40(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  pfVar1 = (float *)(param_1 + 0x47c);
  fVar2 = *pfVar1;
  fVar3 = *(float *)(param_1 + 0x480);
  local_4 = *(float *)(param_1 + 0x484);
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0x480) = param_2[1];
  *(float *)(param_1 + 0x484) = param_2[2];
  local_4 = *(float *)(param_1 + 0x68) - local_4;
  local_18 = (*(float *)(param_1 + 0x60) - fVar2) + *pfVar1;
  local_14 = (*(float *)(param_1 + 100) - fVar3) + *(float *)(param_1 + 0x480);
  local_10 = local_4 + *(float *)(param_1 + 0x484);
  FUN_005a0880(&local_18);
  return;
}

