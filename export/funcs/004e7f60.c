
void __fastcall FUN_004e7f60(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(void **)(param_1 + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

