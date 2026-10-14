
uint FUN_004c5490(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)*DAT_00672950;
  if ((piVar1 != DAT_00672950) && (piVar1[5] != 0)) {
    iVar2 = piVar1[6] - piVar1[5];
    iVar4 = iVar2 >> 0x1f;
    iVar2 = iVar2 / 0x1c + iVar4;
    iVar3 = iVar2 - iVar4;
    if ((iVar2 != iVar4) && (uVar5 = 0, 0 < iVar3)) {
      iVar4 = 0;
      do {
        if ((((piVar1 == DAT_00672950) || (iVar4 < 0)) || (piVar1[5] == 0)) ||
           ((uint)((piVar1[6] - piVar1[5]) / 0x1c) <= uVar5)) {
          iVar2 = 0;
        }
        else {
          iVar2 = piVar1[5] + iVar4;
        }
        if (*(int *)(iVar2 + 0x18) != 3) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x1c;
      } while ((int)uVar5 < iVar3);
    }
  }
  return 0xffffffff;
}

