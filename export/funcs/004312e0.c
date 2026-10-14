
void __fastcall FUN_004312e0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar5;
  char *pcVar6;
  char local_208 [260];
  char local_104 [260];
  
  GetFileSysPath(local_104,"audio",*(IFileSystem **)Data_exref);
  _makepath(local_208,(char *)0x0,local_104,*(char **)(param_1 + 8),(char *)&PTR_DAT_005cab48);
  iVar2 = _access(local_208,0);
  if (iVar2 == -1) {
    return;
  }
  uVar3 = 0xffffffff;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2c);
  pcVar5 = local_208;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    std::_Xlen();
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
      return;
    }
    if ((*(uint *)(param_1 + 0x38) < 0x20) && (uVar3 <= *(uint *)(param_1 + 0x38)))
    goto LAB_004313c4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy(this,uVar3);
LAB_004313c4:
  pcVar5 = local_208;
  pcVar6 = *(char **)(param_1 + 0x30);
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
  *(uint *)(param_1 + 0x34) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)(param_1 + 0x30)) = 0;
  return;
}

