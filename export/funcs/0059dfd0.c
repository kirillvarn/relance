
undefined4 FUN_0059dfd0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte extraout_AL;
  undefined4 in_EAX;
  uint uVar3;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined3 extraout_var;
  byte bVar6;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_1) & 0xffffffe0;
  uVar5 = (undefined3)(uVar3 >> 8);
  bVar6 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 4);
  param_1 = CONCAT31(param_1._1_3_,
                     (byte)uVar3 ^ (*(byte *)(param_1 + 0x18) & 1) << 1 ^
                     *(byte *)(param_1 + 0x18) == 0 ^ ((uVar1 & 3) != 0) << 2 ^
                     ((uVar1 & 0xc) != 0) << 3 ^ ((uVar1 & 0x30) != 0) << 4);
  if (DAT_0067dcdc != (int *)0x0) {
    uVar4 = (**(code **)(*DAT_0067dcdc + 0x50))(uVar4,&param_1);
    return uVar4;
  }
  DAT_0067dcdc = (int *)0x0;
  for (iVar2 = DAT_0067dbe8; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int **)(iVar2 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x50))(uVar4,&param_1);
      bVar6 = bVar6 | extraout_AL;
      uVar5 = extraout_var;
      if (bVar6 != 0) break;
    }
  }
  return CONCAT31(uVar5,bVar6);
}

