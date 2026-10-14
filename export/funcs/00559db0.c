
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559db0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_00000028;
  float in_stack_00000038;
  float in_stack_0000003c;
  void *in_stack_00000040;
  undefined1 *in_stack_00000044;
  undefined1 *in_stack_00000048;
  void *in_stack_000016b8;
  void *pvStack_c;
  undefined1 *local_8;
  float fStack_4;
  
  fStack_4 = -NAN;
  local_8 = &LAB_005c15f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005b7e90();
  if (DAT_00679af0 == '\0') {
    DAT_00679af0 = '\x01';
    FUN_00425b30();
    puVar7 = (undefined1 *)0x0;
    FUN_004205c0();
    cVar1 = FUN_00420690();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_004206c0();
      DAT_00679a40 = (undefined1 *)*puVar3;
    }
    if ((DAT_00679a40 == DAT_00679a30) ||
       (puVar7 = DAT_00679a40 + 0x28, puVar7 == (undefined1 *)0x0)) {
      FUN_00411c50();
      (**(code **)FDUMP_exref)();
    }
    puVar8 = (undefined1 *)0x0;
    DAT_00679af4 = puVar7;
    FUN_004205c0();
    cVar1 = FUN_00420690();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_004206c0();
      DAT_00679a40 = (undefined1 *)*puVar3;
    }
    if ((DAT_00679a40 == DAT_00679a30) ||
       (puVar8 = DAT_00679a40 + 0x28, puVar8 == (undefined1 *)0x0)) {
      FUN_00411c50();
      (**(code **)FDUMP_exref)();
    }
    puVar7 = (undefined1 *)0x0;
    DAT_00679af8 = puVar8;
    FUN_004205c0();
    cVar1 = FUN_00420690();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_004206c0();
      DAT_00679a40 = (undefined1 *)*puVar3;
    }
    if ((DAT_00679a40 == DAT_00679a30) ||
       (puVar7 = DAT_00679a40 + 0x28, puVar7 == (undefined1 *)0x0)) {
      FUN_00411c50();
      (**(code **)FDUMP_exref)();
    }
    puVar8 = (undefined1 *)0x0;
    DAT_00679afc = puVar7;
    FUN_004205c0();
    FUN_00512660();
    if ((local_8 == DAT_00679a30) || (puVar8 = local_8 + 0x28, puVar8 == (undefined1 *)0x0)) {
      (**(code **)FDUMP_exref)();
    }
    DAT_00679b00 = puVar8;
    GetFileSysPath(&stack0x0000004c,"interface\\ButtonMontage.ini",*(IFileSystem **)Data_exref);
    INI_Reader::INI_Reader((INI_Reader *)&stack0x00000150);
    bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000150,&stack0x0000004c,false);
    if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000150), bVar2)) {
      do {
        fStack_4 = 0.0;
        param_1 = 0.0;
        pvStack_c = (void *)0x0;
        iVar6 = 0;
        iVar10 = 0;
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000150,"Montage");
        if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000150), bVar2)) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000150,"size");
            if (bVar2) {
              iVar6 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000150,0);
              pvStack_c = (void *)0x4;
              if (0 < iVar6) {
                pvStack_c = (void *)(0x100 / (longlong)iVar6);
              }
              pvStack_c = (void *)(_DAT_005c75dc / (float)(int)pvStack_c);
LAB_0055a2a1:
              fStack_4 = 0.0;
              param_1 = 0.0;
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000150,"texture");
              if (bVar2) {
                iVar10 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000150,0);
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000150,"num_pages");
                if (bVar2) {
                  INI_Reader::get_value_int((INI_Reader *)&stack0x00000150,0);
                }
                else {
                  puVar7 = DAT_00679afc;
                  if (iVar10 != 2) {
                    if (iVar10 == 3) {
                      pvStack_c = (void *)0x3f000000;
                      puVar7 = DAT_00679b00;
                    }
                    else {
                      puVar7 = DAT_00679af4;
                      if ((iVar6 != 0x20) && (puVar7 = (undefined1 *)0x0, iVar6 == 0x40)) {
                        puVar7 = DAT_00679af8;
                      }
                    }
                  }
                  local_8 = (undefined1 *)0x0;
                  bVar2 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000150,1);
                  if (!bVar2) {
                    local_8 = (undefined1 *)
                              INI_Reader::get_value_float((INI_Reader *)&stack0x00000150,1);
                  }
                  pcVar4 = INI_Reader::get_name_ptr((INI_Reader *)&stack0x00000150);
                  in_stack_00000028 = param_2._3_1_;
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                            (&stack0x00000028,false);
                  uVar5 = 0xffffffff;
                  pcVar9 = pcVar4;
                  do {
                    if (uVar5 == 0) break;
                    uVar5 = uVar5 - 1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 != '\0');
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                            (&stack0x00000028,pcVar4,~uVar5 - 1);
                  in_stack_00000038 = fStack_4;
                  in_stack_0000003c = param_1;
                  in_stack_00000040 = pvStack_c;
                  in_stack_00000048 = local_8;
                  in_stack_00000044 = puVar7;
                  FUN_0055d870();
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                            (&stack0x00000028,true);
                  fStack_4 = (float)pvStack_c + fStack_4;
                  if (_DAT_005e1518 < fStack_4) {
                    fStack_4 = 0.0;
                    param_1 = (float)pvStack_c + param_1;
                    if (_DAT_005e1518 < param_1) goto LAB_0055a2a1;
                  }
                }
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000150);
          } while (bVar2);
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000150);
      } while (bVar2);
    }
    local_8 = &stack0x00001578;
    FileMap::close((FileMap *)&stack0x00001578);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001578,
               true);
    FileMap::close((FileMap *)&stack0x00000150);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000150,
               true);
  }
  ExceptionList = in_stack_000016b8;
  return;
}

