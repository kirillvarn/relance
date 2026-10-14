
void __thiscall FUN_0050bf40(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x30))();
  return;
}

