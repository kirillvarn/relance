
void FUN_00509f30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00675060;
  for (puVar1 = (undefined4 *)*DAT_00675060; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    (**(code **)(*(int *)puVar1[2] + 0x14))(param_1);
  }
  return;
}

