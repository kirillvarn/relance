
int FUN_00430b00(undefined4 param_1,uint param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                int param_6,uint param_7,int param_8,int param_9,char param_10,
                basic_string<char,std::char_traits<char>,std::allocator<char>_> param_11)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined **in_stack_0000003c;
  uint in_stack_00000040;
  char *in_stack_00000044;
  int in_stack_00000094;
  char in_stack_00000098;
  uint in_stack_0000012c;
  void *in_stack_00001700;
  char *in_stack_00001710;
  undefined4 uStack_c;
  undefined1 *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = &LAB_005b8f85;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  local_4 = DAT_00667e28;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000198);
  piVar7 = (int *)0x0;
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000198,in_stack_00001710,false);
  if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000198), bVar2)) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000198,"Voice");
      if (bVar2) {
        in_stack_0000003c = &PTR_LAB_005cad10;
        ID_String::clear((ID_String *)&stack0x00000040);
        CacheString::clear((CacheString *)&stack0x00000044);
        FUN_00431f90();
        FUN_0043bca0();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &stack0x00000068,(allocator<char> *)&local_8);
        FUN_005a67c0();
        in_stack_0000003c = &PTR_LAB_005cacec;
        in_stack_00000094 = 0;
        in_stack_00000098 = '\0';
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000198);
        if (bVar2) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"nickname");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000198);
              in_stack_00000040 = CreateID(pcVar3);
              in_stack_00000044 = StringAlloc(pcVar3,false);
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"extend");
              if (bVar2) {
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000198);
                if (pcVar3 == (char *)0x0) {
                  in_stack_00000094 = 0;
                  in_stack_00000098 = '\0';
                }
                else {
                  in_stack_00000094 = FUN_00417c50();
                }
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"script");
                if (bVar2) {
                  pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000198);
                  param_11 = uStack_c._2_1_;
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                            (&param_11,false);
                  uVar6 = 0xffffffff;
                  pcVar3 = pcVar4;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar3;
                    pcVar3 = pcVar3 + 1;
                  } while (cVar1 != '\0');
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                            (&param_11,pcVar4,~uVar6 - 1);
                  FUN_00431a30();
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                            (&param_11,true);
                }
                else {
                  ID_String::get_string((ID_String *)&stack0x00000040);
                  INI_Reader::get_name_ptr((INI_Reader *)&stack0x00000198);
                  (**(code **)FDUMP_exref)();
                  INI_Reader::log_link((INI_Reader *)&stack0x00000198,"");
                }
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000198);
          } while (bVar2);
        }
        if (in_stack_00000094 == 0) {
          in_stack_0000012c = in_stack_00000040;
          FUN_00431d90();
          FUN_00431cd0();
          FUN_004316c0();
          if (param_10 == '\x01') {
            piVar7 = (int *)(param_9 + 0x10);
            FUN_004312e0();
          }
          else {
LAB_00430e68:
            piVar7 = (int *)0x0;
          }
        }
        else {
          param_7 = CreateID(&stack0x00000098);
          FUN_00432240();
          if (param_8 == DAT_00667e1c) goto LAB_00430e68;
          piVar7 = (int *)(param_8 + 0x10);
        }
        FUN_00431ba0();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &stack0x00000068,true);
        FUN_004319d0();
        FUN_00431910();
      }
      else {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000198,"Sound");
        if ((bVar2) ||
           (bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000198,"VoiceSound"), bVar2)) {
          if (piVar7 == (int *)0x0) {
            (**(code **)FDUMP_exref)();
            INI_Reader::log_link((INI_Reader *)&stack0x00000198,"");
          }
          else {
            ID_String::clear((ID_String *)&param_2);
            param_3 = 0xffffffff;
            param_5._0_1_ = 0;
            param_5._1_1_ = 0;
            param_5._2_2_ = 0;
            param_4 = piVar7;
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000198);
            if (bVar2) {
              do {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"file");
                if (bVar2) {
                  INI_Reader::get_value_string((INI_Reader *)&stack0x00000198);
                  (**(code **)*param_4)();
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"priority");
                  if (bVar2) {
                    iVar5 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000198,0);
                    param_5._0_1_ = (undefined1)iVar5;
                  }
                  else {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"attenuation");
                    if (bVar2) {
                      iVar5 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000198,0);
                      param_5._1_1_ = (undefined1)iVar5;
                    }
                    else {
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000198,"duration");
                      if (!bVar2) {
                        bVar2 = INI_Reader::is_value
                                          ((INI_Reader *)&stack0x00000198,(char *)&PTR_DAT_005cabdc)
                        ;
                        if (bVar2) {
                          pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000198,0);
                          param_2 = CreateID(pcVar3);
                        }
                        else {
                          INI_Reader::get_name_ptr((INI_Reader *)&stack0x00000198);
                          (**(code **)(*piVar7 + 0x10))();
                          (**(code **)FDUMP_exref)();
                          INI_Reader::log_link((INI_Reader *)&stack0x00000198,"");
                        }
                      }
                    }
                  }
                }
                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000198);
              } while (bVar2);
            }
            bVar2 = ID_String::IsEmpty((ID_String *)&param_2);
            if (bVar2) {
              (**(code **)(*piVar7 + 0x10))();
              (**(code **)FDUMP_exref)();
              INI_Reader::log_link((INI_Reader *)&stack0x00000198,"");
            }
            else {
              iVar5 = piVar7[4];
              FUN_00432240();
              if (param_6 == iVar5) {
                FUN_004311d0();
                FUN_004320b0();
                FUN_00431ed0();
                FUN_00431690();
              }
            }
          }
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000198);
    } while (bVar2);
  }
  iVar5 = (int)DAT_00667e28 - (int)local_4;
  local_4 = (int *)&stack0x000015c0;
  FileMap::close((FileMap *)&stack0x000015c0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000015c0,
             true);
  FileMap::close((FileMap *)&stack0x00000198);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000198,
             true);
  ExceptionList = in_stack_00001700;
  return iVar5;
}

