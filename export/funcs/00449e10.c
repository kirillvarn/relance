
void __thiscall FUN_00449e10(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x518 + param_2 * 4);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1bc);
    if (iVar1 != -1) {
      FUN_00435b20(iVar1);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x518 + param_2 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x518 + param_2 * 4) = 0;
  }
  return;
}

