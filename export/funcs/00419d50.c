
undefined4 __thiscall FUN_00419d50(int *param_1,char *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_1[0xb] != 0) || (param_1[7] != 0)) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1);
  if (0xfffffffd < uVar3) {
    std::_Xlen();
  }
  iVar2 = param_1[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
      (**(code **)(*param_1 + 0x20))();
      return 1;
    }
    if (((uint)param_1[4] < 0x20) && (uVar3 <= (uint)param_1[4])) goto LAB_00419e05;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*param_1 + 0x20))();
    return 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy(this,uVar3);
LAB_00419e05:
  pcVar5 = (char *)param_1[2];
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *param_2;
    param_2 = param_2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[3] = uVar3;
  *(undefined1 *)(uVar3 + param_1[2]) = 0;
  (**(code **)(*param_1 + 0x20))();
  return 1;
}

