
void __fastcall FUN_0044d450(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005cc094;
  local_4 = 0;
  piVar3 = (int *)FUN_0059da10("NN_News");
  if (piVar3 != (int *)0x0) {
    FUN_004424f0(0);
    iVar2 = piVar3[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  *param_1 = &PTR_LAB_005cc084;
  ExceptionList = local_c;
  return;
}

