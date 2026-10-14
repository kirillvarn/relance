
void __thiscall FUN_00569170(int param_1,undefined4 param_2,CHARACTER_ID *param_3)

{
  bool bVar1;
  int *piVar2;
  basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_190;
  undefined4 local_18c;
  RenderDisplayList local_188 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_178 [4];
  undefined1 auStack_174 [4];
  TextNode local_170 [4];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_16c [4];
  undefined1 auStack_168 [12];
  TextNode aTStack_15c [28];
  TextNode aTStack_140 [24];
  int iStack_128;
  code *pcStack_124;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_120 [4];
  code *pcStack_11c;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_118 [68];
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_d4 [8];
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_> abStack_cc [40];
  int iStack_a4;
  code *pcStack_a0;
  basic_ostream<unsigned_short,std::char_traits<unsigned_short>_> abStack_9c [4];
  code *pcStack_98;
  basic_streambuf<unsigned_short,std::char_traits<unsigned_short>_> abStack_94 [68];
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_50 [8];
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_> abStack_48 [44];
  void *pvStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c2623;
  pvStack_c = ExceptionList;
  local_190 = 0;
  ExceptionList = &pvStack_c;
  bVar1 = operator==(param_3,(CHARACTER_ID *)(param_1 + 0x399));
  local_18c = CONCAT31(local_18c._1_3_,bVar1);
  pcVar9 = *(code **)(param_3 + 0x208);
  if (*(code **)(param_3 + 0x208) == (code *)0x0) {
    pcVar9 = _C_exref;
  }
  RenderDisplayList::RenderDisplayList(local_188);
  local_4 = 0;
  piVar2 = (int *)TextNode::TextNode(local_170,(ushort *)pcVar9,-1);
  local_4._0_1_ = 1;
  local_190 = (**(code **)(*piVar2 + 0x1c))();
  local_4._0_1_ = 2;
  FUN_0046bb00(&local_190);
  local_4._0_1_ = 1;
  FUN_0045eeb0();
  local_4 = (uint)local_4._1_3_ << 8;
  TextNode::~TextNode(local_170);
  uVar11 = local_18c;
  FUN_00568880(param_2,0,local_188,1,local_18c);
  local_4 = 0xffffffff;
  FUN_0046ba90();
  pcStack_124 = 
  _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  pcStack_11c = 
  _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_>(abStack_cc);
  local_190 = 1;
  local_4 = 3;
  std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&pcStack_124,
             abStack_118);
  puStack_8 = (undefined1 *)0x4;
  std::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&pcStack_11c,3);
  *(code **)((int)&iStack_128 + *(int *)(iStack_128 + 4)) = _vftable__exref;
  puStack_8 = (undefined1 *)0x5;
  pbVar3 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (abStack_120,*(int *)(param_3 + 0x234));
  std::ends(pbVar3);
  puVar7 = auStack_174;
  iVar4 = std::
          basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)&iStack_128);
  pcVar9 = *(code **)(iVar4 + 4);
  pvStack_c._0_1_ = 6;
  if (pcVar9 == (code *)0x0) {
    pcVar9 = _C_exref;
  }
  RenderDisplayList::RenderDisplayList((RenderDisplayList *)&local_190);
  pvStack_c._0_1_ = 7;
  piVar2 = (int *)TextNode::TextNode(aTStack_140,(ushort *)pcVar9,-1);
  pvStack_c._0_1_ = 8;
  (**(code **)(*piVar2 + 0x1c))(puVar7);
  pvStack_c._0_1_ = 9;
  FUN_0046bb00(&stack0xfffffe68);
  pvStack_c._0_1_ = 8;
  FUN_0045eeb0();
  pvStack_c._0_1_ = 7;
  TextNode::~TextNode(aTStack_140);
  FUN_00568880(param_2,2,&local_190,1,uVar11);
  pvStack_c._0_1_ = 6;
  FUN_0046ba90();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(abStack_178,true);
  pvStack_c = (void *)0xffffffff;
  std::
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::
  ~basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (abStack_d4);
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  ~basic_ios<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_ios<unsigned_short,std::char_traits<unsigned_short>_> *)abStack_d4);
  pcStack_a0 = 
  _vbtable__for__std__basic_istream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  pcStack_98 = 
  _vbtable__for__std__basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>___exref;
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_ios<unsigned_short,std::char_traits<unsigned_short>_>(abStack_48);
  pvStack_c = (void *)0xa;
  std::basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>::
  basic_iostream<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_iostream<unsigned_short,std::char_traits<unsigned_short>_> *)&pcStack_a0,
             abStack_94);
  uStack_10 = 0xb;
  std::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
  basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_stringbuf<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&pcStack_98,3);
  *(code **)((int)&iStack_a4 + *(int *)(iStack_a4 + 4)) = _vftable__exref;
  uStack_10 = 0xc;
  pbVar3 = std::basic_ostream<unsigned_short,std::char_traits<unsigned_short>_>::operator<<
                     (abStack_9c,*(uint *)(param_3 + 0x270));
  std::ends(pbVar3);
  puVar7 = auStack_168;
  iVar4 = std::
          basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::str((basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)&iStack_a4);
  pcVar9 = *(code **)(iVar4 + 4);
  uStack_14._0_1_ = 0xd;
  if (pcVar9 == (code *)0x0) {
    pcVar9 = _C_exref;
  }
  RenderDisplayList::RenderDisplayList((RenderDisplayList *)&local_18c);
  uStack_14._0_1_ = 0xe;
  piVar2 = (int *)TextNode::TextNode(aTStack_15c,(ushort *)pcVar9,-1);
  uStack_14._0_1_ = 0xf;
  (**(code **)(*piVar2 + 0x1c))(puVar7);
  uStack_14._0_1_ = 0x10;
  FUN_0046bb00(&stack0xfffffe64);
  uStack_14._0_1_ = 0xf;
  FUN_0045eeb0();
  uStack_14._0_1_ = 0xe;
  TextNode::~TextNode(aTStack_15c);
  FUN_00568880(param_2,1,&local_18c,1,uVar11);
  uStack_14._0_1_ = 0xd;
  FUN_0046ba90();
  uStack_14 = CONCAT31(uStack_14._1_3_,0xc);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(abStack_16c,true);
  uStack_14 = 0xffffffff;
  std::
  basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::
  ~basic_stringstream<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (abStack_50);
  std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
  ~basic_ios<unsigned_short,std::char_traits<unsigned_short>_>
            ((basic_ios<unsigned_short,std::char_traits<unsigned_short>_> *)abStack_50);
  uVar10 = 1;
  uVar6 = uVar11;
  uVar5 = FUN_0046b6c0(*(undefined4 *)(param_3 + 0x230),1,uVar11);
  FUN_00568880(param_2,3,uVar5,uVar10,uVar6);
  uVar5 = 1;
  uVar6 = FUN_0046b6a0(*(undefined4 *)(param_3 + 0x260),1,uVar11);
  FUN_00568880(param_2,4,uVar6,uVar5,uVar11);
  puVar7 = (undefined1 *)FUN_0058d0b0(param_2);
  puVar7[1] = 1;
  *puVar7 = 1;
  puVar8 = operator_new(0x208);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    *(CHARACTER_ID *)(puVar8 + 2) = (CHARACTER_ID)0x0;
    uStack_14 = 0x12;
    *puVar8 = &PTR_FUN_005e2a48;
    CHARACTER_ID::operator=((CHARACTER_ID *)(puVar8 + 2),param_3);
  }
  uStack_14 = 0xffffffff;
  FUN_00575520(puVar8);
  FUN_00599980();
  ExceptionList = pvStack_1c;
  return;
}

