
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_0042b030(uint param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
                   uint param_6)

{
  char cVar1;
  float fVar2;
  bool bVar3;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  void *in_stack_00000030;
  uint in_stack_00000034;
  HANDLE in_stack_0000003c;
  HANDLE in_stack_00000040;
  LPCVOID in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  int in_stack_00001458;
  HANDLE in_stack_00001464;
  HANDLE in_stack_00001468;
  void *in_stack_0000146c;
  void *in_stack_00001594;
  char *in_stack_000015a4;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = -1;
  local_8 = &LAB_005b8caa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_8 = (undefined1 *)DAT_00667cd0;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000002c);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x0000002c,in_stack_000015a4,false);
  if ((bVar3) && (bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c), bVar3)) {
    do {
      bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x0000002c,"Sound");
      if (bVar3) {
        FUN_0042b7b0();
        param_5 = -1.0;
        param_4 = -1.0;
        bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
        if (bVar3) {
          do {
            bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"nickname");
            if (bVar3) {
              pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000002c);
              param_1 = CreateID(pcVar4);
            }
            else {
              FUN_0042b940();
            }
            bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
          } while (bVar3);
        }
        bVar3 = ID_String::IsEmpty((ID_String *)&param_1);
        if (bVar3) {
          INI_Reader::log_link((INI_Reader *)&stack0x0000002c,"Sound has no nickname!");
          (**(code **)FDUMP_exref)();
        }
        else {
          local_4 = (int)(char)param_6;
          fVar2 = (float)local_4;
          if (fVar2 <= _DAT_005c7474) {
            if (_DAT_005ca16c <= fVar2) {
              local_c = (void *)(float)local_4;
            }
            else {
              local_c = (void *)0xc2c00000;
            }
          }
          else {
            local_c = (void *)0x0;
          }
          if ((float)local_c != fVar2) {
            (**(code **)FDUMP_exref)();
          }
          uVar6 = ftol();
          param_6 = param_6 ^ (uVar6 ^ param_6) & 0xff;
          if (_DAT_005c7474 <= param_4) {
            if (param_5 <= param_4) {
              ID_String::get_string((ID_String *)&param_1);
              (**(code **)FDUMP_exref)();
            }
          }
          else {
            param_5 = -1.0;
            param_4 = -1.0;
          }
          FUN_0042aef0();
        }
      }
      bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c);
    } while (bVar3);
  }
  pvVar5 = (void *)(DAT_00667cd0 - (int)local_8);
  local_8 = &stack0x00001454;
  local_c = pvVar5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001454,0,
             *(uint *)npos_exref);
  if (in_stack_00001464 != (HANDLE)0xffffffff) {
    if (in_stack_00001468 != (HANDLE)0x0) {
      if (in_stack_0000146c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000146c);
        in_stack_0000146c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001468);
    }
    CloseHandle(in_stack_00001464);
  }
  if (in_stack_0000146c != (void *)0x0) {
    free(in_stack_0000146c);
  }
  if (in_stack_00001458 != 0) {
    cVar1 = *(char *)(in_stack_00001458 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001458 + -1) = cVar1 + -1;
    }
  }
  uVar6 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000002c);
  if (in_stack_00000034 < uVar6) {
    uVar6 = in_stack_00000034;
  }
  if (uVar6 != 0) {
    memmove(in_stack_00000030,(void *)((int)in_stack_00000030 + uVar6),in_stack_00000034 - uVar6);
    uVar6 = in_stack_00000034 - uVar6;
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x0000002c,uVar6,false);
    pvVar5 = local_c;
    if (bVar3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000002c
                 ,uVar6);
      pvVar5 = local_c;
    }
  }
  if (in_stack_0000003c != (HANDLE)0xffffffff) {
    if (in_stack_00000040 != (HANDLE)0x0) {
      if (in_stack_00000044 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000044);
        in_stack_00000044 = (LPCVOID)0x0;
        in_stack_00000048 = 0;
      }
      CloseHandle(in_stack_00000040);
      in_stack_00000040 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_0000003c);
    in_stack_0000003c = (HANDLE)0xffffffff;
  }
  if (in_stack_00000044 != (void *)0x0) {
    free(in_stack_00000044);
    in_stack_00000044 = (void *)0x0;
    in_stack_00000048 = 0;
  }
  in_stack_0000004c = 0;
  if (in_stack_00000030 != (void *)0x0) {
    cVar1 = *(char *)((int)in_stack_00000030 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)((int)in_stack_00000030 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001594;
  return pvVar5;
}

