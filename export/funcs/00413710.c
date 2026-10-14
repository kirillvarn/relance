
undefined4 * FUN_00413710(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_10 [4];
  
  local_10[0] = *param_1;
  puVar3 = (undefined4 *)0x0;
  if (local_10[0] != 0) {
    local_10[1] = 0;
    FUN_0046d6d0(local_10 + 2,local_10);
    puVar3 = (undefined4 *)(local_10[2] + 0x10);
    if (*(int *)(local_10[2] + 0x10) == 0) {
      puVar4 = operator_new(0x164);
      if (puVar4 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[0x57] = iVar2;
        puVar4[0x58] = 1;
        *puVar3 = puVar4;
        return puVar4;
      }
      *puVar3 = 0;
      return (undefined4 *)0x0;
    }
    piVar1 = (int *)(*(int *)(local_10[2] + 0x10) + 0x160);
    *piVar1 = *piVar1 + 1;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3;
}

