
int FUN_005b76c6(int param_1,ushort param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  if (((iVar1 == 0) || (uVar3 = (uint)param_2, *(uint *)(iVar1 + 0x74) <= uVar3)) ||
     (iVar2 = *(int *)(iVar1 + 0x78 + uVar3 * 8), iVar2 == 0)) {
    *param_3 = 0;
    iVar2 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(iVar1 + 0x7c + uVar3 * 8);
    iVar2 = iVar2 + param_1;
  }
  return iVar2;
}

