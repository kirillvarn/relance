
void FUN_0057fbb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_3 - (int)param_1;
    do {
      *param_1 = *param_3;
      *(undefined2 *)param_1 = *(undefined2 *)param_3;
      puVar1 = (undefined2 *)((int)param_1 + 2);
      do {
        *(undefined1 *)puVar1 = *(undefined1 *)(iVar2 + (int)puVar1);
        puVar1 = (undefined2 *)((int)puVar1 + 1);
      } while ((undefined1 *)((-2 - (int)param_1) + (int)puVar1) < (undefined1 *)0x2);
      param_1[1] = param_3[1];
      param_1 = param_1 + 3;
      iVar2 = iVar2 + -0xc;
    } while (param_1 != param_2);
  }
  return;
}

