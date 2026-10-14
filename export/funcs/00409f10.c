
undefined4 __thiscall FUN_00409f10(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  if ((*(int *)(param_1 + 100) != 0) &&
     ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0x24 != 0)) {
    if (*(int *)(param_1 + 100) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100)) / 0x24;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      pfVar4 = *(float **)(param_1 + 100);
      do {
        if (param_2 < *pfVar4) {
          if (iVar3 == 0) {
            return 0;
          }
          uVar1 = FUN_00555810();
          return uVar1;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 9;
      } while (iVar3 < iVar2);
    }
    uVar1 = FUN_00555810();
    return uVar1;
  }
  return 0;
}

