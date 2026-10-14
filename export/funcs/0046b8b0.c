
undefined4 * __thiscall FUN_0046b8b0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  IBase *pIVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 auStack_2c [4];
  uint auStack_28 [4];
  TextPtrNode aTStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb83c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = param_1;
  FUN_00432240(&local_38,&param_2);
  if (local_38 != *(int *)(param_1 + 4)) {
    ExceptionList = local_c;
    return *(undefined4 **)(local_38 + 0x10);
  }
  puVar4 = operator_new(0xc);
  local_4 = 0;
  local_3c = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)puVar4 = (undefined1)param_2;
    uVar5 = FUN_0042a7e0(0,0);
    puVar4[1] = uVar5;
    puVar4[2] = 0;
  }
  local_4 = 0xffffffff;
  pIVar6 = Universe::get_base(param_2);
  if (pIVar6 != (IBase *)0x0) {
    uVar5 = (**(code **)(*(int *)pIVar6 + 8))(puVar4);
    cVar3 = FUN_0057da40(uVar5);
    if (cVar3 != '\0') goto LAB_0046ba0d;
  }
  puVar1 = (undefined4 *)puVar4[1];
  local_3c = (undefined4 *)*puVar1;
  while (local_3c != puVar1) {
    puVar7 = (undefined4 *)FUN_0053ab20(local_30,0);
    FUN_0046d680(auStack_2c,*puVar7);
  }
  piVar8 = (int *)TextPtrNode::TextPtrNode(aTStack_18,(ushort *)L"????",-1);
  local_4 = 1;
  local_3c = (undefined4 *)(**(code **)(*piVar8 + 0x1c))();
  iVar2 = puVar4[1];
  local_4._0_1_ = 2;
  iVar9 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  FUN_0046ea00(iVar9 + 8,&local_3c);
  puVar4[2] = puVar4[2] + 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_3c != (undefined4 *)0x0) {
    (**(code **)*local_3c)(1);
    local_3c = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  TextPtrNode::~TextPtrNode(aTStack_18);
LAB_0046ba0d:
  auStack_28[0] = param_2;
  auStack_28[1] = 0;
  FUN_0046d6d0(auStack_28 + 2,auStack_28);
  *(undefined4 **)(auStack_28[2] + 0x10) = puVar4;
  ExceptionList = local_c;
  return puVar4;
}

