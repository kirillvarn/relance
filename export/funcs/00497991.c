
void __thiscall FUN_00497991(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  size_t sVar8;
  undefined4 *unaff_EBX;
  bool in_ZF;
  undefined3 uStack00000005;
  byte bStack00000010;
  int *in_stack_00000014;
  void *in_stack_0000001c;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  byte in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined1 *puVar9;
  
  puVar4 = in_stack_00000038;
  if ((!in_ZF) || (in_stack_00000030 != unaff_EBX)) {
    bStack00000010 = in_stack_00000034;
    in_stack_00000014 = (int *)FUN_0042a7e0(unaff_EBX,unaff_EBX);
    piVar6 = (int *)StyleNode::StyleNode((StyleNode *)&stack0x00000008,0xf64);
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    piVar6 = in_stack_00000014 + 1;
    iVar7 = FUN_0042a7e0(in_stack_00000014,in_stack_00000014[1]);
    *piVar6 = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&stack0x00000004);
    if (param_2 != unaff_EBX) {
      (**(code **)*param_2)(1);
      param_2 = unaff_EBX;
    }
    StyleNode::~StyleNode((StyleNode *)&stack0x00000008);
    if (in_stack_0000002c != unaff_EBX) {
      FUN_004347e0(DAT_0067eca8,in_stack_0000002c,&DAT_0066fc60,DAT_006119f8);
      (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
      wcscat(&DAT_0066fc60,L"\n\n");
      puVar9 = &stack0x00000010;
      sVar8 = wcslen(&DAT_0066fc60);
      FUN_0057e2c0(&DAT_0066fc60,sVar8,puVar9);
    }
    piVar6 = (int *)StyleNode::StyleNode((StyleNode *)&stack0x00000008,0x9ca4);
    in_stack_0000002c = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    piVar6 = in_stack_00000014 + 1;
    iVar7 = FUN_0042a7e0(in_stack_00000014,in_stack_00000014[1]);
    *piVar6 = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&stack0x0000002c);
    if (in_stack_0000002c != unaff_EBX) {
      (**(code **)*in_stack_0000002c)(1);
      in_stack_0000002c = unaff_EBX;
    }
    StyleNode::~StyleNode((StyleNode *)&stack0x00000008);
    DAT_0066fc60 = SUB42(unaff_EBX,0);
    if (in_stack_00000030 != unaff_EBX) {
      FUN_0057da40(in_stack_00000030,&stack0x00000010);
      cVar5 = FUN_00458890(in_stack_00000030,&stack0x0000002c);
      if (cVar5 != '\0') {
        if (in_stack_00000038 != unaff_EBX) {
          param_2 = (undefined4 *)CONCAT31(uStack00000005,(char)unaff_EBX);
          in_stack_00000030 = (undefined4 *)((uint)unaff_EBX & 0xff);
          in_stack_00000038 = (undefined4 *)((uint)unaff_EBX & 0xff);
          if (((in_stack_00000034 & 4) != 0) && ((undefined4 *)in_stack_0000002c[2] != unaff_EBX)) {
            param_2 = (undefined4 *)CONCAT31(uStack00000005,1);
          }
          if (((in_stack_00000034 & 8) != 0) && ((undefined4 *)in_stack_0000002c[1] != unaff_EBX)) {
            in_stack_00000038 = (undefined4 *)0x1;
          }
          if (((in_stack_00000034 & 0x10) != 0) && ((undefined4 *)in_stack_0000002c[3] != unaff_EBX)
             ) {
            in_stack_00000030 = (undefined4 *)0x1;
          }
          FUN_00476080(&stack0x00000010,puVar4,param_2,in_stack_00000038,in_stack_00000030);
        }
        if (((in_stack_00000034 & 2) != 0) && ((undefined4 *)*in_stack_0000002c != unaff_EBX)) {
          wcscpy(&DAT_0066fc60,L"<RDL><TEXT><PARA/></TEXT></RDL>");
          puVar9 = &stack0x00000010;
          sVar8 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar8,puVar9);
          FUN_0057da40(*in_stack_0000002c,&stack0x00000010);
        }
      }
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf38) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf3c) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf40) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    FUN_0057b370();
    FUN_0057b3e0(&stack0x00000010);
    FUN_005798b0(unaff_EBX,unaff_EBX);
    *(undefined4 *)(param_1 + 0xf44) = DAT_006720a0;
    FUN_004a0220(6);
    (**(code **)(**(int **)(param_1 + 0xaf8) + 0xa8))(1,1);
    (**(code **)(**(int **)(param_1 + 0xafc) + 0xa8))(1,1);
    (**(code **)(**(int **)(param_1 + 0xb00) + 0xa8))(1,1);
    (**(code **)(**(int **)(param_1 + 0xb04) + 0xa8))(1,1);
    FUN_0049f0e0();
    piVar3 = in_stack_00000014;
    piVar6 = (int *)*in_stack_00000014;
    while (piVar6 != piVar3) {
      piVar2 = (int *)*piVar6;
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_0046ea80(unaff_EBX);
      FUN_005b7e1d(piVar6);
      piVar6 = piVar2;
    }
    FUN_005b7e1d(in_stack_00000014);
  }
  ExceptionList = in_stack_0000001c;
  return;
}

