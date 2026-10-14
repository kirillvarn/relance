
void __thiscall FUN_00453e60(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_2;
  param_2 = StringAlloc(param_2,false);
  iVar2 = FUN_0042dd20(&param_2);
  *(int *)(param_1 + 0x74) = iVar2;
  if (iVar2 != 0) {
    FUN_0042e080();
    return;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Thorn_Psys: Failed to find [VisEffect] %s.",
             "E:\\FL\\Scratch\\Source\\Client\\GF\\ScriptPsys.cpp",0x4c,pcVar1);
  return;
}

