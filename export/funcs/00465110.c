
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00465110(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  undefined1 *puVar12;
  StyleNode *this;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  bool bVar16;
  TextNode local_148 [20];
  TextNode local_134 [20];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  ImageNode local_118 [8];
  undefined1 local_110 [4];
  ImageNode local_10c [8];
  undefined1 local_104 [4];
  ImageNode local_100 [8];
  undefined1 local_f8 [4];
  StyleNode local_f4 [8];
  undefined1 local_ec [4];
  StyleNode local_e8 [8];
  undefined1 local_e0 [4];
  StyleNode local_dc [8];
  undefined1 local_d4 [4];
  StyleNode local_d0 [8];
  undefined1 local_c8 [4];
  StyleNode local_c4 [8];
  undefined1 local_bc [4];
  StyleNode local_b8 [8];
  undefined1 local_b0 [4];
  StyleNode local_ac [8];
  undefined1 local_a4 [4];
  StyleNode local_a0 [8];
  undefined1 local_98 [4];
  StyleNode local_94 [8];
  undefined1 local_8c [4];
  JustifyNode local_88 [8];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  int *local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bb19c;
  local_10 = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x3b0);
  if (iVar8 != 0) {
    local_64 = DAT_0066d3fc;
    ExceptionList = &local_10;
    local_1c = param_1;
    FUN_005b7e90();
    local_2c = (undefined4 *)**(int **)(iVar8 + 4);
    iVar13 = 0;
    local_6c = 0;
    iVar4 = local_6c;
    local_34 = &stack0xfffffeac;
    if (local_2c != *(undefined4 **)(iVar8 + 4)) {
      puVar15 = (undefined4 *)&stack0xfffffeb4;
      local_34 = &stack0xfffffeac;
      do {
        iVar8 = local_1c;
        puVar3 = local_2c;
        puVar1 = (undefined4 *)local_2c[3];
        local_30._2_1_ = (char)((uint)puVar1 >> 0x10);
        bVar16 = local_30._2_1_ != '\0';
        local_30 = puVar1;
        if ((bVar16) && (puVar1 != DAT_0066da48)) {
          puVar15[-2] = puVar1;
          puVar15[-1] = puVar3[4];
          iVar8 = *(int *)(iVar8 + 0x3b0);
          if ((DAT_0067ed78 & 1) == 0) {
            DAT_0067ed78 = DAT_0067ed78 | 1;
            _DAT_0067ed80 = 0;
            _DAT_0067ed84 = 0;
            _DAT_0067ed88 = 0;
            FUN_005b7e6c(IDPMsgHandler::OnDisconnect);
          }
          piVar6 = (int *)FUN_0046cd50(&local_74,&local_30);
          if (*piVar6 == *(int *)(iVar8 + 0x1c)) {
            puVar7 = &DAT_0067ed80;
          }
          else {
            puVar7 = (undefined *)(*piVar6 + 0x10);
          }
          *puVar15 = puVar7;
          iVar13 = iVar13 + 1;
          puVar15 = puVar15 + 3;
        }
        FUN_0052afa0();
        iVar4 = iVar13;
      } while (local_2c != *(undefined4 **)(*(int *)(local_1c + 0x3b0) + 4));
    }
    local_6c = iVar4;
    iVar8 = local_6c;
    FUN_0058d4a0();
    local_28 = 0;
    uVar2 = local_28;
    if (param_2 < iVar8) {
      local_20 = (int *)(local_34 + param_2 * 0xc);
      do {
        if (param_3 <= local_28) {
          ExceptionList = local_10;
          return;
        }
        cVar5 = FUN_0058cd00(local_28,0,&local_18);
        if (cVar5 != '\0') {
          local_11 = '\x01';
          FUN_0046c860(local_8c,**(undefined4 **)(local_18 + 4),*(undefined4 **)(local_18 + 4));
          piVar6 = (int *)JustifyNode::JustifyNode(local_88,0);
          local_8 = 0;
          local_5c = (**(code **)(*piVar6 + 0x1c))();
          local_8._0_1_ = 1;
          FUN_0046c800(local_80,*(undefined4 *)(local_18 + 4),&local_5c);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0045eeb0();
          local_8 = 0xffffffff;
          JustifyNode::~JustifyNode(local_88);
          local_24 = (int *)0x0;
          if (*local_20 == local_64) {
            piVar6 = (int *)StyleNode::StyleNode(local_94,0x3343);
            local_8 = 2;
            local_60 = (**(code **)(*piVar6 + 0x1c))();
            local_8._0_1_ = 3;
            FUN_0046c800(local_104,*(undefined4 *)(local_18 + 4),&local_60);
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_0045eeb0();
            local_8 = 0xffffffff;
            StyleNode::~StyleNode(local_94);
          }
          else {
            piVar6 = (int *)StyleNode::StyleNode(local_a0,0x8283);
            local_8 = 4;
            local_70 = (**(code **)(*piVar6 + 0x1c))();
            local_8._0_1_ = 5;
            FUN_0046c800(local_78,*(undefined4 *)(local_18 + 4),&local_70);
            local_8 = CONCAT31(local_8._1_3_,4);
            FUN_0045eeb0();
            local_8 = 0xffffffff;
            StyleNode::~StyleNode(local_a0);
            puVar15 = (undefined4 *)*local_20;
            if (puVar15 == DAT_0066da40) {
              piVar6 = (int *)StyleNode::StyleNode(local_ac,0xd801);
              local_8 = 6;
              local_68 = (**(code **)(*piVar6 + 0x1c))();
              local_8._0_1_ = 7;
              FUN_0046c800(local_e0,*(undefined4 *)(local_18 + 4),&local_68);
              local_8 = CONCAT31(local_8._1_3_,6);
              FUN_0045eeb0();
              this = local_ac;
            }
            else if (puVar15 == DAT_0066da3c) {
              piVar6 = (int *)StyleNode::StyleNode(local_b8,0x1d9d);
              local_8 = 8;
              local_34 = (undefined1 *)(**(code **)(*piVar6 + 0x1c))();
              local_8._0_1_ = 9;
              FUN_0046c800(local_98,*(undefined4 *)(local_18 + 4),&local_34);
              local_8 = CONCAT31(local_8._1_3_,8);
              FUN_0045eeb0();
              this = local_b8;
            }
            else {
              if (puVar15 == DAT_0066da38) {
                piVar6 = (int *)StyleNode::StyleNode(local_c4,0xd801);
                local_8 = 10;
                local_54 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
                local_8._0_1_ = 0xb;
                FUN_0046c800(local_11c,*(undefined4 *)(local_18 + 4),&local_54);
                local_8 = CONCAT31(local_8._1_3_,10);
                if (local_54 != (undefined4 *)0x0) {
                  (**(code **)*local_54)(1);
                  local_54 = (undefined4 *)0x0;
                }
                local_8 = 0xffffffff;
                StyleNode::~StyleNode(local_c4);
                if (DAT_0066da84 != 0) {
                  local_11 = *(int *)(DAT_0066da84 + 0x350) != 0;
                }
                goto LAB_004655fd;
              }
              if (puVar15 == DAT_0066da48) {
                piVar6 = (int *)StyleNode::StyleNode(local_d0,0x73f7);
                local_8 = 0xc;
                local_40 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
                local_8._0_1_ = 0xd;
                FUN_0046c800(local_a4,*(undefined4 *)(local_18 + 4),&local_40);
                local_8 = CONCAT31(local_8._1_3_,0xc);
                if (local_40 != (undefined4 *)0x0) {
                  (**(code **)*local_40)(1);
                  local_40 = (undefined4 *)0x0;
                }
                this = local_d0;
              }
              else if (puVar15 == DAT_0066da44) {
                piVar6 = (int *)StyleNode::StyleNode(local_dc,0xd681);
                local_8 = 0xe;
                local_48 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
                local_8._0_1_ = 0xf;
                FUN_0046c800(local_ec,*(undefined4 *)(local_18 + 4),&local_48);
                local_8 = CONCAT31(local_8._1_3_,0xe);
                if (local_48 != (undefined4 *)0x0) {
                  (**(code **)*local_48)(1);
                  local_48 = (undefined4 *)0x0;
                }
                this = local_dc;
              }
              else {
                piVar6 = (int *)StyleNode::StyleNode(local_e8,0x8283);
                local_8 = 0x10;
                local_4c = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
                local_8._0_1_ = 0x11;
                FUN_0046c800(local_b0,*(undefined4 *)(local_18 + 4),&local_4c);
                local_8 = CONCAT31(local_8._1_3_,0x10);
                if (local_4c != (undefined4 *)0x0) {
                  (**(code **)*local_4c)(1);
                  local_4c = (undefined4 *)0x0;
                }
                this = local_e8;
              }
            }
            local_8 = 0xffffffff;
            StyleNode::~StyleNode(this);
          }
LAB_004655fd:
          puVar15 = (undefined4 *)*local_20;
          if (puVar15 == DAT_0066da40) {
            local_24 = (int *)0x1b76;
          }
          else if (puVar15 == DAT_0066da3c) {
            local_24 = (int *)0x1b77;
          }
          else if (puVar15 == DAT_0066da38) {
            local_24 = (int *)0x1b78;
          }
          else if (puVar15 == DAT_0066da48) {
            local_24 = (int *)0x1b8c;
          }
          iVar8 = FUN_0058d910(local_28);
          if (iVar8 != 0) {
            *(int **)(iVar8 + 4) = local_24;
          }
          if (local_11 == '\0') {
            piVar6 = (int *)StyleNode::StyleNode(local_f4,48000);
            local_8 = 0x12;
            local_58 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            local_8._0_1_ = 0x13;
            FUN_0046c800(local_110,*(undefined4 *)(local_18 + 4),&local_58);
            local_8 = CONCAT31(local_8._1_3_,0x12);
            if (local_58 != (undefined4 *)0x0) {
              (**(code **)*local_58)(1);
              local_58 = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            StyleNode::~StyleNode(local_f4);
          }
          piVar6 = (int *)TextNode::TextNode(local_134,(ushort *)&DAT_005cfb78,-1);
          local_8 = 0x14;
          local_44 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
          local_8._0_1_ = 0x15;
          FUN_0046c800(local_bc,*(undefined4 *)(local_18 + 4),&local_44);
          local_8 = CONCAT31(local_8._1_3_,0x14);
          if (local_44 != (undefined4 *)0x0) {
            (**(code **)*local_44)(1);
            local_44 = (undefined4 *)0x0;
          }
          local_8 = 0xffffffff;
          TextNode::~TextNode(local_134);
          if (local_11 == '\0') {
            piVar6 = (int *)ImageNode::ImageNode(local_118,*(Image **)(local_1c + 0x39c));
            local_8 = 0x1a;
            local_2c = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            iVar4 = local_18;
            iVar8 = *(int *)(local_18 + 4);
            local_8._0_1_ = 0x1b;
            iVar13 = FUN_0042a7e0(iVar8,*(undefined4 *)(iVar8 + 4));
            *(int *)(iVar8 + 4) = iVar13;
            **(int **)(iVar13 + 4) = iVar13;
            FUN_0046ea00(iVar13 + 8,&local_2c);
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            local_8 = CONCAT31(local_8._1_3_,0x1a);
            if (local_2c != (undefined4 *)0x0) {
              (**(code **)*local_2c)(1);
              local_2c = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            ImageNode::~ImageNode(local_118);
          }
          else if ((undefined4 *)*local_20 == DAT_0066da40) {
            piVar6 = (int *)ImageNode::ImageNode(local_100,*(Image **)(local_1c + 0x398));
            local_8 = 0x16;
            local_38 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            local_8._0_1_ = 0x17;
            FUN_0046c800(local_f8,*(undefined4 *)(local_18 + 4),&local_38);
            local_8 = CONCAT31(local_8._1_3_,0x16);
            if (local_38 != (undefined4 *)0x0) {
              (**(code **)*local_38)(1);
              local_38 = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            ImageNode::~ImageNode(local_100);
          }
          else if ((undefined4 *)*local_20 == DAT_0066da38) {
            piVar6 = (int *)ImageNode::ImageNode(local_10c,*(Image **)(local_1c + 0x394));
            local_8 = 0x18;
            local_3c = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
            local_8._0_1_ = 0x19;
            FUN_0046c800(local_c8,*(undefined4 *)(local_18 + 4),&local_3c);
            local_8 = CONCAT31(local_8._1_3_,0x18);
            if (local_3c != (undefined4 *)0x0) {
              (**(code **)*local_3c)(1);
              local_3c = (undefined4 *)0x0;
            }
            local_8 = 0xffffffff;
            ImageNode::~ImageNode(local_10c);
          }
          piVar6 = (int *)TextNode::TextNode(local_148,(ushort *)&DAT_005cfb78,-1);
          local_8 = 0x1c;
          local_30 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
          iVar4 = local_18;
          iVar8 = *(int *)(local_18 + 4);
          local_8._0_1_ = 0x1d;
          iVar13 = FUN_0042a7e0(iVar8,*(undefined4 *)(iVar8 + 4));
          *(int *)(iVar8 + 4) = iVar13;
          **(int **)(iVar13 + 4) = iVar13;
          FUN_0046ea00(iVar13 + 8,&local_30);
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          local_8 = CONCAT31(local_8._1_3_,0x1c);
          if (local_30 != (undefined4 *)0x0) {
            (**(code **)*local_30)(1);
            local_30 = (undefined4 *)0x0;
          }
          local_8 = 0xffffffff;
          TextNode::~TextNode(local_148);
          piVar14 = local_20;
          piVar6 = (int *)FUN_0046baf0(local_120);
          piVar6 = (int *)*piVar6;
          local_74 = piVar6;
          uVar9 = FUN_0053e430(local_d4);
          FUN_0046bba0(uVar9);
          piVar10 = (int *)FUN_0046baf0(local_7c);
          iVar8 = *piVar10;
          if (local_50 != piVar6) {
            local_24 = (int *)(local_18 + 8);
            do {
              piVar14 = *(int **)(iVar8 + 4);
              piVar6 = local_50 + 2;
              piVar10 = operator_new(0xc);
              *piVar10 = iVar8;
              if (piVar14 == (int *)0x0) {
                piVar14 = piVar10;
              }
              piVar10[1] = (int)piVar14;
              *(int **)(iVar8 + 4) = piVar10;
              *(int **)piVar10[1] = piVar10;
              FUN_0046ea00(piVar10 + 2,piVar6);
              *local_24 = *local_24 + 1;
              local_50 = (int *)*local_50;
              piVar14 = local_20;
            } while (local_50 != local_74);
          }
          uVar2 = local_28;
          pcVar11 = (char *)FUN_0058d0b0(local_28);
          *pcVar11 = local_11;
          pcVar11[1] = local_11;
          pcVar11[2] = '\x01';
          *(int *)(*(int *)(pcVar11 + 8) + 8) = *piVar14;
          if (*piVar14 == local_64) {
            FUN_0058d4b0(uVar2);
          }
          FUN_0058cdb0(uVar2,0);
          iVar8 = local_6c;
        }
        local_28 = local_28 + 1;
        local_20 = local_20 + 3;
        uVar2 = local_28;
      } while ((int)(local_28 + param_2) < iVar8);
    }
    for (; uVar2 < param_3; uVar2 = uVar2 + 1) {
      FUN_0058cbf0(uVar2,0);
      puVar12 = (undefined1 *)FUN_0058d0b0(uVar2);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
    }
  }
  ExceptionList = local_10;
  return;
}

