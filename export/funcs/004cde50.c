
uint __thiscall FUN_004cde50(int *param_1,int *param_2)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  *param_2 = param_1[1];
  param_2[1] = param_1[2];
  param_2[2] = param_1[3];
  param_2[3] = param_1[4];
  param_2[4] = param_1[5];
  param_2[5] = param_1[6];
  iVar3 = param_1[0xf];
  iVar2 = 0;
  param_2[0xe] = iVar3;
  if (0 < iVar3) {
    piVar1 = param_2 + 6;
    do {
      *piVar1 = *(int *)(((int)(param_1 + 3) - (int)(param_2 + 2)) + (int)piVar1);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_2[0xe]);
  }
  param_2[0xf] = param_1[0x10];
  param_2[0x10] = param_1[0x11];
  piVar1 = param_2 + 0x11;
  iVar3 = 0x10;
  do {
    *piVar1 = *(int *)((int)param_1 + (4 - (int)param_2) + (int)piVar1);
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_2[0x21] = param_1[0x22];
  param_2[0x22] = param_1[0x23];
  iVar3 = param_1[0x24];
  param_2[0x23] = iVar3;
  param_2[0x24] = param_1[0x25];
  param_2[0x25] = param_1[0x26];
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

