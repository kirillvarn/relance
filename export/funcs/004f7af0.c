
void __fastcall FUN_004f7af0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x68) == 0) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
    iVar3 = *(int *)(param_1 + 0x5c);
    puVar1 = (undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x68) = param_1;
    piVar2 = &DAT_00674ce0 + iVar3 * 3;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 100) = (&DAT_00674ce4)[iVar3 * 3];
      *puVar1 = 0;
      if ((undefined4 *)(&DAT_00674ce4)[iVar3 * 3] != (undefined4 *)0x0) {
        *(undefined4 *)(&DAT_00674ce4)[iVar3 * 3] = puVar1;
        (&DAT_00674ce4)[iVar3 * 3] = puVar1;
        *piVar2 = *piVar2 + 1;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        return;
      }
      (&DAT_00674ce8)[iVar3 * 3] = puVar1;
      (&DAT_00674ce4)[iVar3 * 3] = puVar1;
      *piVar2 = *piVar2 + 1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return;
}

