
void __fastcall FUN_00437b70(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9298;
  local_c = ExceptionList;
  piVar4 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar4;
  local_4 = 0;
  ppvVar2 = &local_c;
  local_18 = param_1;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (ExceptionList = ppvVar2, piVar1 != piVar4) {
      FUN_00438930();
      FUN_00438520(local_10,piVar1);
      ppvVar2 = ExceptionList;
    }
  }
  else {
    piVar4 = (int *)piVar4[1];
    ExceptionList = &local_c;
    ppvVar2 = &local_c;
    if (piVar4 != *(int **)(param_1 + 8)) {
      do {
        ExceptionList = ppvVar2;
        FUN_004388f0(piVar4[2]);
        piVar1 = (int *)*piVar4;
        FUN_005b7e1d(piVar4);
        piVar4 = piVar1;
        ppvVar2 = ExceptionList;
      } while (piVar1 != (int *)*(int *)(param_1 + 8));
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(local_14);
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar4;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar1 != piVar4) {
      puVar3 = (undefined4 *)FUN_004382b0(local_14,0);
      FUN_00438520(&local_18,*puVar3);
    }
  }
  else {
    FUN_004388f0(piVar4[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(local_10);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

