
undefined4 __thiscall FUN_0044dba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x70);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004507a0(param_1,param_1,param_3);
  }
  local_4 = 0xffffffff;
  FUN_00450830(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x500),*(undefined4 *)(param_1 + 0x58),0);
  ExceptionList = local_c;
  return uVar2;
}

