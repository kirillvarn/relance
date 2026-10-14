
void FUN_005aecc0(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *param_1,
                 basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *param_2,basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                          *param_3)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar1;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar7;
  
  pbVar2 = param_3;
  if (param_1 != param_2) {
    pbVar1 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_3 + 0x18);
    pbVar7 = param_1 + 0x1c;
    do {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(param_1,pbVar2,0,*(uint *)npos_exref);
      *(int *)(pbVar7 + -0xc) = *(int *)(pbVar2 + 0x10);
      *(int *)(pbVar7 + -8) = *(int *)(pbVar2 + 0x14);
      if (pbVar7 + -4 != pbVar1) {
        if (*(int *)(pbVar2 + 0x1c) == 0) {
          param_3 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                     *)0x0;
        }
        else {
          param_3 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                     *)(*(int *)(pbVar2 + 0x20) - *(int *)(pbVar2 + 0x1c) >> 2);
        }
        uVar3 = FUN_005ad970();
        if (uVar3 < param_3) {
          uVar3 = FUN_0040d740();
          uVar5 = FUN_005ad970();
          if (uVar3 < uVar5) {
            FUN_005b7e1d(*(int *)pbVar7);
            iVar4 = FUN_005ad970();
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            pvVar6 = operator_new(iVar4 * 4);
            *(void **)pbVar7 = pvVar6;
            iVar4 = FUN_00597c70(*(undefined4 *)(pbVar2 + 0x1c),*(undefined4 *)(pbVar2 + 0x20),
                                 pvVar6);
            *(int *)(pbVar7 + 4) = iVar4;
            *(int *)(pbVar7 + 8) = iVar4;
          }
          else {
            iVar4 = FUN_005ad970();
            iVar4 = *(int *)(pbVar2 + 0x1c) + iVar4 * 4;
            FUN_00527820(*(int *)(pbVar2 + 0x1c),iVar4,*(int *)pbVar7);
            FUN_00597c70(iVar4,*(undefined4 *)(pbVar2 + 0x20),*(int *)(pbVar7 + 4));
            iVar4 = FUN_005ad970();
            *(int *)(pbVar7 + 4) = *(int *)pbVar7 + iVar4 * 4;
          }
        }
        else {
          FUN_00527820(*(undefined4 *)(pbVar2 + 0x1c),*(undefined4 *)(pbVar2 + 0x20),*(int *)pbVar7)
          ;
          iVar4 = FUN_005ad970();
          *(int *)(pbVar7 + 4) = *(int *)pbVar7 + iVar4 * 4;
        }
      }
      *(int *)(pbVar7 + 0xc) = *(int *)(pbVar2 + 0x28);
      *(int *)(pbVar7 + 0x10) = *(int *)(pbVar2 + 0x2c);
      *(int *)(pbVar7 + 0x14) = *(int *)(pbVar2 + 0x30);
      *(int *)(pbVar7 + 0x18) = *(int *)(pbVar2 + 0x34);
      *(int *)(pbVar7 + 0x1c) = *(int *)(pbVar2 + 0x38);
      pbVar7[0x20] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x3c);
      pbVar7[0x21] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x3d);
      pbVar7[0x22] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x3e);
      *(int *)(pbVar7 + 0x24) = *(int *)(pbVar2 + 0x40);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(pbVar7 + 0x28,pbVar2 + 0x44,0,*(uint *)npos_exref);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(pbVar7 + 0x38,pbVar2 + 0x54,0,*(uint *)npos_exref);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar7 + 0x48),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (pbVar2 + 100),0,*(uint *)npos_exref);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar7 + 0x58),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (pbVar2 + 0x74),0,*(uint *)npos_exref);
      *(int *)(pbVar7 + 0x68) = *(int *)(pbVar2 + 0x84);
      *(int *)(pbVar7 + 0x6c) = *(int *)(pbVar2 + 0x88);
      *(int *)(pbVar7 + 0x70) = *(int *)(pbVar2 + 0x8c);
      *(int *)(pbVar7 + 0x74) = *(int *)(pbVar2 + 0x90);
      pbVar7[0x78] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x94);
      pbVar7[0x79] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x95);
      pbVar7[0x7a] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                       *)(pbVar2 + 0x96);
      param_1 = param_1 + 0x9c;
      *(int *)(pbVar7 + 0x7c) = *(int *)(pbVar2 + 0x98);
      pbVar7 = pbVar7 + 0x9c;
    } while (param_1 != param_2);
  }
  return;
}

