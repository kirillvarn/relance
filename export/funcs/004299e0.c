
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004299e0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    *param_2 = 0.0;
    return 0xfffffff9;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  fVar1 = _DAT_005c7474;
  fVar2 = _DAT_005c7474;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    fVar2 = _DAT_00667c80;
    if (DAT_00667cac == 0) {
LAB_00429a6a:
      fVar1 = _DAT_005c7474;
    }
    else if (DAT_00667cac == 2) {
      fVar1 = _DAT_00667c9c;
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) goto LAB_00429a6a;
    }
    else if ((DAT_00667cac != 1) || (fVar1 = _DAT_005ca238, (*(byte *)(param_1 + 0xc) & 2) == 0))
    goto LAB_00429a6a;
    break;
  case 1:
    fVar2 = _DAT_00667c7c;
    if (DAT_00667cac == 1) {
      fVar1 = _DAT_005ca238;
      fVar2 = _DAT_005c7474;
    }
    goto switchD_00429a1c_default;
  case 2:
    fVar2 = _DAT_00667c78;
    goto switchD_00429a1c_default;
  case 3:
    fVar2 = _DAT_00667c88;
    break;
  case 4:
    fVar2 = _DAT_00667c84;
    if (DAT_00667cac == 0) {
LAB_00429af0:
      fVar1 = _DAT_005c7474;
    }
    else if (DAT_00667cac == 2) {
      fVar1 = _DAT_00667c9c;
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) goto LAB_00429af0;
    }
    else if ((DAT_00667cac != 1) || (fVar1 = _DAT_005ca238, (*(byte *)(param_1 + 0xc) & 2) == 0))
    goto LAB_00429af0;
    break;
  case 5:
    fVar2 = _DAT_00667c78;
    break;
  default:
    goto switchD_00429a1c_default;
  }
  fVar2 = fVar2 + _DAT_00667ca4;
switchD_00429a1c_default:
  fVar1 = fVar2 + fVar1 + (float)iVar3 + *(float *)(param_1 + 0x1c);
  if (fVar1 <= _DAT_005c7474) {
    if (fVar1 < _DAT_005ca16c) {
      fVar1 = _DAT_005ca16c;
    }
    *param_2 = fVar1;
    return 0;
  }
  *param_2 = _DAT_005c7474;
  return 0;
}

