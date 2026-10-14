
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00455290(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  
  RefreshLoadingProgress();
  piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + 0x500);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(piVar1);
  *(undefined4 *)(param_1 + 0x70) = puVar3[9];
  *(undefined4 *)(param_1 + 0x74) = puVar3[10];
  *(undefined4 *)(param_1 + 0x78) = puVar3[0xb];
  puVar5 = (undefined4 *)(param_1 + 0x7c);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  fVar7 = (float10)(**(code **)(*piVar1 + 0x18))(piVar1);
  *(float *)(param_1 + 0xa0) = (float)fVar7;
  fVar7 = (float10)(**(code **)(*piVar1 + 0x20))(piVar1);
  *(float *)(param_1 + 0xa4) = (float)fVar7;
  fVar7 = (float10)(**(code **)(*piVar1 + 0x24))(piVar1);
  *(float *)(param_1 + 0xa8) = (float)fVar7;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    iVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4 + iVar6);
      FUN_0044fa90(uVar2,1);
      FUN_0044faf0(uVar2,&stack0xffffffe2,&stack0xffffffe3);
      FUN_0044fb80(uVar2,1);
      if ((char)((uint)unaff_EDI >> 0x10) != '\0') {
        *(undefined1 *)(param_1 + 0xac) = 1;
      }
      if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
        *(undefined1 *)(param_1 + 0xad) = 1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0xbc));
  }
  RefreshLoadingProgress();
  FUN_004356c0();
  FUN_004353a0();
  if ((*(char *)(param_1 + 10) != '\0') && (*(char *)(param_1 + 0xac) == '\0')) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_00428d00(3,0x501502f9,0x501502f9);
      FUN_00428be0(&stack0xffffffec,0,0);
      FUN_00428be0(0,&stack0xffffffe8,0);
      _DAT_0066d2e8 = unaff_EBX;
      if (unaff_EBP <= (float)_DAT_005c8ba8) {
        _DAT_0066d2ec = 1e+06;
      }
      else {
        _DAT_0066d2ec = ABS(unaff_EBX - _DAT_0066d2e0) / unaff_EBP;
      }
    }
    else {
      FUN_00428d00(3,DAT_005ce05c,_DAT_005ce060);
      _DAT_0066d2e8 = DAT_005ce05c;
      _DAT_0066d2ec = _DAT_005ce060;
    }
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(char *)(param_1 + 0xad) == '\0')) {
    fVar8 = DAT_005ce05c;
    fVar9 = _DAT_005ce060;
    if (*(char *)(param_1 + 0xc) == '\0') {
      fVar8 = 1e+10;
      fVar9 = 1e+10;
    }
    FUN_00428c50(3,fVar8,fVar9);
  }
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_0041a0f0(0x3f800000,0x40400000);
    FUN_00559290();
    FUN_0041dda0(0);
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

