
void __fastcall FUN_004563d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005ba063;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005ce114;
  piVar5 = *(int **)param_1[2];
  local_4 = 1;
  if (piVar5 != (int *)param_1[2]) {
    do {
      iVar1 = piVar5[2];
      if (iVar1 != 0) {
        FUN_00454bb0();
        FUN_005b7e1d(iVar1);
      }
      piVar2 = (int *)*piVar5;
      *(int **)piVar5[1] = piVar2;
      *(int *)(*piVar5 + 4) = piVar5[1];
      FUN_005b7e1d(piVar5);
      param_1[3] = param_1[3] + -1;
      piVar5 = piVar2;
    } while (piVar2 != (int *)param_1[2]);
  }
  puVar3 = (undefined4 *)param_1[2];
  puVar4 = (undefined4 *)*puVar3;
  local_4 = local_4 & 0xffffff00;
  while (puVar4 != puVar3) {
    puVar4 = (undefined4 *)*puVar4;
    piVar5 = (int *)FUN_0053ab20(local_10,0);
    piVar5 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_005b7e1d(piVar5);
    param_1[3] = param_1[3] + -1;
  }
  FUN_005b7e1d(param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0xffffffff;
  FUN_00576010();
  ExceptionList = local_c;
  return;
}

