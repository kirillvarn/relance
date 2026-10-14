
/* WARNING: Removing unreachable block (ram,0x0042e1a1) */

undefined4 __fastcall FUN_0042e160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 == 0) {
    for (uVar3 = 0;
        (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != 0 &&
        (uVar3 < (uint)(*(int *)(param_1 + 0x30) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
      FUN_0041b030(iVar2 + uVar3 * 4);
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
    FUN_00401300(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    uVar1 = 1;
  }
  return uVar1;
}

