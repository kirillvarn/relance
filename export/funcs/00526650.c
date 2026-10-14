
int * __fastcall FUN_00526650(int param_1)

{
  int *piVar1;
  CDynamicAsteroid *this;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c01c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(200);
  local_4 = 0;
  local_2c = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005392d0(9);
    piVar1[0x2a] = param_1;
    piVar1[0x2e] = 0;
    piVar1[0x2f] = 0;
    piVar1[0x30] = 0;
    piVar1[0x31] = 0;
    *piVar1 = (int)&PTR_LAB_005dccdc;
    piVar1[1] = (int)&PTR_LAB_005dcc5c;
    piVar1[3] = (int)&PTR_FUN_005dcc50;
    *(undefined1 *)(piVar1 + 0x2b) = 0;
    *(undefined1 *)((int)piVar1 + 0xad) = 0;
    piVar1[4] = 0;
    piVar1[0x2d] = 0;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x168))(*(undefined4 *)(param_1 + 8));
  if (((piVar1 == (int *)0xfffffff4) ||
      (this = (CDynamicAsteroid *)piVar1[4], this == (CDynamicAsteroid *)0x0)) ||
     ((*(uint *)(this + 0x4c) & 0x4001) != 0x4001)) {
    this = (CDynamicAsteroid *)0x0;
  }
  local_2c = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_2c = (int *)FUN_00554e90();
  CDynamicAsteroid::init(this,(CreateParms *)&local_2c);
  if ((CObject *)piVar1[4] != (CObject *)0x0) {
    PhySys::SetCollisionState((CObject *)piVar1[4],false);
  }
  (**(code **)(*piVar1 + 0x170))();
  FUN_00540c30(piVar1,0);
  *(undefined1 *)(piVar1 + 0x2b) = 0;
  *(undefined1 *)((int)piVar1 + 0xad) = 0;
  ExceptionList = local_10;
  return piVar1;
}

