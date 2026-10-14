
void __fastcall FUN_004fc950(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = ftol();
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  uVar1 = ftol();
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  uVar1 = ftol();
  *(undefined1 *)(param_1 + 0x32) = uVar1;
  *(undefined1 *)(param_1 + 0x33) = 0xff;
  return;
}

