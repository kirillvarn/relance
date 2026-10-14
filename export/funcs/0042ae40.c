
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ID_String * FUN_0042ae40(ID_String *param_1)

{
  undefined4 uVar1;
  ID_String *this;
  bool bVar2;
  char *pcVar3;
  
  this = param_1;
  bVar2 = ID_String::IsEmpty(param_1);
  if (!bVar2) {
    uVar1 = *(undefined4 *)this;
    if ((DAT_0067edc0 & 1) == 0) {
      DAT_0067edc0 = DAT_0067edc0 | 1;
      FUN_0042b7b0();
      FUN_005b7e6c(&LAB_0042adb0);
    }
    _DAT_0067ede4 = uVar1;
    FUN_0042c300(&param_1,&DAT_0067ede0);
    if ((param_1 != (ID_String *)DAT_00667cc4) && (param_1 + 0xc != (ID_String *)0x0)) {
      return param_1 + 0xc;
    }
  }
  pcVar3 = ID_String::get_string(this);
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: unknown Sound archetype \'%s\'",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x168,pcVar3);
  return (ID_String *)0x0;
}

