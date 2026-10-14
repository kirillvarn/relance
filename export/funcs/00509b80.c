
void FUN_00509b80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_0054bd50();
  DAT_006132dc = param_1;
  iVar3 = FUN_005553a0();
  puVar1 = *(undefined4 **)(iVar3 + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    (**(code **)(*(int *)puVar2[2] + 0x54))(param_1);
  }
  FUN_00509f60(param_1);
  return;
}

