
undefined4 * __thiscall FUN_00501f80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  for (; param_3 != puVar1; param_3 = param_3 + 4) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    puVar2 = puVar2 + 4;
  }
  *(undefined4 **)(param_1 + 8) = puVar2;
  return param_2;
}

