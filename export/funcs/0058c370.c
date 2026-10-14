
undefined4 __thiscall FUN_0058c370(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HKEY pHVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)&stack0xffffffec;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (iVar1 * 4 != 0) {
    FUN_005b7e90();
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    if (puVar3 != *(undefined4 **)(param_1 + 0x18)) {
      do {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar3 != *(undefined4 **)(param_1 + 0x18));
    }
    if (*param_2 < 1) {
      pHVar4 = (HKEY)0x0;
    }
    else {
      pHVar4 = (HKEY)param_2[*param_2];
    }
    RegSetValueExA(pHVar4,"Columns",0,3,&stack0xffffffec,iVar1 * 4);
  }
  puVar5 = (undefined4 *)&stack0xffffffec;
  if (iVar2 * 4 != 0) {
    FUN_005b7e90();
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (puVar3 != *(undefined4 **)(param_1 + 8)) {
      do {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar3 != *(undefined4 **)(param_1 + 8));
    }
    if (*param_2 < 1) {
      pHVar4 = (HKEY)0x0;
    }
    else {
      pHVar4 = (HKEY)param_2[*param_2];
    }
    RegSetValueExA(pHVar4,"Rows",0,3,&stack0xffffffec,iVar2 * 4);
  }
  return 1;
}

