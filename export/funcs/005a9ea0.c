
basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *
__thiscall
FUN_005a9ea0(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
             *param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2)

{
  IDPMsgHandler *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  bool bVar1;
  uint uVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  code *pcVar10;
  
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(param_1,param_2,0,*(uint *)npos_exref);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  this = (IDPMsgHandler *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  if (this != (IDPMsgHandler *)(param_2 + 0x18)) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c) >> 2;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x20) - iVar5 >> 2;
    }
    if (uVar2 < uVar9) {
      uVar9 = FUN_0040d740();
      uVar2 = FUN_005ad970();
      if (uVar2 <= uVar9) {
        iVar5 = *(int *)(param_2 + 0x1c);
        iVar4 = FUN_005ad970();
        iVar5 = iVar5 + iVar4 * 4;
        FUN_00527820(*(undefined4 *)(param_2 + 0x1c),iVar5,*(undefined4 *)(param_1 + 0x1c));
        FUN_00597c70(iVar5,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x20));
        iVar5 = FUN_005ad970();
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) + iVar5 * 4;
        goto LAB_005aa002;
      }
      IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0x1c),*(ulong *)(param_1 + 0x20));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x1c));
      iVar5 = FUN_005ad970();
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar6 = operator_new(iVar5 << 2);
      *(void **)(param_1 + 0x1c) = pvVar6;
      iVar5 = FUN_00597c70(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),pvVar6);
      *(int *)(param_1 + 0x24) = iVar5;
    }
    else {
      puVar3 = (uchar *)FUN_00527820(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                                     ,iVar5);
      IDPMsgHandler::OnReceive(this,puVar3,*(ulong *)(param_1 + 0x20));
      if (*(int *)(param_2 + 0x1c) == 0) {
        iVar5 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1c) +
                (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c) >> 2) * 4;
      }
    }
    *(int *)(param_1 + 0x20) = iVar5;
  }
LAB_005aa002:
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  param_1[0x3c] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x3c);
  param_1[0x3d] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x3d);
  param_1[0x3e] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(param_1 + 0x44,param_2 + 0x44,0,*(uint *)npos_exref);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(param_1 + 0x54,param_2 + 0x54,0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 100),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 100),0,*(uint *)npos_exref);
  uVar9 = *(uint *)(param_2 + 0x7c);
  uVar2 = *(uint *)npos_exref;
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x74);
  uVar7 = uVar9;
  if (uVar2 < uVar9) {
    uVar7 = uVar2;
  }
  if (this_00 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x74)
     ) {
    if (*(uint *)(param_1 + 0x7c) < uVar7) {
      std::_Xran();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this_00);
    uVar9 = *(int *)(param_1 + 0x7c) - uVar7;
    if (uVar9 < uVar2) {
      uVar2 = uVar9;
    }
    if (uVar2 != 0) {
      memmove((void *)(uVar7 + *(int *)(param_1 + 0x78)),
              (void *)((int)(uVar7 + *(int *)(param_1 + 0x78)) + uVar2),uVar9 - uVar2);
      iVar5 = *(int *)(param_1 + 0x7c);
      bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this_00,iVar5 - uVar2,false);
      if (bVar1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  (this_00,iVar5 - uVar2);
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(this_00,0,0);
  }
  else {
    if ((uVar7 != 0) && (uVar7 == uVar9)) {
      pcVar8 = *(code **)(param_2 + 0x78);
      if (*(code **)(param_2 + 0x78) == (code *)0x0) {
        pcVar8 = _C_exref;
      }
      if ((byte)pcVar8[-1] < 0xfe) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this_00,true);
        pcVar8 = *(code **)(param_2 + 0x78);
        if (*(code **)(param_2 + 0x78) == (code *)0x0) {
          pcVar8 = _C_exref;
        }
        *(code **)(param_1 + 0x78) = pcVar8;
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
        pcVar8[-1] = (code)((char)pcVar8[-1] + '\x01');
        goto LAB_005aa19c;
      }
    }
    bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this_00,uVar7,true);
    if (bVar1) {
      pcVar8 = *(code **)(param_2 + 0x78);
      if (*(code **)(param_2 + 0x78) == (code *)0x0) {
        pcVar8 = _C_exref;
      }
      pcVar10 = *(code **)(param_1 + 0x78);
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x74)
                 ,uVar7);
    }
  }
LAB_005aa19c:
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x94] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x94);
  param_1[0x95] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x95);
  param_1[0x96] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 0x96);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}

