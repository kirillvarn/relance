
undefined1 __thiscall FUN_00599f60(int *param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  TextNode local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4be2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0057b5a0(param_2,0);
  *(undefined1 *)(param_1 + 0x126) = 1;
  param_1[0x130] = DAT_0067dbac;
  if (param_3 != (int *)0x0) {
    iVar6 = *param_3;
    param_1[0x127] = iVar6;
    param_1[0xcc] = iVar6;
    iVar6 = param_3[1];
    param_1[0x128] = iVar6;
    param_1[0xcd] = iVar6;
    if (param_3[4] == 0) {
      piVar3 = (int *)TextNode::TextNode(local_20,(ushort *)param_3[2],-1);
      local_4 = 0;
      piVar4 = (int *)(**(code **)(*piVar3 + 0x1c))();
      iVar6 = param_1[0x12e];
      piVar3 = *(int **)(iVar6 + 4);
      local_4._0_1_ = 1;
      piVar5 = operator_new(0xc);
      *piVar5 = iVar6;
      if (piVar3 == (int *)0x0) {
        piVar3 = piVar5;
      }
      piVar5[1] = (int)piVar3;
      *(int **)(iVar6 + 4) = piVar5;
      *(int **)piVar5[1] = piVar5;
      local_4._0_1_ = 2;
      if (piVar5 + 2 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar4 + 0x1c))();
        piVar5[2] = iVar6;
      }
      param_1[0x12f] = param_1[0x12f] + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      if (piVar4 != (int *)0x0) {
        (**(code **)*piVar4)(1);
      }
      local_4 = 0xffffffff;
      TextNode::~TextNode(local_20);
    }
    else {
      FUN_0057da40(param_3[4],param_1 + 0x12d);
    }
    param_1[0x129] = param_3[3];
  }
  FUN_00579a60(2);
  pcVar1 = (char *)param_3[5];
  if (pcVar1 != (char *)0x0) {
    iVar6 = 7;
    bVar9 = true;
    pcVar7 = pcVar1;
    pcVar8 = "<none>";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      bVar9 = true;
      iVar6 = 10;
      pcVar7 = pcVar1;
      pcVar8 = "<default>";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\Inventory\\FRONT_button.cmp");
      }
      else {
        (**(code **)(*param_1 + 0x98))(pcVar1,0);
      }
      *(undefined1 *)((int)param_1 + 0x2d2) = 1;
    }
  }
  FUN_0059a110();
  ExceptionList = pvStack_c;
  return uVar2;
}

