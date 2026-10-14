
void __fastcall FUN_004b6c80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd258;
  piVar1 = *(int **)(param_1 + 0x97c);
  local_4 = 0;
  ppvVar4 = &local_c;
  piVar3 = (int *)*piVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    *(int *)(param_1 + 0x980) = *(int *)(param_1 + 0x980) + -1;
    ppvVar4 = ExceptionList;
    piVar3 = piVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x97c));
  *(undefined4 *)(param_1 + 0x97c) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_00477da0();
  ExceptionList = local_c;
  return;
}

