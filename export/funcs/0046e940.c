
undefined4 * __thiscall FUN_0046e940(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar1[1] != *(undefined4 **)(param_1 + 8)) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (puVar3 != *(undefined4 **)(param_1 + 8));
  }
  return puVar1;
}

