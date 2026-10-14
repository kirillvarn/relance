
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00438060(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  int local_8;
  int local_4;
  
  local_8 = FUN_0052c7a0(&param_2);
  iVar2 = *(int *)(param_1 + 4);
  if ((local_8 == iVar2) || (param_2 < *(uint *)(local_8 + 0xc))) {
    local_4 = iVar2;
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if ((*piVar1 != iVar2) && (*piVar1 != -0x10)) {
    iVar2 = ftol();
    fVar3 = (float10)iVar2;
    if ((float10)_DAT_005caee8 < fVar3) {
      fVar3 = (float10)_DAT_005caee8;
    }
    if (fVar3 < (float10)_DAT_005c7474) {
      fVar3 = (float10)_DAT_005c75dc;
    }
    return fVar3;
  }
  return (float10)_DAT_005c7474;
}

