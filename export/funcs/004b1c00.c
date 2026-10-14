
undefined4 __thiscall FUN_004b1c00(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_2c;
  int local_28 [10];
  
  piVar4 = &DAT_00679bc0;
  piVar5 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  *(int *)(param_1 + 0x8b8) = local_28[2];
  if (local_28[4] == 0x20) {
    *(undefined1 *)(param_1 + 0x8bc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x8bc) = 0;
  }
  local_2c = 0x10;
  if (param_3 != '\0') {
    local_2c = 0x20;
  }
  iVar3 = 0;
  _param_3 = (int *)(param_1 + 0x8cc);
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = local_2c;
  do {
    if (*(char *)(iVar3 + 0x944 + param_1) != '\0') {
      iVar1 = *_param_3;
      iVar2 = _param_3[1];
      if ((param_2 == iVar1) && (local_2c == _param_3[2])) {
        FUN_004af120(local_28,iVar1,iVar2,0xffffffff);
        if (*(char *)(param_1 + 0x32d) == '\0') {
          FUN_00558d60(iVar1,iVar2);
        }
      }
    }
    iVar3 = iVar3 + 1;
    _param_3 = _param_3 + 3;
  } while (iVar3 < 10);
  if ((local_28[2] != 0) && (local_28[3] != 0)) {
    FUN_00424ce0(DAT_0067eca0,local_28);
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    *(undefined4 *)(param_1 + 0x8c4) = 0x40240000;
    return 1;
  }
  return 0;
}

