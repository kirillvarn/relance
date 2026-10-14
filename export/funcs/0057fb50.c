
void FUN_0057fb50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
    puVar1 = (undefined2 *)((int)param_3 + 2);
    do {
      *(undefined1 *)puVar1 = *(undefined1 *)(((int)param_1 - (int)param_3) + (int)puVar1);
      puVar1 = (undefined2 *)((int)puVar1 + 1);
    } while ((undefined1 *)((int)puVar1 + (-2 - (int)param_3)) < (undefined1 *)0x2);
    param_3[1] = param_1[1];
    param_3 = param_3 + 3;
  }
  return;
}

