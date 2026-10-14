
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_0049e890(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24 [9];
  
  fVar1 = (float)DAT_00616840 - *(float *)(param_1 + 0x424);
  fVar2 = (float)DAT_00616844 - *(float *)(param_1 + 0x428);
  if ((((_DAT_005c7474 <= fVar1) && (_DAT_005c7474 <= fVar2)) &&
      (fVar1 < *(float *)(param_1 + 0x430))) && (fVar2 < *(float *)(param_1 + 0x434))) {
    local_30 = (((float)DAT_00616840 - _DAT_0067dc60) / _DAT_0067dc70) * _DAT_0067dc9c;
    local_2c = (((float)DAT_00616844 - _DAT_0067dc64) / _DAT_0067dc74) * _DAT_0067dc9c;
    local_28 = -_DAT_0067dc9c;
    puVar7 = &DAT_0067dbfc;
    puVar8 = local_24;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00423b90(&local_3c,local_24,&local_30);
    fVar5 = (*(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68)) / local_34;
    fVar1 = *(float *)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0xa8);
    fVar3 = *(float *)(param_1 + 0xac);
    fVar4 = *(float *)(param_1 + 100);
    *param_2 = local_3c * fVar5 + _DAT_005d3f10;
    param_2[1] = local_38 * fVar5 - _DAT_005d1494;
    param_2[2] = fVar5 * local_34;
    *param_2 = *param_2 - (fVar1 + fVar2);
    param_2[1] = param_2[1] - (fVar3 + fVar4);
    param_2[2] = 0.0;
    return 1;
  }
  return 0;
}

