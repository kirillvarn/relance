
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00492410(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_ESI;
  undefined1 local_24 [8];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float *local_c [3];
  
  fVar4 = (float)DAT_00616840;
  fVar2 = fVar4 - *(float *)(param_1 + 0x424);
  fVar5 = (float)DAT_00616844;
  fVar6 = fVar5 - *(float *)(param_1 + 0x428);
  if ((((_DAT_005c7474 <= fVar2) && (_DAT_005c7474 <= fVar6)) &&
      (fVar2 < *(float *)(param_1 + 0x430))) && (fVar6 < *(float *)(param_1 + 0x434))) {
    iVar3 = *(int *)(param_1 + 2000);
    if ((iVar3 == 1) || (iVar3 == 0)) {
      (**(code **)(*(int *)(param_1 + 0xc80) + 0x38))(param_1 + 0xc80,local_c,fVar4,fVar5);
      fVar4 = -((fStack_18 * ((float)_DAT_005d3dc8 / fStack_14)) /
               (*(float *)(param_1 + 0x41c) * _DAT_005c75e0));
      *local_c[0] = ((fStack_1c * ((float)_DAT_005d3dc8 / fStack_14)) /
                    (*(float *)(param_1 + 0x418) * _DAT_005c75e0)) * *(float *)(param_1 + 0x4a8);
    }
    else {
      if (iVar3 != 2) {
        return 0;
      }
      (**(code **)(*(int *)(param_1 + 0xc80) + 0x38))(param_1 + 0xc80,local_24,fVar4,fVar5);
      pfVar1 = (float *)(param_1 + 0x418);
      fVar2 = _DAT_005c75dc / *(float *)(param_1 + 0x3f8);
      fVar6 = *pfVar1 * fVar2;
      fVar2 = *(float *)(param_1 + 0x41c) * fVar2;
      fVar2 = (*(float *)(param_1 + 0x41c) * _DAT_005c75e0 +
              ((((_DAT_005c7500 / (*(float *)(param_1 + 0x41c) * _DAT_005c75e0)) *
                 fVar5 * ((float)_DAT_005d3dc8 / fVar4) * _DAT_005c75e0 + _DAT_005c75e0) * fVar2 -
               fVar2 * _DAT_005c75e0) - -*(float *)(param_1 + 0x470))) / *(float *)(param_1 + 0x41c)
      ;
      fVar4 = (*pfVar1 * _DAT_005c75e0 +
              (((((unaff_ESI * ((float)_DAT_005d3dc8 / fVar4)) / (*pfVar1 * _DAT_005c75e0)) *
                 _DAT_005c75e0 + _DAT_005c75e0) * fVar6 - fVar6 * _DAT_005c75e0) -
              *(float *)(param_1 + 0x46c))) / *pfVar1;
      *local_c[0] = ((fVar4 + fVar4) - _DAT_005c75dc) * *(float *)(param_1 + 0x4a8);
      fVar4 = (fVar2 + fVar2) - _DAT_005c75dc;
    }
    fVar2 = *(float *)(param_1 + 0x4ac);
    local_c[0][1] = 0.0;
    local_c[0][2] = fVar4 * fVar2;
    return 1;
  }
  return 0;
}

