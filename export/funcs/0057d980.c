
undefined4 FUN_0057d980(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if ((DAT_0067c400 != 0) && ((uint)uVar1 < (uint)(DAT_0067c404 - DAT_0067c400 >> 2))) {
    *(undefined2 *)(param_1 + 2) = 0;
    return *(undefined4 *)(DAT_0067c400 + (uint)uVar1 * 4);
  }
  return 0;
}

