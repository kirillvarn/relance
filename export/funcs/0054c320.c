
void FUN_0054c320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [2];
  undefined1 local_30 [36];
  undefined4 *puStack_c;
  
  if (DAT_006797a4 == (int *)0x0) {
    auStack_40[1] = 0x54c335;
    DAT_006797a4 = (int *)FUN_005b73e0();
  }
  auStack_40[1] = param_2;
  (**(code **)(*DAT_006797a4 + 0x1c))(DAT_006797a4,local_30);
  puVar2 = auStack_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puStack_c = *puVar2;
    puVar2 = puVar2 + 1;
    puStack_c = puStack_c + 1;
  }
  return;
}

