
undefined4 * __thiscall
FUN_005b6d30(undefined4 *param_1,undefined4 *param_2,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_3)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5a89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 1) =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 1),param_3,0,*(uint *)npos_exref);
  this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)(param_1 + 5);
  *this = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_3 + 0x10);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar2 = *(uint *)npos_exref;
  local_4 = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(param_3 + 0x10)) {
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(this,uVar4,uVar2);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(this,0,0);
  }
  else {
    if ((uVar4 != 0) && (uVar4 == uVar1)) {
      pcVar5 = *(code **)(param_3 + 0x14);
      if (*(code **)(param_3 + 0x14) == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      if ((byte)pcVar5[-1] < 0xfe) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        pcVar5 = *(code **)(param_3 + 0x14);
        if (*(code **)(param_3 + 0x14) == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        param_1[6] = pcVar5;
        param_1[7] = *(undefined4 *)(param_3 + 0x18);
        param_1[8] = *(undefined4 *)(param_3 + 0x1c);
        pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
        goto LAB_005b6e4e;
      }
    }
    bVar3 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(this,uVar4,true);
    if (bVar3) {
      pcVar5 = _C_exref;
      if (*(code **)(param_3 + 0x14) != (code *)0x0) {
        pcVar5 = *(code **)(param_3 + 0x14);
      }
      FUN_0041d8a0(param_1[6],pcVar5,uVar4);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(this,uVar4);
    }
  }
LAB_005b6e4e:
  param_1[9] = *(undefined4 *)(param_3 + 0x20);
  ExceptionList = local_c;
  return param_1;
}

