
void FUN_004c46e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((-1 < param_1) && (param_1 < DAT_00673374)) &&
     (DAT_00673374 = DAT_00673374 + -1, param_1 < DAT_00673374)) {
    iVar2 = DAT_00673374 - param_1;
    puVar1 = (undefined4 *)(&DAT_00672978 + param_1 * 0x18);
    do {
      iVar2 = iVar2 + -1;
      *puVar1 = puVar1[6];
      puVar1[1] = puVar1[7];
      puVar1[2] = puVar1[8];
      puVar1[4] = puVar1[10];
      puVar1[3] = puVar1[9];
      puVar1[5] = puVar1[0xb];
      puVar1 = puVar1 + 6;
    } while (iVar2 != 0);
  }
  return;
}

