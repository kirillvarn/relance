
undefined4 __thiscall FUN_005aaca0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x1b8);
  while (iVar2 != param_2) {
    iVar2 = iVar2 + 1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return puVar1[2];
}

