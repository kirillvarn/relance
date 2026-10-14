
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3d80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  _DAT_006728e4 = *param_1;
  _DAT_006728e8 = param_1[1];
  _DAT_006728ec = param_1[2];
  _DAT_006728f0 = param_1[3];
  DAT_00672914 = param_1[0xc];
  iVar2 = 0;
  if (0 < DAT_00672914) {
    puVar1 = &DAT_006728f4;
    do {
      *puVar1 = *(undefined4 *)((int)(param_1 + -0x19ca39) + (int)puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_00672914);
  }
  return;
}

