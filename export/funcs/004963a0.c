
void __fastcall FUN_004963a0(undefined4 *param_1)

{
  short *psVar1;
  
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  param_1[0x11] = 0;
  psVar1 = (short *)param_1[2];
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    *psVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

