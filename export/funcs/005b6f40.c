
undefined4 FUN_005b6f40(LPCSTR param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  DAT_0067ed54 = LoadLibraryA(param_1);
  puVar1 = PTR_FUN_00616418;
  if (DAT_0067ed54 != (HMODULE)0x0) {
    pcVar2 = (code *)(*(code *)PTR_FUN_00616418)(DAT_0067ed54,"GetServerInterface");
    DAT_0067ed58 = (*pcVar2)();
    pcVar2 = (code *)(*(code *)puVar1)(DAT_0067ed54,"GetChatServerInterface");
    DAT_0067ed5c = (*pcVar2)();
    return DAT_0067ed58;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Connect - failed to LoadLibrary(%s)\n",
             "E:\\FL\\Scratch\\Source\\network\\ServerConnect.cpp",0x1f,param_1);
  return DAT_0067ed58;
}

