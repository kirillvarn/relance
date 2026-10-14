
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e8d30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  CSolar *this;
  uint uVar7;
  CSolar *this_00;
  uint uVar8;
  size_t sVar9;
  size_t sVar10;
  int iVar11;
  float unaff_EBX;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float local_244;
  float local_240;
  CSolar *local_23c;
  float local_238 [3];
  int local_22c;
  undefined4 local_224 [5];
  wchar_t awStack_210 [260];
  wchar_t *pwStack_8;
  int iStack_4;
  
  if ((param_1 == 0) || (local_22c = param_1, (*(uint *)(param_1 + 0x4c) & 0x303) != 0x303)) {
    local_22c = 0;
  }
  puVar5 = (undefined4 *)FUN_0054baf0();
  if ((puVar5 != (undefined4 *)0x0) && (local_22c != 0)) {
    puVar13 = (undefined4 *)(param_1 + 8);
    puVar14 = local_224;
    for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    local_244 = 0.0;
    local_240 = 0.0;
    local_23c = (CSolar *)0xbf800000;
    if (DAT_00674b6c == (int *)0x0) {
      DAT_00674b6c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00674b6c + 0x2c))(DAT_00674b6c,local_238,local_224,&local_244);
    fVar1 = _DAT_005c75dc /
            SQRT(local_240 * local_240 + local_244 * local_244 + unaff_EBX * unaff_EBX);
    fVar2 = local_244 * fVar1;
    fVar3 = fVar1 * local_240;
    local_238[0] = -(unaff_EBX * fVar1 * *(float *)(param_1 + 0x2c) +
                    fVar2 * *(float *)(param_1 + 0x30) + fVar3 * *(float *)(param_1 + 0x34));
    pfVar6 = (float *)(**(code **)*puVar5)();
    this_00 = local_23c;
    fVar4 = _DAT_005c7474;
    local_244 = pfVar6[1];
    local_240 = pfVar6[2];
    fVar1 = *pfVar6 * unaff_EBX * fVar1 + local_244 * fVar2 + local_240 * fVar3 + local_238[0];
    this = local_23c;
    do {
      if (*(int *)(this + 0x1d8) == 0) {
        uVar7 = CSolar::get_tradelane_space_name(this);
        while( true ) {
          if (*(int *)(this_00 + 0x1dc) == 0) {
            uVar8 = CSolar::get_tradelane_space_name(this_00);
            if (uVar7 == 0) {
              return 0;
            }
            if (uVar8 == 0) {
              return 0;
            }
            uVar12 = uVar8;
            if (fVar4 < fVar1) {
              uVar12 = uVar7;
              uVar7 = uVar8;
            }
            FUN_004347e0(DAT_0067eca8,uVar7,awStack_210,0xff);
            sVar9 = wcslen(awStack_210);
            if (iStack_4 <= (int)(sVar9 + 2)) {
              return 0;
            }
            wcscpy(pwStack_8,awStack_210);
            wcscat(pwStack_8,L"->");
            FUN_004347e0(DAT_0067eca8,uVar12,awStack_210,0xff);
            sVar10 = wcslen(awStack_210);
            if (iStack_4 <= (int)(sVar10 + sVar9 + 2)) {
              return 0;
            }
            wcscat(pwStack_8,awStack_210);
            return 1;
          }
          iVar11 = FUN_005416c0(*(int *)(this_00 + 0x1dc),0);
          if (iVar11 == 0) {
            return 0;
          }
          if (iVar11 == -0xc) break;
          this_00 = *(CSolar **)(iVar11 + 0x10);
          if (this_00 == (CSolar *)0x0) {
            return 0;
          }
          if ((*(uint *)(this_00 + 0x4c) & 0x303) != 0x303) {
            return 0;
          }
        }
        return 0;
      }
      iVar11 = FUN_005416c0(*(int *)(this + 0x1d8),0);
    } while ((((iVar11 != 0) && (iVar11 != -0xc)) &&
             (this = *(CSolar **)(iVar11 + 0x10), this != (CSolar *)0x0)) &&
            ((*(uint *)(this + 0x4c) & 0x303) == 0x303));
  }
  return 0;
}

