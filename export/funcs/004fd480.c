
void FUN_004fd480(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf4f1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    iVar1 = param_2[2];
    param_1[2] = iVar1;
    param_1[3] = param_2[3];
    if (iVar1 != 0) {
      FUN_004f7a80();
    }
    piVar2 = (int *)param_1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if (param_1[3] != 0) {
      FUN_00537ac0();
    }
  }
  ExceptionList = local_c;
  return;
}

