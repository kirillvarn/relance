
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538b20(undefined4 param_1,HANDLE param_2,HANDLE param_3,LPCVOID param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float fVar8;
  void *in_stack_00001560;
  char *in_stack_00001570;
  undefined4 *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_005c0a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&local_8);
  bVar1 = INI_Reader::open((INI_Reader *)&local_8,in_stack_00001570,false);
  if ((bVar1) && (bVar1 = INI_Reader::read_header((INI_Reader *)&local_8), bVar1)) {
    do {
      bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"LightAnim");
      puVar3 = DAT_0067555c;
      puVar6 = DAT_00675560;
      if (bVar1) {
        puVar3 = operator_new(0x4c);
        local_c = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_00538ed0();
          *puVar3 = &PTR_FUN_005de720;
          puVar3[5] = 0;
          *(undefined1 *)(puVar3 + 6) = 0;
          FUN_00538fe0();
          *puVar3 = &PTR_FUN_005de730;
        }
        pfVar7 = (float *)0x0;
        bVar1 = INI_Reader::read_value((INI_Reader *)&local_8);
        if (bVar1) {
          do {
            bVar1 = INI_Reader::is_value((INI_Reader *)&local_8,"name");
            if (bVar1) {
              pcVar4 = INI_Reader::get_value_string((INI_Reader *)&local_8);
              if (pcVar4 == (char *)0x0) {
                puVar3[5] = 0;
                *(undefined1 *)(puVar3 + 6) = 0;
              }
              else {
                uVar5 = FUN_00417c50();
                puVar3[5] = uVar5;
              }
            }
            else {
              bVar1 = INI_Reader::is_value((INI_Reader *)&local_8,"frame");
              if (bVar1) {
                pfVar7 = operator_new(0x10);
                fVar8 = INI_Reader::get_value_float((INI_Reader *)&local_8,0);
                *pfVar7 = fVar8;
                INI_Reader::get_value_float((INI_Reader *)&local_8,1);
                uVar2 = ftol();
                *(undefined1 *)(pfVar7 + 1) = uVar2;
                INI_Reader::get_value_float((INI_Reader *)&local_8,2);
                uVar2 = ftol();
                *(undefined1 *)((int)pfVar7 + 5) = uVar2;
                INI_Reader::get_value_float((INI_Reader *)&local_8,3);
                uVar2 = ftol();
                *(undefined1 *)((int)pfVar7 + 6) = uVar2;
                fVar8 = INI_Reader::get_value_float((INI_Reader *)&local_8,4);
                pfVar7[2] = fVar8;
                if (fVar8 < _DAT_005c7474 != (fVar8 == _DAT_005c7474)) {
                  pfVar7[2] = 0.01;
                }
                pfVar7[3] = 0.0;
                if ((*(char *)(puVar3 + 3) == '\0') ||
                   (puVar6 = (undefined4 *)puVar3[4], puVar6 == (undefined4 *)0x0)) {
                  puVar6 = operator_new(0xc);
                }
                else {
                  puVar3[4] = *puVar6;
                }
                puVar6[1] = puVar3[2];
                *puVar6 = 0;
                puVar6[2] = pfVar7;
                if ((undefined4 *)puVar3[2] == (undefined4 *)0x0) {
                  puVar3[1] = puVar6;
                }
                else {
                  *(undefined4 *)puVar3[2] = puVar6;
                }
                puVar3[2] = puVar6;
              }
            }
            bVar1 = INI_Reader::read_value((INI_Reader *)&local_8);
          } while (bVar1);
          if (pfVar7 != (float *)0x0) {
            pfVar7[3] = -NAN;
          }
        }
        if ((DAT_00675564 == '\0') || (DAT_00675568 == (undefined4 *)0x0)) {
          puVar6 = operator_new(0xc);
        }
        else {
          puVar6 = DAT_00675568;
          DAT_00675568 = (undefined4 *)*DAT_00675568;
        }
        puVar6[1] = DAT_00675560;
        *puVar6 = 0;
        puVar6[2] = puVar3;
        puVar3 = puVar6;
        if (DAT_00675560 != (undefined4 *)0x0) {
          *DAT_00675560 = puVar6;
          puVar3 = DAT_0067555c;
        }
      }
      DAT_00675560 = puVar6;
      DAT_0067555c = puVar3;
      bVar1 = INI_Reader::read_header((INI_Reader *)&local_8);
    } while (bVar1);
  }
  local_c = (undefined4 *)&stack0x00001420;
  FileMap::close((FileMap *)&stack0x00001420);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001420,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_8,0,
             *(uint *)npos_exref);
  if (param_2 != (HANDLE)0xffffffff) {
    if (param_3 != (HANDLE)0x0) {
      if (param_4 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_4);
        param_4 = (LPCVOID)0x0;
      }
      CloseHandle(param_3);
    }
    CloseHandle(param_2);
  }
  if (param_4 != (void *)0x0) {
    free(param_4);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_8,true);
  ExceptionList = in_stack_00001560;
  return;
}

