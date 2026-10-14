
void __thiscall FUN_0046d920(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar3[1] != *(undefined4 **)(param_1 + 8)) {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*param_3 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != *(undefined4 **)(param_1 + 8));
  }
  *param_2 = (int)puVar3;
  return;
}

