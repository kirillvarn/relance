
void __fastcall FUN_00485a60(undefined4 *param_1)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  char cVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bc198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d1d5c;
  param_1[0x1f] = &PTR_OnReceive_005d1d50;
  param_1[0xcb] = &PTR_LAB_005d1d48;
  local_4 = 4;
  FUN_005a1fe0();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005a1fe0();
  iVar2 = param_1[0xd5];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d(iVar2 + -2);
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  iVar2 = param_1[0xd2];
  for (iVar4 = param_1[0xd1]; iVar4 != iVar2; iVar4 = iVar4 + 0x24) {
    local_4._1_3_ = (undefined3)(local_4 >> 8);
    local_4._0_1_ = 5;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(iVar4 + 0x14),true);
    this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(iVar4 + 4);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (*(ushort **)(iVar4 + 8) != (ushort *)0x0) {
      puVar3 = std::
               basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               ::_Refcnt(this,*(ushort **)(iVar4 + 8));
      if ((*puVar3 == '\0') ||
         (puVar3 = std::
                   basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   ::_Refcnt(this,*(ushort **)(iVar4 + 8)), *puVar3 == 0xff)) {
        FUN_00442da0(*(int *)(iVar4 + 8) + -2,*(int *)(iVar4 + 0x10) + 2);
      }
      else {
        puVar3 = std::
                 basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 ::_Refcnt(this,*(ushort **)(iVar4 + 8));
        *puVar3 = *puVar3 + 0xff;
      }
    }
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  FUN_005b7e1d(param_1[0xd1]);
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

