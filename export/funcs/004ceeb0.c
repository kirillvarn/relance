
void FUN_004ceeb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28 [4];
  int local_18;
  uint local_14;
  undefined1 local_2;
  
  iVar1 = FUN_004c4690();
  if (param_1 < iVar1) {
    iVar1 = FUN_004c46a0(param_1);
    local_18 = *(int *)(iVar1 + 0x10);
    if (local_18 != 0) {
      puVar2 = local_28;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_2 = 1;
      local_28[0] = 0x1c;
      local_14 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
      FUN_0054bcb0(local_28);
      return;
    }
    FUN_004f42e0(iVar1,1,param_1,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

