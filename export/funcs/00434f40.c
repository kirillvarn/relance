
void FUN_00434f40(char *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_70 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [4];
  char *local_64;
  uint local_60;
  uint local_58 [3];
  undefined4 local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [8];
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar7 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = CreateID(param_1);
  param_1._0_1_ = SUB41(uVar3,0);
  local_68[0] = param_1._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_68,false);
  uVar5 = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_4 = 0;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_68,uVar5,true);
  if (bVar2) {
    pcVar8 = local_64;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_64[uVar5] = '\0';
    local_60 = uVar5;
  }
  local_58[2] = param_2;
  local_58[1] = 0;
  local_58[0] = uVar3;
  puVar4 = (undefined4 *)FUN_00436be0(local_2c,local_58,local_68);
  local_4c = *puVar4;
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(puVar4 + 1));
  local_38 = puVar4[5];
  local_34 = puVar4[6];
  local_30 = puVar4[7];
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004360e0(local_70,&local_4c);
  if (local_44 != 0) {
    cVar1 = *(char *)(local_44 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(local_44 + -1));
    }
    else {
      *(char *)(local_44 + -1) = cVar1 + -1;
    }
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (local_24 != 0) {
    cVar1 = *(char *)(local_24 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(local_24 + -1));
    }
    else {
      *(char *)(local_24 + -1) = cVar1 + -1;
    }
  }
  if (local_64 != (char *)0x0) {
    cVar1 = local_64[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_64[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005b7e1d(local_64 + -1);
  }
  ExceptionList = local_c;
  return;
}

