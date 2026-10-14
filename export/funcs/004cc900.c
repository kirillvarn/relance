
void FUN_004cc900(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_006748f8 != 0) {
    iVar1 = FUN_004c9a80(param_1);
    if (iVar1 == 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Failed to load costume %d/%d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x119,param_1[1],*param_1);
    }
  }
  return;
}

