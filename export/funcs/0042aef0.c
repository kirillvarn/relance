
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ID_String * FUN_0042aef0(ID_String *param_1,undefined4 param_2,undefined4 param_3)

{
  ID_String *pIVar1;
  ID_String *this;
  undefined4 uVar2;
  ID_String *this_00;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int local_8 [2];
  
  this_00 = param_1;
  bVar3 = ID_String::IsEmpty(param_1);
  if (!bVar3) {
    uVar2 = *(undefined4 *)this_00;
    if ((DAT_0067edc0 & 1) == 0) {
      DAT_0067edc0 = DAT_0067edc0 | 1;
      FUN_0042b7b0();
      FUN_005b7e6c(&LAB_0042adb0);
    }
    _DAT_0067ede4 = uVar2;
    FUN_0042c300(&param_1,&DAT_0067ede0);
    if ((param_1 != (ID_String *)DAT_00667cc4) &&
       (pIVar1 = param_1 + 0xc, pIVar1 != (ID_String *)0x0)) {
      this = param_1 + 0x10;
      pcVar4 = ID_String::get_string(this_00);
      pcVar5 = ID_String::get_string(this);
      iVar6 = stricmp(pcVar5,pcVar4);
      if (iVar6 == 0) {
        pcVar4 = ID_String::get_string(this_00);
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Redefining sound \'%s\'.\n",
                   "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x17a,pcVar4);
        FUN_0042bc70(param_2,param_3);
        return pIVar1;
      }
      pcVar4 = ID_String::get_string(this_00);
      pcVar5 = ID_String::get_string(this);
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Sound nickname collision (%s) and (%s)\n",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x182,pcVar5,pcVar4);
      return (ID_String *)0x0;
    }
  }
  FUN_0042c0f0(local_8,param_2);
  return (ID_String *)(local_8[0] + 0xc);
}

