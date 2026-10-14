
void FUN_00502b00(void)

{
  ID_String *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf7fb;
  local_c = ExceptionList;
  if (DAT_00674fd0 == (void *)0x0) {
    ExceptionList = &local_c;
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0xd5,
               "no JumpShipEffectDesc was loaded, creating a default");
    this = operator_new(0x14);
    uStack_4 = 0;
    if (this == (ID_String *)0x0) {
      DAT_00674fd0 = (void *)0x0;
    }
    else {
      ID_String::clear(this);
      ID_String::clear(this + 4);
      ID_String::clear(this + 8);
      ID_String::clear(this + 0xc);
      ID_String::clear(this + 0x10);
      DAT_00674fd0 = this;
    }
  }
  ExceptionList = local_c;
  return;
}

