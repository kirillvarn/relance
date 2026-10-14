
void __fastcall FUN_0057b260(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005c3d48;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e476c;
  param_1[0x1f] = &PTR_OnReceive_005e4760;
  piVar1 = (int *)param_1[0x123];
  local_4 = 0;
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar3);
    param_1[0x124] = param_1[0x124] + -1;
    piVar3 = piVar2;
  }
  FUN_005b7e1d(param_1[0x123]);
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  local_4 = 0xffffffff;
  FUN_00579620();
  ExceptionList = local_c;
  return;
}

