
void __thiscall FUN_00570040(int param_1,int param_2,int param_3)

{
  StyleNode *pSVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  char extraout_var;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> *pbVar9;
  code *pcVar10;
  int *piVar11;
  char *pcVar12;
  void *pvVar13;
  uint uVar14;
  ImageNode *this;
  undefined1 uVar15;
  int unaff_EBX;
  ushort *puVar16;
  undefined1 *puVar17;
  undefined3 uStack_1a4;
  char cStack_1a0;
  undefined4 uStack_19d;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  RenderDisplayList aRStack_18c [3];
  bool local_189;
  RenderDisplayList aRStack_188 [4];
  undefined4 local_184;
  uint local_180;
  RDLRefNode aRStack_17c [4];
  uint uStack_178;
  code *pcStack_174;
  int iStack_170;
  undefined4 local_16c;
  TextNode aTStack_168 [4];
  TRANode aTStack_164 [4];
  TextNode aTStack_160 [4];
  RDLRefNode aRStack_15c [4];
  TextNode aTStack_158 [4];
  code *pcStack_154;
  int iStack_150;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_14c [4];
  undefined1 auStack_148 [8];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_140 [4];
  int iStack_13c;
  code *local_138;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_134 [4];
  code *pcStack_130;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_12c [4];
  int iStack_128;
  code *pcStack_124;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_120 [4];
  code *pcStack_11c;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_118 [56];
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_> abStack_e0 [12];
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_d4 [8];
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_> abStack_cc [24];
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_b4 [12];
  int iStack_a8;
  code *pcStack_a4;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_a0 [4];
  code *pcStack_9c;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_98 [76];
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_> abStack_4c [36];
  void *pvStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c34c1;
  pvStack_c = ExceptionList;
  local_16c = 0;
  _local_189 = CONCAT31(aRStack_188._0_3_,*(int *)(param_3 + 0x8c) == DAT_0067ecb8);
  local_184 = CONCAT31(local_184._1_3_,*(int *)(param_3 + 0x90) == *(int *)(param_1 + 0x2c8));
  pcVar10 = *(code **)(param_3 + 4);
  if (*(code **)(param_3 + 4) == (code *)0x0) {
    pcVar10 = _C_exref;
  }
  ExceptionList = &pvStack_c;
  RenderDisplayList::RenderDisplayList((RenderDisplayList *)&local_180);
  local_4 = 0;
  piVar4 = (int *)TextNode::TextNode((TextNode *)&local_138,(ushort *)pcVar10,-1);
  local_4._0_1_ = 1;
  uVar5 = (**(code **)(*piVar4 + 0x1c))();
  cStack_1a0 = (char)uVar5;
  uStack_19d._0_1_ = (char)((uint)uVar5 >> 0x18);
  local_4._0_1_ = 2;
  FUN_0046bb00();
  local_4._0_1_ = 1;
  FUN_0045eeb0();
  local_4 = (uint)local_4._1_3_ << 8;
  TextNode::~TextNode((TextNode *)&local_138);
  FUN_0056f180(param_2,1);
  local_4 = 0xffffffff;
  FUN_0046ba90();
  if (*(int *)(param_3 + 0x2c) == -2) {
    FUN_0046ba60();
    iStack_170 = param_1 + 0x1a0;
    pcStack_174 = _vftable__exref;
    local_4 = 4;
    uStack_1a4 = (**(code **)(_vftable__exref + 0x1c))();
    pvStack_c._0_1_ = 5;
    FUN_0046c800((int)&uStack_19d + 1,local_184);
    pvStack_c._0_1_ = 4;
    FUN_0045eeb0();
    pvStack_c._0_1_ = 3;
    RDLRefNode::~RDLRefNode(aRStack_17c);
    cVar3 = FUN_0058cd00(param_2,3);
    if (cVar3 != '\0') {
      FUN_0046bb50();
      uStack_19d = uStack_19d & 0xffffff00;
      pSVar1 = (StyleNode *)((int)&uStack_19d + 1);
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0x298) == 3) {
          piVar4 = (int *)StyleNode::StyleNode(pSVar1,0xd190);
          pvStack_c._0_1_ = 6;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 7;
          FUN_0046bb00();
          pvStack_c._0_1_ = 6;
          FUN_0045eeb0();
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
          StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
          uStack_19d = CONCAT31(uStack_19d._1_3_,1);
        }
        else {
          piVar4 = (int *)StyleNode::StyleNode(pSVar1,0xd824);
          pvStack_c._0_1_ = 8;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 9;
          FUN_0046bb00();
          pvStack_c._0_1_ = 8;
          FUN_0045eeb0();
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
          StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
        }
        piVar4 = (int *)JustifyNode::JustifyNode((JustifyNode *)((int)&uStack_19d + 1),1);
        pvStack_c._0_1_ = 10;
        (**(code **)(*piVar4 + 0x1c))();
        pvStack_c._0_1_ = 0xb;
        FUN_0046bb00();
        pvStack_c._0_1_ = 10;
      }
      else {
        if (uStack_194._3_1_ == '\0') {
          piVar4 = (int *)StyleNode::StyleNode(pSVar1,48000);
          uVar15 = 0x10;
          pvStack_c._0_1_ = 0x10;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0x11;
        }
        else if (aRStack_18c[0] == (RenderDisplayList)0x0) {
          piVar4 = (int *)StyleNode::StyleNode(pSVar1,0x69f5);
          uVar15 = 0xe;
          pvStack_c._0_1_ = 0xe;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0xf;
        }
        else {
          piVar4 = (int *)StyleNode::StyleNode(pSVar1,0x3343);
          uVar15 = 0xc;
          pvStack_c._0_1_ = 0xc;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0xd;
        }
        FUN_0046bb00();
        pvStack_c._0_1_ = uVar15;
        FUN_0045eeb0();
        pvStack_c._0_1_ = 3;
        StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
        piVar4 = (int *)JustifyNode::JustifyNode((JustifyNode *)((int)&uStack_19d + 1),1);
        pvStack_c._0_1_ = 0x14;
        (**(code **)(*piVar4 + 0x1c))();
        pvStack_c._0_1_ = 0x15;
        FUN_0046bb00();
        pvStack_c._0_1_ = 0x14;
      }
      FUN_0045eeb0();
      pvStack_c._0_1_ = 3;
      JustifyNode::~JustifyNode((JustifyNode *)((int)&uStack_19d + 1));
      uVar2 = *(undefined4 *)(unaff_EBX + 4);
      puVar8 = (undefined4 *)FUN_0053e430();
      FUN_005754b0(uVar2,*puVar8);
      if ((char)uStack_19d != '\0') {
        if (*(char *)(param_1 + 0x29f) == '\0') {
          piVar4 = (int *)ImageNode::ImageNode
                                    ((ImageNode *)((int)&uStack_19d + 1),
                                     *(Image **)(param_1 + 0x26c));
          pvStack_c._0_1_ = 0x18;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0x19;
          FUN_0046bb00();
          pvStack_c._0_1_ = 0x18;
        }
        else {
          piVar4 = (int *)ImageNode::ImageNode
                                    ((ImageNode *)((int)&uStack_19d + 1),
                                     *(Image **)(param_1 + 0x270));
          pvStack_c._0_1_ = 0x16;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0x17;
          FUN_0046bb00();
          pvStack_c._0_1_ = 0x16;
        }
        FUN_0045eeb0();
        pvStack_c._0_1_ = 3;
        ImageNode::~ImageNode((ImageNode *)((int)&uStack_19d + 1));
      }
