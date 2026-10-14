
int * __thiscall FUN_004be420(void *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd53f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x170);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004b6790();
    local_4._0_1_ = 1;
    FUN_004144b0();
    *(undefined1 *)((int)piVar2 + 0xcf) = 0;
    *(undefined1 *)((int)piVar2 + 0xce) = 0;
    *(undefined1 *)((int)piVar2 + 0xcd) = 0;
    *(undefined1 *)(piVar2 + 0x33) = 0;
    *(undefined1 *)((int)piVar2 + 0xd3) = 0;
    *(undefined1 *)((int)piVar2 + 0xd2) = 0;
    *(undefined1 *)((int)piVar2 + 0xd1) = 0;
    *(undefined1 *)(piVar2 + 0x34) = 0;
    FUN_004b5140();
    FUN_004b5140();
    FUN_004b5140();
    *piVar2 = (int)&PTR_FUN_005d54cc;
    piVar2[0x3f] = 0;
    piVar2[0x40] = 0;
    local_4._0_1_ = 3;
    FUN_004144b0();
    local_4._0_1_ = 4;
    piVar2[0x3e] = 0;
    piVar2[0x3d] = -1;
    piVar2[0x4e] = 0;
    FUN_00413df0(0,0xffffffff);
    *(undefined1 *)(piVar2 + 0x55) = 0;
    local_4 = CONCAT31(local_4._1_3_,5);
    *piVar2 = (int)&PTR_FUN_005d5f7c;
    FUN_004bd770();
    *(byte *)(piVar2 + 0x1b) = *(byte *)(piVar2 + 0x1b) & 0xfd;
    piVar3 = piVar2;
    DAT_0067244c = piVar2;
  }
  piVar3[4] = (int)param_1 + 0xc;
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar3 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    ExceptionList = param_1;
    return (int *)0x0;
  }
  ExceptionList = piVar2;
  return piVar3;
}

