
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004f1c20(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int local_20;
  float local_14;
  int local_10;
  
  iVar11 = FUN_0054baf0();
  iVar14 = 0;
  if (iVar11 != 0) {
    local_10 = 0;
    local_14 = 3.4028235e+38;
    FUN_0040f130();
    fVar3 = (float)DAT_00610850;
    iVar12 = *(int *)(param_1 + 0x36c);
    fVar2 = _DAT_005c75e0 * fVar3;
    fVar4 = (float)DAT_00616840;
    fVar6 = (float)DAT_00610854;
    fVar5 = _DAT_005c75e0 * fVar6;
    fVar7 = (float)DAT_00616844;
    if (0 < *(int *)(iVar12 + 0x800)) {
      local_20 = 0;
      do {
        iVar1 = *(int *)(iVar12 + iVar14 * 8);
        if ((((iVar1 != 0) && (iVar1 = iVar1 + -8, iVar1 != 0)) &&
            (puVar13 = (uint *)(*(int *)(param_1 + 0x374) + local_20),
            *(char *)(*(int *)(param_1 + 0x374) + 0x2d + local_20) != '\0')) &&
           ((*puVar13 & 0x10000) != 0)) {
          iVar12 = *(int *)(iVar12 + iVar14 * 8);
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + -8;
          }
          iVar12 = FUN_0045a490(iVar11,iVar12);
          if (((iVar12 == -1) &&
              (fVar8 = (fVar4 - fVar2) / fVar3 - ((float)puVar13[1] - fVar2) / (float)DAT_00610850,
              fVar10 = (fVar7 - fVar5) / fVar6 - ((float)puVar13[2] - fVar5) / (float)DAT_00610854,
              fVar9 = (float)puVar13[8] / (float)DAT_00610850,
              fVar8 * fVar8 + fVar10 * fVar10 < fVar9 * fVar9 + _DAT_005d8f20)) &&
             ((float)puVar13[10] < local_14)) {
            local_14 = (float)puVar13[10];
            local_10 = iVar1;
          }
        }
        iVar12 = *(int *)(param_1 + 0x36c);
        iVar14 = iVar14 + 1;
        local_20 = local_20 + 0x34;
      } while (iVar14 < *(int *)(iVar12 + 0x800));
    }
    return local_10;
  }
  return 0;
}

