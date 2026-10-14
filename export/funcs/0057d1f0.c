
void __thiscall FUN_0057d1f0(int param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  TextNode local_28 [20];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c3f12;
  local_10 = ExceptionList;
  puVar1 = (undefined2 *)&stack0xffffffcc;
  if (0 < (int)param_3) {
    ExceptionList = &local_10;
    FUN_005b7e90();
    if (*(char *)(param_1 + 0x508) == '\0') {
      if (0 < (int)param_3) {
        param_2 = param_2 * 0xc;
        puVar1 = (undefined2 *)&stack0xffffffcc;
        do {
          *puVar1 = *(undefined2 *)(param_2 + *(int *)(param_1 + 0x4c8));
          puVar1 = puVar1 + 1;
          param_2 = param_2 + 0xc;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
    else {
      puVar1 = (undefined2 *)&stack0xffffffcc;
      if (0 < (int)param_3) {
        puVar7 = (undefined4 *)&stack0xffffffcc;
        for (uVar6 = param_3 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = 0x2a002a;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = (uint)((param_3 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined2 *)puVar7 = 0x2a;
          puVar7 = (undefined4 *)((int)puVar7 + 2);
        }
        puVar1 = (undefined2 *)(&stack0xffffffcc + param_3 * 2);
      }
    }
    *puVar1 = 0;
    piVar2 = (int *)TextNode::TextNode(local_28,(ushort *)&stack0xffffffcc,-1);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(*piVar2 + 0x1c))();
    iVar5 = *(int *)(param_1 + 0x4ec);
    piVar2 = *(int **)(iVar5 + 4);
    local_8._0_1_ = 1;
    piVar4 = operator_new(0xc);
    *piVar4 = iVar5;
    if (piVar2 == (int *)0x0) {
      piVar2 = piVar4;
    }
    piVar4[1] = (int)piVar2;
    *(int **)(iVar5 + 4) = piVar4;
    piVar2 = piVar4 + 2;
    *(int **)piVar4[1] = piVar4;
    local_8._0_1_ = 2;
    local_14 = piVar2;
    if (piVar2 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar3 + 0x1c))();
      *piVar2 = iVar5;
    }
    *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + 1;
    local_8 = (uint)local_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
    local_8 = 0xffffffff;
    TextNode::~TextNode(local_28);
  }
  ExceptionList = local_10;
  return;
}

