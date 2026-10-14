
int * __thiscall FUN_0059c3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4d2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0xf4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[3] = 0;
    piVar2[2] = 0;
    piVar2[1] = 0;
    piVar2[5] = 0;
    *(undefined1 *)(piVar2 + 6) = 0;
    FUN_004b5150();
    *(byte *)(piVar2 + 0x1b) = *(byte *)(piVar2 + 0x1b) & 0xf8 | 8;
    *piVar2 = (int)&PTR_FUN_005d5544;
    piVar2[4] = 0;
    piVar2[0x1c] = 0;
    piVar2[0xe] = 0;
    piVar2[0x1d] = 0;
    piVar2[0x1e] = 0;
    DAT_0067dcd4 = DAT_0067dcd4 + 1;
    local_4._0_1_ = 1;
    FUN_004144b0();
    *(undefined1 *)((int)piVar2 + 0xcf) = 0;
    *(undefined1 *)((int)piVar2 + 0xce) = 0;
    *(undefined1 *)((int)piVar2 + 0xcd) = 0;
    *(undefined1 *)(piVar2 + 0x33) = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined1 *)((int)piVar2 + 0xd3) = 0;
    *(undefined1 *)((int)piVar2 + 0xd2) = 0;
    *(undefined1 *)((int)piVar2 + 0xd1) = 0;
    *(undefined1 *)(piVar2 + 0x34) = 0;
    FUN_004b5140();
    FUN_004b5140();
    FUN_004b5140();
    *piVar2 = (int)&PTR_FUN_005e5a64;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_ESI;
    return (int *)0x0;
  }
  ExceptionList = unaff_EBX;
  return piVar2;
}

