
void __thiscall FUN_00558580(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_80 [32];
  
  piVar2 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  iVar4 = 0;
  if (piVar3 != piVar2) {
    do {
      if (0x1f < iVar4) {
        DAT_006799c8 = 1;
        break;
      }
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar3;
      local_80[iVar4] = *(undefined4 *)*piVar1;
      iVar4 = iVar4 + 1;
    } while (piVar3 != piVar2);
    if (0 < iVar4) {
      FUN_00558000(local_80,iVar4,param_2);
    }
  }
  return;
}

