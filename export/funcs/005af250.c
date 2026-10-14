
void FUN_005af250(undefined4 *param_1,undefined4 *param_2)

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
  
  puStack_8 = &LAB_005c582a;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 1) =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_2 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 1),
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)(param_2 + 1),0,*(uint *)npos_exref);
  this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)(param_1 + 5);
  *this = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_2 + 5);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[7];
  uVar2 = *(uint *)npos_exref;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(param_2 + 5)) {
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(this,uVar4,uVar2);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(this,0,0);
  }
  else {
    if ((uVar4 != 0) && (uVar4 == uVar1)) {
      pcVar5 = (code *)param_2[6];
      if ((code *)param_2[6] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      if ((byte)pcVar5[-1] < 0xfe) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(this,true);
        pcVar5 = (code *)param_2[6];
        if ((code *)param_2[6] == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        param_1[6] = pcVar5;
        param_1[7] = param_2[7];
        param_1[8] = param_2[8];
        pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
        goto LAB_005af393;
      }
    }
    bVar3 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(this,uVar4,true);
    if (bVar3) {
      pcVar5 = _C_exref;
      if ((code *)param_2[6] != (code *)0x0) {
        pcVar5 = (code *)param_2[6];
      }
      FUN_0041d8a0(param_1[6],pcVar5,uVar4);
      param_1[7] = uVar4;
      *(undefined2 *)(param_1[6] + uVar4 * 2) = 0;
    }
  }
LAB_005af393:
  param_1[9] = param_2[9];
  ExceptionList = local_c;
  return;
}

