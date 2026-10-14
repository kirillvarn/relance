
void __fastcall
FUN_0040edf0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b87d9;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_1 + 4);
  uVar7 = *(uint *)npos_exref;
  local_4 = 0;
  ExceptionList = &local_c;
  if (((pcVar2 != (char *)0x0) && (ExceptionList = &local_c, pcVar2[-1] != '\0')) &&
     (ExceptionList = &local_c, pcVar2[-1] != -1)) {
    ExceptionList = &local_c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(param_1,true);
    uVar5 = 0xffffffff;
    pcVar6 = pcVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pcVar2,~uVar5 - 1);
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar5 < uVar7) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    memmove(*(void **)(param_1 + 4),(void *)((int)*(void **)(param_1 + 4) + uVar7),uVar5 - uVar7);
    uVar7 = *(int *)(param_1 + 8) - uVar7;
    bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (param_1,uVar7,false);
    if (bVar4) {
      *(uint *)(param_1 + 8) = uVar7;
      *(undefined1 *)(uVar7 + *(int *)(param_1 + 4)) = 0;
    }
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    if (*(int *)(param_1 + 0x14) != 0) {
      if (*(LPCVOID *)(param_1 + 0x18) != (LPCVOID)0x0) {
        UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      CloseHandle(*(HANDLE *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

