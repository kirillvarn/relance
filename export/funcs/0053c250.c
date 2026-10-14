
void __thiscall FUN_0053c250(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  iVar1 = param_2[0xc];
  iVar3 = 0;
  param_1[0xc] = iVar1;
  if (0 < iVar1) {
    puVar2 = param_1 + 4;
    do {
      *puVar2 = *(undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar2);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[0xc]);
  }
  return;
}

