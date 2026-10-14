
void __fastcall thunk_FUN_005394b0(CBase *param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  CBase *pCVar6;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_005c0b3c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(param_1 + -0xc) = &PTR_LAB_005de7ec;
  *(undefined ***)(param_1 + -8) = &PTR_LAB_005de76c;
  *(undefined ***)param_1 = &PTR_FUN_005de764;
  iStack_4 = 4;
  FUN_004144f0();
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 3;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 4 + iVar5 * 8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x60))();
        piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 4 + iVar5 * 8);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  pCVar6 = param_1 + 0x84;
  iVar4 = 3;
  do {
    if (*(int **)pCVar6 != (int *)0x0) {
      (**(code **)(**(int **)pCVar6 + 4))();
      FUN_004f7a90();
      *(int *)pCVar6 = 0;
    }
    pCVar6 = pCVar6 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_004fd0d0(0);
  ActionDB::free((ActionDB *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00536170(*(int *)(param_1 + 0x34));
  }
  CBase::advise(param_1,false);
  if (*(CObject **)(param_1 + 4) != (CObject *)0x0) {
    CObject::Release(*(CObject **)(param_1 + 4));
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  iStack_4._0_1_ = 6;
  FUN_004144f0();
  iVar4 = *(int *)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x4c);
  iStack_4 = CONCAT31(iStack_4._1_3_,5);
  for (; iVar5 != iVar4; iVar5 = iVar5 + 8) {
    FUN_00418f70(0);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  _Memory = *(void **)(param_1 + 0x3c);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iStack_4._0_1_ = 7;
  FUN_004fd0d0(0);
  piVar1 = *(int **)(param_1 + 0x20);
  piVar2 = (int *)*piVar1;
  iStack_4._0_1_ = 1;
  while (piVar2 != piVar1) {
    puVar3 = (undefined4 *)FUN_0053ab20(auStack_14,0);
    FUN_0053aab0(auStack_10,*puVar3);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  ActionDB::~ActionDB((ActionDB *)(param_1 + 0x14));
  iStack_4 = 8;
  CBase::~CBase((CBase *)(-(uint)(param_1 != (CBase *)0xc) & (uint)param_1));
  iStack_4 = 0xffffffff;
  if (param_1 + -0xc == (CBase *)0x0) {
    param_1 = (CBase *)0x0;
  }
  else {
    param_1 = param_1 + -4;
  }
  Watchable::unwatch((Watchable *)param_1);
  ExceptionList = pvStack_c;
  return;
}

