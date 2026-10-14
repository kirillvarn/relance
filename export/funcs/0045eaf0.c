
void __thiscall FUN_0045eaf0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  int *local_44;
  wchar_t *local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  StyleNode local_30 [8];
  StyleNode aSStack_28 [8];
  TextNode aTStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba3e4;
  pvStack_c = ExceptionList;
  iVar6 = *param_2;
  iVar8 = 0;
  local_40 = L" ";
  if (iVar6 == DAT_0066da40) {
    param_2._0_2_ = 0xd801;
    iVar8 = param_1 + 0x56c;
    puVar9 = &DAT_00611564;
    ExceptionList = &pvStack_c;
  }
  else if (iVar6 == DAT_0066da3c) {
    param_2._0_2_ = 0x1d9d;
    iVar8 = param_1 + 0x578;
    puVar9 = &DAT_00611568;
    ExceptionList = &pvStack_c;
  }
  else if (iVar6 == DAT_0066da38) {
    param_2._0_2_ = 0xba28;
    iVar8 = param_1 + 0x584;
    puVar9 = &DAT_00611570;
    ExceptionList = &pvStack_c;
  }
  else if (iVar6 == DAT_0066da44) {
    param_2._0_2_ = 0xd681;
    iVar8 = param_1 + 0x59c;
    puVar9 = &DAT_00611560;
    ExceptionList = &pvStack_c;
  }
  else if (iVar6 == DAT_0066da48) {
    param_2._0_2_ = 0x73f7;
    iVar8 = param_1 + 0x590;
    puVar9 = &DAT_00611574;
    ExceptionList = &pvStack_c;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x530);
    param_2._0_2_ = 0x8283;
    if (iVar6 == 0) {
      local_40 = L" ????";
      ExceptionList = &pvStack_c;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_0046cd50(&local_44,piVar3);
      if (local_44 == *(int **)(iVar6 + 4)) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_44[4];
      }
    }
    puVar9 = &DAT_0061156c;
  }
  FUN_00579870(puVar9);
  *(int *)(param_1 + 0x568) = *piVar3;
  FUN_0046c860(&local_44,**(undefined4 **)(param_1 + 0x4e0),*(undefined4 **)(param_1 + 0x4e0));
  piVar3 = (int *)StyleNode::StyleNode(local_30,(ushort)param_2);
  local_4 = 0;
  local_44 = (int *)(**(code **)(*piVar3 + 0x1c))();
  local_4._0_1_ = 1;
  FUN_0046c800(auStack_3c,*(undefined4 *)(param_1 + 0x4e0),&local_44);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045eeb0();
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_30);
  piVar3 = (int *)TextNode::TextNode(aTStack_20,(ushort *)local_40,-1);
  local_4 = 2;
  local_44 = (int *)(**(code **)(*piVar3 + 0x1c))();
  local_4._0_1_ = 3;
  FUN_0046c800(auStack_3c,*(undefined4 *)(param_1 + 0x4e0),&local_44);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045eeb0();
  local_4 = 0xffffffff;
  TextNode::~TextNode(aTStack_20);
  if (iVar8 != 0) {
    piVar3 = (int *)FUN_0046baf0(auStack_3c);
    piVar3 = (int *)*piVar3;
    uVar4 = FUN_0053e430(auStack_38);
    FUN_0046bba0(uVar4);
    puVar10 = auStack_34;
    FUN_0045eed0(puVar10);
    puVar5 = (undefined4 *)FUN_0046baf0(puVar10);
    uVar4 = *puVar5;
    local_40 = (wchar_t *)FUN_0045eed0();
    for (; local_44 != piVar3; local_44 = (int *)*local_44) {
      FUN_0046c800(local_30,uVar4,local_44 + 2);
    }
  }
  piVar3 = (int *)TextNode::TextNode(aTStack_20,(ushort *)PTR_DAT_0061155c,-1);
  local_4 = 4;
  local_44 = (int *)(**(code **)(*piVar3 + 0x1c))();
  iVar8 = *(int *)(param_1 + 0x4e0);
  local_4._0_1_ = 5;
  iVar6 = FUN_0042a7e0(iVar8,*(undefined4 *)(iVar8 + 4));
  *(int *)(iVar8 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  FUN_0046ea00(iVar6 + 8,&local_44);
  *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_44 != (int *)0x0) {
    (**(code **)*local_44)(1);
    local_44 = (int *)0x0;
  }
  local_4 = 0xffffffff;
  TextNode::~TextNode(aTStack_20);
  puVar5 = *(undefined4 **)(param_1 + 0x500);
  puVar2 = (undefined4 *)*puVar5;
  while (puVar2 != puVar5) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0046d680(local_30,puVar2);
    puVar2 = puVar1;
  }
  piVar3 = (int *)StyleNode::StyleNode(aSStack_28,(ushort)param_2);
  local_4 = 6;
  local_40 = (wchar_t *)(**(code **)(*piVar3 + 0x1c))();
  iVar8 = *(int *)(param_1 + 0x500);
  piVar3 = *(int **)(iVar8 + 4);
  local_4._0_1_ = 7;
  piVar7 = operator_new(0xc);
  *piVar7 = iVar8;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar7;
  }
  piVar7[1] = (int)piVar3;
  *(int **)(iVar8 + 4) = piVar7;
  *(int **)piVar7[1] = piVar7;
  FUN_0046ea00(piVar7 + 2,&local_40);
  *(int *)(param_1 + 0x504) = *(int *)(param_1 + 0x504) + 1;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_40 != (wchar_t *)0x0) {
    (*(code *)**(undefined4 **)local_40)(1);
    local_40 = (wchar_t *)0x0;
  }
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(aSStack_28);
  ExceptionList = pvStack_c;
  return;
}

