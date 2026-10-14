
int FUN_00401300(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != -1) {
    piVar1 = (int *)*DAT_00616444;
    while (piVar1 != DAT_00616444) {
      if (piVar1[5] == param_1) {
        iVar2 = piVar1[4] + -1;
        piVar1[4] = iVar2;
        if ((iVar2 != 0) && (iVar2 < 0)) {
          (**(code **)FDUMP_exref)
                    (0x100001,"%s(%d) : *** ERROR: %s ref count < 0!",
                     "E:\\FL\\Scratch\\Source\\Client\\cmn\\ALELib.cpp",0x7d,piVar1[3]);
        }
        return iVar2;
      }
      FUN_00536020();
    }
  }
  return -1;
}

