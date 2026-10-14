
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_0050d420(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  int in_stack_00000034;
  HANDLE in_stack_00000040;
  HANDLE in_stack_00000044;
  LPCVOID in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_0000145c;
  HANDLE in_stack_00001468;
  HANDLE in_stack_0000146c;
  void *in_stack_00001470;
  void *in_stack_00001598;
  char *in_stack_000015a8;
  char *in_stack_000015ac;
  void *local_c;
  undefined *local_8;
  float local_4;
  
  local_4 = -NAN;
  local_8 = &DAT_005bfcaf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0x2;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000030);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000030,in_stack_000015a8,false);
  if (bVar2) {
LAB_0050d488:
    do {
      do {
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000030);
        if (!bVar2) goto LAB_0050d6f7;
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000030,"lens_glow");
      } while (!bVar2);
      do {
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000030);
        if (!bVar2) goto LAB_0050d488;
        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"nickname");
      } while (!bVar2);
      pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000030);
      iVar4 = stricmp(in_stack_000015ac,pcVar3);
    } while (iVar4 != 0);
    local_c = (void *)0x0;
    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000030);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"shape");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000030);
          if (pcVar3 == (char *)0x0) {
            *(undefined4 *)(extraout_ECX + 700) = 0;
            *(undefined1 *)(extraout_ECX + 0x2c0) = 0;
          }
          else {
            uVar5 = FUN_00417c50();
            *(undefined4 *)(extraout_ECX + 700) = uVar5;
          }
        }
        else {
          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"radius_scale");
          if (bVar2) {
            fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
            *(float *)(extraout_ECX + 0x2ac) = fVar6;
          }
          else {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"inner_color");
            if (bVar2) {
              fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,1);
              fVar7 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
              fVar8 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,2);
              *(float *)(extraout_ECX + 0x288) = fVar7;
              *(float *)(extraout_ECX + 0x28c) = fVar6;
              *(float *)(extraout_ECX + 0x290) = fVar8;
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"outer_color");
              if (bVar2) {
                fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,1);
                puVar9 = (undefined *)INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                fVar7 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,2);
                *(undefined **)(extraout_ECX + 0x2a0) = puVar9;
                *(float *)(extraout_ECX + 0x2a4) = fVar6;
                *(float *)(extraout_ECX + 0x2a8) = fVar7;
                local_8 = puVar9;
                local_4 = fVar6;
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"glow_fade_in_seconds");
                if (bVar2) {
                  fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                  *(float *)(extraout_ECX + 0x2e8) = fVar6;
                }
                else {
                  bVar2 = INI_Reader::is_value
                                    ((INI_Reader *)&stack0x00000030,"glow_fade_out_seconds");
                  if (bVar2) {
                    fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                    *(float *)(extraout_ECX + 0x2ec) = fVar6;
                  }
                  else {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"interior_tween");
                    if (bVar2) {
                      fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                      *(float *)(extraout_ECX + 0x2f0) = fVar6;
                    }
                    else {
                      bVar2 = INI_Reader::is_value
                                        ((INI_Reader *)&stack0x00000030,"interior_ray_tween");
                      if (bVar2) {
                        fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                        *(float *)(extraout_ECX + 0x2f4) = fVar6;
                      }
                      else {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000030,"max_LOD");
                        if (bVar2) {
                          INI_Reader::get_value_float((INI_Reader *)&stack0x00000030,0);
                          uVar5 = ftol();
                          *(undefined4 *)(extraout_ECX + 0x2b4) = uVar5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000030);
      } while (bVar2);
    }
  }
  else {
    local_c = (void *)0x1;
  }
LAB_0050d6f7:
  fVar6 = *(float *)(extraout_ECX + 0x2f0);
  fVar7 = (float)_DAT_005c89b8 - *(float *)(extraout_ECX + 0x2f0);
  local_4 = fVar7 * *(float *)(extraout_ECX + 0x28c) + fVar6 * *(float *)(extraout_ECX + 0x2a4);
  local_8 = (undefined *)
            (fVar7 * *(float *)(extraout_ECX + 0x288) + fVar6 * *(float *)(extraout_ECX + 0x2a0));
  *(undefined **)(extraout_ECX + 0x294) = local_8;
  *(float *)(extraout_ECX + 0x298) = local_4;
  *(float *)(extraout_ECX + 0x29c) =
       fVar7 * *(float *)(extraout_ECX + 0x290) + fVar6 * *(float *)(extraout_ECX + 0x2a8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001458,0,
             *(uint *)npos_exref);
  if (in_stack_00001468 != (HANDLE)0xffffffff) {
    if (in_stack_0000146c != (HANDLE)0x0) {
      if (in_stack_00001470 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001470);
        in_stack_00001470 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000146c);
    }
    CloseHandle(in_stack_00001468);
  }
  if (in_stack_00001470 != (void *)0x0) {
    free(in_stack_00001470);
  }
  if (in_stack_0000145c != 0) {
    cVar1 = *(char *)(in_stack_0000145c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_0000145c + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000030,0,
             *(uint *)npos_exref);
  if (in_stack_00000040 != (HANDLE)0xffffffff) {
    if (in_stack_00000044 != (HANDLE)0x0) {
      if (in_stack_00000048 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000048);
        in_stack_00000048 = (LPCVOID)0x0;
        in_stack_0000004c = 0;
      }
      CloseHandle(in_stack_00000044);
      in_stack_00000044 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000040);
    in_stack_00000040 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000048 != (void *)0x0) {
    free(in_stack_00000048);
    in_stack_00000048 = (void *)0x0;
    in_stack_0000004c = 0;
  }
  in_stack_00000050 = 0;
  if (in_stack_00000034 != 0) {
    cVar1 = *(char *)(in_stack_00000034 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00000034 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001598;
  return local_c;
}

