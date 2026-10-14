
void FUN_004b59b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int in_stack_00000128;
  int in_stack_00001550;
  void *in_stack_0000168c;
  undefined4 uStack_c;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = (undefined4 *)&LAB_005bd14f;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  GetFileSysPath(&stack0x00000020,"interface\\Rollover.ini",(IFileSystem *)0x0);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000124);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x00000124,&stack0x00000020,false);
  if ((bVar3) && (bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000124), bVar3)) {
    do {
      bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x00000124,"RolloverTable");
      if ((bVar3) && (bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000124), bVar3)) {
        do {
          bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000124,"map");
          if (bVar3) {
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000124,0);
            uVar4 = ftol();
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000124,1);
            ftol();
            bVar3 = true;
            puVar5 = *(undefined4 **)(extraout_ECX + 0x154);
            puVar2 = (undefined4 *)(*(undefined4 **)(extraout_ECX + 0x154))[1];
            while (puVar2 != *(undefined4 **)(extraout_ECX + 0x158)) {
              bVar3 = uVar4 < (uint)puVar2[3];
              puVar5 = puVar2;
              if (bVar3) {
                puVar2 = (undefined4 *)*puVar2;
              }
              else {
                puVar2 = (undefined4 *)puVar2[2];
              }
            }
            local_4 = uVar4;
            if (*(char *)(extraout_ECX + 0x15c) == '\0') {
              local_8 = puVar5;
              if (bVar3) {
                puVar5 = (undefined4 *)FUN_0053e430();
                if (local_8 != (undefined4 *)*puVar5) {
                  FUN_0043c010();
                  goto LAB_004b5b56;
                }
                uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                FUN_004b68b0();
              }
              else {
LAB_004b5b56:
                if ((uint)local_8[3] < local_4) {
                  uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                  FUN_004b68b0();
                }
                else {
                  uStack_c = (void *)((uint)uStack_c & 0xffffff);
                }
              }
              FUN_0046d660();
            }
            else {
              FUN_004b68b0();
            }
          }
          bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000124);
        } while (bVar3);
      }
      bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000124);
    } while (bVar3);
  }
  FileMap::close((FileMap *)&stack0x0000154c);
  if (in_stack_00001550 != 0) {
    cVar1 = *(char *)(in_stack_00001550 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001550 + -1) = cVar1 + -1;
    }
  }
  FileMap::close((FileMap *)&stack0x00000124);
  if (in_stack_00000128 != 0) {
    cVar1 = *(char *)(in_stack_00000128 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(in_stack_00000128 + -1) = cVar1 + -1;
      ExceptionList = in_stack_0000168c;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_0000168c;
  return;
}

