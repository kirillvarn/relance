
void __thiscall FUN_0047ba90(int param_1,undefined4 *param_2,int *param_3)

{
  byte *pbVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  Ship *pSVar5;
  undefined4 *puVar6;
  GoodInfo *pGVar7;
  int iVar8;
  Equipment *pEVar9;
  undefined4 uVar10;
  Equipment *pEVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined4 *local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  Equipment *local_54;
  Equipment *local_50 [2];
  undefined1 auStack_48 [4];
  int *piStack_44;
  int iStack_40;
  undefined1 local_3c [4];
  int *piStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  int iStack_1c;
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar6 = param_2;
  pvVar3 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbf78;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x91c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x91c) + 0x6c) & 2) != 0))
  {
    return;
  }
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0x4bc) == 0) && (ExceptionList = &local_c, *(int *)(param_1 + 0x360) != 0)
     ) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4bc);
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar8 = *(int *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(undefined1 *)(param_1 + 0x4e1) = 0;
    if (param_3 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x4ec) = 0;
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0x4e8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
      }
      if (*(char *)(param_1 + 0x35c) == '\0') {
        ExceptionList = pvVar3;
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4ec) = 0;
      ExceptionList = pvVar3;
      return;
    }
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
    }
    if (*(char *)(param_1 + 0x35c) != '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4ec) = 0;
    }
    if ((int *)*(uint *)(param_1 + 0x4ec) == param_3) {
      ExceptionList = pvVar3;
      return;
    }
    *(int **)(param_1 + 0x4ec) = param_3;
    local_18[0] = 0;
    local_14 = (int *)FUN_0042a7e0(0,0);
    local_10 = 0;
    local_4 = 0;
    piVar4 = (int *)StyleNode::StyleNode((StyleNode *)local_50,0x9ca4);
    local_4._0_1_ = 1;
    param_2 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
    local_4._0_1_ = 2;
    FUN_0046c800(&param_3,local_14,&param_2);
    local_4._0_1_ = 1;
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StyleNode::~StyleNode((StyleNode *)local_50);
    FUN_0057da40(*(undefined4 *)(param_1 + 0x4ec),local_18);
    iVar8 = *(int *)(param_1 + 0x398);
    if (iVar8 == 0) {
      if (*(int **)(param_1 + 0x944) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x944) + 0xa8))(0x1e,0x388,0);
      }
    }
    else {
      *(byte *)(iVar8 + 0x6c) = *(byte *)(iVar8 + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x39c) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x3a0) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4bc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
    }
    FUN_005798b0(0,0);
    FUN_0057b370();
    FUN_0057b3e0(local_18);
    local_4 = 0xffffffff;
    FUN_0046ba90();
    ExceptionList = local_c;
    return;
  }
  if (*(undefined4 **)(param_1 + 0x4e8) == param_2) {
    ExceptionList = pvVar3;
    return;
  }
  *(undefined4 **)(param_1 + 0x4e8) = param_2;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  if (*(int *)(param_1 + 0x360) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
  }
  if (*(char *)(param_1 + 0x35c) != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4e8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x4ec) = 0;
  }
  local_64 = (undefined4 *)0x0;
  local_60 = 0;
  local_54 = (Equipment *)0x0;
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    local_50[0] = Archetype::GetEquipment((uint)param_2);
    pGVar7 = GoodList::find_by_archetype((uint)puVar6);
    if (pGVar7 == (GoodInfo *)0x0) {
      if (local_50[0] != (Equipment *)0x0) {
        local_64 = *(undefined4 **)(local_50[0] + 0x14);
        local_60 = *(int *)(local_50[0] + 0x18);
      }
    }
    else {
      local_60 = 0;
      param_3 = (int *)0x0;
      iVar8 = FUN_005835f0(puVar6,&local_60,&param_3);
      local_64 = *(undefined4 **)(pGVar7 + 0x88);
      local_60 = *(int *)(pGVar7 + 0x8c);
      param_3 = (int *)CONCAT31(param_3._1_3_,'\x01' - (iVar8 != 1));
    }
  }
  else {
    pSVar5 = Archetype::GetShip((uint)param_2);
    if (pSVar5 != (Ship *)0x0) {
      local_60 = *(int *)(pSVar5 + 0xec);
      local_64 = *(undefined4 **)(pSVar5 + 0x14);
      local_54 = *(Equipment **)(pSVar5 + 0x18);
      if (((*(char *)(param_1 + 0x35c) != '\0') || (*(int *)(param_1 + 0x360) != 0)) &&
         (*(int *)(param_1 + 0x398) != 0)) {
        local_18[0] = param_2._0_1_;
        local_14 = (int *)FUN_0042a7e0(0,0);
        local_10 = 0;
        local_4 = 3;
        piVar4 = (int *)StyleNode::StyleNode((StyleNode *)local_50,0x9ca4);
        local_4._0_1_ = 4;
        param_2 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
        local_4._0_1_ = 5;
        FUN_0046c800(&param_3,local_14,&param_2);
        local_4._0_1_ = 4;
        if (param_2 != (undefined4 *)0x0) {
          (**(code **)*param_2)(1);
          param_2 = (undefined4 *)0x0;
        }
        local_4._0_1_ = 3;
        StyleNode::~StyleNode((StyleNode *)local_50);
        FUN_0057da40(*(undefined4 *)(pSVar5 + 0xec),local_18);
        pbVar1 = (byte *)(*(int *)(param_1 + 0x398) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
        pbVar1 = (byte *)(*(int *)(param_1 + 0x39c) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
        pbVar1 = (byte *)(*(int *)(param_1 + 0x3a0) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
        *(byte *)(*(int *)(param_1 + 0x4bc) + 0x6c) =
             *(byte *)(*(int *)(param_1 + 0x4bc) + 0x6c) & 0xfc;
        FUN_005798b0(0,0);
        FUN_0057b370();
        FUN_0057b3e0(local_18);
        auStack_30[0] = param_2._0_1_;
        uStack_2c = FUN_0042a7e0(0,0);
        uStack_28 = 0;
        local_4._0_1_ = 6;
        piVar4 = (int *)StyleNode::StyleNode((StyleNode *)local_50,0x9ca4);
        local_4._0_1_ = 7;
        param_2 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
        local_4._0_1_ = 8;
        FUN_0046c800(&param_3,uStack_2c,&param_2);
        local_4._0_1_ = 7;
        if (param_2 != (undefined4 *)0x0) {
          (**(code **)*param_2)(1);
          param_2 = (undefined4 *)0x0;
        }
        local_4._0_1_ = 6;
        StyleNode::~StyleNode((StyleNode *)local_50);
        FUN_0057da40(*(undefined4 *)(pSVar5 + 0xf0),auStack_30);
        FUN_005798b0(0,0);
        FUN_0057b370();
        FUN_0057b3e0(auStack_30);
        local_60 = CONCAT31(local_60._1_3_,param_2._0_1_);
        uStack_5c = FUN_0042a7e0(0,0);
        uStack_58 = 0;
        local_4._0_1_ = 9;
        piVar4 = (int *)StyleNode::StyleNode((StyleNode *)local_50,0x9ca4);
        local_4._0_1_ = 10;
        param_2 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
        local_4._0_1_ = 0xb;
        FUN_0046c800(&param_3,uStack_5c,&param_2);
        local_4._0_1_ = 10;
        if (param_2 != (undefined4 *)0x0) {
          (**(code **)*param_2)(1);
          param_2 = (undefined4 *)0x0;
        }
        local_4._0_1_ = 9;
        StyleNode::~StyleNode((StyleNode *)local_50);
        FUN_0057da40(*(undefined4 *)(pSVar5 + 0xf4),&local_60);
        FUN_005798b0(0,0);
        FUN_0057b370();
        FUN_0057b3e0(&local_60);
        local_4._0_1_ = 6;
        puVar6 = (undefined4 *)FUN_0053e430(&param_2);
        FUN_0046c860(&param_3,*puVar6,uStack_5c);
        FUN_005b7e1d(uStack_5c);
        uStack_5c = 0;
        uStack_58 = 0;
        local_4 = CONCAT31(local_4._1_3_,3);
        puVar6 = (undefined4 *)FUN_0053e430(&param_2);
        FUN_0046c860(&param_3,*puVar6,uStack_2c);
        FUN_005b7e1d(uStack_2c);
        uStack_2c = 0;
        uStack_28 = 0;
        local_4 = 0xffffffff;
        puVar6 = (undefined4 *)FUN_0053e430(&param_2);
        FUN_0046c860(&param_3,*puVar6,local_14);
        piVar16 = local_14;
        goto LAB_0047c706;
      }
    }
  }
  if (*(int **)(param_1 + 0x4b8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x1e,local_64,0);
  }
  if (*(int *)(param_1 + 0x4bc) == 0) {
    ExceptionList = local_c;
    return;
  }
  local_3c[0] = param_2._0_1_;
  piStack_38 = (int *)FUN_0042a7e0(0,0);
  iStack_34 = 0;
  local_4 = 0xc;
  piVar4 = (int *)StyleNode::StyleNode((StyleNode *)local_50,0x9ca4);
  local_4._0_1_ = 0xd;
  local_64 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
  piVar4 = piStack_38 + 1;
  local_4._0_1_ = 0xe;
  iVar8 = FUN_0042a7e0(piStack_38,piStack_38[1]);
  *piVar4 = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  FUN_0046ea00(iVar8 + 8,&local_64);
  iStack_34 = iStack_34 + 1;
  local_4._0_1_ = 0xd;
  if (local_64 != (undefined4 *)0x0) {
    (**(code **)*local_64)(1);
    local_64 = (undefined4 *)0x0;
  }
  local_4 = CONCAT31(local_4._1_3_,0xc);
  StyleNode::~StyleNode((StyleNode *)local_50);
  if (local_60 != 0) {
    FUN_0057da40(local_60,local_3c);
  }
  if (local_54 != (Equipment *)0x0) {
    FUN_0057da40(local_54,local_3c);
  }
  puVar6 = param_2;
  if (((*(char *)(param_1 + 0x4e0) == '\0') && (*(int *)(param_1 + 0x398) != 0)) &&
     (pEVar9 = Archetype::GetEquipment((uint)param_2), pEVar9 != (Equipment *)0x0)) {
    uVar10 = (**(code **)(*(int *)pEVar9 + 0x10))();
    switch(uVar10) {
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x1a:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x21:
      pbVar1 = (byte *)(*(int *)(param_1 + 0x398) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x39c) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x3a0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4bc) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      FUN_005798b0(0,0);
      FUN_0057b370();
      FUN_0057b3e0(local_3c);
      auStack_48[0] = param_2._0_1_;
      piStack_44 = operator_new(0xc);
      *piStack_44 = (int)piStack_44;
      piStack_44[1] = (int)piStack_44;
      iStack_40 = 0;
      local_4._0_1_ = 0xf;
      piVar4 = (int *)StyleNode::StyleNode((StyleNode *)&local_60,0xf64);
      local_4._0_1_ = 0x10;
      param_3 = (int *)(**(code **)(*piVar4 + 0x1c))();
      local_54 = (Equipment *)piStack_44[1];
      local_50[0] = (Equipment *)piStack_44;
      piVar4 = piStack_44 + 1;
      local_4._0_1_ = 0x11;
      pEVar11 = operator_new(0xc);
      *(Equipment **)pEVar11 = local_50[0];
      pEVar9 = local_54;
      if (local_54 == (Equipment *)0x0) {
        pEVar9 = pEVar11;
      }
      *(Equipment **)(pEVar11 + 4) = pEVar9;
      *piVar4 = (int)pEVar11;
      **(undefined4 **)(pEVar11 + 4) = pEVar11;
      FUN_0046ea00(pEVar11 + 8,&param_3);
      iStack_40 = iStack_40 + 1;
      local_4._0_1_ = 0x10;
      if (param_3 != (undefined4 *)0x0) {
        (**(code **)*param_3)(1);
        param_3 = (undefined4 *)0x0;
      }
      local_4._0_1_ = 0xf;
      StyleNode::~StyleNode((StyleNode *)&local_60);
      FUN_0057da40(0x6e1,auStack_48);
      uVar10 = 0;
      puVar15 = auStack_48;
      sVar12 = wcslen(L"\n");
      FUN_0057e2c0(&DAT_005d0254,sVar12,puVar15,uVar10);
      piVar4 = (int *)StyleNode::StyleNode((StyleNode *)&local_60,0x9ca4);
      local_4._0_1_ = 0x12;
      param_3 = (int *)(**(code **)(*piVar4 + 0x1c))();
      piVar4 = piStack_44 + 1;
      local_50[0] = (Equipment *)piStack_44;
      local_54 = (Equipment *)*piVar4;
      local_4._0_1_ = 0x13;
      pEVar11 = operator_new(0xc);
      *(Equipment **)pEVar11 = local_50[0];
      pEVar9 = local_54;
      if (local_54 == (Equipment *)0x0) {
        pEVar9 = pEVar11;
      }
      *(Equipment **)(pEVar11 + 4) = pEVar9;
      *piVar4 = (int)pEVar11;
      **(undefined4 **)(pEVar11 + 4) = pEVar11;
      FUN_0046ea00(pEVar11 + 8,&param_3);
      iStack_40 = iStack_40 + 1;
      local_4._0_1_ = 0x12;
      if (param_3 != (undefined4 *)0x0) {
        (**(code **)*param_3)(1);
        param_3 = (undefined4 *)0x0;
      }
      local_4._0_1_ = 0xf;
      StyleNode::~StyleNode((StyleNode *)&local_60);
      FUN_00484090(auStack_48,param_2,1,0);
      FUN_005798b0(0,0);
      FUN_0057b370();
      FUN_0057b3e0(auStack_48);
      auStack_24[0] = param_2._0_1_;
      puStack_20 = operator_new(0xc);
      *puStack_20 = puStack_20;
      puStack_20[1] = puStack_20;
      iStack_1c = 0;
      local_4._0_1_ = 0x14;
      piVar4 = (int *)StyleNode::StyleNode((StyleNode *)&local_60,0x9ca4);
      local_4._0_1_ = 0x15;
      param_3 = (int *)(**(code **)(*piVar4 + 0x1c))();
      puVar6 = (undefined4 *)puStack_20[1];
      local_50[0] = (Equipment *)puStack_20;
      puVar14 = puStack_20 + 1;
      local_4._0_1_ = 0x16;
      puVar13 = operator_new(0xc);
      *puVar13 = local_50[0];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = puVar13;
      }
      puVar13[1] = puVar6;
      *puVar14 = puVar13;
      pEVar9 = (Equipment *)(puVar13 + 2);
      *(undefined4 **)puVar13[1] = puVar13;
      local_4._0_1_ = 0x17;
      local_54 = pEVar9;
      local_50[0] = pEVar9;
      if (pEVar9 != (Equipment *)0x0) {
        uVar10 = (**(code **)(*param_3 + 0x1c))();
        *(undefined4 *)pEVar9 = uVar10;
      }
      iStack_1c = iStack_1c + 1;
      local_4._0_1_ = 0x15;
      if (param_3 != (int *)0x0) {
        (**(code **)*param_3)(1);
      }
      local_4._0_1_ = 0x14;
      StyleNode::~StyleNode((StyleNode *)&local_60);
      uVar10 = 0;
      puVar15 = auStack_24;
      sVar12 = wcslen(L"\n");
      FUN_0057e2c0(&DAT_005d0254,sVar12,puVar15,uVar10);
      FUN_00484090(auStack_24,param_2,0,1);
      FUN_005798b0(0,0);
      FUN_0057b370();
      FUN_0057b3e0(auStack_24);
      puVar13 = puStack_20;
      local_4._0_1_ = 0xf;
      puVar6 = (undefined4 *)*puStack_20;
      while (puVar6 != puVar13) {
        puVar14 = (undefined4 *)*puVar6;
        FUN_0046d680(&local_54,puVar6);
        puVar6 = puVar14;
      }
      FUN_005b7e1d(puStack_20);
      piVar16 = piStack_44;
      puStack_20 = (undefined4 *)0x0;
      iStack_1c = 0;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      piVar4 = (int *)*piStack_44;
      while (piVar4 != piVar16) {
        piVar2 = (int *)*piVar4;
        *(int *)piVar4[1] = *piVar4;
        *(int *)(*piVar4 + 4) = piVar4[1];
        FUN_0046ea80(0);
        FUN_005b7e1d(piVar4);
        iStack_40 = iStack_40 + -1;
        piVar4 = piVar2;
      }
      FUN_005b7e1d(piStack_44);
      piStack_44 = (int *)0x0;
      iStack_40 = 0;
      break;
    default:
      goto switchD_0047c232_caseD_10;
    }
  }
  else {
switchD_0047c232_caseD_10:
    iVar8 = *(int *)(param_1 + 0x398);
    if (iVar8 == 0) {
      if (*(char *)(param_1 + 0x4e0) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x944) + 0xa8))(0x1e,0x388,0);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x944) + 0xa8))(0x1e,0x387);
      }
    }
    else {
      *(byte *)(iVar8 + 0x6c) = *(byte *)(iVar8 + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x39c) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x3a0) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4bc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
    }
    if (((char)param_3 == '\0') ||
       ((*(char *)(param_1 + 0x35c) == '\0' && (*(int *)(param_1 + 0x360) == 0)))) {
      if (*(char *)(param_1 + 0x4e0) == '\0') {
        FUN_00484090(local_3c,puVar6,1,1);
      }
    }
    else {
      FUN_004704d0(local_3c,puVar6);
    }
    FUN_005798b0(0,0);
    FUN_0057b370();
    FUN_0057b3e0(local_3c);
  }
  piVar2 = piStack_38;
  local_4 = 0xffffffff;
  piVar4 = (int *)*piStack_38;
  piVar16 = piStack_38;
  while (piStack_38 = piVar16, piVar4 != piVar2) {
    piVar16 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar4);
    iStack_34 = iStack_34 + -1;
    piVar4 = piVar16;
    piVar16 = piStack_38;
  }
LAB_0047c706:
  FUN_005b7e1d(piVar16);
  ExceptionList = local_c;
  return;
}

