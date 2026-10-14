
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058e5a0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float unaff_ESI;
  float *pfVar9;
  float fVar10;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0057b0e0();
  piVar3 = (int *)FUN_0059d9b0();
  if ((piVar3 == param_1) && (*(char *)((int)param_1 + 0x541) != '\0')) {
    FUN_0059da70(&local_18);
    fVar10 = (float)param_1[0x1a] / local_10;
    local_18 = local_18 * fVar10;
    local_14 = local_14 * fVar10;
    local_10 = fVar10 * local_10;
    if (DAT_0067d95c == (int *)0x0) {
      DAT_0067d95c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067d95c + 0x28))(DAT_0067d95c,&local_c,param_1 + 0x141,&local_18);
    if (*(char *)((int)param_1 + 0x542) != '\0') {
      FUN_0058ceb0(param_1[0x151],fStack_1c + (float)param_1[0x152]);
      FUN_0041dde0("Stretch",0);
      return;
    }
    FUN_0058cfb0(param_1[0x151],local_18 + (float)param_1[0x152]);
    FUN_0041dde0("Arrow",0);
    return;
  }
  iVar4 = FUN_0059d9b0();
  if (iVar4 != 0) {
    return;
  }
  FUN_0059da70(&local_c);
  fVar10 = (float)param_1[0x1a] / local_4;
  local_c = local_c * fVar10;
  local_8 = local_8 * fVar10;
  local_4 = fVar10 * local_4;
  if (DAT_0067d95c == (int *)0x0) {
    DAT_0067d95c = (int *)FUN_005b73e0();
  }
  pfVar5 = &local_c;
  (**(code **)(*DAT_0067d95c + 0x28))(DAT_0067d95c,&local_18,param_1 + 0x141);
  bVar2 = fStack_28 < _DAT_005c7474;
  param_1[0x138] = -1;
  param_1[0x139] = -1;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)((int)param_1 + 0x541) = 0;
  if (bVar2) {
    return;
  }
  if ((float)param_1[0x122] <= fStack_28) {
    return;
  }
  if (fStack_24 < _DAT_005c7474 == (fStack_24 == _DAT_005c7474)) {
    return;
  }
  if (fStack_24 <= -(float)param_1[0x123]) {
    return;
  }
  pfVar8 = (float *)param_1[0x12d];
  pfVar9 = (float *)*pfVar8;
  if (pfVar8 == (float *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1[0x12e] - (int)pfVar8 >> 2;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pfVar8 = pfVar8 + 1;
      uVar1 = uVar7 + 1;
      if (uVar1 < uVar6) {
        pfVar5 = (float *)*pfVar8;
      }
      else {
        pfVar5 = (float *)param_1[0x122];
      }
      if (((float)pfVar9 <= fStack_28) && (fStack_28 < (float)pfVar5)) {
        param_1[0x138] = uVar7;
        break;
      }
      uVar7 = uVar1;
      pfVar9 = pfVar5;
    } while (uVar1 < uVar6);
  }
  pfVar8 = (float *)param_1[0x129];
  fVar10 = *pfVar8;
  if (pfVar8 == (float *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1[0x12a] - (int)pfVar8 >> 2;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pfVar8 = pfVar8 + 1;
      uVar1 = uVar7 + 1;
      unaff_ESI = -(float)param_1[0x123];
      if (uVar1 < uVar6) {
        unaff_ESI = *pfVar8;
      }
      if ((fStack_24 < fVar10 != (fStack_24 == fVar10)) && (unaff_ESI < fStack_24)) {
        param_1[0x139] = uVar7;
        break;
      }
      uVar7 = uVar1;
      fVar10 = unaff_ESI;
    } while (uVar1 < uVar6);
  }
  if ((char)param_1[0x11c] == '\0') goto LAB_0058e90a;
  iVar4 = param_1[0x157];
  if (iVar4 == 1) {
    uVar6 = param_1[0x138];
LAB_0058e8c6:
    if ((param_1[0x159] == 0) || ((uint)((param_1[0x15a] - param_1[0x159]) / 100) <= uVar6)) {
      iVar4 = 0;
    }
    else {
      iVar4 = uVar6 * 100 + param_1[0x159];
    }
  }
  else {
    if (iVar4 == 2) {
      uVar6 = param_1[0x139];
      goto LAB_0058e8c6;
    }
    if (iVar4 == 3) {
      if (param_1[0x12d] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0x12e] - param_1[0x12d] >> 2;
      }
      uVar6 = param_1[0x139] * iVar4 + param_1[0x138];
      goto LAB_0058e8c6;
    }
    iVar4 = (**(code **)(*param_1 + 0xb8))();
  }
  if (*(int *)(iVar4 + 4) != 0) {
    FUN_004be370(iVar4);
  }
LAB_0058e90a:
  if (((char)param_1[0x140] != '\0') && ((uint)param_1[0x156] <= (uint)param_1[0x139])) {
    if ((param_1[0x138] != 0) && (fStack_28 - (float)pfVar9 < (float)param_1[0x13f])) {
      FUN_0041dde0("Stretch",0);
      param_1[0x152] = (int)((float)pfVar9 - fStack_28);
      *(undefined1 *)(param_1 + 0x150) = 1;
      param_1[0x151] = param_1[0x138];
      *(undefined1 *)((int)param_1 + 0x542) = 1;
      return;
    }
    if ((char)param_1[0x150] == '\0') {
      if (param_1[0x12d] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0x12e] - param_1[0x12d] >> 2;
      }
      if (((uint)param_1[0x138] < iVar4 - 2U) && ((float)pfVar5 - fStack_28 < (float)param_1[0x13f])
         ) {
        FUN_0041dde0("Stretch",0);
        *(undefined1 *)(param_1 + 0x150) = 1;
        param_1[0x151] = param_1[0x138] + 1;
        param_1[0x152] = (int)((float)pfVar5 - fStack_28);
        *(undefined1 *)((int)param_1 + 0x542) = 1;
        return;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x501) != '\0') {
    if ((param_1[0x139] != 0) && (fVar10 - fStack_24 < (float)param_1[0x13f])) {
      FUN_0041dde0("Stretch",0);
      *(undefined1 *)((int)param_1 + 0x542) = 0;
      *(undefined1 *)(param_1 + 0x150) = 1;
      param_1[0x151] = param_1[0x139];
      param_1[0x152] = (int)(fVar10 - fStack_24);
      return;
    }
    if ((char)param_1[0x150] == '\0') {
      if (param_1[0x129] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0x12a] - param_1[0x129] >> 2;
      }
      if (((uint)param_1[0x139] < iVar4 - 2U) && (fStack_24 - unaff_ESI < (float)param_1[0x13f])) {
        FUN_0041dde0("Stretch",0);
        *(undefined1 *)((int)param_1 + 0x542) = 0;
        *(undefined1 *)(param_1 + 0x150) = 1;
        param_1[0x151] = param_1[0x139] + 1;
        param_1[0x152] = (int)(fStack_24 - unaff_ESI);
        return;
      }
    }
  }
  uVar6 = param_1[0x139];
  if (((param_1[0x129] != 0) && (uVar6 < (uint)(param_1[0x12a] - param_1[0x129] >> 2))) &&
     (*(char *)(param_1[0x131] + uVar6 * 0xc) != '\0')) {
    param_1[0x13b] = uVar6;
    *(undefined1 *)(param_1 + 0x13a) = 1;
  }
  FUN_0041dde0("Arrow",0);
  return;
}

