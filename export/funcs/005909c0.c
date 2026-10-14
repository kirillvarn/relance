
void FUN_005909c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c48ba;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    puVar4 = operator_new(0xc);
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    *(undefined4 **)(param_1 + 4) = puVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    puVar1 = *(undefined4 **)(param_2 + 4);
    uVar2 = *puVar4;
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      FUN_0046c800(local_14,uVar2,puVar4 + 2);
    }
    uVar3 = (uint)local_4 >> 8;
    local_4 = CONCAT31((int3)uVar3,1);
    param_1[0xc] = param_2[0xc];
    puVar4 = operator_new(0xc);
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    *(undefined4 **)(param_1 + 0x10) = puVar4;
    *(undefined4 *)(param_1 + 0x14) = 0;
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    uVar2 = *puVar4;
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      FUN_0046c800(local_10,uVar2,puVar4 + 2);
    }
    param_1[0x18] = param_2[0x18];
  }
  ExceptionList = local_c;
  return;
}

