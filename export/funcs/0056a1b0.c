
void __thiscall FUN_0056a1b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2b8) + 0x4b4);
    if ((iVar2 == 0) || ((uint)(*(int *)(*(int *)(param_1 + 0x2b8) + 0x4b8) - iVar2 >> 2) <= uVar3))
    break;
    FUN_0058cbf0(param_2,uVar3);
    uVar3 = uVar3 + 1;
  }
  iVar2 = FUN_0058d0b0(param_2);
  if ((iVar2 != 0) && (puVar1 = *(undefined4 **)(iVar2 + 8), puVar1 != (undefined4 *)0x0)) {
    if (puVar1[1] != 0) {
      puVar1[1] = puVar1[1] + -1;
    }
    if (puVar1[1] == 0) {
      puVar1[1] = 1;
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return;
}

