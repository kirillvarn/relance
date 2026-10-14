
undefined4 * __thiscall FUN_0046e610(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar2[1] != *(undefined4 **)(param_1 + 8)) {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*param_2 < (uint)puVar2[3]) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (puVar3 != *(undefined4 **)(param_1 + 8));
  }
  return puVar2;
}

