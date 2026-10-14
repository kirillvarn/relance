
int FUN_005309c0(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  puVar1 = param_1;
  iVar2 = FUN_0052c7a0(param_1);
  if ((iVar2 == DAT_006754f8) || (*puVar1 < *(uint *)(iVar2 + 0xc))) {
    local_4 = DAT_006754f8;
    piVar3 = &local_4;
  }
  else {
    piVar3 = (int *)&param_1;
  }
  if (*piVar3 != DAT_006754f8) {
    return *piVar3 + 0x10;
  }
  return 0;
}

