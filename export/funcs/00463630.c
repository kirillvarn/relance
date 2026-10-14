
void __thiscall FUN_00463630(int param_1,undefined4 *param_2,int param_3)

{
  CEqObj *this;
  bool bVar1;
  undefined4 *puVar2;
  clock_t cVar3;
  int iVar4;
  IBehaviorManager *pIVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  code *pcVar12;
  int *local_1c4;
  int *local_1c0;
  int *local_1bc;
  int *local_1b8;
  char local_1b1;
  undefined4 *local_1b0;
  undefined4 *puStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 *local_1a0;
  int *local_19c;
  undefined4 local_198;
  undefined4 *puStack_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 local_189;
  undefined2 local_188;
  undefined1 local_186;
  undefined1 local_185;
  undefined4 *puStack_184;
  undefined2 local_180;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_179;
  undefined2 local_178;
  undefined1 local_176;
  undefined1 local_175;
  undefined2 local_174;
  undefined1 local_172;
  undefined1 local_171;
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_16d;
  undefined4 *puStack_16c;
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  code *pcStack_134;
  int iStack_130;
  code *local_12c;
  int local_128;
  code *local_124;
  int local_120;
  code *local_11c;
  int local_118;
  code *local_114;
  int local_110;
  code *local_10c;
  int local_108;
  code *local_104;
  int local_100;
  code *local_fc;
  int local_f8;
  code *local_f4;
  int local_f0;
  code *local_ec;
  int local_e8;
  code *local_e4;
  int local_e0;
  undefined1 auStack_dc [4];
  code *local_d8;
  int local_d4;
  code *local_d0;
  int local_cc;
  code *local_c8;
  int local_c4;
  code *local_c0;
  int local_bc;
  code *local_b8;
  int local_b4;
  StyleNode local_b0 [8];
  code *local_a8;
  int local_a4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 local_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [20];
  void *local_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bafc3;
  local_c = ExceptionList;
  if (param_3 != 8) {
    ExceptionList = &local_c;
    (**(code **)FDUMP_exref)
              (0x100003,"%s(%d) : NOTICE:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Chat.cpp",0x8df,
               "Received mis-sized invite message.\n");
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  if ((DAT_0066d44c & 1) == 0) {
    DAT_0066d44c = DAT_0066d44c | 1;
    ExceptionList = &local_c;
    RenderDisplayList::RenderDisplayList((RenderDisplayList *)&DAT_0066d440);
    FUN_005b7e6c(&LAB_00468bf0);
  }
  if (DAT_0066da60 == 0) {
    puVar2 = (undefined4 *)&DAT_0066d440;
  }
  else {
    puVar2 = (undefined4 *)FUN_004683b0();
  }
  iVar4 = DAT_0066da7c;
  switch(*param_2) {
  case 0:
  case 1:
  case 2:
    (**(code **)FDUMP_exref)
              (0x100003,"%s(%d) : NOTICE:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Chat.cpp",0x8ef,
               "Received a group command on a client. This is illegal.\n");
    break;
  case 3:
    local_1bc = (int *)(param_2[1] & 0xffff);
    piVar6 = (int *)FUN_0046cd50(&local_1b0,&local_1bc);
    if ((*piVar6 != *(int *)(iVar4 + 4)) &&
       (local_1c4 = *(int **)(*piVar6 + 0x10), local_1c4 != (int *)0x0)) {
      local_118 = param_1 + 0x3c0;
      local_11c = _vftable__exref;
      local_4 = 0;
      uStack_14c = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 1;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_14c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_11c);
      piVar6 = (int *)FUN_0046baf0(auStack_78);
      piVar6 = (int *)*piVar6;
      uVar9 = FUN_0053e430(auStack_6c);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_2c);
      local_1c4 = (int *)*local_1c4;
      for (; local_1bc != piVar6; local_1bc = (int *)*local_1bc) {
        FUN_0046c800(&local_1b8,local_1c4,local_1bc + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 4:
    FUN_00464d50();
    local_1bc = (int *)(param_2[1] & 0xffff);
    local_1a0 = (undefined4 *)0x0;
    local_198 = 0;
    local_19c = local_1bc;
    cVar3 = clock();
    local_1a0 = (undefined4 *)((cVar3 / 1000) * 1000);
    puVar8 = (undefined4 *)**(undefined4 **)(param_1 + 0x358);
    do {
      if (puVar8 == *(undefined4 **)(param_1 + 0x358)) {
        FUN_0046d600(&local_1b8,*(undefined4 *)(param_1 + 0x358),&local_1a0);
        FUN_00462e30();
        iVar4 = DAT_0066da7c;
        local_1bc = (int *)(param_2[1] & 0xffff);
        piVar6 = (int *)FUN_0046cd50(&local_1b0,&local_1bc);
        if ((*piVar6 != *(int *)(iVar4 + 4)) &&
           (local_1c4 = *(int **)(*piVar6 + 0x10), local_1c4 != (int *)0x0)) {
          piVar6 = (int *)StyleNode::StyleNode(local_b0,0x3ea8);
          local_4 = 2;
          uStack_160 = (**(code **)(*piVar6 + 0x1c))();
          local_4._0_1_ = 3;
          FUN_0046c800(&local_1b8,puVar2[1],&uStack_160);
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0045eeb0();
          local_4 = 0xffffffff;
          StyleNode::~StyleNode(local_b0);
          iStack_130 = param_1 + 0x36c;
          pcStack_134 = _vftable__exref;
          local_4 = 4;
          uStack_158 = (**(code **)(_vftable__exref + 0x1c))();
          local_4._0_1_ = 5;
          FUN_0046c800(&local_1b8,puVar2[1],&uStack_158);
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_0045eeb0();
          pcVar12 = ~RDLRefNode_exref;
          local_4 = 0xffffffff;
          RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_134);
          puVar2 = (undefined4 *)FUN_0046baf0(auStack_3c);
          piVar6 = (int *)*puVar2;
          uVar9 = FUN_0053e430(auStack_5c);
          FUN_0046bba0(uVar9);
          local_1c4 = (int *)FUN_0046baf0(auStack_9c);
          local_1c4 = (int *)*local_1c4;
          for (; local_1bc != piVar6; local_1bc = (int *)*local_1bc) {
            FUN_0046c800(&local_1b8,local_1c4,local_1bc + 2);
          }
          goto LAB_00464b5b;
        }
        break;
      }
      if (((int *)puVar8[3] == local_19c) && (puVar8[4] == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      puVar8 = (undefined4 *)*puVar8;
    } while (!bVar1);
    break;
  case 5:
    local_1b1 = '\0';
    FUN_0053e430(&local_1bc);
    if (local_1bc != *(int **)(param_1 + 0x358)) {
      do {
        if ((local_1bc[4] == 0) && ((int *)local_1bc[3] != DAT_0066da48)) {
          local_1bc = (int *)FUN_00516f70(&local_1b8,local_1bc);
          local_1b1 = '\x01';
        }
        local_1bc = (int *)*local_1bc;
      } while (local_1bc != *(int **)(param_1 + 0x358));
      if (local_1b1 != '\0') {
        FUN_00462e30();
      }
    }
    local_168 = (undefined2)param_2[1];
    local_166 = 0;
    local_165 = 0;
    FUN_0046d170(&local_1a0,&local_168);
    FUN_0046d660(&local_1a0,&local_19c);
    FUN_00462e30();
    iVar4 = DAT_0066da7c;
    local_1bc = (int *)(param_2[1] & 0xffff);
    piVar6 = (int *)FUN_0046cd50(&local_1b0,&local_1bc);
    if ((*piVar6 != *(int *)(iVar4 + 4)) &&
       (local_1c4 = *(int **)(*piVar6 + 0x10), local_1c4 != (int *)0x0)) {
      local_108 = param_1 + 0x3cc;
      local_10c = _vftable__exref;
      local_4 = 6;
      uStack_150 = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 7;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_150);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_10c);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_98);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_90);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_88);
      local_1c4 = (int *)*local_1c4;
      for (; local_1bc != piVar6; local_1bc = (int *)*local_1bc) {
        FUN_0046c800(&local_1b8,local_1c4,local_1bc + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 6:
    local_1bc = (int *)(param_2[1] & 0xffff);
    if (local_1bc != DAT_0066da48) {
      FUN_0053e430(&local_1c0);
      for (; local_1c0 != *(int **)(param_1 + 0x358); local_1c0 = (int *)*local_1c0) {
        if ((local_1c0[4] == 0) && ((int *)local_1c0[3] == local_1bc)) {
          puVar8 = (undefined4 *)FUN_00516f70(&local_1b8,local_1c0);
          local_1c0 = (int *)*puVar8;
          FUN_00462e30();
          break;
        }
      }
    }
    local_17c = (undefined2)param_2[1];
    local_17a = 0;
    local_179 = 0;
    FUN_0046d170(&local_1a0,&local_17c);
    FUN_0046d660(&local_1a0,&local_19c);
    FUN_00462e30();
    iVar4 = DAT_0066da7c;
    local_1c0 = (int *)(param_2[1] & 0xffff);
    piVar6 = (int *)FUN_0046cd50(&local_1b0,&local_1c0);
    if ((*piVar6 != *(int *)(iVar4 + 4)) &&
       (local_1c4 = *(int **)(*piVar6 + 0x10), local_1c4 != (int *)0x0)) {
      local_bc = param_1 + 0x3d8;
      local_c0 = _vftable__exref;
      local_4 = 8;
      uStack_148 = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 9;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_148);
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_c0);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_80);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_a0);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_70);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 7:
    FUN_0046d560();
    FUN_00462e30();
    if (((((DAT_00674a58 != 0) && (iVar4 = FUN_0054baf0(), iVar4 != 0)) && (iVar4 != -0xc)) &&
        ((this = *(CEqObj **)(iVar4 + 0x10), this != (CEqObj *)0x0 &&
         ((*(uint *)(this + 0x4c) & 0x503) == 0x503)))) &&
       ((pIVar5 = CEqObj::get_behavior_interface(this), pIVar5 != (IBehaviorManager *)0x0 &&
        (*(int *)(pIVar5 + 0xc0) == 10)))) {
      FUN_004d8e20(0x13,0);
    }
    local_f8 = param_1 + 0x3e4;
    local_fc = _vftable__exref;
    local_4 = 10;
    uStack_140 = (**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 0xb;
    FUN_0046c800(&local_1b8,puVar2[1],&uStack_140);
    local_4 = CONCAT31(local_4._1_3_,10);
    FUN_0045eeb0();
    pcVar12 = ~RDLRefNode_exref;
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_fc);
    goto LAB_00464b5b;
  case 8:
    local_190 = (undefined2)param_2[1];
    local_18e = 0;
    local_18d = 0;
    FUN_0046d430(&local_190);
    FUN_00462e30();
    iVar4 = DAT_0066da7c;
    local_1c0 = (int *)(param_2[1] & 0xffff);
    piVar6 = (int *)FUN_0046cd50(&local_1b0,&local_1c0);
    if ((*piVar6 != *(int *)(iVar4 + 4)) &&
       (local_1c4 = *(int **)(*piVar6 + 0x10), local_1c4 != (int *)0x0)) {
      local_cc = param_1 + 0x3f0;
      local_d0 = _vftable__exref;
      local_4 = 0xc;
      uStack_138 = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0xd;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_138);
      local_4 = CONCAT31(local_4._1_3_,0xc);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_d0);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_68);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_60);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_58);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 9:
    local_120 = param_1 + 0x414;
    local_124 = _vftable__exref;
    local_4 = 0x12;
    uStack_154 = (**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 0x13;
    FUN_0046c800(&local_1b8,puVar2[1],&uStack_154);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0045eeb0();
    pcVar12 = ~RDLRefNode_exref;
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_124);
    goto LAB_00464b5b;
  case 10:
    local_110 = param_1 + 0x420;
    local_114 = _vftable__exref;
    local_4 = 0x14;
    uStack_164 = (**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 0x15;
    FUN_0046c800(&local_1b8,puVar2[1],&uStack_164);
    local_4 = CONCAT31(local_4._1_3_,0x14);
    FUN_0045eeb0();
    pcVar12 = ~RDLRefNode_exref;
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_114);
    goto LAB_00464b5b;
  case 0xb:
    local_180 = (undefined2)param_2[1];
    local_17e = 0;
    local_17d = 0;
    FUN_0046cd50(&local_1c4,&local_180);
    if ((local_1c4 != *(int **)(iVar4 + 4)) &&
       (local_1c4 = (int *)local_1c4[4], local_1c4 != (int *)0x0)) {
      local_100 = param_1 + 0x42c;
      local_104 = _vftable__exref;
      local_4 = 0x16;
      uStack_144 = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x17;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_144);
      local_4 = CONCAT31(local_4._1_3_,0x16);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_104);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_38);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_30);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_28);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 0xc:
    local_f0 = param_1 + 0x438;
    local_f4 = _vftable__exref;
    local_4 = 0x18;
    iStack_1a8 = (**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 0x19;
    FUN_0046c800(&local_1b8,puVar2[1],&iStack_1a8);
    local_4 = CONCAT31(local_4._1_3_,0x18);
    FUN_0045eeb0();
    pcVar12 = ~RDLRefNode_exref;
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_f4);
    goto LAB_00464b5b;
  case 0xd:
    local_178 = (undefined2)param_2[1];
    local_176 = 0;
    local_175 = 0;
    FUN_0046cd50(&local_1c4,&local_178);
    if ((local_1c4 != *(int **)(iVar4 + 4)) &&
       (local_1c4 = (int *)local_1c4[4], local_1c4 != (int *)0x0)) {
      local_e0 = param_1 + 0x444;
      local_e4 = _vftable__exref;
      local_4 = 0x1a;
      uStack_1a4 = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x1b;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_1a4);
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_e4);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_20);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_94);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_54);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 0xe:
    local_170 = (undefined2)param_2[1];
    local_16e = 0;
    local_16d = 0;
    FUN_0046cd50(&local_1c4,&local_170);
    if ((local_1c4 != *(int **)(iVar4 + 4)) &&
       (local_1c4 = (int *)local_1c4[4], local_1c4 != (int *)0x0)) {
      local_d4 = param_1 + 0x450;
      local_d8 = _vftable__exref;
      local_4 = 0x1c;
      puStack_194 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x1d;
      FUN_0046c800(&local_1b0,puVar2[1],&puStack_194);
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      if (puStack_194 != (undefined4 *)0x0) {
        (**(code **)*puStack_194)(1);
        puStack_194 = (undefined4 *)0x0;
      }
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_d8);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_8c);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_34);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_84);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 0xf:
    if (param_2[1] == DAT_00673344) {
      local_e8 = param_1 + 0x3fc;
      local_ec = _vftable__exref;
      local_4 = 0xe;
      uStack_15c = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0xf;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_15c);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_ec);
    }
    else {
      local_188 = (undefined2)param_2[1];
      local_186 = 0;
      local_185 = 0;
      FUN_0046cd50(&local_1c4,&local_188);
      if ((local_1c4 == *(int **)(iVar4 + 4)) ||
         (local_1c4 = (int *)local_1c4[4], local_1c4 == (int *)0x0)) break;
      local_128 = param_1 + 0x408;
      local_12c = _vftable__exref;
      local_4 = 0x10;
      uStack_13c = (**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x11;
      FUN_0046c800(&local_1b8,puVar2[1],&uStack_13c);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_0045eeb0();
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_12c);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_50);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_48);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_40);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
    }
    goto LAB_00464b5b;
  case 0x10:
    local_18c = (undefined2)param_2[1];
    local_18a = 0;
    local_189 = 0;
    FUN_0046cd50(&local_1c4,&local_18c);
    if ((local_1c4 != *(int **)(iVar4 + 4)) &&
       (local_1c4 = (int *)local_1c4[4], local_1c4 != (int *)0x0)) {
      local_c4 = param_1 + 0x45c;
      local_c8 = _vftable__exref;
      local_4 = 0x1e;
      puStack_16c = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x1f;
      FUN_0046c800(&local_1b0,puVar2[1],&puStack_16c);
      local_4 = CONCAT31(local_4._1_3_,0x1e);
      if (puStack_16c != (undefined4 *)0x0) {
        (**(code **)*puStack_16c)(1);
        puStack_16c = (undefined4 *)0x0;
      }
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_c8);
      puVar2 = (undefined4 *)FUN_0046baf0(auStack_4c);
      piVar6 = (int *)*puVar2;
      uVar9 = FUN_0053e430(auStack_7c);
      FUN_0046bba0(uVar9);
      local_1c4 = (int *)FUN_0046baf0(auStack_24);
      local_1c4 = (int *)*local_1c4;
      for (; local_1c0 != piVar6; local_1c0 = (int *)*local_1c0) {
        FUN_0046c800(&local_1b8,local_1c4,local_1c0 + 2);
      }
      goto LAB_00464b5b;
    }
    break;
  case 0x12:
    local_b4 = param_1 + 0x468;
    local_b8 = _vftable__exref;
    local_4 = 0x20;
    puStack_184 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 0x21;
    FUN_0046c800(&local_1b0,puVar2[1],&puStack_184);
    local_4 = CONCAT31(local_4._1_3_,0x20);
    if (puStack_184 != (undefined4 *)0x0) {
      (**(code **)*puStack_184)(1);
      puStack_184 = (undefined4 *)0x0;
    }
    pcVar12 = ~RDLRefNode_exref;
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_b8);
LAB_00464b5b:
    iVar4 = DAT_0066da60;
    if (DAT_0066da60 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_1b8 = *(int **)(DAT_0066da60 + 0x20);
    iStack_1a8 = DAT_0066da60;
    puVar2 = (undefined4 *)FUN_0053e430(&local_1a0);
    FUN_0046c860(auStack_dc,*puVar2,local_1b8);
    piVar6 = (int *)**(int **)(iVar4 + 4);
    if (piVar6 != *(int **)(iVar4 + 4)) {
      do {
        piVar11 = (int *)RDLRefNode::RDLRefNode
                                   ((RDLRefNode *)local_b0,(RenderDisplayList *)piVar6[2]);
        local_4 = 0x25;
        local_1c4 = (int *)(**(code **)(*piVar11 + 0x1c))();
        local_4._0_1_ = 0x26;
        FUN_0046bb00(&local_1c4);
        local_4 = CONCAT31(local_4._1_3_,0x25);
        FUN_0045eeb0();
        local_4 = 0xffffffff;
        (*pcVar12)();
        ParagraphNode::ParagraphNode((ParagraphNode *)&puStack_1ac);
        local_4 = 0x27;
        uStack_1a4 = (*(code *)puStack_1ac[7])();
        local_4._0_1_ = 0x28;
        FUN_0046bb00(&uStack_1a4);
        local_4 = CONCAT31(local_4._1_3_,0x27);
        FUN_0045eeb0();
        piVar6 = (int *)*piVar6;
        local_4 = 0xffffffff;
        ParagraphNode::~ParagraphNode((ParagraphNode *)&puStack_1ac);
      } while (piVar6 != (int *)*(int *)(iStack_1a8 + 4));
    }
    *(int *)(iStack_1a8 + 0x18) = *(int *)(iStack_1a8 + 0x18) + 1;
    FUN_004684e0();
    ExceptionList = local_c;
    return;
  case 0x14:
    local_174 = (undefined2)param_2[1];
    local_172 = 0;
    local_171 = 0;
    FUN_0046cd50(&local_1c4,&local_174);
    if ((local_1c4 != *(int **)(iVar4 + 4)) && (local_1c4[4] != 0)) {
      local_a4 = param_1 + 0x474;
      local_a8 = _vftable__exref;
      local_4 = 0x22;
      puStack_1ac = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      iVar4 = puVar2[1];
      local_4._0_1_ = 0x23;
      iVar7 = FUN_0042a7e0(iVar4,*(undefined4 *)(iVar4 + 4));
      *(int *)(iVar4 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      FUN_0046ea00(iVar7 + 8,&puStack_1ac);
      puVar2[2] = puVar2[2] + 1;
      local_4 = CONCAT31(local_4._1_3_,0x22);
      if (puStack_1ac != (undefined4 *)0x0) {
        (**(code **)*puStack_1ac)(1);
        puStack_1ac = (undefined4 *)0x0;
      }
      pcVar12 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_a8);
      puVar8 = (undefined4 *)FUN_0046baf0(auStack_74);
      local_1c4 = (int *)*puVar8;
      uVar9 = FUN_0053e430(auStack_44);
      FUN_0046bba0(uVar9);
      puVar8 = (undefined4 *)FUN_0046baf0(auStack_dc);
      local_1c0 = (int *)*puVar8;
      if (local_1bc != local_1c4) {
        do {
          puVar8 = (undefined4 *)local_1c0[1];
          local_1b8 = local_1bc + 2;
          puVar10 = operator_new(0xc);
          *puVar10 = local_1c0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = puVar10;
          }
          puVar10[1] = puVar8;
          local_1c0[1] = (int)puVar10;
          puVar8 = puVar10 + 2;
          *(undefined4 **)puVar10[1] = puVar10;
          local_4 = 0x24;
          local_1b0 = puVar8;
          local_1a0 = puVar8;
          if (puVar8 != (undefined4 *)0x0) {
            uVar9 = (**(code **)(*(int *)*local_1b8 + 0x1c))();
            *puVar8 = uVar9;
          }
          puVar2[2] = puVar2[2] + 1;
          local_1bc = (int *)*local_1bc;
          local_4 = 0xffffffff;
        } while (local_1bc != local_1c4);
      }
      goto LAB_00464b5b;
    }
  }
  iVar4 = DAT_0066da60;
  if (DAT_0066da60 != 0) {
    for (piVar6 = (int *)**(int **)(DAT_0066da60 + 4); piVar6 != *(int **)(DAT_0066da60 + 4);
        piVar6 = (int *)*piVar6) {
      puVar8 = (undefined4 *)piVar6[2];
      if (puVar8 == puVar2) {
        local_1b0 = puVar8;
        FUN_0046c860(&local_1a0,*(undefined4 *)puVar8[1],(undefined4 *)puVar8[1]);
        puVar8[3] = 0;
        FUN_005947a0(local_64,*(undefined4 *)(iVar4 + 0x10),&local_1b0);
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        FUN_005b7e1d(piVar6);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

