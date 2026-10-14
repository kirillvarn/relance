
void __fastcall FUN_005501e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0x3b] != '\0') {
    iVar2 = 0;
    if (0 < param_1[3]) {
      do {
        iVar1 = *(int *)(*param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_005b7e1d(iVar1);
        }
        *(undefined4 *)(*param_1 + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[3]);
    }
    FUN_005b7e1d(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  return;
}

