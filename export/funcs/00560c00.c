
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00560c00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char unaff_retaddr;
  code *local_d0;
  code *local_cc;
  int local_c8;
  undefined4 *puStack_c4;
  code *pcStack_c0;
  code *pcStack_bc;
  TextNode aTStack_b8 [24];
  int iStack_a0;
  code *pcStack_9c;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_98 [4];
  code *pcStack_94;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_90 [68];
  code *apcStack_4c [2];
  code *apcStack_44 [13];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1d13;
  pvStack_c = ExceptionList;
  local_d0 = (code *)0x0;
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  ExceptionList = &pvStack_c;
  FUN_0057bff0();
  FUN_0057c0e0(uVar2,0);
  FUN_0057b370();
  uVar2 = StyleNode::StyleNode((StyleNode *)&local_cc,0x4433);
  local_4 = 0;
  FUN_0057b470(uVar2);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_cc);
  local_c8 = param_1 + 0x138;
  local_cc = _vftable__exref;
  local_4 = 1;
  FUN_0057b470(&local_cc);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_cc);
  local_d0 = _vftable__exref;
  local_4 = 2;
  FUN_0057b470(&local_d0);
  local_4 = 0xffffffff;
  uVar2 = StyleNode::StyleNode((StyleNode *)&local_cc,0x9ca4);
  local_4 = 3;
  FUN_0057b470(uVar2);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_cc);
  uVar2 = JustifyNode::JustifyNode((JustifyNode *)&local_cc,1);
  local_4 = 4;
  FUN_0057b470(uVar2);
  local_4 = 0xffffffff;
  JustifyNode::~JustifyNode((JustifyNode *)&local_cc);
  local_c8 = FUN_0046b890(*(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x34));
  local_cc = _vftable__exref;
  local_4 = 5;
  FUN_0057b470(&local_cc);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_cc);
  local_d0 = _vftable__exref;
  local_4 = 6;
  FUN_0057b470(&local_d0);
  local_d0 = _vftable__exref;
  local_4 = 7;
  FUN_0057b470(&local_d0);
  local_4 = 0xffffffff;
  pcStack_c0 = (code *)(**(code **)(**(int **)TheDB_exref + 4))
                                 (*(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x38));
  if (pcStack_c0 != (code *)0x0) {
    uVar2 = StyleNode::StyleNode((StyleNode *)&local_d0,0x4433);
    puStack_8 = (undefined1 *)0x8;
    FUN_0057b470(uVar2);
    puStack_8 = (undefined1 *)0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_d0);
    local_cc = (code *)(param_1 + 0x15c);
    local_d0 = _vftable__exref;
    puStack_8 = (undefined1 *)0x9;
    FUN_0057b470(&local_d0);
    puStack_8 = (undefined1 *)0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_d0);
    puStack_8 = (undefined1 *)0xa;
    FUN_0057b470(&stack0xffffff2c);
    puStack_8 = (undefined1 *)0xffffffff;
    uVar2 = StyleNode::StyleNode((StyleNode *)&local_d0,0x9ca4);
    puStack_8 = (undefined1 *)0xb;
    FUN_0057b470(uVar2);
    puStack_8 = (undefined1 *)0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_d0);
    uVar2 = JustifyNode::JustifyNode((JustifyNode *)&local_d0,1);
    puStack_8 = (undefined1 *)0xc;
    FUN_0057b470(uVar2);
    puStack_8 = (undefined1 *)0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_d0);
    pcStack_94 = 
    _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
    pcStack_9c = 
    _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
    std::ios_base::ios_base((ios_base *)apcStack_44);
    apcStack_44[0] = _vftable__exref;
    puStack_8 = (undefined1 *)0xd;
    std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
    basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
              ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&pcStack_9c,
               abStack_90);
    pvStack_c = (void *)0xe;
    std::
    basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
    ::
    basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)&pcStack_94,3);
    *(code **)((int)&iStack_a0 + *(int *)(iStack_a0 + 4)) = _vftable__exref;
    pvStack_c = (void *)0xf;
    pbVar3 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                       (abStack_98,puStack_c4[0xb]);
    std::ends(pbVar3);
    iVar4 = std::
            basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)&iStack_a0);
    pvStack_10._0_1_ = 0x10;
    pcVar8 = *(code **)(iVar4 + 4);
    if (*(code **)(iVar4 + 4) == (code *)0x0) {
      pcVar8 = _C_exref;
    }
    uVar2 = TextNode::TextNode(aTStack_b8,(ushort *)pcVar8,-1);
    pvStack_10._0_1_ = 0x11;
    FUN_0057b470(uVar2);
    pvStack_10._0_1_ = 0x10;
    TextNode::~TextNode(aTStack_b8);
    pvStack_10._0_1_ = 0xf;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)&stack0xffffff28,true);
    pvStack_10._0_1_ = 0x12;
    FUN_0057b470(&stack0xffffff24);
    pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x13);
    FUN_0057b470(&stack0xffffff24);
    pvStack_10 = (void *)0xffffffff;
    std::
    basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
    ::
    ~basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)apcStack_4c);
    apcStack_4c[0] = _vftable__exref;
    std::ios_base::~ios_base((ios_base *)apcStack_4c);
    uVar2 = StyleNode::StyleNode((StyleNode *)&stack0xffffff28,0x4433);
    pvStack_10 = (void *)0x14;
    FUN_0057b470(uVar2);
    pvStack_10 = (void *)0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&stack0xffffff28);
    pvStack_10 = (void *)0x15;
    FUN_0057b470(&stack0xffffff28);
    pvStack_10 = (void *)0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&stack0xffffff28);
    pvStack_10 = (void *)0x16;
    FUN_0057b470(&stack0xffffff24);
    pvStack_10 = (void *)0xffffffff;
    uVar2 = StyleNode::StyleNode((StyleNode *)&stack0xffffff28,0x9ca4);
    pvStack_10 = (void *)0x17;
    FUN_0057b470(uVar2);
    pvStack_10 = (void *)0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&stack0xffffff28);
    uVar2 = JustifyNode::JustifyNode((JustifyNode *)&stack0xffffff28,1);
    pvStack_10 = (void *)0x18;
    FUN_0057b470(uVar2);
    pvStack_10 = (void *)0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&stack0xffffff28);
    pcVar8 = *(code **)(local_c8 + 0x10);
    if (*(code **)(local_c8 + 0x10) == (code *)0x0) {
      pcVar8 = _C_exref;
    }
    CreateID((char *)pcVar8);
    uVar5 = Archetype::GetShipID((ID_String *)&stack0xffffff24);
    FUN_0046b6c0(uVar5);
    pvStack_10 = (void *)0x19;
    FUN_0057b470(&stack0xffffff28);
    pvStack_10 = (void *)0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&stack0xffffff28);
    pvStack_10 = (void *)0x1a;
    FUN_0057b470(&stack0xffffff24);
    pvStack_10 = (void *)0x1b;
    FUN_0057b470(&stack0xffffff24);
    puVar7 = *(undefined4 **)(param_1 + 0x16c);
    puStack_c4 = (undefined4 *)*puVar7;
    pvStack_10 = (void *)0xffffffff;
    while (puStack_c4 != puVar7) {
      puVar6 = (undefined4 *)FUN_0053ab20(&stack0xffffff28,0);
      FUN_0046d680(&stack0xffffff24,*puVar6);
    }
    cVar1 = FUN_0057da40(*(undefined4 *)(local_c8 + 8),param_1 + 0x168);
    if (cVar1 != '\0') {
      uVar2 = StyleNode::StyleNode((StyleNode *)&stack0xffffff28,0x9ca4);
      pvStack_10 = (void *)0x1c;
      FUN_0057b470(uVar2);
      pvStack_10 = (void *)0xffffffff;
      StyleNode::~StyleNode((StyleNode *)&stack0xffffff28);
      uVar2 = JustifyNode::JustifyNode((JustifyNode *)&stack0xffffff28,0);
      pvStack_10 = (void *)0x1d;
      FUN_0057b470(uVar2);
      pvStack_10 = (void *)0xffffffff;
      JustifyNode::~JustifyNode((JustifyNode *)&stack0xffffff28);
      pcStack_bc = (code *)(param_1 + 0x168);
      pcStack_c0 = _vftable__exref;
      pvStack_10 = (void *)0x1e;
      FUN_0057b470(&pcStack_c0);
      pvStack_10 = (void *)0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_c0);
    }
  }
  if (unaff_retaddr != '\0') {
    iVar4 = (**(code **)(**(int **)TheDB_exref + 8))
                      (*(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x3c));
    if (iVar4 == 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : WARNING:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Interface\\CharCreate.cpp",0x19d,
                 "Failed to retrieve pilot information.\n");
    }
    else {
      pcVar8 = *(code **)(iVar4 + 8);
      if (*(code **)(iVar4 + 8) == (code *)0x0) {
        pcVar8 = _C_exref;
      }
      FUN_0059b020(pcVar8);
      iVar10 = *(int *)(param_1 + 0x104);
      iVar11 = *(int *)(iVar4 + 0x18);
      if (iVar11 != *(int *)(iVar4 + 0x1c)) {
        do {
          pcVar8 = *(code **)(iVar11 + 4);
          if (*(code **)(iVar11 + 4) == (code *)0x0) {
            pcVar8 = _C_exref;
          }
          FUN_00560ab0(pcVar8,0,0,0x3f800000,2);
          iVar11 = iVar11 + 0x10;
        } while (iVar11 != *(int *)(iVar4 + 0x1c));
      }
      pcStack_c0 = (code *)0x3dcccccd;
      do {
        if (_DAT_005d043c <= (float)pcStack_c0) {
          pcStack_bc = (code *)0x3e4ccccd;
        }
        else {
          pcStack_bc = pcStack_c0;
        }
        if (*(int *)(iVar10 + 0x8c) != 0) {
          iVar11 = **(int **)Anim_exref;
          pcVar8 = (code *)((float)pcStack_bc * *(float *)(iVar10 + 0x2f0));
          local_d0 = pcVar8;
          uVar2 = FUN_004ca480(pcVar8);
          (**(code **)(iVar11 + 0x6c))(*(undefined4 *)Anim_exref,uVar2);
          iVar11 = **(int **)Engine_exref;
          uVar2 = FUN_004ca480(0,pcVar8);
          (**(code **)(iVar11 + 0x6c))(*(undefined4 *)Engine_exref,uVar2);
          cVar1 = FUN_00560a80();
          if (cVar1 != '\0') {
            puVar6 = (undefined4 *)(iVar10 + 0x2e0);
            puVar7 = (undefined4 *)(iVar10 + 0xd0);
            iVar11 = 4;
            do {
              *puVar7 = 0;
              *(undefined1 *)(puVar7 + 1) = 0;
              *puVar6 = 0xffffffff;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 0x21;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        pcStack_c0 = (code *)((float)pcStack_c0 - (float)pcStack_bc);
      } while ((float)_DAT_005c8ba8 < (float)pcStack_c0);
      iVar11 = *(int *)(iVar10 + 0x8c);
      if (iVar11 != 0) {
        (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,iVar11);
        piVar9 = (int *)(iVar10 + 0x2e0);
        puVar7 = (undefined4 *)(iVar10 + 0xd0);
        iVar10 = 4;
        do {
          if (*piVar9 != -1) {
            *puVar7 = 0;
            *(undefined1 *)(puVar7 + 1) = 0;
            *piVar9 = -1;
          }
          piVar9 = piVar9 + 1;
          puVar7 = puVar7 + 0x21;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = *(int *)(iVar4 + 0x18);
      if (iVar10 != *(int *)(iVar4 + 0x1c)) {
        do {
          pcVar8 = *(code **)(iVar10 + 4);
          if (*(code **)(iVar10 + 4) == (code *)0x0) {
            pcVar8 = _C_exref;
          }
          FUN_00560ab0(pcVar8,0,0,0x3f800000,2);
          iVar10 = iVar10 + 0x10;
        } while (iVar10 != *(int *)(iVar4 + 0x1c));
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}

