
void __thiscall FUN_0053a820(int *param_1,int param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0053a871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x15c))();
    return;
  }
  if (param_2 != 1) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\Gameobj.cpp",0x2a4,"Invalid DestroyType!");
    return;
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
                    /* WARNING: Could not recover jumptable at 0x0053a861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b0))();
  return;
}

