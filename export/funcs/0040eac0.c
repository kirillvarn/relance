
int FUN_0040eac0(undefined4 param_1,char param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_stack_00001438;
  void *in_stack_00001574;
  char *in_stack_00001584;
  char in_stack_00001588;
  undefined4 *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = (undefined4 *)&LAB_005b87bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  FUN_0042e290();
  local_c = DAT_006164c0;
  INI_Reader::INI_Reader((INI_Reader *)&param_3);
  bVar2 = INI_Reader::open((INI_Reader *)&param_3,in_stack_00001584,false);
  if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&param_3), bVar2)) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"Effect");
      if (bVar2) {
        puVar3 = operator_new(0x58);
        local_8 = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          ID_String::clear((ID_String *)(puVar3 + 1));
          puVar3[2] = 0;
          CacheString::clear((CacheString *)(puVar3 + 3));
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          *(undefined1 *)(puVar3 + 8) = 0;
          puVar3[0x10] = 0x3f800000;
          puVar3[0x11] = 0x3f800000;
          puVar3[0x12] = 0;
          puVar3[0x14] = 0;
          puVar3[0x15] = 0;
          puVar3[0x13] = 0xffffffff;
        }
        bVar2 = INI_Reader::read_value((INI_Reader *)&param_3);
        if (bVar2) {
          do {
            FUN_0040e300();
            bVar2 = INI_Reader::read_value((INI_Reader *)&param_3);
          } while (bVar2);
        }
        local_4 = puVar3[1];
        FUN_0046d6d0();
        if (param_2 == '\0') {
          if (in_stack_00001588 == '\0') {
            ID_String::get_string((ID_String *)(puVar3 + 1));
            (**(code **)FDUMP_exref)();
          }
          else {
            FUN_0040e6e0();
          }
          if (puVar3 != (undefined4 *)0x0) {
            iVar4 = puVar3[0x15];
            if (0 < iVar4) {
              ID_String::get_string((ID_String *)(puVar3 + 1));
              (**(code **)FDUMP_exref)();
              if (0 < iVar4) {
                do {
                  FUN_0040e990();
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
            FUN_005b7e1d();
          }
        }
      }
      else {
        bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"EffectLOD");
        if (bVar2) {
          FUN_0042dae0();
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"EffectType");
          if (bVar2) {
            FUN_004fd5a0();
          }
          else {
            bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"VisEffect");
            if (bVar2) {
              FUN_0042dc40();
            }
            else {
              bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"BeamSpear");
              if ((bVar2) ||
                 (bVar2 = INI_Reader::is_header((INI_Reader *)&param_3,"BeamBolt"), bVar2)) {
                FUN_0042e850();
              }
            }
          }
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&param_3);
    } while (bVar2);
  }
  iVar4 = (int)DAT_006164c0 - (int)local_c;
  local_8 = (undefined4 *)&stack0x00001434;
  FileMap::close((FileMap *)&stack0x00001434);
  if (in_stack_00001438 != 0) {
    cVar1 = *(char *)(in_stack_00001438 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001438 + -1) = cVar1 + -1;
    }
  }
  FileMap::close((FileMap *)&param_3);
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(param_4 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001574;
  return iVar4;
}

