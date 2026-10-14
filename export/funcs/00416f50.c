
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00416f50(int *param_1,float param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  uint uStack_88;
  uint uStack_80;
  undefined1 local_7c [4];
  undefined4 auStack_78 [29];
  int iStack_4;
  
  iVar5 = 0;
  floor((double)((float)param_4 * param_2 + (float)_DAT_005c75e8));
  ftol();
  pwVar6 = L"In the beginning the Earth was without form and void.";
  puVar7 = auStack_78 + 3;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    puVar7 = puVar7 + 1;
  }
  FUN_00415ea0();
  (**(code **)(*param_1 + 0x20))(local_7c,auStack_78 + 3,0xffffffff);
  iVar3 = -1;
  fVar1 = (float)uStack_88 / (float)iStack_4;
  if (fVar1 <= param_2) {
    iVar3 = 1;
  }
  if ((float)_DAT_005c75f8 < ABS(fVar1 - param_2)) {
    while (uVar2 = (**(code **)(*param_1 + 0x18))(), uVar2 <= (uint)(unaff_ESI + iVar5)) {
      pwVar6 = L"In the beginning the Earth was without form and void.";
      puVar7 = auStack_78;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *(undefined4 *)pwVar6;
        pwVar6 = pwVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      FUN_00415ea0(unaff_ESI + iVar3 + iVar5);
      (**(code **)(*param_1 + 0x20))(&uStack_80,auStack_78,0xffffffff);
      fVar1 = (float)uStack_80 / (float)iStack_4;
      if (iVar3 < 1) {
        iVar4 = iVar5 + iVar3;
        if (fVar1 < param_2 != (fVar1 == param_2)) {
          return iVar4;
        }
        if (unaff_ESI + iVar4 < 5) {
          return iVar4;
        }
      }
      else if (fVar1 >= param_2 && fVar1 != param_2) {
        return iVar5;
      }
      iVar5 = iVar5 + iVar3;
      if (ABS(fVar1 - param_2) <= (float)_DAT_005c75f8) {
        return iVar5;
      }
    }
  }
  return iVar5;
}

