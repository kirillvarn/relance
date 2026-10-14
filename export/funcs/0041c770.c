
void FUN_0041c770(ushort **param_1,undefined4 param_2)

{
  int iVar1;
  ushort local_800 [1024];
  
  iVar1 = FUN_004347e0(DAT_0067eca8,param_2,local_800,0x400);
  if (iVar1 == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Failed to find string resource %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\MiscUtil.cpp",0xf1,param_2);
  }
  malloc_wstrcpy(param_1,local_800);
  return;
}

