
void __fastcall FUN_0044b450(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_005792b0(0x18);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x4fc) == '\0') {
      iVar2 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(iVar2 + 0xd8);
      *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(iVar2 + 0xdc);
      *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(iVar2 + 0xe0);
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      if (0 < *(int *)(param_1 + 0x2e4)) {
        piVar3 = (int *)(param_1 + 0xe4);
        do {
          piVar1 = (int *)*piVar3;
          if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (*(int *)(param_1 + 0x4e8) < 0x80)) {
            *(int **)(param_1 + 0x2e8 + *(int *)(param_1 + 0x4e8) * 4) = piVar1;
            *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x2e4));
      }
      iVar2 = FUN_00452f70();
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          piVar3 = (int *)FUN_00452f80(iVar4);
          if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) && (*(int *)(param_1 + 0x4e8) < 0x80)) {
            *(int **)(param_1 + 0x2e8 + *(int *)(param_1 + 0x4e8) * 4) = piVar3;
            *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4ec) = 0;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      *(undefined4 *)(param_1 + 0x2e8) =
           *(undefined4 *)(param_1 + 0xe4 + *(int *)(param_1 + 0x4f8) * 4);
      *(undefined4 *)(param_1 + 0x4e8) = 1;
    }
  }
  return;
}

