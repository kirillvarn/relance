
int * FUN_00419760(char *param_1)

{
  char *_Str1;
  int iVar1;
  int *piVar2;
  char *_Str2;
  
  piVar2 = (int *)*DAT_006166a0;
  if (piVar2 != DAT_006166a0) {
    do {
      _Str2 = param_1;
      _Str1 = (char *)(**(code **)piVar2[2])();
      iVar1 = stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        piVar2 = piVar2 + 2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x20))();
          return piVar2;
        }
        break;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_006166a0);
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: GraphLib - failed to find \'%s\'\n",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\GraphLibrary.cpp",0x1b3,param_1);
  return (int *)0x0;
}

