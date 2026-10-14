
int __thiscall FUN_005831b0(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_2) {
  case 6:
    param_1[0x2a] = *param_3;
    param_1[0x2b] = param_3[1];
    param_1[0x2c] = param_3[2];
    FUN_005803d0();
    return 0;
  default:
    iVar4 = FUN_005a13c0(param_2,param_3,param_4);
    return iVar4;
  case 0x37:
    param_1[0x196] = (int)param_3;
    param_1[0x197] = param_4;
    if (param_4 < (int)param_3) {
      param_1[0x197] = (int)param_3;
      param_1[0x196] = param_4;
    }
    if (param_1[0x197] < param_1[0x199]) {
      param_1[0x199] = param_1[0x197];
    }
    if (param_1[0x199] < param_1[0x196]) {
      param_1[0x199] = param_1[0x196];
    }
    FUN_00580290();
    if (((int *)param_1[1] != (int *)0x0) &&
       (piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar2 != (int *)0x0)) {
      iVar4 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 8))(param_1[0x199]);
      (**(code **)(iVar4 + 0xa8))(0x3e,uVar3);
      return 0;
    }
    break;
  case 0x38:
    iVar4 = param_1[0x196];
    param_1[0x199] = (int)param_3;
    if ((int)param_3 < iVar4) {
      param_1[0x199] = iVar4;
    }
    iVar1 = param_1[0x197];
    if ((iVar1 < param_1[0x199]) && (iVar4 < iVar1)) {
      param_1[0x199] = iVar1;
    }
    FUN_00580290();
    return 0;
  case 0x39:
    return param_1[0x197];
  case 0x3a:
    return param_1[0x196];
  case 0x3b:
    return param_1[0x199];
  case 0x3c:
    param_1[0x198] = (int)param_3;
    if (param_4 == 0) {
      param_4 = 1;
    }
    param_1[0x19a] = param_4;
    break;
  case 0x3d:
    return param_1[0x198];
  }
  return 0;
}

