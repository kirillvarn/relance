
basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *
FUN_005aef00(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
             *param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2,basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                     *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar6;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar7;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar8;
  
  if (param_1 != param_2) {
    pbVar5 = param_3 + 0x1c;
    pbVar7 = param_2 + 0x1c;
    do {
      param_2 = param_2 + -0x9c;
      param_3 = param_3 + -0x9c;
      pbVar8 = pbVar7 + -0x9c;
      pbVar6 = pbVar5 + -0x9c;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(param_3,param_2,0,*(uint *)npos_exref);
      *(int *)(pbVar5 + -0xa8) = *(int *)(pbVar7 + -0xa8);
      *(int *)(pbVar5 + -0xa4) = *(int *)(pbVar7 + -0xa4);
      if ((basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
           *)(pbVar5 + -0xa0) != pbVar7 + -0xa0) {
        if (*(int *)pbVar8 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)(pbVar7 + -0x98) - *(int *)pbVar8 >> 2;
        }
        uVar1 = FUN_005ad970();
        if (uVar1 < uVar4) {
          uVar4 = FUN_005ad970();
          uVar1 = FUN_0040d740();
          if (uVar1 < uVar4) {
            FUN_005b7e1d(*(int *)pbVar6);
            iVar2 = FUN_005ad970();
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            pvVar3 = operator_new(iVar2 * 4);
            *(void **)pbVar6 = pvVar3;
            iVar2 = FUN_00597c70(*(int *)pbVar8,*(int *)(pbVar7 + -0x98),pvVar3);
            *(int *)(pbVar5 + -0x98) = iVar2;
            *(int *)(pbVar5 + -0x94) = iVar2;
            goto LAB_005af036;
          }
          iVar2 = FUN_005ad970();
          iVar2 = *(int *)pbVar8 + iVar2 * 4;
          FUN_00527820(*(int *)pbVar8,iVar2,*(int *)pbVar6);
          FUN_00597c70(iVar2,*(int *)(pbVar7 + -0x98),*(int *)(pbVar5 + -0x98));
        }
        else {
          FUN_00527820(*(int *)pbVar8,*(int *)(pbVar7 + -0x98),*(int *)pbVar6);
        }
        iVar2 = FUN_005ad970();
        *(int *)(pbVar5 + -0x98) = *(int *)pbVar6 + iVar2 * 4;
      }
LAB_005af036:
      *(int *)(pbVar5 + -0x90) = *(int *)(pbVar7 + -0x90);
      *(int *)(pbVar5 + -0x8c) = *(int *)(pbVar7 + -0x8c);
      *(int *)(pbVar5 + -0x88) = *(int *)(pbVar7 + -0x88);
      *(int *)(pbVar5 + -0x84) = *(int *)(pbVar7 + -0x84);
      *(int *)(pbVar5 + -0x80) = *(int *)(pbVar7 + -0x80);
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x7c) = pbVar7[-0x7c];
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x7b) = pbVar7[-0x7b];
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x7a) = pbVar7[-0x7a];
      *(int *)(pbVar5 + -0x78) = *(int *)(pbVar7 + -0x78);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(pbVar5 + -0x74,pbVar7 + -0x74,0,*(uint *)npos_exref);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign(pbVar5 + -100,pbVar7 + -100,0,*(uint *)npos_exref);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar5 + -0x54)
                 ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  (pbVar7 + -0x54),0,*(uint *)npos_exref);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar5 + -0x44)
                 ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  (pbVar7 + -0x44),0,*(uint *)npos_exref);
      *(int *)(pbVar5 + -0x34) = *(int *)(pbVar7 + -0x34);
      *(int *)(pbVar5 + -0x30) = *(int *)(pbVar7 + -0x30);
      *(int *)(pbVar5 + -0x2c) = *(int *)(pbVar7 + -0x2c);
      *(int *)(pbVar5 + -0x28) = *(int *)(pbVar7 + -0x28);
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x24) = pbVar7[-0x24];
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x23) = pbVar7[-0x23];
      *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
        *)(pbVar5 + -0x22) = pbVar7[-0x22];
      *(int *)(pbVar5 + -0x20) = *(int *)(pbVar7 + -0x20);
      pbVar5 = pbVar6;
      pbVar7 = pbVar8;
    } while (param_2 != param_1);
  }
  return param_3;
}

