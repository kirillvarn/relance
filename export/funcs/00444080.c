
void __fastcall FUN_00444080(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

