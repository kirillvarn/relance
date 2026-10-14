
undefined4 __thiscall FUN_00482e00(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x978) != 3) {
    return 1;
  }
  if ((DAT_0066873c == 0) || (iVar2 = FUN_0043a510(DAT_0066873c), iVar2 == 0)) {
    return 0;
  }
  fVar5 = (float10)FUN_00438160(param_2);
  iVar2 = FUN_004c55d0();
  fVar6 = (float10)FUN_004381c0(param_2);
  if ((float10)*(float *)(param_1 + 0x990) < fVar6) {
    return 0;
  }
  if ((((-1 < iVar2) && (iVar2 < 999)) && ((float)iVar2 < (float)fVar5)) &&
     (bVar1 = SinglePlayer(), bVar1)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x974) + 0x32c);
  if (((iVar2 == 0) || (iVar2 == 2)) && (iVar2 = FUN_00585f20(param_2,1), iVar2 == 0)) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x974) + 0x32c) != 1) {
    return 1;
  }
  uVar3 = Good2Arch(param_2);
  uVar4 = FUN_00482d80(*(int *)(param_1 + 0x974) + 0x34c,uVar3);
  return uVar4;
}

