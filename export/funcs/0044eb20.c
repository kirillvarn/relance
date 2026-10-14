
void __fastcall FUN_0044eb20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9dbe;
  pvStack_c = ExceptionList;
  iVar5 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar4 = &pvStack_c;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
      ppvVar4 = ExceptionList;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  ExceptionList = ppvVar4;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  piVar1 = *(int **)(param_1 + 0xac);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    piVar3 = piVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  ExceptionList = pvStack_c;
  return;
}

