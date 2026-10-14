
int * __thiscall FUN_00563900(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1e43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x39c);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005b7fba(piVar2 + 0xce,0xc,5,&LAB_00562a40,&LAB_00562a50);
    piVar2[0xde] = (int)&PTR_FUN_005e20a8;
    *(undefined1 *)(piVar2 + 0xdf) = 0;
    *(undefined1 *)((int)piVar2 + 0x37d) = 0;
    *(undefined1 *)((int)piVar2 + 0x37e) = 0;
    *(undefined1 *)((int)piVar2 + 0x37f) = 0;
    *(undefined1 *)(piVar2 + 0xe0) = 0;
    *(undefined1 *)((int)piVar2 + 0x381) = 0;
    piVar2[0xe1] = 0;
    piVar2[0xe2] = 1000;
    *(undefined1 *)(piVar2 + 0xe3) = 1;
    piVar2[0xe4] = DAT_0067ecb8;
    piVar2[0xe5] = DAT_0067ecb8;
    *(undefined1 *)(piVar2 + 0xe6) = 1;
    *(undefined1 *)((int)piVar2 + 0x399) = 0;
    *(undefined1 *)((int)piVar2 + 0x39a) = 1;
    *piVar2 = (int)&PTR_FUN_005e20ec;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e20e0;
    piVar2[0xdd] = 0;
    piVar2[0xcb] = 0;
    piVar2[0xcc] = 0;
    piVar2[0xcd] = 0;
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

