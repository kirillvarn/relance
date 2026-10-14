
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004ecfd0(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  bool bVar9;
  float unaff_ESI;
  float10 fVar10;
  float *unaff_retaddr;
  float fStack_14;
  float *pfStack_c;
  float *pfStack_8;
  float *pfStack_4;
  
  piVar4 = (int *)FUN_0040f130();
  uVar5 = (**(code **)(*piVar4 + 0x40))(piVar4);
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b6c + 0x28))(DAT_00674b6c,&stack0xffffffd0,uVar5,unaff_retaddr);
  bVar9 = false;
  fVar10 = (float10)(**(code **)(*piVar4 + 0x20))(piVar4);
  if ((fVar10 < (float10)fStack_14 != (fVar10 == (float10)fStack_14)) &&
     (cVar3 = (**(code **)(*piVar4 + 0x44))(piVar4,pfStack_c,unaff_retaddr), cVar3 != '\0')) {
    iVar6 = DAT_00610854 + -1;
    bVar9 = false;
    if (_DAT_005c7474 <= *pfStack_c) {
      if ((float)(DAT_00610850 + -1) < *pfStack_c) {
        *pfStack_c = (float)(DAT_00610850 + -1);
        bVar9 = true;
      }
    }
    else {
      *pfStack_c = 0.0;
      bVar9 = true;
    }
    if (_DAT_005c7474 <= pfStack_c[1]) {
      if ((float)iVar6 < pfStack_c[1]) {
        pfStack_c[1] = (float)iVar6;
        bVar9 = true;
      }
    }
    else {
      pfStack_c[1] = 0.0;
      bVar9 = true;
    }
    bVar9 = !bVar9;
    pfStack_c[2] = 0.0;
  }
  puVar7 = (undefined4 *)FUN_0054baf0();
  pfVar8 = (float *)(**(code **)*puVar7)();
  fVar1 = SQRT((pfVar8[1] - unaff_retaddr[1]) * (pfVar8[1] - unaff_retaddr[1]) +
               (pfVar8[2] - unaff_retaddr[2]) * (pfVar8[2] - unaff_retaddr[2]) +
               (*pfVar8 - *unaff_retaddr) * (*pfVar8 - *unaff_retaddr));
  *pfStack_4 = fVar1;
  if (bVar9 != false) {
    fVar1 = (fVar1 / -unaff_ESI) * _DAT_005d49b0;
    fVar2 = _DAT_005d95a8;
    if (fVar1 < _DAT_005ca230) {
      fVar2 = (float)_DAT_005c9ce8 * fVar1 + (float)_DAT_005d95a0;
    }
    fVar2 = fVar2 / fVar1;
    *pfStack_8 = fVar2;
    if (DAT_005d8ee8 <= fVar2) {
      if (DAT_005d8eec < fVar2) {
        *pfStack_8 = DAT_005d8eec;
        return bVar9;
      }
    }
    else {
      *pfStack_8 = DAT_005d8ee8;
    }
  }
  return bVar9;
}

