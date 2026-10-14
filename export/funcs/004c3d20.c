
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3d20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  _DAT_00672918 = *param_1;
  _DAT_0067291c = param_1[1];
  _DAT_00672920 = param_1[2];
  _DAT_00672924 = param_1[3];
  DAT_00672948 = param_1[0xc];
  iVar2 = 0;
  if (0 < DAT_00672948) {
    puVar1 = &DAT_00672928;
    do {
      *puVar1 = *(undefined4 *)((int)(param_1 + -0x19ca46) + (int)puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_00672948);
  }
  return;
}

