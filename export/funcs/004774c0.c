
undefined4 * __thiscall FUN_004774c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar4 = param_2;
  if (param_3 == puVar1) {
    *(undefined4 **)(param_1 + 8) = param_2;
    return param_2;
  }
  do {
    puVar3 = param_3 + 0x20;
    puVar5 = puVar4 + 0x20;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_3 = puVar3;
    puVar4 = puVar5;
  } while (puVar3 != puVar1);
  *(undefined4 **)(param_1 + 8) = puVar5;
  return param_2;
}

