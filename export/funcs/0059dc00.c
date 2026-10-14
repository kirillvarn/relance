
undefined4 FUN_0059dc00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
    return 1;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 4;
  if (DAT_0067dcdc == param_1) {
    DAT_0067dcdc = 0;
  }
  if (DAT_0067dce0 == param_1) {
    DAT_0067dce0 = 0;
  }
  if (DAT_0067dcd8 == param_1) {
    DAT_0067dcd8 = 0;
  }
  uVar6 = 0;
  iVar7 = DAT_0067dbe8;
  if (DAT_0067dbe8 != 0) {
    while (*(int *)(iVar7 + 8) != param_1) {
      piVar1 = (int *)(iVar7 + 4);
      iVar7 = *piVar1;
      if (*piVar1 == 0) {
        return uVar6;
      }
    }
    if (*(int *)(iVar7 + 8) != 0) {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 0xc);
        iVar4 = 0;
        while (iVar3 = iVar5, iVar3 != 0) {
          if (iVar3 == param_1) {
            if (iVar4 == 0) {
              *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 8);
            }
            else {
              *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
            }
            break;
          }
          iVar4 = iVar3;
          iVar5 = *(int *)(iVar3 + 8);
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
      FUN_0059e810(iVar7);
      *(undefined4 *)(iVar7 + 8) = 0;
      uVar6 = 1;
    }
  }
  return uVar6;
}

