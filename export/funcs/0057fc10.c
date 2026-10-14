
void FUN_0057fc10(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  while (param_1 != param_2) {
    puVar3 = param_2 + -6;
    puVar1 = param_3 + -3;
    *puVar1 = *(undefined4 *)(param_2 + -6);
    *(undefined2 *)puVar1 = *puVar3;
    puVar2 = (undefined2 *)((int)param_3 + -10);
    do {
      *(undefined1 *)puVar2 = *(undefined1 *)(((int)puVar3 - (int)puVar1) + (int)puVar2);
      puVar2 = (undefined2 *)((int)puVar2 + 1);
    } while ((undefined1 *)((int)puVar2 + (-2 - (int)puVar1)) < (undefined1 *)0x2);
    param_3[-2] = *(undefined4 *)(param_2 + -4);
    param_3 = puVar1;
    param_2 = puVar3;
  }
  return;
}

