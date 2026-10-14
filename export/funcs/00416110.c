
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00416110(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  wchar_t *pwVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  float fVar10;
  undefined8 uVar11;
  char cVar12;
  int local_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined1 local_fc [4];
  uint uStack_f8;
  int local_ec [2];
  undefined4 auStack_e4 [24];
  undefined4 auStack_84 [33];
  
  iVar7 = 0;
  if ((float)param_1[0x34] == _DAT_005c7474) {
    return 0;
  }
  FUN_00418c60();
  if ((local_110 == param_1[0x58]) || (DAT_00610850 < *(int *)(local_110 + 0xc))) {
    local_108 = param_1[0x58];
    piVar3 = &local_108;
  }
  else {
    piVar3 = &local_110;
  }
  if (*piVar3 != param_1[0x58]) {
    return *(int *)(*piVar3 + 0x10);
  }
  local_ec[0] = param_1[0x47];
  uStack_10c = CONCAT13(param_1[0x46] != 0,(undefined3)uStack_10c);
  floor((double)((float)param_1[0x34] * _DAT_005c8da4 + (float)_DAT_005c75e8));
  ftol();
  pwVar8 = L"In the beginning the Earth was without form and void.";
  puVar9 = auStack_e4 + 3;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *(undefined4 *)pwVar8;
    pwVar8 = pwVar8 + 2;
    puVar9 = puVar9 + 1;
  }
  FUN_00415ea0();
  uVar11 = CONCAT44(0xffffffff,auStack_e4 + 3);
  (**(code **)(*param_1 + 0x20))(local_fc);
  local_110 = 0;
  uStack_10c = DAT_00610850;
  floor((double)((float)DAT_00610854 * (float)param_1[0x34] + (float)_DAT_005c75e8));
  ftol();
  pwVar8 = L"In the beginning the Earth was without form and void.";
  puVar9 = auStack_e4;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *(undefined4 *)pwVar8;
    pwVar8 = pwVar8 + 2;
    puVar9 = puVar9 + 1;
  }
  FUN_00415ea0();
  (**(code **)(*param_1 + 0x20))(local_ec,auStack_e4,0xffffffff);
  local_108 = 0;
  uStack_10c = -1;
  fVar1 = (float)uStack_f8 / (float)unaff_EBP;
  if (fVar1 <= (float)uVar11) {
    uStack_10c = 1;
  }
  iVar5 = iVar7;
  if ((float)_DAT_005c75f8 < ABS(fVar1 - (float)uVar11)) {
    while (uVar4 = (**(code **)(*param_1 + 0x18))(), iVar2 = uStack_10c, iVar5 = iVar7,
          uVar4 <= (uint)(unaff_EDI + iVar7)) {
      pwVar8 = L"In the beginning the Earth was without form and void.";
      puVar9 = auStack_84;
      for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *(undefined4 *)pwVar8;
        pwVar8 = pwVar8 + 2;
        puVar9 = puVar9 + 1;
      }
      FUN_00415ea0(unaff_EDI + uStack_10c + iVar7);
      (**(code **)(*param_1 + 0x20))(&uStack_100,auStack_84,0xffffffff);
      local_110 = 0;
      fVar1 = (float)uStack_100 / (float)unaff_EBP;
      fVar10 = (float)uVar11;
      if (iVar2 < 1) {
        iVar5 = iVar7 + iVar2;
        if ((fVar1 < fVar10 != (fVar1 == fVar10)) || (unaff_EDI + iVar5 < 5)) break;
      }
      else if (fVar1 >= fVar10 && fVar1 != fVar10) break;
      iVar7 = iVar7 + iVar2;
      iVar5 = iVar7;
      if (ABS(fVar1 - fVar10) <= (float)_DAT_005c75f8) break;
    }
  }
  cVar12 = (char)((ulonglong)uVar11 >> 0x38);
  local_110 = 0;
  FUN_00402790(&uStack_100,&stack0xfffffeec);
  *(int *)(uStack_100 + 0x10) = iVar5;
  if (cVar12 != '\0') {
    FUN_00415ea0(uStack_104);
  }
  return iVar5;
}

