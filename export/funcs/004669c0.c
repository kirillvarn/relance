
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004669c0(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  StyleNode *this;
  ImageNode *this_00;
  _PtFuncCompare *_PtFuncCompare;
  wchar_t *pwVar7;
  uint uVar8;
  size_t sVar9;
  int iVar10;
  bool bVar11;
  wchar_t local_11c [64];
  TextNode local_9c [20];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  ImageNode local_80 [8];
  JustifyNode local_78 [8];
  ImageNode local_70 [8];
  undefined1 local_68 [4];
  StyleNode local_64 [8];
  undefined1 local_5c [4];
  StyleNode local_58 [8];
  undefined1 local_50 [4];
  code *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  int local_38;
  undefined4 *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  char local_25;
  wchar_t *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  size_t local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb3bb;
  local_10 = ExceptionList;
  iVar10 = *(int *)(param_1 + 0x3b0);
  sVar9 = 0;
  if (iVar10 == 0) {
    return;
  }
  local_40 = (undefined4 *)(uint)(ushort)DAT_00673344;
  ExceptionList = &local_10;
  FUN_005b7e90();
  local_20 = (undefined4 *)**(int **)(iVar10 + 4);
  local_34 = *(undefined4 **)(DAT_0066da84 + 0x350);
  local_2c = (wchar_t *)0x0;
  local_14 = 0;
  local_30 = (wchar_t *)&stack0xfffffed8;
  if (local_20 != *(undefined4 **)(iVar10 + 4)) {
    local_24 = local_11c;
    local_30 = (wchar_t *)&stack0xfffffed8;
    do {
      puVar1 = (undefined4 *)local_20[3];
      local_1c._2_1_ = (char)((uint)puVar1 >> 0x10);
      bVar11 = local_1c._2_1_ == '\0';
      local_1c = puVar1;
      if ((bVar11) && (puVar1 != DAT_0066da48)) {
        if (puVar1 == local_40) {
          local_2c = (wchar_t *)((int)local_2c + 1);
          pwVar7 = local_30;
        }
        else {
          iVar10 = *(int *)(DAT_0066da84 + 0x344);
          local_18 = puVar1;
          FUN_00432240(&local_38,&local_18);
          if (local_38 == iVar10) {
            iVar10 = local_14 + 1;
            local_14 = local_14 + 1;
            pwVar7 = local_30 + ((int)local_34 + iVar10) * 6;
          }
          else {
            sVar9 = sVar9 + 1;
            pwVar7 = local_24;
            local_24 = local_24 + 6;
          }
        }
        *(undefined4 **)pwVar7 = local_1c;
        *(undefined4 *)(pwVar7 + 2) = local_20[4];
        local_18 = *(undefined4 **)(param_1 + 0x3b0);
        if ((DAT_0067ed78 & 1) == 0) {
          DAT_0067ed78 = DAT_0067ed78 | 1;
          _DAT_0067ed80 = 0;
          _DAT_0067ed84 = 0;
          _DAT_0067ed88 = 0;
          FUN_005b7e6c(IDPMsgHandler::OnDisconnect);
        }
        piVar3 = (int *)FUN_0046cd50(&local_3c,&local_1c);
        if (*piVar3 == local_18[7]) {
          puVar4 = &DAT_0067ed80;
        }
        else {
          puVar4 = (undefined *)(*piVar3 + 0x10);
        }
        *(undefined **)(pwVar7 + 4) = puVar4;
      }
      FUN_0052afa0();
    } while (local_20 != *(undefined4 **)(*(int *)(param_1 + 0x3b0) + 4));
  }
  local_2c = (wchar_t *)((int)local_2c + local_14 + sVar9);
  iVar10 = *(int *)(param_1 + 0x3a8);
  if (*(char *)(iVar10 + 0x3ac + param_1) == '\0') {
    if (sVar9 != 0) {
      qsort(local_30 + 6,sVar9,0xc,(_PtFuncCompare *)(&PTR_LAB_006115b8)[iVar10]);
    }
    if (local_14 == 0) goto LAB_00466be7;
    _PtFuncCompare = (_PtFuncCompare *)(&PTR_LAB_006115b8)[*(int *)(param_1 + 0x3a8)];
  }
  else {
    if (sVar9 != 0) {
      qsort(local_30 + 6,sVar9,0xc,(_PtFuncCompare *)(&PTR_LAB_006115a8)[iVar10]);
    }
    if (local_14 == 0) goto LAB_00466be7;
    _PtFuncCompare = (_PtFuncCompare *)(&PTR_LAB_006115a8)[*(int *)(param_1 + 0x3a8)];
  }
  qsort(local_30 + (sVar9 * 3 + 3) * 2,local_14,0xc,_PtFuncCompare);
LAB_00466be7:
  local_18 = (undefined4 *)(param_1 + 0x364);
  local_38 = 0;
  do {
    iVar10 = local_38;
    cVar2 = FUN_0058cd00(0,local_38,&local_14);
    if (cVar2 != '\0') {
      FUN_0046c860(local_50,**(undefined4 **)(local_14 + 4),*(undefined4 **)(local_14 + 4));
      piVar3 = (int *)JustifyNode::JustifyNode(local_78,1);
      local_8 = 0;
      local_20 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
      local_8._0_1_ = 1;
      FUN_0046c800(local_84,*(undefined4 *)(local_14 + 4),&local_20);
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_20 != (undefined4 *)0x0) {
        (**(code **)*local_20)(1);
        local_20 = (undefined4 *)0x0;
      }
      local_8 = 0xffffffff;
      JustifyNode::~JustifyNode(local_78);
      local_25 = iVar10 == *(int *)(param_1 + 0x3a8);
      if ((bool)local_25) {
        piVar3 = (int *)StyleNode::StyleNode(local_58,0xda80);
        local_8 = 2;
        local_24 = (wchar_t *)(**(code **)(*piVar3 + 0x1c))();
        local_8._0_1_ = 3;
        FUN_0046c800(local_5c,*(undefined4 *)(local_14 + 4),&local_24);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (local_24 != (wchar_t *)0x0) {
          (*(code *)**(undefined4 **)local_24)(1);
          local_24 = (wchar_t *)0x0;
        }
        this = local_58;
      }
      else {
        piVar3 = (int *)StyleNode::StyleNode(local_64,0x3df7);
        local_8 = 4;
        local_1c = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
        local_8._0_1_ = 5;
        FUN_0046c800(local_88,*(undefined4 *)(local_14 + 4),&local_1c);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (local_1c != (undefined4 *)0x0) {
          (**(code **)*local_1c)(1);
          local_1c = (undefined4 *)0x0;
        }
        this = local_64;
      }
      local_8 = 0xffffffff;
      StyleNode::~StyleNode(this);
      local_48 = local_18;
      local_4c = _vftable__exref;
      local_8 = 6;
      local_44 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_8._0_1_ = 7;
      FUN_0046c800(local_68,*(undefined4 *)(local_14 + 4),&local_44);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (local_44 != (undefined4 *)0x0) {
        (**(code **)*local_44)(1);
        local_44 = (undefined4 *)0x0;
      }
      local_8 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_4c);
      if (local_25 != '\0') {
        if (*(char *)(iVar10 + 0x3ac + param_1) == '\0') {
          piVar3 = (int *)ImageNode::ImageNode(local_80,*(Image **)(param_1 + 0x3a0));
          local_8 = 10;
          local_34 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
          sVar9 = local_14;
          iVar10 = *(int *)(local_14 + 4);
          local_8._0_1_ = 0xb;
          iVar5 = FUN_0042a7e0(iVar10,*(undefined4 *)(iVar10 + 4));
          *(int *)(iVar10 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          FUN_0046ea00(iVar5 + 8,&local_34);
          *(int *)(sVar9 + 8) = *(int *)(sVar9 + 8) + 1;
          local_8 = CONCAT31(local_8._1_3_,10);
          if (local_34 != (undefined4 *)0x0) {
            (**(code **)*local_34)(1);
            local_34 = (undefined4 *)0x0;
          }
          this_00 = local_80;
        }
        else {
          piVar3 = (int *)ImageNode::ImageNode(local_70,*(Image **)(param_1 + 0x3a4));
          local_8 = 8;
          local_3c = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
          sVar9 = local_14;
          iVar10 = *(int *)(local_14 + 4);
          local_8._0_1_ = 9;
          iVar5 = FUN_0042a7e0(iVar10,*(undefined4 *)(iVar10 + 4));
          *(int *)(iVar10 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          FUN_0046ea00(iVar5 + 8,&local_3c);
          *(int *)(sVar9 + 8) = *(int *)(sVar9 + 8) + 1;
          local_8 = CONCAT31(local_8._1_3_,8);
          if (local_3c != (undefined4 *)0x0) {
            (**(code **)*local_3c)(1);
            local_3c = (undefined4 *)0x0;
          }
          this_00 = local_70;
        }
        local_8 = 0xffffffff;
        ImageNode::~ImageNode(this_00);
        iVar10 = local_38;
      }
    }
    local_38 = iVar10 + 1;
    local_18 = local_18 + 3;
  } while (local_38 < 4);
  puVar6 = (undefined1 *)FUN_0058d0b0(0);
  *puVar6 = 0;
  puVar6[1] = 0;
  FUN_0058d4a0();
  param_2 = param_2 >> 1;
  uVar8 = 1;
  if ((int)param_2 < (int)local_2c) {
    pwVar7 = local_30 + param_2 * 6;
    do {
      iVar10 = *(int *)(*(int *)(param_1 + 0x3c8) + 0x4a4);
      if ((iVar10 == 0) ||
         ((uint)(*(int *)(*(int *)(param_1 + 0x3c8) + 0x4a8) - iVar10 >> 2) <= uVar8)) break;
      FUN_00465ab0(uVar8,pwVar7,
                   CONCAT31((int3)((uint)*(undefined4 **)pwVar7 >> 8),
                            *(undefined4 **)pwVar7 != local_40));
      param_2 = param_2 + 1;
      pwVar7 = pwVar7 + 6;
      uVar8 = uVar8 + 2;
    } while ((int)param_2 < (int)local_2c);
  }
  param_2._3_1_ = 1;
  for (; uVar8 < param_3; uVar8 = uVar8 + 1) {
    iVar10 = 0;
    do {
      FUN_0058cbf0(uVar8,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
    puVar6 = (undefined1 *)FUN_0058d0b0(uVar8);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = param_2._3_1_;
    param_2._3_1_ = 0;
  }
  FUN_0057b370();
  local_48 = (undefined4 *)(param_1 + 0x34c);
  local_4c = _vftable__exref;
  local_8 = 0xc;
  FUN_0057b470(&local_4c);
  local_8 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_4c);
  swprintf(local_11c,0x5cfb88,local_2c);
  TextNode::TextNode(local_9c,(ushort *)local_11c,-1);
  local_8 = 0xd;
  FUN_0057b470();
  local_8 = 0xffffffff;
  TextNode::~TextNode(local_9c);
  ExceptionList = local_10;
  return;
}

