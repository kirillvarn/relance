
void __fastcall FUN_0059fa50(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c4f06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e5e44;
  param_1[0x1f] = &PTR_OnReceive_005e5e38;
  local_4 = 1;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined1 *)(param_1 + 0xb4) = 0;
    FUN_0059d960(param_1);
  }
  FUN_0059eee0();
  piVar1 = (int *)param_1[3];
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
    __RTDynamicCast(piVar1,0,&Win3D::RTTI_Type_Descriptor,&WinControl::RTTI_Type_Descriptor,0);
    (**(code **)*piVar1)(1);
    piVar1 = (int *)param_1[3];
  }
  piVar1 = (int *)param_1[3];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_0059ef20();
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar1 = (int *)param_1[3];
  local_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

