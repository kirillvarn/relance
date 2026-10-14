
undefined4 FUN_00411cd0(char *param_1)

{
  int iVar1;
  
  iVar1 = stricmp(param_1,"AMBIENT");
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = stricmp(param_1,"POINT");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = stricmp(param_1,"CONE");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = stricmp(param_1,"DIRECTIONAL");
  if (iVar1 == 0) {
    return 3;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: invalid [LightSource] type = \'%s\'",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\EngineLight.cpp",0x2ec,param_1);
  return 0xffffffff;
}

