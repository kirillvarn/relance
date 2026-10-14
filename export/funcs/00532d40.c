
void __fastcall FUN_00532d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  CArchGroup *this;
  FuseIgnitionList *pFVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_28;
  CArchGroupManager *pCStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  CArchGrpTraverser aCStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c0832;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-3] = &PTR_LAB_005de23c;
  param_1[-2] = &PTR_LAB_005de1bc;
  *param_1 = &PTR_FUN_005de1b0;
  param_1[0x28] = &PTR_FUN_005de1a8;
  local_4 = 3;
  local_18 = param_1;
  FUN_0053e430(&local_28);
  if (local_28 != param_1[0x2b]) {
    do {
      if (*(int **)(local_28 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(local_28 + 8) + 4))(1);
      }
      *(undefined4 *)(local_28 + 8) = 0;
      FUN_0053ab20(&uStack_1c,0);
    } while (local_28 != param_1[0x2b]);
  }
  FUN_00535980();
  if ((((param_1 + -3 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
      (local_28 = param_1[1], local_28 == 0)) || ((*(uint *)(local_28 + 0x4c) & 0x103) != 0x103)) {
    local_28 = 0;
  }
  uStack_1c = FUN_0052a680();
  piStack_20 = *(int **)(*(int *)(local_28 + 0x88) + 0x78);
  piVar5 = (int *)*piStack_20;
  if (piVar5 != piStack_20) {
    do {
      FUN_00432240(&pCStack_24,piVar5 + 2);
      if (*(Fuse **)(pCStack_24 + 0x10) != (Fuse *)0x0) {
        Fuse::UnLoad(*(Fuse **)(pCStack_24 + 0x10));
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piStack_20);
  }
  pCStack_24 = (CArchGroupManager *)(local_28 + 0x144);
  aCStack_14[0] = (CArchGrpTraverser)0x1;
  this = CArchGroupManager::Traverse(pCStack_24,aCStack_14);
  while (this != (CArchGroup *)0x0) {
    pFVar3 = CArchGroup::FuseIgnitions(this);
    puVar4 = (undefined4 *)**(undefined4 **)(pFVar3 + 4);
    pFVar3 = CArchGroup::FuseIgnitions(this);
    puVar1 = *(undefined4 **)(pFVar3 + 4);
    for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      FUN_00432240(&piStack_20,puVar4 + 2);
      if ((Fuse *)piStack_20[4] != (Fuse *)0x0) {
        Fuse::UnLoad((Fuse *)piStack_20[4]);
      }
    }
    this = CArchGroupManager::Traverse(pCStack_24,aCStack_14);
  }
  uVar2 = param_1[0x31];
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)FUN_0053e430(&uStack_1c);
  FUN_00535ad0(&piStack_20,*puVar4,uVar2);
  FUN_005b7e1d(param_1[0x31]);
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  FUN_005b7e1d(param_1[0x32]);
  param_1[0x32] = 0;
  local_4._0_1_ = 1;
  FUN_00535a80(&uStack_1c,*(undefined4 *)param_1[0x2e],(undefined4 *)param_1[0x2e]);
  FUN_005b7e1d(param_1[0x2e]);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a2f80(&uStack_1c,*(undefined4 *)param_1[0x2b],(undefined4 *)param_1[0x2b]);
  FUN_005b7e1d(param_1[0x2b]);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4 = 0xffffffff;
  FUN_005394b0();
  ExceptionList = pvStack_c;
  return;
}

