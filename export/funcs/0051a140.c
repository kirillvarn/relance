
void FUN_0051a140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_34 [2];
  undefined1 local_24 [24];
  undefined4 *puStack_c;
  
  if (DAT_00675220 == (int *)0x0) {
    DAT_00675220 = (int *)FUN_005b73e0();
  }
  auStack_34[1] = param_3;
  auStack_34[0] = param_2;
  (**(code **)(*DAT_00675220 + 0x20))(DAT_00675220,local_24);
  puVar2 = auStack_34;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puStack_c = *puVar2;
    puVar2 = puVar2 + 1;
    puStack_c = puStack_c + 1;
  }
  return;
}

