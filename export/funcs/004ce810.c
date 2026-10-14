
void __thiscall FUN_004ce810(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  iVar3 = param_2[0xe];
  iVar2 = 0;
  param_1[0xe] = iVar3;
  if (0 < iVar3) {
    puVar1 = param_1 + 6;
    do {
      *puVar1 = *(undefined4 *)(((int)(param_2 + 2) - (int)(param_1 + 2)) + (int)puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)param_1[0xe]);
  }
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  puVar1 = param_1 + 0x11;
  iVar3 = 0x10;
  do {
    *puVar1 = *(undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  return;
}

