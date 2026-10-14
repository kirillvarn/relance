
int * FUN_005306e0(Root *param_1)

{
  int *piVar1;
  CObject *pCVar2;
  undefined4 unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c065b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xc0);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005392d0(10);
    piVar1[0x2d] = 0;
    piVar1[0x2e] = 0;
    *(undefined1 *)(piVar1 + 0x2f) = 1;
    *piVar1 = (int)&PTR_LAB_005dddd4;
    piVar1[1] = (int)&PTR_LAB_005ddd54;
    piVar1[3] = (int)&PTR_FUN_005ddd4c;
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1 + 0xc))();
  (**(code **)(**(int **)(param_1 + 4) + 0x20))(1);
  (**(code **)(*piVar1 + 0x168))(param_1);
  Archetype::Root::Release(param_1);
  if (((piVar1 == (int *)0xfffffff4) || (pCVar2 = (CObject *)piVar1[4], pCVar2 == (CObject *)0x0))
     || (((byte)*(undefined4 *)(pCVar2 + 0x4c) & 1) != 1)) {
    pCVar2 = (CObject *)0x0;
  }
  *(undefined4 *)(pCVar2 + 0x2c) = *(undefined4 *)param_1;
  *(undefined4 *)(pCVar2 + 0x30) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(pCVar2 + 0x34) = *(undefined4 *)(param_1 + 8);
  FUN_00554e90();
  PhySys::BuildIVP_Real(pCVar2,(CreateParms *)&stack0xffffffb8);
  FUN_005301d0(unaff_retaddr);
  FUN_00540c30(piVar1,0);
  ExceptionList = pvStack_14;
  return piVar1;
}

