
void __fastcall FUN_00406b60(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*param_1 + 0x2c))();
    (**(code **)(*param_1 + 0x24))(1);
  }
  return;
}

