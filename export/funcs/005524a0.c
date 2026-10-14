
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005524a0(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[3]) {
    do {
      iVar1 = *(int *)(*param_1 + iVar4 * 4);
      if (iVar1 != 0) {
        FUN_005b7e1d(iVar1);
      }
      *(undefined4 *)(*param_1 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[3]);
  }
  FUN_005b7e1d(*param_1);
  fVar3 = _DAT_005c75e0;
  fVar2 = _DAT_005c75dc - param_2;
  *param_1 = 0;
  param_1[2] = (int)(fVar3 * fVar2 + param_2);
  fVar2 = _DAT_005c75dc - fVar2 * fVar2;
  param_1[0x2b] = (int)((_DAT_005c75dc - fVar2) * _DAT_005e0e10 + fVar2);
  FUN_00550b60();
  return;
}

