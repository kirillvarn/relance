
void __thiscall FUN_0057fcb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  puVar1 = (undefined2 *)((int)param_1 + 2);
  do {
    *(undefined1 *)puVar1 = *(undefined1 *)(((int)param_2 - (int)param_1) + (int)puVar1);
    puVar1 = (undefined2 *)((int)puVar1 + 1);
  } while ((undefined1 *)((-2 - (int)param_1) + (int)puVar1) < (undefined1 *)0x2);
  param_1[1] = param_2[1];
  return;
}

