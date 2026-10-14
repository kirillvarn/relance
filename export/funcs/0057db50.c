
void FUN_0057db50(ushort *param_1,uint param_2,int param_3,char param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  TextNode *pTVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  bool bVar10;
  int local_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 *puStack_f0;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  code *pcStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  TextPtrNode aTStack_c4 [12];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  TextPtrNode aTStack_9c [12];
  TextPtrNode aTStack_90 [12];
  TextNode aTStack_84 [20];
  TextNode aTStack_70 [20];
  TextNode aTStack_5c [20];
  TextNode aTStack_48 [20];
  TextNode aTStack_34 [20];
  TextNode aTStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c40b3;
  local_c = ExceptionList;
  if (param_2 != 0) {
    local_104 = 0;
    puVar7 = param_1;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      uVar1 = *puVar7;
      if (uVar1 == 0xd) {
        if (param_1 != puVar7) {
          if (param_4 == '\0') {
            piVar2 = (int *)TextNode::TextNode(aTStack_34,param_1,(int)puVar7 - (int)param_1 >> 1);
            local_4 = 2;
            uStack_dc = (**(code **)(*piVar2 + 0x1c))();
            local_4._0_1_ = 3;
            FUN_0046c800(auStack_b4,*(undefined4 *)(param_3 + 4),&uStack_dc);
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_0045eeb0();
            local_4 = 0xffffffff;
            TextNode::~TextNode(aTStack_34);
          }
          else {
            piVar2 = (int *)TextPtrNode::TextPtrNode
                                      (aTStack_90,param_1,(int)puVar7 - (int)param_1 >> 1);
            local_4 = 0;
            uStack_e0 = (**(code **)(*piVar2 + 0x1c))();
            local_4._0_1_ = 1;
            FUN_0046c800(auStack_b0,*(undefined4 *)(param_3 + 4),&uStack_e0);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0045eeb0();
            local_4 = 0xffffffff;
            TextPtrNode::~TextPtrNode(aTStack_90);
          }
        }
        local_4 = 4;
        uStack_d8 = (**(code **)(_vftable__exref + 0x1c))();
        local_4._0_1_ = 5;
        FUN_0046c800(auStack_b8,*(undefined4 *)(param_3 + 4),&uStack_d8);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_0045eeb0();
        param_1 = puVar7 + 1;
        puVar8 = param_1;
        iVar9 = local_104 + 2;
        if ((uint)(local_104 + 2 >> 1) < param_2) {
          bVar10 = *param_1 == 10;
LAB_0057dd07:
          param_1 = puVar7 + 1;
          puVar8 = param_1;
          iVar9 = local_104 + 2;
          if (bVar10) {
            param_1 = puVar7 + 2;
            puVar8 = param_1;
            iVar9 = local_104 + 4;
          }
        }
      }
      else {
        if (uVar1 != 10) {
          if (uVar1 != 0xb) {
            puVar8 = puVar7 + 1;
            iVar9 = local_104 + 2;
            goto LAB_0057e141;
          }
          if (param_1 == puVar7) {
            piVar2 = (int *)TextNode::TextNode(aTStack_48,(ushort *)&DAT_005cef90,-1);
            local_4 = 0x12;
            puStack_ec = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
            local_4._0_1_ = 0x13;
            FUN_0046c800(&piStack_cc,*(undefined4 *)(param_3 + 4),&puStack_ec);
            local_4 = CONCAT31(local_4._1_3_,0x12);
            if (puStack_ec != (undefined4 *)0x0) {
              (**(code **)*puStack_ec)(1);
              puStack_ec = (undefined4 *)0x0;
            }
            pTVar6 = aTStack_48;
LAB_0057e091:
            local_4 = 0xffffffff;
            TextNode::~TextNode(pTVar6);
          }
          else {
            if (param_4 == '\0') {
              piVar2 = (int *)TextNode::TextNode(aTStack_70,param_1,(int)puVar7 - (int)param_1 >> 1)
              ;
              local_4 = 0x10;
              puStack_f4 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
              local_4._0_1_ = 0x11;
              FUN_0046c800(&piStack_c8,*(undefined4 *)(param_3 + 4),&puStack_f4);
              local_4 = CONCAT31(local_4._1_3_,0x10);
              if (puStack_f4 != (undefined4 *)0x0) {
                (**(code **)*puStack_f4)(1);
                puStack_f4 = (undefined4 *)0x0;
              }
              pTVar6 = aTStack_70;
              goto LAB_0057e091;
            }
            piVar2 = (int *)TextPtrNode::TextPtrNode
                                      (aTStack_c4,param_1,(int)puVar7 - (int)param_1 >> 1);
            local_4 = 0xe;
            puStack_fc = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
            local_4._0_1_ = 0xf;
            FUN_0046c800(&piStack_d0,*(undefined4 *)(param_3 + 4),&puStack_fc);
            local_4 = CONCAT31(local_4._1_3_,0xe);
            if (puStack_fc != (undefined4 *)0x0) {
              (**(code **)*puStack_fc)(1);
              puStack_fc = (undefined4 *)0x0;
            }
            local_4 = 0xffffffff;
            TextPtrNode::~TextPtrNode(aTStack_c4);
          }
          pcStack_d4 = _vftable__exref;
          local_4 = 0x14;
          puStack_100 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
          iVar9 = *(int *)(param_3 + 4);
          local_4._0_1_ = 0x15;
          iVar3 = FUN_0042a7e0(iVar9,*(undefined4 *)(iVar9 + 4));
          *(int *)(iVar9 + 4) = iVar3;
          **(int **)(iVar3 + 4) = iVar3;
          FUN_0046ea00(iVar3 + 8,&puStack_100);
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
          local_4 = CONCAT31(local_4._1_3_,0x14);
          if (puStack_100 != (undefined4 *)0x0) {
            (**(code **)*puStack_100)(1);
            puStack_100 = (undefined4 *)0x0;
          }
          param_1 = puVar7 + 1;
          puVar8 = param_1;
          iVar9 = local_104 + 2;
          goto LAB_0057e141;
        }
        if (param_1 == puVar7) {
          piVar2 = (int *)TextNode::TextNode(aTStack_84,(ushort *)&DAT_005cef90,-1);
          local_4 = 10;
          puStack_e8 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
          local_4._0_1_ = 0xb;
          FUN_0046c800(auStack_a0,*(undefined4 *)(param_3 + 4),&puStack_e8);
          local_4 = CONCAT31(local_4._1_3_,10);
          if (puStack_e8 != (undefined4 *)0x0) {
            (**(code **)*puStack_e8)(1);
            puStack_e8 = (undefined4 *)0x0;
          }
          pTVar6 = aTStack_84;
LAB_0057de88:
          local_4 = 0xffffffff;
          TextNode::~TextNode(pTVar6);
        }
        else {
          if (param_4 == '\0') {
            piVar2 = (int *)TextNode::TextNode(aTStack_5c,param_1,(int)puVar7 - (int)param_1 >> 1);
            local_4 = 8;
            puStack_e4 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
            local_4._0_1_ = 9;
            FUN_0046c800(auStack_a4,*(undefined4 *)(param_3 + 4),&puStack_e4);
            local_4 = CONCAT31(local_4._1_3_,8);
            if (puStack_e4 != (undefined4 *)0x0) {
              (**(code **)*puStack_e4)(1);
              puStack_e4 = (undefined4 *)0x0;
            }
            pTVar6 = aTStack_5c;
            goto LAB_0057de88;
          }
          piVar2 = (int *)TextPtrNode::TextPtrNode
                                    (aTStack_9c,param_1,(int)puVar7 - (int)param_1 >> 1);
          local_4 = 6;
          puStack_f8 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
          local_4._0_1_ = 7;
          FUN_0046c800(auStack_a8,*(undefined4 *)(param_3 + 4),&puStack_f8);
          local_4 = CONCAT31(local_4._1_3_,6);
          if (puStack_f8 != (undefined4 *)0x0) {
            (**(code **)*puStack_f8)(1);
            puStack_f8 = (undefined4 *)0x0;
          }
          local_4 = 0xffffffff;
          TextPtrNode::~TextPtrNode(aTStack_9c);
        }
        local_4 = 0xc;
        puStack_f0 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
        local_4._0_1_ = 0xd;
        FUN_0046c800(auStack_ac,*(undefined4 *)(param_3 + 4),&puStack_f0);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if (puStack_f0 != (undefined4 *)0x0) {
          (**(code **)*puStack_f0)(1);
          puStack_f0 = (undefined4 *)0x0;
        }
        param_1 = puVar7 + 1;
        puVar8 = param_1;
        iVar9 = local_104 + 2;
        if ((uint)(local_104 + 2 >> 1) < param_2) {
          bVar10 = *param_1 == 0xd;
          goto LAB_0057dd07;
        }
      }
LAB_0057e141:
      local_104 = iVar9;
      local_4 = 0xffffffff;
      puVar7 = puVar8;
    } while ((uint)(local_104 >> 1) < param_2);
    if (param_1 < puVar8) {
      iVar9 = (int)puVar8 - (int)param_1 >> 1;
      if (param_4 == '\0') {
        piVar2 = (int *)TextNode::TextNode(aTStack_20,param_1,iVar9);
        local_4 = 0x18;
        piVar4 = (int *)(**(code **)(*piVar2 + 0x1c))();
        iVar9 = *(int *)(param_3 + 4);
        piVar2 = *(int **)(iVar9 + 4);
        local_4._0_1_ = 0x19;
        piStack_cc = piVar4;
        piVar5 = operator_new(0xc);
        *piVar5 = iVar9;
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar5;
        }
        piVar5[1] = (int)piVar2;
        *(int **)(iVar9 + 4) = piVar5;
        piVar2 = piVar5 + 2;
        *(int **)piVar5[1] = piVar5;
        local_4._0_1_ = 0x1a;
        piStack_d0 = piVar2;
        piStack_c8 = piVar2;
        if (piVar2 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar4 + 0x1c))();
          *piVar2 = iVar9;
        }
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
        local_4 = CONCAT31(local_4._1_3_,0x18);
        if (piVar4 != (int *)0x0) {
          (**(code **)*piVar4)(1);
        }
        local_4 = 0xffffffff;
        TextNode::~TextNode(aTStack_20);
      }
      else {
        piVar2 = (int *)TextPtrNode::TextPtrNode(aTStack_c4,param_1,iVar9);
        local_4 = 0x16;
        puStack_100 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
        iVar9 = *(int *)(param_3 + 4);
        local_4._0_1_ = 0x17;
        iVar3 = FUN_0042a7e0(iVar9,*(undefined4 *)(iVar9 + 4));
        *(int *)(iVar9 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
        FUN_0046ea00(iVar3 + 8,&puStack_100);
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
        local_4 = CONCAT31(local_4._1_3_,0x16);
        if (puStack_100 != (undefined4 *)0x0) {
          (**(code **)*puStack_100)(1);
          puStack_100 = (undefined4 *)0x0;
        }
        local_4 = 0xffffffff;
        TextPtrNode::~TextPtrNode(aTStack_c4);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

