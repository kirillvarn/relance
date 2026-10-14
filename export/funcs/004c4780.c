
uint FUN_004c4780(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  if (0x62 < DAT_00673374) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = 0;
  if (0 < DAT_00673374) {
    puVar3 = &DAT_0067298c;
    iVar4 = DAT_00673374;
    do {
      uVar1 = *puVar3;
      if ((int)uVar2 < (int)uVar1) {
        uVar2 = uVar1;
      }
      puVar3 = puVar3 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (0x62 < (int)uVar2) {
      return uVar1 & 0xffffff00;
    }
  }
  iVar4 = DAT_00673374 * 0x18;
  *(undefined4 *)(&DAT_00672978 + iVar4) = *param_1;
  *(undefined4 *)(&DAT_0067297c + iVar4) = param_1[1];
  *(undefined4 *)(&DAT_00672980 + iVar4) = param_1[2];
  *(undefined4 *)(&DAT_00672988 + iVar4) = param_3;
  (&DAT_0067298c)[DAT_00673374 * 6] = uVar2 + 1;
  *(undefined4 *)(&DAT_00672984 + iVar4) = param_2;
  DAT_00673374 = DAT_00673374 + 1;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

