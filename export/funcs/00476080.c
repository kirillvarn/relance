
void FUN_00476080(GoodInfo *param_1,Equipment *param_2,int *param_3,int *param_4,
                 GoodInfoList *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  BaseDataList *this;
  BaseData *pBVar6;
  size_t sVar7;
  GoodInfo *pGVar8;
  Ship *pSVar9;
  Equipment *pEVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  float10 fVar17;
  undefined4 uVar18;
  float fStack_48;
  StyleNode aSStack_44 [4];
  StyleNode local_40 [8];
  GoodInfoList aGStack_38 [4];
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  void *local_c;
  undefined1 *puStack_8;
  GoodInfo *local_4;
  
  pcVar16 = StyleNode_exref;
  local_4 = (GoodInfo *)0xffffffff;
  puStack_8 = &LAB_005bbd61;
  local_c = ExceptionList;
  cVar4 = (char)param_5;
  if (((param_3._0_1_ == (GoodInfoList)0x0) && ((char)param_4 == '\0')) && ((char)param_5 == '\0'))
  {
    return;
  }
  ExceptionList = &local_c;
  piVar5 = (int *)StyleNode::StyleNode(local_40,0x9ca4);
  local_4 = (GoodInfo *)0x0;
  param_5 = (GoodInfoList *)(**(code **)(*piVar5 + 0x1c))();
  iVar3 = (int)param_1;
  local_4._0_1_ = 1;
  FUN_0046c800(&param_1,*(undefined4 *)((int)param_1 + 4),&param_5);
  local_4 = (GoodInfo *)((uint)local_4._1_3_ << 8);
  if (param_5 != (GoodInfoList *)0x0) {
    (*(code *)**(undefined4 **)param_5)(1);
    param_5 = (GoodInfoList *)0x0;
  }
  local_4 = (GoodInfo *)0xffffffff;
  StyleNode::~StyleNode(local_40);
  pEVar10 = param_2;
  this = BaseDataList_get();
  pBVar6 = BaseDataList::get_base_data(this,(uint)pEVar10);
  FUN_0042abc0();
  param_5 = *(GoodInfoList **)(pBVar6 + 8);
  local_4 = (GoodInfo *)0x2;
  FUN_00437de0(param_5,pBVar6);
  param_1 = (GoodInfo *)0x0;
  if (cVar4 != '\0') {
    piVar5 = (int *)StyleNode::StyleNode(local_40,0xf64);
    local_4._0_1_ = 3;
    param_5 = (GoodInfoList *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 4;
    FUN_0046c800(&param_2,*(undefined4 *)(iVar3 + 4),&param_5);
    local_4._0_1_ = 3;
    if (param_5 != (GoodInfoList *)0x0) {
      (*(code *)**(undefined4 **)param_5)(1);
      param_5 = (GoodInfoList *)0x0;
    }
    local_4._0_1_ = 2;
    StyleNode::~StyleNode(local_40);
    wcscpy(&DAT_0066fc60,L"\n");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    FUN_0057da40(0x669,iVar3);
    wcscpy(&DAT_0066fc60,L"\n    ");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    piVar5 = (int *)StyleNode::StyleNode(local_40,0x9ca4);
    local_4._0_1_ = 5;
    param_5 = (GoodInfoList *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 6;
    FUN_0046c800(&param_2,*(undefined4 *)(iVar3 + 4),&param_5);
    local_4._0_1_ = 5;
    if (param_5 != (GoodInfoList *)0x0) {
      (*(code *)**(undefined4 **)param_5)(1);
      param_5 = (GoodInfoList *)0x0;
    }
    local_4._0_1_ = 2;
    StyleNode::~StyleNode(local_40);
    aGStack_38[0] = param_3._0_1_;
    piStack_34 = (int *)FUN_0042a7e0(0,0);
    piStack_30 = (int *)0x0;
    local_4 = (GoodInfo *)CONCAT31(local_4._1_3_,7);
    FUN_00437f70(aGStack_38,3);
    piVar5 = (int *)*piStack_34;
    if (piVar5 == piStack_34) {
LAB_00476340:
      FUN_0057da40(0x67b,iVar3);
    }
    else {
      do {
        pGVar8 = GoodList::find_by_id(*(uint *)piVar5[2]);
        pGVar8 = GoodList::find_by_id(*(uint *)(pGVar8 + 0x90));
        pSVar9 = Archetype::GetShip(*(uint *)(pGVar8 + 0x54));
        FUN_0057da40(*(undefined4 *)(pSVar9 + 0x14),iVar3);
        wcscpy(&DAT_0066fc60,L"\n     ");
        uVar18 = 0;
        iVar13 = iVar3;
        sVar7 = wcslen(&DAT_0066fc60);
        FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
        piVar5 = (int *)*piVar5;
        param_1 = param_1 + 1;
      } while (piVar5 != piStack_34);
      if (param_1 == (GoodInfo *)0x0) goto LAB_00476340;
    }
    local_4 = (GoodInfo *)CONCAT31(local_4._1_3_,2);
    FUN_004a2f80(&param_5,*piStack_34,piStack_34);
    FUN_005b7e1d(piStack_34);
    pcVar16 = StyleNode_exref;
  }
  if (param_3._0_1_ != (GoodInfoList)0x0) {
    piVar5 = (int *)(*pcVar16)(0xf64);
    puStack_8._0_1_ = 8;
    param_2 = (Equipment *)(**(code **)(*piVar5 + 0x1c))();
    puStack_8._0_1_ = 9;
    FUN_0046c800(&param_4,*(undefined4 *)(iVar3 + 4),&param_2);
    puStack_8._0_1_ = 8;
    if (param_2 != (Equipment *)0x0) {
      (*(code *)**(undefined4 **)param_2)(1);
      param_2 = (Equipment *)0x0;
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    StyleNode::~StyleNode(aSStack_44);
    wcscpy(&DAT_0066fc60,L"\n");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    FUN_0057da40(0x668,iVar3);
    wcscpy(&DAT_0066fc60,L"\n    ");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    piVar5 = (int *)(*pcVar16)(0x9ca4);
    local_c._0_1_ = 10;
    param_1 = (GoodInfo *)(**(code **)(*piVar5 + 0x1c))();
    local_c._0_1_ = 0xb;
    FUN_0046c800(&param_3,*(undefined4 *)(iVar3 + 4),&param_1);
    local_c._0_1_ = 10;
    if (param_1 != (GoodInfo *)0x0) {
      (*(code *)**(undefined4 **)param_1)(1);
      param_1 = (GoodInfo *)0x0;
    }
    local_c._0_1_ = 2;
    StyleNode::~StyleNode((StyleNode *)&fStack_48);
    piStack_34 = (int *)CONCAT31(piStack_34._1_3_,param_1._0_1_);
    piStack_30 = operator_new(0xc);
    *piStack_30 = (int)piStack_30;
    piStack_30[1] = (int)piStack_30;
    uStack_2c = 0;
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    FUN_00437f70(&piStack_34,0);
    FUN_00475dd0(&piStack_34);
    param_3 = (int *)*piStack_30;
    param_1 = (GoodInfo *)0x0;
    if (param_3 == piStack_30) {
LAB_004765e6:
      FUN_0057da40(0x67b,iVar3);
    }
    else {
      do {
        if (0 < (int)((uint *)param_3[2])[7]) {
          local_4 = (GoodInfo *)Good2Arch(*(uint *)param_3[2]);
          pEVar10 = Archetype::GetEquipment((uint)local_4);
          local_4 = GoodList::find_by_archetype((uint)local_4);
          fVar17 = (float10)FUN_00438060(*(undefined4 *)(local_4 + 0x48));
          if (fVar17 < (float10)*(float *)(local_4 + 0x5c) !=
              (fVar17 == (float10)*(float *)(local_4 + 0x5c))) {
            FUN_0057da40(*(undefined4 *)(pEVar10 + 0x14),iVar3);
            uVar18 = ftol(0xffffffff);
            FUN_004779a0(&DAT_0066dc60,uVar18);
            wcscpy(&DAT_0066fc60,L" ");
            wcscat(&DAT_0066fc60,&DAT_0066dc60);
            wcscat(&DAT_0066fc60,L"\n     ");
            uVar18 = 0;
            iVar13 = iVar3;
            sVar7 = wcslen(&DAT_0066fc60);
            FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
            param_1 = (GoodInfo *)((int)param_1 + 1);
          }
        }
        param_3 = (int *)*param_3;
      } while (param_3 != piStack_30);
      if (param_1 == (GoodInfo *)0x0) goto LAB_004765e6;
    }
    piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&fStack_48,0xf64);
    local_c._0_1_ = 0xd;
    param_1 = (GoodInfo *)(**(code **)(*piVar5 + 0x1c))();
    local_c._0_1_ = 0xe;
    FUN_0046c800(&param_3,*(undefined4 *)(iVar3 + 4),&param_1);
    local_c._0_1_ = 0xd;
    if (param_1 != (GoodInfo *)0x0) {
      (*(code *)**(undefined4 **)param_1)(1);
      param_1 = (GoodInfo *)0x0;
    }
    local_c._0_1_ = 0xc;
    StyleNode::~StyleNode((StyleNode *)&fStack_48);
    wcscpy(&DAT_0066fc60,L"\n");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    FUN_0057da40(0x667,iVar3);
    wcscpy(&DAT_0066fc60,L"\n    ");
    uVar18 = 0;
    iVar13 = iVar3;
    sVar7 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
    piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&fStack_48,0x9ca4);
    local_c = (void *)CONCAT31(local_c._1_3_,0xf);
    param_3 = (int *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0x10;
    FUN_0046c800(&param_5,*(undefined4 *)(iVar3 + 4),&param_3);
    local_4._0_1_ = 0xf;
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)(1);
      param_3 = (undefined4 *)0x0;
    }
    local_4._0_1_ = 0xc;
    StyleNode::~StyleNode(local_40);
    param_3 = (int *)0x0;
    param_5 = GoodList_get();
    aGStack_38[0] = *param_5;
    piStack_34 = operator_new(0xc);
    *piStack_34 = (int)piStack_34;
    piStack_34[1] = (int)piStack_34;
    piStack_30 = (int *)0x0;
    param_5 = *(GoodInfoList **)(param_5 + 4);
    param_1 = *(GoodInfo **)param_5;
    puVar11 = (undefined4 *)FUN_0053e430(local_40);
    FUN_0041d630(*puVar11,param_1,param_5);
    param_5 = (GoodInfoList *)*piStack_34;
    local_4 = (GoodInfo *)CONCAT31(local_4._1_3_,0x11);
    piVar5 = piStack_34;
    if (param_5 == (GoodInfoList *)piStack_34) {
LAB_00476877:
      FUN_0057da40(0x67b,iVar3);
      piVar5 = piStack_34;
    }
    else {
      do {
        param_1 = *(GoodInfo **)((int)param_5 + 8);
        if (*(uint *)(param_1 + 0x50) != 0) {
          param_2 = Archetype::GetEquipment(*(uint *)(param_1 + 0x50));
          param_1 = GoodList::find_by_archetype(*(uint *)(param_1 + 0x50));
          fVar17 = (float10)FUN_00438060(*(undefined4 *)(param_1 + 0x48));
          fStack_48 = (float)fVar17;
          piVar5 = piStack_34;
          if ((float10)*(float *)(param_1 + 100) <= fVar17) {
            FUN_0057da40(*(undefined4 *)(param_2 + 0x14),iVar3);
            uVar18 = ftol(0xffffffff);
            FUN_004779a0(&DAT_0066dc60,uVar18);
            wcscpy(&DAT_0066fc60,L" ");
            wcscat(&DAT_0066fc60,&DAT_0066dc60);
            wcscat(&DAT_0066fc60,L"\n     ");
            uVar18 = 0;
            iVar13 = iVar3;
            sVar7 = wcslen(&DAT_0066fc60);
            FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
            param_3 = (int *)((int)param_3 + 1);
            piVar5 = piStack_34;
          }
        }
        param_5 = *(GoodInfoList **)param_5;
      } while (param_5 != (GoodInfoList *)piVar5);
      if (param_3 == (int *)0x0) goto LAB_00476877;
    }
    param_3 = (int *)*piVar5;
    local_4._0_1_ = 0xc;
    piVar2 = piVar5;
    while (param_3 != piVar5) {
      puVar11 = (undefined4 *)FUN_0053ab20(&param_5,0);
      FUN_00516f70(&param_1,*puVar11);
      piVar2 = piStack_34;
    }
    FUN_005b7e1d(piVar2);
    puVar11 = puStack_28;
    piStack_34 = (int *)0x0;
    piStack_30 = (int *)0x0;
    param_3 = (int *)*puStack_28;
    local_4 = (GoodInfo *)CONCAT31(local_4._1_3_,2);
    while (param_3 != puVar11) {
      puVar12 = (undefined4 *)FUN_0053ab20(&param_5,0);
      FUN_00516f70(&param_1,*puVar12);
    }
    FUN_005b7e1d(puStack_28);
    pcVar16 = StyleNode_exref;
  }
  if ((char)param_4 == '\0') goto LAB_00476bc4;
  piVar5 = (int *)(*pcVar16)(0xf64);
  puStack_8._0_1_ = 0x12;
  param_2 = (Equipment *)(**(code **)(*piVar5 + 0x1c))();
  param_3 = *(int **)(iVar3 + 4);
  puStack_8._0_1_ = 0x13;
  iVar13 = FUN_0042a7e0(param_3,*(undefined4 *)((int)param_3 + 4));
  *(int *)((int)param_3 + 4) = iVar13;
  **(int **)(iVar13 + 4) = iVar13;
  FUN_0046ea00(iVar13 + 8,&param_2);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  puStack_8._0_1_ = 0x12;
  if (param_2 != (Equipment *)0x0) {
    (*(code *)**(undefined4 **)param_2)(1);
    param_2 = (Equipment *)0x0;
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  StyleNode::~StyleNode(aSStack_44);
  wcscpy(&DAT_0066fc60,L"\n");
  uVar18 = 0;
  iVar13 = iVar3;
  sVar7 = wcslen(&DAT_0066fc60);
  FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
  FUN_0057da40(0x66a,iVar3);
  wcscpy(&DAT_0066fc60,L"\n    ");
  uVar18 = 0;
  iVar13 = iVar3;
  sVar7 = wcslen(&DAT_0066fc60);
  FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
  piVar5 = (int *)(*pcVar16)(0x9ca4);
  local_c = (void *)CONCAT31(local_c._1_3_,0x14);
  param_3 = (int *)(**(code **)(*piVar5 + 0x1c))();
  iVar13 = *(int *)(iVar3 + 4);
  local_4._0_1_ = 0x15;
  iVar14 = FUN_0042a7e0(iVar13,*(undefined4 *)(iVar13 + 4));
  *(int *)(iVar13 + 4) = iVar14;
  **(int **)(iVar14 + 4) = iVar14;
  FUN_0046ea00(iVar14 + 8,&param_3);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  local_4._0_1_ = 0x14;
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
    param_3 = (undefined4 *)0x0;
  }
  local_4._0_1_ = 2;
  StyleNode::~StyleNode((StyleNode *)&fStack_48);
  param_5 = (GoodInfoList *)0x0;
  aGStack_38[0] = param_3._0_1_;
  piStack_34 = operator_new(0xc);
  *piStack_34 = (int)piStack_34;
  piStack_34[1] = (int)piStack_34;
  piStack_30 = (int *)0x0;
  local_4 = (GoodInfo *)CONCAT31(local_4._1_3_,0x16);
  FUN_00437f70(aGStack_38,1);
  FUN_00475dd0(aGStack_38);
  param_4 = (int *)*piStack_34;
  piVar5 = piStack_34;
  if (param_4 == piStack_34) {
LAB_00476b6a:
    FUN_0057da40(0x67b,iVar3);
    piVar5 = piStack_34;
  }
  else {
    do {
      if (0 < (int)((uint *)param_4[2])[7]) {
        uVar15 = Good2Arch(*(uint *)param_4[2]);
        pEVar10 = Archetype::GetEquipment(uVar15);
        iVar13 = (**(code **)(*(int *)pEVar10 + 0x18))();
        piVar5 = piStack_34;
        if (iVar13 != 3) {
          FUN_0057da40(*(undefined4 *)(pEVar10 + 0x14),iVar3);
          wcscpy(&DAT_0066fc60,L"\n     ");
          uVar18 = 0;
          iVar13 = iVar3;
          sVar7 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar7,iVar13,uVar18);
          param_5 = (GoodInfoList *)((int)param_5 + 1);
          piVar5 = piStack_34;
        }
      }
      param_4 = (int *)*param_4;
    } while (param_4 != piVar5);
    if (param_5 == (GoodInfoList *)0x0) goto LAB_00476b6a;
  }
  piVar2 = (int *)*piVar5;
  piVar1 = piVar5;
  while (piVar2 != piVar5) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2);
    piStack_30 = (int *)((int)piStack_30 + -1);
    piVar2 = piVar1;
    piVar1 = piStack_34;
  }
  FUN_005b7e1d(piVar1);
  piStack_34 = (int *)0x0;
  piStack_30 = (int *)0x0;
LAB_00476bc4:
  local_4 = (GoodInfo *)0xffffffff;
  FUN_00437b70();
  ExceptionList = local_c;
  return;
}

