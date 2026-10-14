
void __thiscall FUN_00497970(int param_1,int *param_2,uint param_3,byte param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  size_t sVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined4 *puStack_24;
  StyleNode aSStack_20 [8];
  byte abStack_18 [4];
  int *piStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bca3b;
  pvStack_c = ExceptionList;
  if ((param_2 != (int *)0x0) || (param_3 != 0)) {
    abStack_18[0] = param_4;
    ExceptionList = &pvStack_c;
    piStack_14 = (int *)FUN_0042a7e0(0,0);
    iStack_10 = 0;
    iStack_4 = 0;
    piVar8 = (int *)StyleNode::StyleNode(aSStack_20,0xf64);
    iStack_4._0_1_ = 1;
    puStack_24 = (undefined4 *)(**(code **)(*piVar8 + 0x1c))();
    piVar8 = piStack_14 + 1;
    iStack_4._0_1_ = 2;
    iVar9 = FUN_0042a7e0(piStack_14,piStack_14[1]);
    *piVar8 = iVar9;
    **(int **)(iVar9 + 4) = iVar9;
    FUN_0046ea00(iVar9 + 8,&puStack_24);
    iStack_10 = iStack_10 + 1;
    iStack_4._0_1_ = 1;
    if (puStack_24 != (undefined4 *)0x0) {
      (**(code **)*puStack_24)(1);
      puStack_24 = (undefined4 *)0x0;
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    StyleNode::~StyleNode(aSStack_20);
    if (param_2 != (int *)0x0) {
      FUN_004347e0(DAT_0067eca8,param_2,&DAT_0066fc60,DAT_006119f8);
      (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
      wcscat(&DAT_0066fc60,L"\n\n");
      uVar12 = 0;
      pbVar11 = abStack_18;
      sVar10 = wcslen(&DAT_0066fc60);
      FUN_0057e2c0(&DAT_0066fc60,sVar10,pbVar11,uVar12);
    }
    piVar8 = (int *)StyleNode::StyleNode(aSStack_20,0x9ca4);
    iStack_4._0_1_ = 3;
    param_2 = (int *)(**(code **)(*piVar8 + 0x1c))();
    piVar8 = piStack_14 + 1;
    iStack_4._0_1_ = 4;
    iVar9 = FUN_0042a7e0(piStack_14,piStack_14[1]);
    *piVar8 = iVar9;
    **(int **)(iVar9 + 4) = iVar9;
    FUN_0046ea00(iVar9 + 8,&param_2);
    iStack_10 = iStack_10 + 1;
    iStack_4._0_1_ = 3;
    if (param_2 != (int *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (int *)0x0;
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    StyleNode::~StyleNode(aSStack_20);
    uVar5 = param_3;
    DAT_0066fc60 = 0;
    if (param_3 != 0) {
      FUN_0057da40(param_3,abStack_18);
      cVar7 = FUN_00458890(uVar5,&param_2);
      uVar5 = param_5;
      if (cVar7 != '\0') {
        if (param_5 != 0) {
          uVar2 = (uint)puStack_24 >> 8;
          puStack_24 = (undefined4 *)((uint)puStack_24 & 0xffffff00);
          uVar4 = param_3 >> 8;
          param_3 = param_3 & 0xffffff00;
          uVar3 = param_5 >> 8;
          param_5 = param_5 & 0xffffff00;
          if (((param_4 & 4) != 0) && (param_2[2] != 0)) {
            puStack_24 = (undefined4 *)CONCAT31((int3)uVar2,1);
          }
          if (((param_4 & 8) != 0) && (param_2[1] != 0)) {
            param_5 = CONCAT31((int3)uVar3,1);
          }
          if (((param_4 & 0x10) != 0) && (param_2[3] != 0)) {
            param_3 = CONCAT31((int3)uVar4,1);
          }
          FUN_00476080(abStack_18,uVar5,puStack_24,param_5,param_3);
        }
        if (((param_4 & 2) != 0) && (*param_2 != 0)) {
          wcscpy(&DAT_0066fc60,L"<RDL><TEXT><PARA/></TEXT></RDL>");
          uVar12 = 0;
          pbVar11 = abStack_18;
          sVar10 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar10,pbVar11,uVar12);
          FUN_0057da40(*param_2,abStack_18);
        }
      }
    }
    pbVar11 = (byte *)(*(int *)(param_1 + 0xf38) + 0x6c);
    *pbVar11 = *pbVar11 | 3;
    pbVar11 = (byte *)(*(int *)(param_1 + 0xf3c) + 0x6c);
    *pbVar11 = *pbVar11 | 3;
    pbVar11 = (byte *)(*(int *)(param_1 + 0xf40) + 0x6c);
    *pbVar11 = *pbVar11 | 3;
    FUN_0057b370();
    FUN_0057b3e0(abStack_18);
    FUN_005798b0(0,0);
    *(undefined4 *)(param_1 + 0xf44) = DAT_006720a0;
    FUN_004a0220(6);
    (**(code **)(**(int **)(param_1 + 0xaf8) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xafc) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xb00) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xb04) + 0xa8))(1,1,0);
    FUN_0049f0e0();
    piVar6 = piStack_14;
    iStack_4 = 0xffffffff;
    piVar8 = (int *)*piStack_14;
    while (piVar8 != piVar6) {
      piVar1 = (int *)*piVar8;
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      FUN_0046ea80(0);
      FUN_005b7e1d(piVar8);
      iStack_10 = iStack_10 + -1;
      piVar8 = piVar1;
    }
    FUN_005b7e1d(piStack_14);
  }
  ExceptionList = pvStack_c;
  return;
}

