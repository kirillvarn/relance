
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a420(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x1c);
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  fVar2 = _DAT_005c7474;
  fVar3 = _DAT_005c7474;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    fVar3 = _DAT_00667c80;
    if (DAT_00667cac == 0) {
LAB_0042a4ba:
      fVar2 = _DAT_005c7474;
    }
    else if (DAT_00667cac == 2) {
      fVar2 = _DAT_00667c9c;
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) goto LAB_0042a4ba;
    }
    else if ((DAT_00667cac != 1) || (fVar2 = _DAT_005ca238, (*(byte *)(param_1 + 0xc) & 2) == 0))
    goto LAB_0042a4ba;
    break;
  case 1:
    fVar3 = _DAT_00667c7c;
    if (DAT_00667cac == 1) {
      fVar2 = _DAT_005ca238;
      fVar3 = _DAT_005c7474;
    }
    goto switchD_0042a46c_default;
  case 2:
    fVar3 = _DAT_00667c78;
    goto switchD_0042a46c_default;
  case 3:
    fVar3 = _DAT_00667c88;
    break;
  case 4:
    fVar3 = _DAT_00667c84;
    if (DAT_00667cac == 0) {
LAB_0042a540:
      fVar2 = _DAT_005c7474;
    }
    else if (DAT_00667cac == 2) {
      fVar2 = _DAT_00667c9c;
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) goto LAB_0042a540;
    }
    else if ((DAT_00667cac != 1) || (fVar2 = _DAT_005ca238, (*(byte *)(param_1 + 0xc) & 2) == 0))
    goto LAB_0042a540;
    break;
  case 5:
    fVar3 = _DAT_00667c78;
    break;
  default:
    goto switchD_0042a46c_default;
  }
  fVar3 = fVar3 + _DAT_00667ca4;
switchD_0042a46c_default:
  fVar1 = (fVar3 + fVar2 + (float)iVar4 + fVar1) * (float)_DAT_005ca320;
  if (_DAT_005ca31c <= fVar1) {
    if (fVar1 <= _DAT_005c7474) {
      uVar5 = ftol();
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xffffd8f1;
  }
  (**(code **)(**(int **)Streamer_exref + 0x20))
            (*(int **)Streamer_exref,*(undefined4 *)(param_1 + 0x30),uVar5);
  return;
}

