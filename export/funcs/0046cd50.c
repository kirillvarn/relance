
void __thiscall FUN_0046cd50(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar4 = puVar1;
  if ((undefined4 *)puVar1[1] != *(undefined4 **)(param_1 + 8)) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*param_3 < (uint)puVar2[3]) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != *(undefined4 **)(param_1 + 8));
  }
  if ((puVar4 != puVar1) && (*param_3 <= (uint)puVar4[3])) {
    *param_2 = (int)puVar4;
    return;
  }
  *param_2 = (int)puVar1;
  return;
}

