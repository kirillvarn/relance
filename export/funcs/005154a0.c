
undefined4 * __thiscall
FUN_005154a0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  
  param_1[1] = param_4;
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = param_5;
  if (param_3 != 0) {
    FUN_004f7a80();
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (param_1[3] != 0) {
    FUN_00537ac0();
  }
  return param_1;
}

