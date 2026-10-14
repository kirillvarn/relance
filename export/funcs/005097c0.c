
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005097c0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_20;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(param_1 + 0x270) != 0) &&
     (*(float *)(param_1 + 0x278) < _DAT_005c7474 == (*(float *)(param_1 + 0x278) == _DAT_005c7474))
     ) {
    FUN_00410ef0(param_2);
    fVar3 = _DAT_005c7474;
    fVar1 = *(float *)(param_1 + 0x27c);
    fVar2 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x27c);
    *(float *)(param_1 + 0x27c) = fVar2;
    if (fVar1 <= fVar3) {
      if (fVar2 <= _DAT_005c7474) {
        return;
      }
    }
    else if (*(float *)(param_1 + 0x278) < fVar2) {
      param_2 = (float)rand();
      *(float *)(param_1 + 0x27c) =
           ((float)(int)param_2 * _DAT_005caeec * (float)_DAT_005db0b8 - (float)_DAT_005d3c48) *
           *(float *)(param_1 + 0x274);
      param_2 = (float)rand();
      fVar1 = (float)(int)param_2 * _DAT_005caeec;
      param_2 = (float)rand();
      fVar2 = (float)(int)param_2 * _DAT_005caeec;
      iVar4 = rand();
      local_c = ((float)iVar4 * _DAT_005caeec + (float)iVar4 * _DAT_005caeec) - (float)_DAT_005c89b8
      ;
      local_8 = (fVar2 + fVar2) - (float)_DAT_005c89b8;
      local_4 = (fVar1 + fVar1) - (float)_DAT_005c89b8;
      param_2 = _DAT_005c75dc / SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
      local_c = local_c * param_2;
      local_8 = local_8 * param_2;
      local_4 = local_4 * param_2;
      FUN_00411470(&local_c);
      if ((*(byte *)(*(int **)(param_1 + 0x270) + 0x2d) & 8) == 0) {
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x270) + 8))();
      return;
    }
    param_2 = *(float *)(param_1 + 0x28c);
    if (*(char *)(param_1 + 0x26c) != '\0') {
      param_2 = param_2 + *(float *)(param_1 + 0x290);
    }
    iVar4 = rand();
    fVar1 = (float)iVar4 * _DAT_005caeec;
    iVar4 = rand();
    local_8 = (float)iVar4 * fVar1 * param_2 * _DAT_005caeec;
    local_c = local_8 * *(float *)(param_1 + 0x280);
    local_8 = local_8 * *(float *)(param_1 + 0x284);
    if (_DAT_005c75dc <= local_c) {
      local_c = 1.0;
    }
    if (_DAT_005c75dc <= local_8) {
      local_8 = 1.0;
    }
    iVar4 = ftol();
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    iVar5 = ftol();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    iVar6 = ftol();
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    local_20 = (undefined1)iVar4;
    param_2._0_2_ = CONCAT11((char)iVar5,(char)iVar6);
    param_2 = (float)CONCAT13(0xff,CONCAT12(local_20,param_2._0_2_));
    FUN_004114f0(&param_2);
    if ((*(byte *)(*(int **)(param_1 + 0x270) + 0x2d) & 8) == 0) {
      (**(code **)(**(int **)(param_1 + 0x270) + 4))();
    }
  }
  return;
}

