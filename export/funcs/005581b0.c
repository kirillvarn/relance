
void __fastcall FUN_005581b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1518;
  local_c = ExceptionList;
  piVar6 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)piVar6[2];
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_005b7e1d(*piVar1);
        }
        FUN_005b7e1d(piVar1);
      }
      piVar6 = (int *)*piVar6;
      ppvVar4 = ExceptionList;
    } while (piVar6 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = ppvVar4;
  piVar6 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar6;
  while (piVar1 != piVar6) {
    puVar5 = (undefined4 *)FUN_0053ab20(local_14,0);
    FUN_00516f70(local_10,*puVar5);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  local_4 = 0xffffffff;
  puVar3 = (undefined4 *)*puVar5;
  while (puVar3 != puVar5) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_00516f70(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

