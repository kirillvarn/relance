
void __thiscall
FUN_005ac010(int param_1,
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar1;
  int iVar2;
  bool bVar3;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar4;
  int iVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar6;
  
  pbVar4 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
             **)(param_1 + 0x164);
  if (pbVar4 != *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  **)(param_1 + 0x168)) {
    while ((pbVar4[0x3d] ==
            (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
             )0x0 || ((((*(int *)(pbVar4 + 0x6c) == 0 ||
                        (bVar3 = std::operator==((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(pbVar4 + 100),
                                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(param_2 + 100)), !bVar3)) ||
                       (*(int *)(pbVar4 + 0x90) != *(int *)(param_2 + 0x90))) &&
                      (((*(int *)(pbVar4 + 0x14) == 0 ||
                        (bVar3 = std::operator==(pbVar4,param_2), !bVar3)) ||
                       (*(int *)(pbVar4 + 0x14) != *(int *)(param_2 + 0x14)))))))) {
      pbVar4 = pbVar4 + 0x9c;
      if (pbVar4 == *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                      **)(param_1 + 0x168)) {
        return;
      }
    }
    pbVar1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               **)(param_1 + 0x168);
    pbVar6 = pbVar4 + 0x9c;
    if (pbVar6 != pbVar1) {
      pbVar4 = pbVar4 + 0x14;
      do {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::assign(pbVar4 + -0x14,
                 (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                  *)pbVar6,0,*(uint *)npos_exref);
        *(undefined4 *)(pbVar4 + -4) = *(undefined4 *)(pbVar4 + 0x98);
        *(undefined4 *)pbVar4 = *(undefined4 *)(pbVar4 + 0x9c);
        FUN_005595c0(pbVar4 + 0xa0);
        *(undefined4 *)(pbVar4 + 0x14) = *(undefined4 *)(pbVar4 + 0xb0);
        *(undefined4 *)(pbVar4 + 0x18) = *(undefined4 *)(pbVar4 + 0xb4);
        *(undefined4 *)(pbVar4 + 0x1c) = *(undefined4 *)(pbVar4 + 0xb8);
        *(undefined4 *)(pbVar4 + 0x20) = *(undefined4 *)(pbVar4 + 0xbc);
        *(undefined4 *)(pbVar4 + 0x24) = *(undefined4 *)(pbVar4 + 0xc0);
        pbVar4[0x28] = pbVar4[0xc4];
        pbVar4[0x29] = pbVar4[0xc5];
        pbVar4[0x2a] = pbVar4[0xc6];
        *(undefined4 *)(pbVar4 + 0x2c) = *(undefined4 *)(pbVar4 + 200);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::assign(pbVar4 + 0x30,
                 (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                  *)(pbVar4 + 0xcc),0,*(uint *)npos_exref);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::assign(pbVar4 + 0x40,
                 (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                  *)(pbVar4 + 0xdc),0,*(uint *)npos_exref);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4 + 0x50),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (pbVar4 + 0xec),0,*(uint *)npos_exref);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4 + 0x60),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (pbVar4 + 0xfc),0,*(uint *)npos_exref);
        *(undefined4 *)(pbVar4 + 0x70) = *(undefined4 *)(pbVar4 + 0x10c);
        *(undefined4 *)(pbVar4 + 0x74) = *(undefined4 *)(pbVar4 + 0x110);
        *(undefined4 *)(pbVar4 + 0x78) = *(undefined4 *)(pbVar4 + 0x114);
        *(undefined4 *)(pbVar4 + 0x7c) = *(undefined4 *)(pbVar4 + 0x118);
        pbVar4[0x80] = pbVar4[0x11c];
        pbVar4[0x81] = pbVar4[0x11d];
        pbVar4[0x82] = pbVar4[0x11e];
        *(undefined4 *)(pbVar4 + 0x84) = *(undefined4 *)(pbVar4 + 0x120);
        pbVar6 = pbVar6 + 0x9c;
        pbVar4 = pbVar4 + 0x9c;
      } while (pbVar6 != pbVar1);
    }
    iVar2 = *(int *)(param_1 + 0x168);
    for (iVar5 = iVar2 + -0x9c; iVar5 != iVar2; iVar5 = iVar5 + 0x9c) {
      FUN_005686b0();
    }
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -0x9c;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
  }
  return;
}

