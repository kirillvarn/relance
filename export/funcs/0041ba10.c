
void __thiscall FUN_0041ba10(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = (undefined4 *)puVar5[1];
  puVar6 = puVar5;
  if (puVar3 != puVar1) {
    puVar4 = puVar3;
    do {
      if (*param_3 < (uint)puVar4[3]) {
        puVar2 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      else {
        puVar2 = (undefined4 *)puVar4[2];
      }
      puVar4 = puVar2;
    } while (puVar2 != puVar1);
  }
  if (puVar3 != puVar1) {
    do {
      if ((uint)puVar3[3] < *param_3) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  param_2[1] = (int)puVar6;
  *param_2 = (int)puVar5;
  return;
}

