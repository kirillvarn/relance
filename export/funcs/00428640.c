
void FUN_00428640(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*DAT_00667c70;
  while( true ) {
    if (puVar1 == DAT_00667c70) {
      FUN_00428680(param_1,param_2,param_3,0);
      return;
    }
    if (((int *)puVar1[2])[6] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  (**(code **)(*(int *)puVar1[2] + 100))(0);
  return;
}

