
void __fastcall FUN_0046ecd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((*(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 8)) &&
     (puVar1 = operator_new((*(int *)(param_1 + 0x1c) + *(uint *)(param_1 + 0x20)) * 0x18),
     puVar1 != (undefined4 *)0x0)) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
      puVar4 = puVar1;
      for (iVar2 = (*(int *)(param_1 + 0x20) * 3 & 0x1fffffffU) << 1; iVar2 != 0; iVar2 = iVar2 + -1
          ) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c);
  }
  return;
}

