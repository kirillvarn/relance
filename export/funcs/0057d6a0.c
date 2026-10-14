
void __thiscall FUN_0057d6a0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x49c) = param_2;
  if ((int)param_2 < 0) {
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4c8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
    }
    if (uVar2 < param_2) {
      if (*(int *)(param_1 + 0x4c8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
      }
      *(int *)(param_1 + 0x49c) = iVar3;
    }
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    if ((*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc != 0) {
      if (*(int *)(param_1 + 0x4c8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
      }
      iVar1 = *(int *)(param_1 + 0x49c);
      if (iVar1 == iVar3) {
        *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(*(int *)(param_1 + 0x4cc) + -8);
        return;
      }
      if (0 < iVar1) {
        *(undefined4 *)(param_1 + 0x4d4) =
             *(undefined4 *)(*(int *)(param_1 + 0x4c8) + -8 + iVar1 * 0xc);
        return;
      }
      *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 4);
    }
  }
  return;
}

