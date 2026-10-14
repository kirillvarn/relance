
void __fastcall FUN_00502d90(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1[2] != 0) {
    FUN_004f7a90();
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00537ad0();
    param_1[3] = 0;
  }
  *param_1 = 0;
  return;
}

