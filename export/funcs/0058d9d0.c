
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0058d9d0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  RenderDisplayList *pRVar4;
  undefined4 *puVar5;
  int *piVar6;
  LONG LVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined1 *puStack_100;
  ClipNode local_f0 [20];
  ClipNode local_dc [20];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  code *local_7c;
  RenderDisplayList *local_78;
  int local_74;
  int local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  int *local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int *local_58;
  undefined1 *local_54;
  tagRECT local_50;
  undefined4 *local_40;
  tagRECT local_3c;
  undefined4 *local_2c;
  int *local_28;
  RenderDisplayList *local_24;
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c481a;
  local_10 = ExceptionList;
  iVar11 = 0;
  if (*(int *)(param_1 + 0x4b4) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
  }
  if (*(int *)(param_1 + 0x4a4) == 0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_20 = (undefined4 *)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2);
  }
  local_2c = (undefined4 *)((int)local_20 * 4 + 4);
  puStack_100 = (undefined1 *)0x58da47;
  ExceptionList = &local_10;
  FUN_005b7e90();
  local_70 = local_18 * 4 + 4;
  puStack_100 = (undefined1 *)0x58da62;
  local_14 = (int *)&stack0xffffff04;
  FUN_005b7e90();
  puStack_100 = local_c0;
  local_54 = &stack0xffffff04;
  (**(code **)(**(int **)Pipeline_exref + 0x88))(*(int **)Pipeline_exref);
  (**(code **)(**(int **)Pipeline_exref + 0x58))
            (*(int **)Pipeline_exref,local_5c,local_6c,local_60,local_68);
  if (0 < local_18) {
    do {
      local_50.top = *(LONG *)(*(int *)(param_1 + 0x4b4) + iVar11 * 4);
      local_50.right = 0;
      local_50.bottom = 0;
      if (DAT_0067d95c == (int *)0x0) {
        DAT_0067d95c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_0067d95c + 0x28))(DAT_0067d95c,&local_3c.top,param_1 + 0x3c,&local_50.top);
      local_1c = (int *)(local_8c * (float)local_3c.right +
                         local_88 * (float)local_3c.bottom + local_90 * (float)local_3c.top +
                        local_84);
      if ((float)local_1c == _DAT_005c7474) {
        if (iVar11 < 1) {
          *(undefined4 *)(local_dc + iVar11 * 4 + -0x20) = 0;
        }
        else {
          *(undefined1 **)(local_dc + iVar11 * 4 + -0x20) = (&puStack_100)[iVar11];
        }
      }
      else {
        uVar3 = ftol();
        *(undefined4 *)(local_dc + iVar11 * 4 + -0x20) = uVar3;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_18);
  }
  iVar11 = local_18;
  *(undefined4 *)((int)&puStack_100 + local_70) = *(undefined4 *)(param_1 + 0x358);
  local_24 = (RenderDisplayList *)local_20;
  pRVar4 = (RenderDisplayList *)local_20;
  if (0 < (int)local_20) {
    iVar12 = 0;
    do {
      local_3c.right = *(LONG *)(*(int *)(param_1 + 0x4a4) + iVar12 * 4);
      local_3c.top = 0;
      local_3c.bottom = 0;
      if (DAT_0067d95c == (int *)0x0) {
        DAT_0067d95c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_0067d95c + 0x28))(DAT_0067d95c,&local_50.top,param_1 + 0x3c,&local_3c.top);
      piVar6 = local_14;
      fVar9 = (float)local_50.bottom * local_88 +
              local_8c * (float)local_50.right + local_90 * (float)local_50.top + local_84;
      local_1c = (int *)fVar9;
      if (fVar9 == _DAT_005c7474) {
        if (iVar12 < 1) {
          local_14[iVar12] = 0;
        }
        else {
          local_14[iVar12] = local_14[iVar12 + -1];
        }
      }
      else if (iVar12 < 1) {
        iVar11 = ftol();
        local_14[iVar12] = iVar11;
      }
      else {
        iVar11 = ftol();
        piVar6[iVar12] = iVar11;
      }
      iVar12 = iVar12 + 1;
      pRVar4 = local_24;
      iVar11 = local_18;
    } while (iVar12 < (int)local_24);
  }
  *(undefined4 *)((int)local_2c + -4 + (int)local_14) = *(undefined4 *)(param_1 + 0x35c);
  *local_14 = 0;
  local_1c = local_14;
  local_74 = 0;
  local_2c = (undefined4 *)pRVar4;
  if (0 < (int)pRVar4) {
    do {
      local_14 = (int *)0x0;
      if (0 < iVar11) {
        local_80 = local_74 * 0x1c;
        local_74 = local_74 + iVar11;
        do {
          piVar6 = local_1c;
          iVar11 = local_80 + 0x1c;
          pRVar4 = (RenderDisplayList *)(local_80 + *(int *)(param_1 + 0x494));
          local_58 = *(int **)(pRVar4 + 0x10);
          local_64 = (int *)*local_58;
          local_80 = iVar11;
          local_28 = local_64;
          local_24 = pRVar4;
          if (local_64 != local_58) {
            do {
              puVar5 = (undefined4 *)FUN_0053ab20(local_c4,0);
              FUN_0046d680(local_c8,*puVar5);
            } while (local_28 != local_58);
          }
          iVar11 = *(int *)(param_1 + 0x574);
          if (local_24[0x18] == (RenderDisplayList)0x0) {
            local_50.top = *piVar6 + iVar11;
            local_50.bottom = piVar6[1] - iVar11;
            local_50.right = *(int *)(local_54 + (int)local_14 * 4 + 4) - *(int *)(param_1 + 0x570);
            local_50.left = *(int *)(local_54 + (int)local_14 * 4) + *(int *)(param_1 + 0x570);
            piVar6 = (int *)ClipNode::ClipNode(local_dc,&local_50);
            local_8 = 2;
            local_40 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            iVar11 = *(int *)(pRVar4 + 0x10);
            local_8._0_1_ = 3;
            iVar12 = FUN_0042a7e0(iVar11,*(undefined4 *)(iVar11 + 4));
            *(int *)(iVar11 + 4) = iVar12;
            **(int **)(iVar12 + 4) = iVar12;
            FUN_0046ea00(iVar12 + 8,&local_40);
            *(int *)(pRVar4 + 0x14) = *(int *)(pRVar4 + 0x14) + 1;
            local_8 = CONCAT31(local_8._1_3_,2);
            if (local_40 != (undefined4 *)0x0) {
              (**(code **)*local_40)(1);
              local_40 = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            ClipNode::~ClipNode(local_dc);
            uVar1 = *(undefined1 *)(param_1 + 0x54c);
            LVar7 = local_50.left;
            fVar9 = (float)local_50.top;
            fVar10 = (float)local_50.right;
          }
          else {
            local_3c.top = *piVar6 + iVar11;
            local_3c.bottom = piVar6[1] - iVar11;
            local_3c.left = *(int *)(local_54 + (int)local_14 * 4) + *(int *)(param_1 + 0x570);
            local_3c.right = *(int *)(local_54 + local_70 + -4) - *(int *)(param_1 + 0x570);
            piVar6 = (int *)ClipNode::ClipNode(local_f0,&local_3c);
            local_8 = 0;
            local_20 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            iVar11 = *(int *)(pRVar4 + 0x10);
            local_8._0_1_ = 1;
            iVar12 = FUN_0042a7e0(iVar11,*(undefined4 *)(iVar11 + 4));
            *(int *)(iVar11 + 4) = iVar12;
            **(int **)(iVar12 + 4) = iVar12;
            FUN_0046ea00(iVar12 + 8,&local_20);
            *(int *)(pRVar4 + 0x14) = *(int *)(pRVar4 + 0x14) + 1;
            local_8 = (uint)local_8._1_3_ << 8;
            if (local_20 != (undefined4 *)0x0) {
              (**(code **)*local_20)(1);
              local_20 = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            ClipNode::~ClipNode(local_f0);
            uVar1 = *(undefined1 *)(param_1 + 0x54c);
            LVar7 = local_3c.left;
            fVar9 = (float)local_3c.top;
            fVar10 = (float)local_3c.right;
          }
          LayoutRichText((TextRenderContext *)(param_1 + 900),local_24,(int)fVar10 - LVar7,
                         pRVar4 + 0xc,LVar7,(int)fVar9,(bool)uVar1,(int *)0x0,true);
          local_7c = _vftable__exref;
          local_8 = 4;
          local_78 = pRVar4 + 0xc;
          local_28 = (int *)(**(code **)(_vftable__exref + 0x1c))();
          iVar11 = *(int *)(param_1 + 0x378);
          piVar6 = *(int **)(iVar11 + 4);
          local_8._0_1_ = 5;
          piVar8 = operator_new(0xc);
          piVar2 = local_28;
          *piVar8 = iVar11;
          if (piVar6 == (int *)0x0) {
            piVar6 = piVar8;
          }
          piVar8[1] = (int)piVar6;
          *(int **)(iVar11 + 4) = piVar8;
          piVar6 = piVar8 + 2;
          *(int **)piVar8[1] = piVar8;
          local_8._0_1_ = 6;
          local_64 = piVar6;
          local_58 = piVar6;
          if (piVar6 != (int *)0x0) {
            iVar11 = (**(code **)(*local_28 + 0x1c))();
            *piVar6 = iVar11;
          }
          *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
          local_8 = CONCAT31(local_8._1_3_,4);
          if (piVar2 != (int *)0x0) {
            (**(code **)*piVar2)(1);
          }
          local_8 = 0xffffffff;
          RDLRefNode::~RDLRefNode((RDLRefNode *)&local_7c);
          local_14 = (int *)((int)local_14 + 1);
          iVar11 = local_18;
        } while ((int)local_14 < local_18);
      }
      local_1c = local_1c + 1;
      local_2c = (undefined4 *)((int)local_2c + -1);
    } while (local_2c != (undefined4 *)0x0);
  }
  ExceptionList = local_10;
  return 1;
}

