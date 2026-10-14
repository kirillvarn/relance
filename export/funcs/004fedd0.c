
int FUN_004fedd0(ID_String *param_1)

{
  char *pcVar1;
  int *piVar2;
  
  if (DAT_00674f9c != DAT_00674fa0) {
    piVar2 = DAT_00674f9c;
    do {
      if (*(int *)(*piVar2 + 4) == *(int *)param_1) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_00674fa0);
  }
  pcVar1 = ID_String::get_string(param_1);
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: GateTunnel %s not found",
             "E:\\FL\\Scratch\\Source\\Client\\Space\\GateTunnel.cpp",0xfc,pcVar1);
  return 0;
}

