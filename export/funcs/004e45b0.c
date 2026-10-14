
void FUN_004e45b0(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be839;
  local_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_1c[0] = param_1._0_1_;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_1c,uVar3,true);
  if (bVar2) {
    pcVar5 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_1;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_18[uVar3] = '\0';
    local_14 = uVar3;
  }
  local_4 = 0;
  FUN_004e5ab0(*(undefined4 *)(param_2 + 0x584),1,local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005b7e1d(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

