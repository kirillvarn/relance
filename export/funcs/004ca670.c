
void __fastcall FUN_004ca670(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 3;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
    param_1[2] = DAT_006108f8;
  }
  return;
}

