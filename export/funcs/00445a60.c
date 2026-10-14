
void __fastcall FUN_00445a60(int param_1)

{
  if ((*(int *)(param_1 + 0x1b0) == -1) && (*(int *)(param_1 + 0x300) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xc) = 0;
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xc) = 1;
  return;
}

