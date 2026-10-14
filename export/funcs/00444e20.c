
void __fastcall FUN_00444e20(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

