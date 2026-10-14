
void FUN_00421dd0(uint param_1)

{
  int *piVar1;
  
  if (param_1 < 0xb72) {
    if (param_1 == 0xb71) {
      DAT_006648c4 = '\x01';
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x17,DAT_006648cc);
      if (DAT_006648c4 == '\0') {
        piVar1 = *(int **)Pipeline_exref;
      }
      else {
        piVar1 = *(int **)Pipeline_exref;
      }
      (**(code **)(*piVar1 + 0xf0))(piVar1,7,DAT_006648c4 != '\0');
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,DAT_006648c8);
      return;
    }
    if (param_1 == 0xb44) {
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,2);
      return;
    }
    if (param_1 == 0xb50) {
      DAT_006648d8 = 1;
      return;
    }
  }
  else {
    if (param_1 == 0xbe2) {
      DAT_006648b8 = 1;
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,1);
      return;
    }
    if (param_1 == 0xde1) {
      DAT_006648d0 = 1;
      return;
    }
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: GL: %s\n",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\OpenGL.cpp",0x287,"glEnable - invalid");
  return;
}

