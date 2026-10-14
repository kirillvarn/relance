
void __thiscall FUN_004d4820(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_2 != param_1) {
    puVar1 = *(undefined4 **)(param_2 + 4);
    puVar2 = *(undefined4 **)(param_1 + 4);
    puVar3 = (undefined4 *)*puVar2;
    puVar6 = (undefined4 *)*puVar1;
    while (puVar3 != puVar2) {
      if (puVar6 == puVar1) goto LAB_004d48d4;
      if ((float)puVar3[5] <= (float)puVar6[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar4 = (undefined4 *)*puVar6;
        *(undefined4 **)puVar4[1] = puVar3;
        *(undefined4 **)puVar6[1] = puVar4;
        *(undefined4 **)puVar3[1] = puVar6;
        uVar5 = puVar3[1];
        puVar3[1] = puVar4[1];
        puVar4[1] = puVar6[1];
        puVar6[1] = uVar5;
        puVar6 = puVar4;
      }
    }
    if (puVar6 != puVar1) {
      *(undefined4 **)puVar1[1] = puVar2;
      *(undefined4 **)puVar6[1] = puVar1;
      *(undefined4 **)puVar2[1] = puVar6;
      uVar5 = puVar2[1];
      puVar2[1] = puVar1[1];
      puVar1[1] = puVar6[1];
      puVar6[1] = uVar5;
    }
LAB_004d48d4:
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}

