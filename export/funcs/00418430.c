
int __thiscall FUN_00418430(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10 [4];
  
  local_10[0] = *param_2;
  local_10[1] = 0;
  bVar1 = true;
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (puVar3 != *(undefined4 **)(param_1 + 8)) {
    bVar1 = local_10[0] < (int)puVar3[3];
    puVar2 = puVar3;
    if (bVar1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_24 = puVar2;
    if (bVar1) {
      piVar4 = (int *)FUN_0053e430(local_1c);
      if (local_24 == (undefined4 *)*piVar4) {
        puVar7 = &param_2;
        param_2 = (int *)CONCAT31(param_2._1_3_,1);
        uVar5 = FUN_004029a0(local_18,puVar3,puVar2,local_10);
        FUN_0046d660(uVar5,puVar7);
        return local_10[2] + 0x10;
      }
      FUN_0043c010();
    }
    if ((int)local_24[3] < local_10[0]) {
      puVar8 = &local_26;
      local_26 = 1;
      ppuVar6 = (undefined4 **)FUN_004029a0(local_14,puVar3,puVar2,local_10);
    }
    else {
      puVar8 = &local_25;
      local_25 = 0;
      ppuVar6 = &local_24;
    }
    FUN_0046d660(ppuVar6,puVar8);
    return local_10[2] + 0x10;
  }
  piVar4 = (int *)FUN_004029a0(local_20,puVar3,puVar2,local_10);
  return *piVar4 + 0x10;
}

