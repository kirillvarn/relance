
void FUN_0053c5d0(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_005416c0(param_2[1],0);
  if (iVar2 != 0) {
    iVar2 = FUN_00533100(*(undefined2 *)(param_2 + 2));
    if (iVar2 != 0) {
      FUN_0052f9a0(*param_2,*(undefined2 *)((int)param_2 + 10));
    }
  }
  bVar1 = SinglePlayer();
  if (!bVar1) {
    iVar2 = FUN_005416c0(*param_2,0);
    if (iVar2 != 0) {
      if (((iVar2 == -0xc) || (iVar2 = *(int *)(iVar2 + 0x10), iVar2 == 0)) ||
         ((*(uint *)(iVar2 + 0x4c) & 0x803) != 0x803)) {
        iVar2 = 0;
      }
      *(int *)(iVar2 + 0xf0) = *(int *)(iVar2 + 0xf0) - (uint)*(ushort *)((int)param_2 + 10);
    }
  }
  return;
}

