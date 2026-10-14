
uint FUN_00476fe0(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00476c40();
  if (DAT_0066dc0c == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (DAT_0066dc10 - (int)DAT_0066dc0c) / 0x14;
  }
  uVar1 = 0;
  piVar2 = DAT_0066dc0c;
  if (0 < iVar3) {
    do {
      if (*piVar2 == param_1) {
        piVar2 = DAT_0066dc0c + uVar1 * 5 + 1;
        *param_2 = *piVar2;
        param_2[1] = piVar2[1];
        param_2[2] = piVar2[2];
        iVar3 = DAT_0066dc0c[uVar1 * 5 + 4];
        *param_3 = iVar3;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 5;
    } while ((int)uVar1 < iVar3);
  }
  return uVar1 & 0xffffff00;
}

