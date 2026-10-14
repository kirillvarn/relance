
void __thiscall FUN_00473770(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  StyleNode local_20 [8];
  undefined1 local_18 [4];
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbb1a;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x340) != 0) && (param_2 != 0)) {
    local_18[0] = (undefined1)param_2;
    ExceptionList = &local_c;
    local_14 = operator_new(0xc);
    *local_14 = local_14;
    local_14[1] = local_14;
    local_10 = 0;
    local_4 = 0;
    piVar4 = (int *)StyleNode::StyleNode(local_20,(ushort)param_3);
    local_4._0_1_ = 1;
    param_3 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
    puVar2 = local_14;
    puVar6 = (undefined4 *)local_14[1];
    puVar1 = local_14 + 1;
    local_4._0_1_ = 2;
    puVar5 = operator_new(0xc);
    *puVar5 = puVar2;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = puVar5;
    }
    puVar5[1] = puVar6;
    *puVar1 = puVar5;
    *(undefined4 **)puVar5[1] = puVar5;
    FUN_0046ea00(puVar5 + 2,&param_3);
    local_10 = local_10 + 1;
    local_4._0_1_ = 1;
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)(1);
      param_3 = (undefined4 *)0x0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StyleNode::~StyleNode(local_20);
    cVar3 = FUN_0057da40(param_2,local_18);
    if (cVar3 != '\0') {
      FUN_0057b370();
      FUN_0057b3e0(local_18);
    }
    puVar6 = local_14;
    local_4 = 0xffffffff;
    puVar1 = (undefined4 *)*local_14;
    while (puVar1 != puVar6) {
      puVar2 = (undefined4 *)*puVar1;
      FUN_0046d680(&param_2,puVar1);
      puVar1 = puVar2;
    }
    FUN_005b7e1d(local_14);
  }
  ExceptionList = local_c;
  return;
}

