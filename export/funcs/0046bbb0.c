
int __thiscall FUN_0046bbb0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 **ppuVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  uint local_10 [4];
  
  local_10[0] = *param_2;
  local_10[1] = 0;
  bVar6 = true;
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (puVar2 != *(undefined4 **)(param_1 + 8)) {
    bVar6 = local_10[0] < (uint)puVar2[3];
    puVar1 = puVar2;
    if (bVar6) {
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      puVar2 = (undefined4 *)puVar2[2];
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_24 = puVar1;
    if (bVar6) {
      piVar3 = (int *)FUN_0053e430(local_1c);
      if (local_24 == (undefined4 *)*piVar3) {
        puVar7 = &param_2;
        param_2 = (uint *)CONCAT31(param_2._1_3_,1);
        uVar4 = FUN_004b68b0(local_18,puVar2,puVar1,local_10);
        FUN_0046d660(uVar4,puVar7);
        return local_10[2] + 0x10;
      }
      FUN_0043c010();
    }
    if ((uint)local_24[3] < local_10[0]) {
      puVar8 = &local_26;
      local_26 = 1;
      ppuVar5 = (undefined4 **)FUN_004b68b0(local_14,puVar2,puVar1,local_10);
    }
    else {
      puVar8 = &local_25;
      local_25 = 0;
      ppuVar5 = &local_24;
    }
    FUN_0046d660(ppuVar5,puVar8);
    return local_10[2] + 0x10;
  }
  piVar3 = (int *)FUN_004b68b0(local_20,puVar2,puVar1,local_10);
  return *piVar3 + 0x10;
}

