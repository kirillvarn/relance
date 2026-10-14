
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_004980d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_ESI;
  float *local_c;
  float *pfStack_8;
  
  fVar1 = (float)DAT_00616840 - *(float *)(param_1 + 0x424);
  fVar2 = (float)DAT_00616844;
  fVar3 = fVar2 - *(float *)(param_1 + 0x428);
  if ((fVar1 < _DAT_005c7474) || (fVar3 < _DAT_005c7474)) {
    return 0;
  }
  if (*(float *)(param_1 + 0x430) <= fVar1) {
    return 0;
  }
  if (*(float *)(param_1 + 0x434) <= fVar3) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0xc80) + 0x38))
            (param_1 + 0xc80,&local_c,(float)DAT_00616840,fVar2);
  fVar1 = (float)_DAT_005d3dc8;
  *local_c = (unaff_ESI * (fVar1 / fVar2)) / (*(float *)(param_1 + 0x418) * _DAT_005c75e0);
  *pfStack_8 = -((fVar3 * (fVar1 / fVar2)) / (*(float *)(param_1 + 0x41c) * _DAT_005c75e0));
  *local_c = *local_c * _DAT_005c75e0 + _DAT_005c75e0;
  *pfStack_8 = *pfStack_8 * _DAT_005c75e0 + _DAT_005c75e0;
  return 1;
}

