
int * __thiscall FUN_0059c580(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  void *unaff_EBP;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4d62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x4c8);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0057b1b0();
    local_4._0_1_ = 1;
    *(undefined1 *)(piVar2 + 0x12a) = (undefined1)param_3;
    iVar3 = FUN_0042a7e0(0,0);
    piVar2[299] = iVar3;
    piVar2[300] = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined1 *)(piVar2 + 0x12d) = (undefined1)param_3;
    pvVar4 = operator_new(0xc);
    *(void **)pvVar4 = pvVar4;
    *(void **)((int)pvVar4 + 4) = pvVar4;
    piVar2[0x12e] = (int)pvVar4;
    piVar2[0x12f] = 0;
    *piVar2 = (int)&PTR_FUN_005e5af4;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e5ae4;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_ESI;
    return (int *)0x0;
  }
  ExceptionList = unaff_EBP;
  return piVar2;
}

