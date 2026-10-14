
void __thiscall FUN_005972d0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  pfVar1 = (float *)(param_1 + 0x41c);
  fVar2 = *pfVar1;
  fVar3 = *(float *)(param_1 + 0x420);
  local_4 = *(float *)(param_1 + 0x424);
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0x420) = param_2[1];
  *(float *)(param_1 + 0x424) = param_2[2];
  local_4 = *(float *)(param_1 + 0x68) - local_4;
  local_18 = (*(float *)(param_1 + 0x60) - fVar2) + *pfVar1;
  local_14 = (*(float *)(param_1 + 100) - fVar3) + *(float *)(param_1 + 0x420);
  local_10 = local_4 + *(float *)(param_1 + 0x424);
  FUN_005a0880(&local_18);
  return;
}

