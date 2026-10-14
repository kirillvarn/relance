
void __fastcall FUN_00591510(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_005c4943;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e5334;
  piVar1 = (int *)param_1[2];
  piVar2 = (int *)*piVar1;
  local_4 = 1;
  while (piVar2 != piVar1) {
    puVar3 = (undefined4 *)piVar2[7];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    FUN_005948b0();
    piVar1 = (int *)param_1[2];
  }
  FUN_005947f0(local_10,*(undefined4 *)param_1[2],(undefined4 *)param_1[2]);
  local_4 = local_4 & 0xffffff00;
  FUN_005947f0(local_10,*(undefined4 *)param_1[2],(undefined4 *)param_1[2]);
  FUN_005b7e1d(param_1[2]);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_005b7e1d(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR_LAB_005e534c;
  ExceptionList = pvStack_c;
  return;
}

