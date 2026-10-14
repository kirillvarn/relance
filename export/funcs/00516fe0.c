
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516fe0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_3c;
  float local_38;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24[2] = param_2[2];
  local_10 = param_2[5];
  local_4 = param_2[8];
  if ((float)_DAT_005c8b68 <=
      ABS(local_10 * param_3[1] + local_4 * param_3[2] + local_24[2] * *param_3)) {
    local_3c = *param_2;
    local_38 = param_2[3];
    local_c = param_2[6];
  }
  else {
    local_3c = local_4 * param_3[1] - local_10 * param_3[2];
    local_38 = local_24[2] * param_3[2] - local_4 * *param_3;
    local_c = local_10 * *param_3 - local_24[2] * param_3[1];
    fVar1 = _DAT_005c75dc / SQRT(local_3c * local_3c + local_38 * local_38 + local_c * local_c);
    local_3c = local_3c * fVar1;
    local_38 = local_38 * fVar1;
    local_c = local_c * fVar1;
  }
  local_24[0] = local_3c;
  local_24[3] = local_38;
  local_24[1] = local_c * local_10 - local_38 * local_4;
  local_8 = local_38 * local_24[2] - local_3c * local_10;
  local_14 = local_4 * local_3c - local_c * local_24[2];
  pfVar3 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

