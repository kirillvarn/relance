
void FUN_005a9990(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  char *_Dest;
  code *pcVar6;
  char *pcVar7;
  char *pcVar8;
  void *in_stack_00002410;
  char in_stack_00002428;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_005c55c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&local_8,
             (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
              *)(extraout_ECX + 0xd8));
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&stack0x00000008,
             (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
              *)(extraout_ECX + 0x94));
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)&stack0x00000008,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)&local_8,true);
  if (((in_stack_00002428 != '\0') && (*(char *)(extraout_ECX + 0x184) != '\0')) &&
     (DAT_00673344 != 0)) {
    (**(code **)(*DAT_0067ecd0 + 0x40))();
    DAT_0067ecbe = 0;
    DAT_0067ecbf = 0;
    *(undefined1 *)(extraout_ECX + 0x184) = 0;
    *(undefined1 *)(extraout_ECX + 0x1b0) = 0;
    *(undefined1 *)(extraout_ECX + 0x1d4) = 0;
    FUN_005ae7a0();
    *(undefined1 *)(extraout_ECX + 0x21c) = 0;
  }
  local_c = (undefined1 *)(extraout_ECX + 0x184);
  *local_c = 0;
  bVar2 = SinglePlayer();
  if (bVar2) {
    (**(code **)FDUMP_exref)();
    FUN_005aa210();
    sprintf(&stack0x00000018,"%s");
  }
  else {
    FUN_00402180();
    (**(code **)FDUMP_exref)();
    pcVar6 = sprintf_exref;
    iVar3 = sprintf(&stack0x00000018,"tcpip, %S:");
    _Dest = &stack0x00000018 + iVar3;
    if (*(int *)(extraout_ECX + 0xa8) == 0) {
      iVar3 = *(int *)(extraout_ECX + 0xb0);
      if (iVar3 != *(int *)(extraout_ECX + 0xb4)) {
        do {
          iVar4 = (*pcVar6)();
          iVar3 = iVar3 + 4;
          if (iVar3 == *(int *)(extraout_ECX + 0xb4)) break;
          iVar5 = -1;
          pcVar7 = _Dest + iVar4;
          do {
            pcVar8 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          *(undefined2 *)(pcVar8 + -1) = DAT_005e652c;
          _Dest = _Dest + iVar4 + 1;
          pcVar6 = sprintf_exref;
        } while (iVar3 != *(int *)(extraout_ECX + 0xb4));
      }
    }
    else {
      sprintf(_Dest,"%u");
    }
  }
  (**(code **)(*DAT_0067ecd0 + 0x3c))();
  FUN_005a89b0();
  ExceptionList = in_stack_00002410;
  return;
}

