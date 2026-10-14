
undefined4 * __fastcall FUN_0048b2e0(undefined4 *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  FmtStr *this_00;
  char *pcVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc392;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  param_1[0xcb] = &PTR_LAB_005cbed8;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd3);
  *this = local_1d;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_0042cc10();
  this_00 = (FmtStr *)(param_1 + 0xdf);
  *(undefined4 *)this_00 = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)((int)param_1 + 0x385) = 0;
  *(undefined1 *)((int)param_1 + 0x386) = 0;
  *(undefined1 *)((int)param_1 + 0x387) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)((int)param_1 + 0x389) = 0;
  *(undefined1 *)((int)param_1 + 0x38a) = 0;
  *(undefined1 *)((int)param_1 + 0x38b) = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)((int)param_1 + 0x38d) = 0;
  *(undefined1 *)((int)param_1 + 0x38e) = 0;
  *(undefined1 *)((int)param_1 + 0x38f) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)((int)param_1 + 0x391) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_005d26bc;
  param_1[0x1f] = &PTR_OnReceive_005d26ac;
  param_1[0xcb] = &PTR_LAB_005d26a4;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  FmtStr::destroy(this_00);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)this_00 = 0;
    this_00 = this_00 + 4;
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  pcVar6 = (char *)param_1[0xd4];
  uVar7 = *(uint *)npos_exref;
  if (((pcVar6 != (char *)0x0) && (pcVar6[-1] != '\0')) && (pcVar6[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
    uVar4 = 0xffffffff;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar4,true);
    if (bVar2) {
      pcVar8 = (char *)param_1[0xd4];
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd3)
                 ,uVar4);
    }
  }
  uVar4 = param_1[0xd5];
  if (uVar4 < uVar7) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    memmove((void *)param_1[0xd4],(void *)((int)param_1[0xd4] + uVar7),uVar4 - uVar7);
    uVar7 = param_1[0xd5] - uVar7;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1 + 0xd3),uVar7,false);
    if (bVar2) {
      param_1[0xd5] = uVar7;
      *(undefined1 *)(uVar7 + param_1[0xd4]) = 0;
    }
  }
  FUN_0042cc30();
  param_1[0x113] = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  param_1[0x112] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

