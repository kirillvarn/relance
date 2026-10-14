
void __thiscall FUN_005ae700(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005afe60();
  puVar1[1] = *(undefined4 *)(param_1 + 8);
  *puVar1 = 0;
  puVar1[2] = param_2;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1;
    return;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}

