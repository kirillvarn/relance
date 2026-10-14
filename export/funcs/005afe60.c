
void __fastcall FUN_005afe60(int param_1)

{
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
  {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    return;
  }
  operator_new(0xc);
  return;
}

