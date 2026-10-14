
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_0050fba0(void)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  void *in_stack_00000054;
  uint in_stack_00000058;
  HANDLE in_stack_00000060;
  HANDLE in_stack_00000064;
  LPCVOID in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  void *in_stack_0000147c;
  uint in_stack_00001480;
  HANDLE in_stack_00001488;
  HANDLE in_stack_0000148c;
  void *in_stack_00001490;
  void *in_stack_000015b8;
  char *in_stack_000015c8;
  char *in_stack_000015cc;
  void *local_c;
  double local_8;
  
  local_8 = -NAN;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0x2;
  fVar12 = 1.0;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000050);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x00000050,in_stack_000015c8,false);
  if (bVar3) {
LAB_0050fc10:
    do {
      do {
        bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000050);
        if (!bVar3) goto LAB_0050feb0;
        bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x00000050,"spines");
      } while (!bVar3);
      do {
        bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000050);
        if (!bVar3) goto LAB_0050fc10;
        bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"nickname");
      } while (!bVar3);
      pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000050);
      iVar5 = stricmp(in_stack_000015cc,pcVar4);
    } while (iVar5 != 0);
    local_c = (void *)0x0;
    bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000050);
    if (bVar3) {
      do {
        bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"radius_scale");
        if (bVar3) {
          fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,0);
        }
        else {
          bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"shape");
          if (bVar3) {
            pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000050,0);
            if (pcVar4 == (char *)0x0) {
              *(undefined4 *)(extraout_ECX + 0x10) = 0;
              *(undefined1 *)(extraout_ECX + 0x14) = 0;
            }
            else {
              uVar6 = FUN_00417c50();
              *(undefined4 *)(extraout_ECX + 0x10) = uVar6;
            }
          }
          else {
            bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"min_radius");
            if (bVar3) {
              fVar11 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,0);
              *(float *)(extraout_ECX + 0x38) = fVar11;
            }
            else {
              bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"max_radius");
              if (bVar3) {
                fVar11 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,0);
                *(float *)(extraout_ECX + 0x3c) = fVar11;
              }
              else {
                bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000050,"spine");
                if (bVar3) {
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,0);
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,1);
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,3);
                  fVar11 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,2);
                  local_8 = (double)fVar11;
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,4);
                  fVar11 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,6);
                  local_8 = (double)fVar11;
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,5);
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,7);
                  INI_Reader::get_value_float((INI_Reader *)&stack0x00000050,8);
                  FUN_005126f0();
                }
              }
            }
          }
        }
        bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000050);
      } while (bVar3);
    }
    fVar9 = (float10)_DAT_005c7474;
    if (*(int *)(extraout_ECX + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(extraout_ECX + 8) - *(int *)(extraout_ECX + 4)) / 0x2c;
    }
    fVar11 = _DAT_005da774 / (float)iVar5;
    local_8 = (double)CONCAT44(local_8._4_4_,fVar11);
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        fVar10 = (float10)fcos(fVar9);
        iVar7 = iVar7 + 0x2c;
        iVar5 = iVar5 + -1;
        *(float *)(*(int *)(extraout_ECX + 4) + -0x2c + iVar7) = (float)fVar10;
        fVar10 = (float10)fsin(fVar9);
        *(float *)(*(int *)(extraout_ECX + 4) + -0x28 + iVar7) = (float)fVar10;
        fVar9 = fVar9 + (float10)fVar11;
      } while (iVar5 != 0);
    }
  }
  else {
    local_c = (void *)0x1;
  }
LAB_0050feb0:
  iVar5 = 0;
  for (uVar8 = 0;
      (iVar7 = *(int *)(extraout_ECX + 4), iVar7 != 0 &&
      (uVar8 < (uint)((*(int *)(extraout_ECX + 8) - iVar7) / 0x2c))); uVar8 = uVar8 + 1) {
    *(float *)(iVar7 + 8 + iVar5) = fVar12 * *(float *)(iVar7 + 8 + iVar5);
    pfVar1 = (float *)(*(int *)(extraout_ECX + 4) + 0xc + iVar5);
    iVar5 = iVar5 + 0x2c;
    *pfVar1 = fVar12 * *pfVar1;
  }
  local_8 = (double)CONCAT44(local_8._4_4_,&stack0x00001478);
  uVar8 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001478);
  if (in_stack_00001480 < uVar8) {
    uVar8 = in_stack_00001480;
  }
  if (uVar8 != 0) {
    memmove(in_stack_0000147c,(void *)((int)in_stack_0000147c + uVar8),in_stack_00001480 - uVar8);
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001478,in_stack_00001480 - uVar8,false);
    if (bVar3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001478
                 ,in_stack_00001480 - uVar8);
    }
  }
  if (in_stack_00001488 != (HANDLE)0xffffffff) {
    if (in_stack_0000148c != (HANDLE)0x0) {
      if (in_stack_00001490 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001490);
        in_stack_00001490 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000148c);
    }
    CloseHandle(in_stack_00001488);
  }
  if (in_stack_00001490 != (void *)0x0) {
    free(in_stack_00001490);
  }
  if (in_stack_0000147c != (void *)0x0) {
    cVar2 = *(char *)((int)in_stack_0000147c + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)((int)in_stack_0000147c + -1) = cVar2 + -1;
    }
  }
  uVar8 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000050);
  if (in_stack_00000058 < uVar8) {
    uVar8 = in_stack_00000058;
  }
  if (uVar8 != 0) {
    memmove(in_stack_00000054,(void *)((int)in_stack_00000054 + uVar8),in_stack_00000058 - uVar8);
    uVar8 = in_stack_00000058 - uVar8;
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00000050,uVar8,false);
    if (bVar3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000050
                 ,uVar8);
    }
  }
  if (in_stack_00000060 != (HANDLE)0xffffffff) {
    if (in_stack_00000064 != (HANDLE)0x0) {
      if (in_stack_00000068 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000068);
        in_stack_00000068 = (LPCVOID)0x0;
        in_stack_0000006c = 0;
      }
      CloseHandle(in_stack_00000064);
      in_stack_00000064 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000060);
    in_stack_00000060 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000068 != (void *)0x0) {
    free(in_stack_00000068);
    in_stack_00000068 = (void *)0x0;
    in_stack_0000006c = 0;
  }
  in_stack_00000070 = 0;
  if (in_stack_00000054 != (void *)0x0) {
    cVar2 = *(char *)((int)in_stack_00000054 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)((int)in_stack_00000054 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = in_stack_000015b8;
  return local_c;
}