LAB_00570a63:
      FUN_0058cdb0(param_2);
    }
LAB_00570a6f:
    pvStack_c = (void *)0xffffffff;
    FUN_0046ba90();
  }
  else {
    if (*(int *)(param_3 + 0x2c) == -1) {
      FUN_0046ba60();
      iStack_150 = param_1 + 0x1ac;
      pcStack_154 = _vftable__exref;
      local_4 = 0x1b;
      local_16c = (**(code **)(_vftable__exref + 0x1c))();
      pvStack_c._0_1_ = 0x1c;
      FUN_0046c800(&stack0xfffffe54,local_184);
      pvStack_c._0_1_ = 0x1b;
      FUN_0045eeb0();
      pvStack_c._0_1_ = 0x1a;
      RDLRefNode::~RDLRefNode(aRStack_15c);
      cVar3 = FUN_0058cd00(param_2,3);
      if (cVar3 != '\0') {
        FUN_0046bb50();
        uStack_19d = uStack_19d & 0xffffff00;
        pSVar1 = (StyleNode *)((int)&uStack_19d + 1);
        if (param_2 == 0) {
          if (*(int *)(param_1 + 0x298) == 3) {
            piVar4 = (int *)StyleNode::StyleNode(pSVar1,0xd190);
            pvStack_c._0_1_ = 0x1d;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x1e;
            FUN_0046bb00();
            pvStack_c._0_1_ = 0x1d;
            FUN_0045eeb0();
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1a);
            StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
            uStack_19d = CONCAT31(uStack_19d._1_3_,1);
          }
          else {
            piVar4 = (int *)StyleNode::StyleNode(pSVar1,0xd824);
            pvStack_c._0_1_ = 0x1f;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x20;
            FUN_0046bb00();
            pvStack_c._0_1_ = 0x1f;
            FUN_0045eeb0();
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1a);
            StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
          }
          piVar4 = (int *)JustifyNode::JustifyNode((JustifyNode *)((int)&uStack_19d + 1),1);
          pvStack_c._0_1_ = 0x21;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0x22;
          FUN_0046bb00();
          pvStack_c._0_1_ = 0x21;
        }
        else {
          if (uStack_194._3_1_ == '\0') {
            piVar4 = (int *)StyleNode::StyleNode(pSVar1,48000);
            uVar15 = 0x27;
            pvStack_c._0_1_ = 0x27;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x28;
          }
          else if (aRStack_18c[0] == (RenderDisplayList)0x0) {
            piVar4 = (int *)StyleNode::StyleNode(pSVar1,0x69f5);
            uVar15 = 0x25;
            pvStack_c._0_1_ = 0x25;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x26;
          }
          else {
            piVar4 = (int *)StyleNode::StyleNode(pSVar1,0x3343);
            uVar15 = 0x23;
            pvStack_c._0_1_ = 0x23;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x24;
          }
          FUN_0046bb00();
          pvStack_c._0_1_ = uVar15;
          FUN_0045eeb0();
          pvStack_c._0_1_ = 0x1a;
          StyleNode::~StyleNode((StyleNode *)((int)&uStack_19d + 1));
          piVar4 = (int *)JustifyNode::JustifyNode((JustifyNode *)((int)&uStack_19d + 1),1);
          pvStack_c._0_1_ = 0x2b;
          (**(code **)(*piVar4 + 0x1c))();
          pvStack_c._0_1_ = 0x2c;
          FUN_0046bb00();
          pvStack_c._0_1_ = 0x2b;
        }
        FUN_0045eeb0();
        pvStack_c._0_1_ = 0x1a;
        JustifyNode::~JustifyNode((JustifyNode *)((int)&uStack_19d + 1));
        uVar2 = *(undefined4 *)(unaff_EBX + 4);
        puVar8 = (undefined4 *)FUN_0053e430();
        FUN_005754b0(uVar2,*puVar8);
        if ((char)uStack_19d != '\0') {
          if (*(char *)(param_1 + 0x29f) == '\0') {
            piVar4 = (int *)ImageNode::ImageNode
                                      ((ImageNode *)((int)&uStack_19d + 1),
                                       *(Image **)(param_1 + 0x26c));
            pvStack_c._0_1_ = 0x2f;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x30;
            FUN_0046bb00();
            pvStack_c._0_1_ = 0x2f;
          }
          else {
            piVar4 = (int *)ImageNode::ImageNode
                                      ((ImageNode *)((int)&uStack_19d + 1),
                                       *(Image **)(param_1 + 0x270));
            pvStack_c._0_1_ = 0x2d;
            (**(code **)(*piVar4 + 0x1c))();
            pvStack_c._0_1_ = 0x2e;
            FUN_0046bb00();
            pvStack_c._0_1_ = 0x2d;
          }
          FUN_0045eeb0();
          pvStack_c._0_1_ = 0x1a;
          ImageNode::~ImageNode((ImageNode *)((int)&uStack_19d + 1));
        }
        goto LAB_00570a63;
      }
      goto LAB_00570a6f;
    }
    pcStack_124 = 
    _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
    pcStack_11c = 
    _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
    std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
    basic_ios<unsigned_short,std::char_traits<unsigned_short>_>(abStack_cc);
    local_16c = 1;
    local_4 = 0x31;
    std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
    basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
              ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&pcStack_124,
               abStack_118);
    puStack_8 = (undefined1 *)0x32;
    std::
    basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
    ::
    basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)&pcStack_11c,3);
    *(code **)((int)&iStack_128 + *(int *)(iStack_128 + 4)) = _vftable__exref;
    puStack_8 = (undefined1 *)0x33;
    pbVar6 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                       (abStack_120,*(uint *)(param_3 + 0x2c));
    std::ends(pbVar6);
    iVar7 = std::
            basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)&iStack_128);
    pvStack_c._0_1_ = 0x34;
    pcVar10 = *(code **)(iVar7 + 4);
    if (*(code **)(iVar7 + 4) == (code *)0x0) {
      pcVar10 = _C_exref;
    }
    RenderDisplayList::RenderDisplayList(aRStack_188);
    pvStack_c._0_1_ = 0x35;
    piVar4 = (int *)TextNode::TextNode((TextNode *)&pcStack_154,(ushort *)pcVar10,-1);
    pvStack_c._0_1_ = 0x36;
    (**(code **)(*piVar4 + 0x1c))();
    pvStack_c._0_1_ = 0x37;
    FUN_0046bb00();
    pvStack_c._0_1_ = 0x36;
    FUN_0045eeb0();
    pvStack_c._0_1_ = 0x35;
    TextNode::~TextNode((TextNode *)&pcStack_154);
    FUN_0056f180(param_2,3,aRStack_188,CONCAT31((undefined3)uStack_190,uStack_194._3_1_));
    pvStack_c._0_1_ = 0x34;
    FUN_0046ba90();
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x33);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy(abStack_140,true);
    pvStack_c = (void *)0xffffffff;
    std::
    basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
    ::
    ~basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              (abStack_d4);
    std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
    ~basic_ios<unsigned_short,std::char_traits<unsigned_short>_>
              ((basic_ios<unsigned_short,std::char_traits<unsigned_short>_> *)abStack_d4);
  }
  cVar3 = FUN_005a9950();
  iVar7 = param_1 + 0x1b8;
  if (cVar3 == '\0') {
    iVar7 = param_1 + 0x1c4;
  }
  FUN_0056f180(param_2,2,iVar7,CONCAT31((undefined3)uStack_194,uStack_198._3_1_),uStack_190);
  pcVar10 = *(code **)(param_3 + 0x48);
  if (*(code **)(param_3 + 0x48) == (code *)0x0) {
    pcVar10 = _C_exref;
  }
  RenderDisplayList::RenderDisplayList(aRStack_18c);
  uStack_10 = 0x38;
  piVar4 = (int *)TextNode::TextNode(aTStack_158,(ushort *)pcVar10,-1);
  uStack_10._0_1_ = 0x39;
  (**(code **)(*piVar4 + 0x1c))();
  uStack_10._0_1_ = 0x3a;
  FUN_0046bb00(&stack0xfffffe58);
  uStack_10._0_1_ = 0x39;
  FUN_0045eeb0();
  uStack_10 = CONCAT31(uStack_10._1_3_,0x38);
  TextNode::~TextNode(aTStack_158);
  FUN_0056f180(param_2,0,aRStack_18c,CONCAT31((undefined3)uStack_194,uStack_198._3_1_),uStack_190);
  uStack_10 = 0xffffffff;
  FUN_0046ba90();
  pcStack_a4 = 
  _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  pcStack_9c = 
  _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_>(abStack_4c);
  uStack_178 = uStack_178 | 2;
  uStack_10 = 0x3b;
  std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&pcStack_a4,
             abStack_98);
  uStack_14 = 0x3c;
  std::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&pcStack_9c,3);
  *(code **)((int)&iStack_a8 + *(int *)(iStack_a8 + 4)) = _vftable__exref;
  uVar14 = *(uint *)(param_3 + 0x88);
  puVar16 = (ushort *)&DAT_005e2e5c;
  uStack_14 = 0x3d;
  pbVar6 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (abStack_a0,*(uint *)(param_3 + 0x84));
  pbVar9 = std::operator<<(pbVar6,puVar16);
  pbVar6 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (pbVar9,uVar14);
  std::ends(pbVar6);
  puVar17 = auStack_148;
  iVar7 = std::
          basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)&iStack_a8);
  pcVar10 = *(code **)(iVar7 + 4);
  uStack_18 = 0x3e;
  if (pcVar10 == (code *)0x0) {
    pcVar10 = _C_exref;
  }
  RenderDisplayList::RenderDisplayList((RenderDisplayList *)&uStack_194);
  uStack_18 = 0x3f;
  piVar4 = (int *)TextNode::TextNode(aTStack_160,(ushort *)pcVar10,-1);
  uStack_18 = 0x40;
  (**(code **)(*piVar4 + 0x1c))(puVar17);
  uStack_18 = 0x41;
  FUN_0046bb00(&stack0xfffffe50);
  uStack_18 = 0x40;
  FUN_0045eeb0();
  uStack_18 = 0x3f;
  TextNode::~TextNode(aTStack_160);
  FUN_0056f180(param_2,4,&uStack_194,uStack_19d,uStack_198);
  uStack_18 = 0x3e;
  FUN_0046ba90();
  uStack_18 = 0x3d;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(abStack_14c,true);
  local_138 = 
  _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  pcStack_130 = 
  _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_>(abStack_e0);
  local_180 = local_180 | 4;
  uStack_18 = 0x42;
  std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&local_138,
             abStack_12c);
  uStack_1c = 0x43;
  std::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&pcStack_130,3);
  *(code **)((int)&iStack_13c + *(int *)(iStack_13c + 4)) = _vftable__exref;
  uVar14 = (uint)*(byte *)(param_3 + 0x8e);
  uStack_1c._0_1_ = 0x44;
  puVar16 = (ushort *)&DAT_005e2e58;
  pbVar6 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (abStack_134,(uint)*(byte *)(param_3 + 0x8f));
  pbVar9 = std::operator<<(pbVar6,puVar16);
  pbVar6 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (pbVar9,uVar14);
  std::ends(pbVar6);
  FUN_0046ba60(&uStack_19d);
  uStack_1c._0_1_ = 0x45;
  uVar15 = (undefined1)uStack_1c;
  uStack_1c._0_1_ = 0x45;
  if (*(int *)(param_3 + 0x8c) != DAT_0067ecb8) {
    FUN_00571220(0,0,0,0,0x1d1dbf);
    piVar4 = (int *)TRANode::TRANode(aTStack_164,(TextRenderAttributes *)aRStack_18c,0xffffff00,0);
    uStack_1c._0_1_ = 0x46;
    (**(code **)(*piVar4 + 0x1c))();
    uStack_1c._0_1_ = 0x47;
    FUN_0046c800(&stack0xfffffe54,uStack_194,&stack0xfffffe4c);
    uStack_1c._0_1_ = 0x46;
    FUN_0045eeb0();
    uStack_1c._0_1_ = 0x45;
    TRANode::~TRANode(aTStack_164);
    uVar15 = (undefined1)uStack_1c;
  }
  uStack_1c._0_1_ = uVar15;
  piVar4 = &iStack_150;
  iVar7 = std::
          basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)&iStack_13c);
  uStack_20._0_1_ = 0x48;
  pcVar10 = *(code **)(iVar7 + 4);
  if (*(code **)(iVar7 + 4) == (code *)0x0) {
    pcVar10 = _C_exref;
  }
  piVar11 = (int *)TextNode::TextNode(aTStack_168,(ushort *)pcVar10,-1);
  uStack_20._0_1_ = 0x49;
  (**(code **)(*piVar11 + 0x1c))(piVar4);
  uStack_20._0_1_ = 0x4a;
  FUN_0046bb00(&stack0xfffffe48);
  uStack_20._0_1_ = 0x49;
  FUN_0045eeb0();
  uStack_20._0_1_ = 0x48;
  TextNode::~TextNode(aTStack_168);
  uStack_20._0_1_ = 0x45;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)&pcStack_154,true);
  uVar2 = CONCAT13((char)uStack_19d,(int3)uVar5);
  FUN_0056f180(param_2,5,(int)&uStack_19d + 1,CONCAT31(uStack_1a4,extraout_var),uVar2);
  uStack_20._0_1_ = 0x44;
  FUN_0046ba90();
  uStack_20._0_1_ = 0x3d;
  std::
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_vbase_destructor_
            ((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)abStack_140);
  iVar7 = param_1 + 0x1b8;
  if (*(char *)(param_3 + 0x3e) == '\0') {
    iVar7 = param_1 + 0x1c4;
  }
  FUN_0056f180(param_2,6,iVar7,CONCAT31(uStack_1a4,extraout_var),uVar2);
  RenderDisplayList::RenderDisplayList((RenderDisplayList *)aRStack_17c);
  uStack_20._0_1_ = 0x4b;
  uVar15 = (undefined1)uStack_20;
  uStack_20._0_1_ = 0x4b;
  if (*(char *)(param_3 + 0x94) != '\0') {
    if (cStack_1a0 == '\0') {
      uStack_20._0_1_ = uVar15;
      if (extraout_var == '\0') {
        piVar4 = (int *)ImageNode::ImageNode((ImageNode *)&uStack_190,*(Image **)(param_1 + 0x27c));
        uStack_20._0_1_ = 0x50;
        (**(code **)(*piVar4 + 0x1c))();
        uStack_20._0_1_ = 0x51;
        FUN_0046bb00(&stack0xfffffe48);
        uStack_20._0_1_ = 0x50;
      }
      else {
        piVar4 = (int *)ImageNode::ImageNode((ImageNode *)&uStack_190,*(Image **)(param_1 + 0x284));
        uStack_20._0_1_ = 0x4e;
        (**(code **)(*piVar4 + 0x1c))();
        uStack_20._0_1_ = 0x4f;
        FUN_0046bb00(&stack0xfffffe48);
        uStack_20._0_1_ = 0x4e;
      }
    }
    else {
      piVar4 = (int *)ImageNode::ImageNode((ImageNode *)&uStack_190,*(Image **)(param_1 + 0x274));
      uStack_20._0_1_ = 0x4c;
      (**(code **)(*piVar4 + 0x1c))();
      uStack_20._0_1_ = 0x4d;
      FUN_0046bb00(&stack0xfffffe48);
      uStack_20._0_1_ = 0x4c;
    }
    FUN_0045eeb0();
    uStack_20._0_1_ = 0x4b;
    ImageNode::~ImageNode((ImageNode *)&uStack_190);
    uVar15 = (undefined1)uStack_20;
  }
  uStack_20._0_1_ = uVar15;
  if (*(char *)(param_3 + 0x96) == '\0') goto LAB_00571167;
  if (cStack_1a0 == '\0') {
    if (extraout_var != '\0') {
      piVar4 = (int *)ImageNode::ImageNode((ImageNode *)&uStack_190,*(Image **)(param_1 + 0x288));
      uVar15 = 0x54;
      uStack_20._0_1_ = 0x54;
      (**(code **)(*piVar4 + 0x1c))();
      uStack_20._0_1_ = 0x55;
      goto LAB_005710ea;
    }
    piVar4 = (int *)ImageNode::ImageNode((ImageNode *)aRStack_188,*(Image **)(param_1 + 0x280));
    uStack_20._0_1_ = 0x56;
    (**(code **)(*piVar4 + 0x1c))();
    uStack_20._0_1_ = 0x57;
    FUN_0046bb00(&stack0xfffffe40);
    uStack_20 = CONCAT31(uStack_20._1_3_,0x56);
    FUN_0045eeb0();
    this = (ImageNode *)aRStack_188;
  }
  else {
    piVar4 = (int *)ImageNode::ImageNode((ImageNode *)&uStack_190,*(Image **)(param_1 + 0x278));
    uVar15 = 0x52;
    uStack_20._0_1_ = 0x52;
    (**(code **)(*piVar4 + 0x1c))();
    uStack_20._0_1_ = 0x53;
LAB_005710ea:
    FUN_0046bb00(&stack0xfffffe48);
    uStack_20 = CONCAT31(uStack_20._1_3_,uVar15);
    FUN_0045eeb0();
    this = (ImageNode *)&uStack_190;
  }
  uStack_20._0_1_ = 0x4b;
  ImageNode::~ImageNode(this);
LAB_00571167:
  FUN_0056f180(param_2,7,aRStack_17c,CONCAT31(uStack_1a4,extraout_var),
               CONCAT13((char)uStack_19d,(int3)uVar5));
  uStack_20._0_1_ = 0x3d;
  FUN_0046ba90();
  pcVar12 = (char *)FUN_0058d0b0(param_2);
  pcVar12[1] = extraout_var;
  *pcVar12 = extraout_var;
  pvVar13 = operator_new(0xa4);
  uStack_20._0_1_ = 0x58;
  if (pvVar13 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00571280(param_3);
  }
  uStack_20 = CONCAT31(uStack_20._1_3_,0x3d);
  FUN_00575520(uVar5);
  FUN_00599980();
  uStack_20 = 0xffffffff;
  std::
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_vbase_destructor_(abStack_b4);
  ExceptionList = pvStack_28;
  return;
}

