
void __fastcall FUN_004686e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_28;
  undefined4 *puStack_24;
  code *pcStack_20;
  int local_1c;
  undefined1 auStack_18 [4];
  code *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb4e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = param_1;
  FUN_0046c860(&local_28,**(undefined4 **)(param_1 + 0x20),*(undefined4 **)(param_1 + 0x20));
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 == *(int **)(param_1 + 4)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    ExceptionList = local_c;
    return;
  }
  do {
    local_10 = piVar3[2];
    local_14 = _vftable__exref;
    local_4 = 0;
    local_28 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 1;
    FUN_0046c800(auStack_18,*(undefined4 *)(param_1 + 0x20),&local_28);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
      local_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
    pcStack_20 = _vftable__exref;
    local_4 = 2;
    puStack_24 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    iVar1 = *(int *)(param_1 + 0x20);
    local_4._0_1_ = 3;
    iVar2 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    FUN_0046ea00(iVar2 + 8,&puStack_24);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (puStack_24 != (undefined4 *)0x0) {
      (**(code **)*puStack_24)(1);
      puStack_24 = (undefined4 *)0x0;
    }
    piVar3 = (int *)*piVar3;
    pcStack_20 = _vftable__exref;
  } while (piVar3 != (int *)*(int *)(local_1c + 4));
  *(int *)(local_1c + 0x18) = *(int *)(local_1c + 0x18) + 1;
  ExceptionList = local_c;
  return;
}

