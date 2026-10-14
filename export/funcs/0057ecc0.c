
int * __thiscall FUN_0057ecc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4183;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x498);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005793e0();
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined1 *)(piVar2 + 0x122) = (undefined1)param_3;
    pvVar3 = operator_new(0xc);
    *(void **)pvVar3 = pvVar3;
    *(void **)((int)pvVar3 + 4) = pvVar3;
    piVar2[0x123] = (int)pvVar3;
    piVar2[0x124] = 0;
    *piVar2 = (int)&PTR_FUN_005e476c;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e4760;
    *(undefined1 *)((int)piVar2 + 0x401) = 0;
    *(undefined1 *)(piVar2 + 0x100) = 0;
    *(undefined1 *)(piVar2 + 0x125) = 1;
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

