
uint FUN_004c5530(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)*DAT_00672950;
  if ((((piVar1 != DAT_00672950) && (-1 < (int)param_1)) && (piVar1[5] != 0)) &&
     ((param_1 < (uint)((piVar1[6] - piVar1[5]) / 0x1c) &&
      (puVar5 = (undefined4 *)(param_1 * 0x1c + piVar1[5]), puVar5 != (undefined4 *)0x0)))) {
    uVar3 = puVar5[1];
    for (puVar2 = (undefined4 *)*puVar5; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      uVar4 = uVar3 << 1;
      if ((int)uVar3 < 0) {
        uVar4 = uVar4 | 1;
      }
      if ((*(short *)(puVar2 + 2) != 0x52) && (*(short *)(puVar2 + 2) != 0x4e)) {
        uVar4 = uVar4 + puVar2[1];
      }
      uVar3 = uVar4;
    }
    return uVar3;
  }
  return 0;
}

