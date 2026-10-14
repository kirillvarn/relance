
uint __thiscall FUN_004f42a0(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((*(int *)(param_1 + 0x364) != 0) &&
      (iVar2 = *(int *)(param_1 + 0x364) + -8, uVar3 = 0, iVar2 != 0)) &&
     (uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(param_1 + 0x38c)),
     *(char *)(param_1 + 0x38c) != '\0')) {
    *param_2 = *(undefined1 *)(param_1 + 0x374);
    uVar1 = *(undefined4 *)(param_1 + 0x378);
    *param_3 = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}

