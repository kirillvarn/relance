
void __fastcall FUN_00469e60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bb713;
  local_c = ExceptionList;
  piVar4 = (int *)**(int **)(param_1 + 4);
  local_4 = 1;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  local_1c = param_1;
  if (piVar4 != *(int **)(param_1 + 4)) {
    do {
      iVar1 = piVar4[4];
      if (iVar1 != 0) {
        FUN_0046ba90();
        FUN_005b7e1d(iVar1);
      }
      FUN_0046c8c0(&local_20,piVar4);
      piVar4 = local_20;
      ppvVar3 = ExceptionList;
    } while (local_20 != *(undefined4 **)(param_1 + 4));
  }
  ExceptionList = ppvVar3;
  FUN_0046cef0(&local_20,**(undefined4 **)(param_1 + 0x1c),*(undefined4 **)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0046cef0(&local_20,**(undefined4 **)(param_1 + 0x1c),*(undefined4 **)(param_1 + 0x1c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_20 = (undefined4 *)*puVar2;
  local_4 = 0xffffffff;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (piVar4 = (int *)FUN_0053e430(&local_1c), local_20 != (undefined4 *)*piVar4)) ||
     (puVar2 != *(undefined4 **)(param_1 + 4))) {
    while (local_20 != puVar2) {
      puVar5 = (undefined4 *)FUN_00526960(local_14,0);
      FUN_0046c8c0(local_10,*puVar5);
    }
  }
  else {
    FUN_0046d950((*(undefined4 **)(param_1 + 4))[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(local_18);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

