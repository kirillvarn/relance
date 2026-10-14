
void __fastcall FUN_00414790(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*param_1 + 4))();
    return;
  }
  return;
}

