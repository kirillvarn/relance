
undefined4 __thiscall
FUN_005a9c30(int param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2)

{
  IDPMsgHandler *this;
  undefined4 uVar1;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar2;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  
  pbVar2 = param_2;
  if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_2 + 0x98) == 0)) {
    return 0;
  }
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 0x94),param_2,0,*(uint *)npos_exref);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x10);
  this = (IDPMsgHandler *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x14);
  if (this != (IDPMsgHandler *)(param_2 + 0x18)) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      param_2 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                 *)0x0;
    }
    else {
      param_2 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                 *)(*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c) >> 2);
    }
    uVar3 = FUN_005ad970();
    if (uVar3 < param_2) {
      uVar3 = FUN_0040d740();
      uVar6 = FUN_005ad970();
      if (uVar6 <= uVar3) {
        iVar5 = *(int *)(pbVar2 + 0x1c);
        iVar7 = FUN_005ad970();
        iVar5 = iVar5 + iVar7 * 4;
        FUN_00527820(*(undefined4 *)(pbVar2 + 0x1c),iVar5,*(undefined4 *)(param_1 + 0xb0));
        FUN_00597c70(iVar5,*(undefined4 *)(pbVar2 + 0x20),*(undefined4 *)(param_1 + 0xb4));
        iVar5 = FUN_005ad970();
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb0) + iVar5 * 4;
        goto LAB_005a9d97;
      }
      IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0xb0),*(ulong *)(param_1 + 0xb4));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0xb0));
      iVar5 = FUN_005ad970();
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar8 = operator_new(iVar5 << 2);
      *(void **)(param_1 + 0xb0) = pvVar8;
      iVar5 = FUN_00597c70(*(undefined4 *)(pbVar2 + 0x1c),*(undefined4 *)(pbVar2 + 0x20),pvVar8);
      *(int *)(param_1 + 0xb8) = iVar5;
    }
    else {
      puVar4 = (uchar *)FUN_00527820(*(undefined4 *)(pbVar2 + 0x1c),*(undefined4 *)(pbVar2 + 0x20),
                                     *(undefined4 *)(param_1 + 0xb0));
      IDPMsgHandler::OnReceive(this,puVar4,*(ulong *)(param_1 + 0xb4));
      iVar5 = FUN_005ad970();
      iVar5 = *(int *)(param_1 + 0xb0) + iVar5 * 4;
    }
    *(int *)(param_1 + 0xb4) = iVar5;
  }
LAB_005a9d97:
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(pbVar2 + 0x28);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(pbVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pbVar2 + 0x30);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(pbVar2 + 0x34);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(pbVar2 + 0x38);
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0xd0) = pbVar2[0x3c];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0xd1) = pbVar2[0x3d];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0xd2) = pbVar2[0x3e];
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(pbVar2 + 0x40);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 0xd8),pbVar2 + 0x44,0,*(uint *)npos_exref);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 0xe8),pbVar2 + 0x54,0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (pbVar2 + 100),0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x108),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (pbVar2 + 0x74),0,*(uint *)npos_exref);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(pbVar2 + 0x84);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(pbVar2 + 0x88);
  uVar1 = *(undefined4 *)(pbVar2 + 0x8c);
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(pbVar2 + 0x90);
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0x128) = pbVar2[0x94];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0x129) = pbVar2[0x95];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0x12a) = pbVar2[0x96];
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(pbVar2 + 0x98);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

