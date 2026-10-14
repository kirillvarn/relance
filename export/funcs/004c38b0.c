
void FUN_004c38b0(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3d;
  char *local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [4];
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  code *local_28 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd6e2;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_38[0] = local_3d;
  pcVar5 = "invalid vector<T> subscript";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_34 = (char *)0x0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_38,uVar3,true);
  if (bVar2) {
    pcVar5 = "invalid vector<T> subscript";
    pcVar6 = local_34;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_34[uVar3] = '\0';
    local_30 = uVar3;
  }
  local_4 = 0;
  local_3c = "";
  exception::exception((exception *)local_28,&local_3c);
  local_4._0_1_ = 1;
  local_1c[0] = local_38[0];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_1c,false);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_1c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_38,0,*(uint *)npos_exref);
  local_4 = (uint)local_4._1_3_ << 8;
  local_28[0] = _vftable__exref;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_005f7ac4);
}

