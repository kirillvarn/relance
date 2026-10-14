
void __fastcall FUN_00446020(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9925;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cbc0c;
  local_4 = 4;
  if ((*(char *)(param_1 + 0x12) == '\0') && (param_1[0xc] != -1)) {
    piVar6 = *(int **)param_1[0x1b];
    if (piVar6 != (int *)param_1[0x1b]) {
      do {
        (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,piVar6[2]);
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)param_1[0x1b]);
    }
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,param_1[0xc]);
  }
  FUN_00555a90();
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  param_1[0x19] = 0;
  local_4._0_1_ = 3;
  FUN_005581b0();
  puVar2 = (undefined4 *)param_1[0x1b];
  local_4._0_1_ = 2;
  puVar5 = (undefined4 *)*puVar2;
  while (puVar5 != puVar2) {
    puVar3 = (undefined4 *)*puVar5;
    FUN_00516f70(auStack_10,puVar5);
    puVar5 = puVar3;
  }
  FUN_005b7e1d(param_1[0x1b]);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_00555a90();
  iVar4 = param_1[0xf];
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = 0xffffffff;
  FUN_005594b0();
  ExceptionList = pvStack_c;
  return;
}

