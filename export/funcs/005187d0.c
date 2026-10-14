
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005187d0(undefined4 param_1,undefined4 param_2,HANDLE param_3,HANDLE param_4,
                 LPCVOID param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  int *extraout_ECX;
  undefined4 unaff_ESI;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  int unaff_retaddr;
  int in_stack_00001428;
  HANDLE in_stack_00001434;
  HANDLE in_stack_00001438;
  void *in_stack_0000143c;
  void *in_stack_00001564;
  char *in_stack_0000157c;
  int *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfe9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = extraout_ECX;
  INI_Reader::INI_Reader((INI_Reader *)&param_1);
  CacheString::clear((CacheString *)&local_4);
  CacheString::clear((CacheString *)&stack0x00000000);
  bVar2 = INI_Reader::open((INI_Reader *)&param_1,in_stack_0000157c,false);
  if (!bVar2) {
    (**(code **)FDUMP_exref)();
  }
  bVar2 = INI_Reader::read_header((INI_Reader *)&param_1);
  piVar3 = extraout_ECX;
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&param_1,"ThirdPerson");
      if (bVar2) {
        (**(code **)FDUMP_exref)();
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&param_1);
      piVar3 = local_c;
    } while (bVar2);
  }
  fVar4 = (float10)(**(code **)(*piVar3 + 0x18))();
  fVar4 = (float10)fptan(fVar4 * (float10)_DAT_005c77f4);
  local_c = (int *)((ulonglong)(double)fVar4 >> 0x20);
  fVar5 = (float10)(**(code **)(*piVar3 + 0x1c))();
  fVar5 = (float10)fptan(fVar5 * (float10)_DAT_005c77f4);
  if ((float10)_DAT_005d5b58 <=
      ABS((float10)(double)CONCAT44(SUB84((double)fVar4,0),unaff_ESI) / fVar5 -
          (float10)_DAT_005dba18)) {
    (**(code **)FDUMP_exref)();
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001424,0,
             *(uint *)npos_exref);
  if (in_stack_00001434 != (HANDLE)0xffffffff) {
    if (in_stack_00001438 != (HANDLE)0x0) {
      if (in_stack_0000143c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000143c);
        in_stack_0000143c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001438);
    }
    CloseHandle(in_stack_00001434);
  }
  if (in_stack_0000143c != (void *)0x0) {
    free(in_stack_0000143c);
  }
  if (in_stack_00001428 != 0) {
    cVar1 = *(char *)(in_stack_00001428 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001428 + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,0,
             *(uint *)npos_exref);
  if (param_3 != (HANDLE)0xffffffff) {
    if (param_4 != (HANDLE)0x0) {
      if (param_5 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_5);
        param_5 = (LPCVOID)0x0;
        param_6 = 0;
      }
      CloseHandle(param_4);
      param_4 = (HANDLE)0x0;
    }
    CloseHandle(param_3);
    param_3 = (HANDLE)0xffffffff;
  }
  if (param_5 != (void *)0x0) {
    free(param_5);
    param_5 = (void *)0x0;
    param_6 = 0;
  }
  param_7 = 0;
  if (unaff_retaddr != 0) {
    cVar1 = *(char *)(unaff_retaddr + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(unaff_retaddr + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001564;
  return;
}

