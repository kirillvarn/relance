
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562a60(undefined4 param_1,int *param_2,float param_3,void *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *extraout_ECX;
  void *in_stack_00002020;
  int in_stack_0000203c;
  float *in_stack_00002040;
  void *local_c;
  undefined1 *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = &LAB_005c1dd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  param_4 = (void *)in_stack_00002040[1];
  param_2 = (int *)in_stack_00002040[2];
  param_3 = *in_stack_00002040;
  local_8 = (undefined1 *)0x3c449ba6;
  local_4 = (int *)0x3c449ba6;
  local_c = param_4;
  uVar1 = FUN_00402180(&stack0x0000002c,"FilterCheck%d",DAT_006148c8);
  piVar2 = (int *)FUN_005a0fb0(uVar1,"Interface\\NeuroNet\\Inventory\\check.3db",
                               "Interface\\NeuroNet\\Inventory\\repairblackbox.3db",
                               "ui_shipview_select",0,&param_2,0,&local_8,0,0,0,0,
                               in_stack_00002040[7],in_stack_00002040[7]);
  *extraout_ECX = piVar2;
  (**(code **)(*piVar2 + 0xa8))(0x35,1,0);
  uVar1 = FUN_00402180(&stack0x00000020,"FilterLabel%d",DAT_006148c8);
  uVar1 = FUN_0059db20(uVar1,"RichTextWin",in_stack_0000203c,0);
  extraout_ECX[1] = uVar1;
  FUN_0042a7e0(0,0);
  local_c = (void *)0x0;
  FUN_0057da40(in_stack_00002040[6],&stack0xffffffec);
  FUN_0057b370();
  uVar1 = StyleNode::StyleNode((StyleNode *)&local_4,0x5724);
  FUN_0057b470(uVar1);
  StyleNode::~StyleNode((StyleNode *)&local_4);
  FUN_0057b3e0(&stack0xffffffec);
  FUN_0046ba90();
  FUN_00422b80(in_stack_00002040[3] + *(float *)(in_stack_0000203c + 0xa8),
               DAT_005e207c * _DAT_005c75e0 + *in_stack_00002040 +
               *(float *)(in_stack_0000203c + 0xac),
               in_stack_00002040[1] + *(float *)(in_stack_0000203c + 0xb0));
  FUN_00579c40(&stack0xffffffec);
  uVar1 = DAT_005e2084;
  if (*(char *)(in_stack_00002040 + 5) != '\0') {
    uVar1 = DAT_005e2080;
  }
  FUN_00579cc0(uVar1,DAT_005e207c);
  iVar3 = (**(code **)(*(int *)extraout_ECX[1] + 0xb8))();
  *(float *)(iVar3 + 4) = in_stack_00002040[7];
  FUN_00579890(1);
  FUN_00579a60(2);
  if (*(char *)(in_stack_00002040 + 5) == '\0') {
    extraout_ECX[2] = 0;
  }
  else {
    uVar1 = FUN_00402180(&stack0x00000020,"FilterData%d",DAT_006148c8);
    uVar1 = FUN_0059db20(uVar1,"RichTextEditWin",in_stack_0000203c,0);
    extraout_ECX[2] = uVar1;
    FUN_00422b80(in_stack_00002040[4] + *(float *)(in_stack_0000203c + 0xa8),
                 DAT_005e207c * _DAT_005c75e0 + *in_stack_00002040 +
                 *(float *)(in_stack_0000203c + 0xac),
                 in_stack_00002040[1] + *(float *)(in_stack_0000203c + 0xb0));
    FUN_00579c40(&stack0xffffffec);
    FUN_00579cc0(DAT_005e20a0,DAT_005e207c);
    FUN_0057bdd0(1);
    FUN_0057be30(0);
    piVar2 = (int *)StyleNode::StyleNode((StyleNode *)&local_4,0x9ca4);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
    FUN_0046c800(&param_2,*(undefined4 *)(extraout_ECX[2] + 0x500),&stack0xffffffe8);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    StyleNode::~StyleNode((StyleNode *)&local_4);
    piVar2 = (int *)JustifyNode::JustifyNode((JustifyNode *)&local_4,1);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
    iVar3 = extraout_ECX[2];
    iVar8 = *(int *)(iVar3 + 0x4e0);
    iVar5 = FUN_0042a7e0(iVar8,*(undefined4 *)(iVar8 + 4));
    *(int *)(iVar8 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    FUN_0046ea00(iVar5 + 8,&stack0xffffffe8);
    *(int *)(iVar3 + 0x4e4) = *(int *)(iVar3 + 0x4e4) + 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    JustifyNode::~JustifyNode((JustifyNode *)&local_4);
    piVar2 = (int *)TextNode::TextNode((TextNode *)&param_3,(ushort *)&DAT_005cef90,-1);
    piVar6 = (int *)(**(code **)(*piVar2 + 0x1c))();
    iVar3 = extraout_ECX[2];
    iVar8 = *(int *)(iVar3 + 0x4e0);
    piVar2 = *(int **)(iVar8 + 4);
    piVar7 = operator_new(0xc);
    *piVar7 = iVar8;
    if (piVar2 == (int *)0x0) {
      piVar2 = piVar7;
    }
    piVar7[1] = (int)piVar2;
    *(int **)(iVar8 + 4) = piVar7;
    piVar2 = piVar7 + 2;
    *(int **)piVar7[1] = piVar7;
    param_2 = piVar2;
    local_4 = piVar2;
    if (piVar2 != (int *)0x0) {
      iVar8 = (**(code **)(*piVar6 + 0x1c))();
      *piVar2 = iVar8;
    }
    *(int *)(iVar3 + 0x4e4) = *(int *)(iVar3 + 0x4e4) + 1;
    if (piVar6 != (int *)0x0) {
      (**(code **)*piVar6)(1);
    }
    TextNode::~TextNode((TextNode *)&param_3);
    FUN_0057bdb0(4);
    FUN_00579860(1);
    FUN_00579870(&DAT_00679bb4);
    FUN_00579a60(2);
  }
  DAT_006148c8 = DAT_006148c8 + 1;
  ExceptionList = in_stack_00002020;
  return;
}

