
int * __thiscall FUN_004b6630(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uStack_18;
  int *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd23d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x18c);
  local_4 = 0;
  local_14 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004b6790();
    local_4._0_1_ = 1;
    FUN_004144b0();
    *(undefined1 *)((int)piVar2 + 0xcf) = 0;
    *(undefined1 *)((int)piVar2 + 0xce) = 0;
    *(undefined1 *)((int)piVar2 + 0xcd) = 0;
    *(undefined1 *)(piVar2 + 0x33) = 0;
    FUN_004b5140();
    FUN_004b5140();
    FUN_004b5140();
    FUN_004b5140();
    *piVar2 = (int)&PTR_FUN_005d54cc;
    local_10 = piVar2 + 0x3b;
    piVar2[0x3d] = 0;
    piVar2[0x3e] = 0;
    local_4._0_1_ = 3;
    FUN_004144b0();
    local_4._0_1_ = 4;
    FUN_004963a0();
    local_4._0_1_ = 5;
    FUN_004b6800((int)&uStack_18 + 3,0,(int)&uStack_18 + 2);
    local_4 = CONCAT31(local_4._1_3_,6);
    *piVar2 = (int)&PTR_FUN_005d5454;
    FUN_004b4f10();
    *(byte *)(piVar2 + 0x1b) = *(byte *)(piVar2 + 0x1b) & 0xfd;
    DAT_00672288 = piVar2;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = uStack_18;
    return (int *)0x0;
  }
  ExceptionList = local_14;
  return piVar2;
}

