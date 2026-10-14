
void FUN_00509f60(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00675060;
  DAT_00613324 = param_1;
  for (puVar1 = (undefined4 *)*DAT_00675060; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    (**(code **)(*(int *)puVar1[2] + 0x30))(DAT_00613324);
  }
  return;
}

