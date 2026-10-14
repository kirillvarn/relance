
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f18d0(int param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  CObject *this;
  Root *pRVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 unaff_EBP;
  float unaff_ESI;
  float10 fVar12;
  char cVar13;
  int local_10;
  float local_c;
  int *local_8;
  int *local_4;
  
  fVar12 = (float10)FUN_0042d680();
  fVar12 = fVar12 + (float10)*(float *)(param_1 + 0x420);
  *(float *)(param_1 + 0x420) = (float)fVar12;
  if (fVar12 < (float10)DAT_005d8ef0) {
    return;
  }
  if ((float10)*(float *)(param_1 + 0x424) <= fVar12) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(bool *)(param_1 + 0x428) = *(char *)(param_1 + 0x428) == '\0';
  }
  local_c = 1e+12;
  bVar3 = false;
  local_4 = (int *)FUN_0054baf0();
  iVar11 = 0;
  if ((local_4 != (int *)0x0) && (iVar5 = *(int *)(param_1 + 0x36c), 0 < *(int *)(iVar5 + 0x800))) {
    local_10 = 0;
    do {
      piVar4 = local_4;
      iVar5 = *(int *)(iVar5 + iVar11 * 8);
      if ((((iVar5 != 0) && (piVar1 = (int *)(iVar5 + -8), piVar1 != (int *)0x0)) &&
          ((*(uint *)(local_10 + *(int *)(param_1 + 0x374)) & 0x1000000) != 0)) &&
         ((iVar5 = (**(code **)(*piVar1 + 0x74))(&local_8), iVar5 == 0 && (local_8 != (int *)0x0))))
      {
        iVar5 = (**(code **)(*piVar4 + 0x20))();
        iVar6 = (**(code **)(*local_8 + 0x20))();
        if (iVar6 == iVar5) {
          pfVar7 = (float *)(**(code **)*piVar1)();
          pfVar8 = (float *)(**(code **)*local_4)();
          fVar2 = (*pfVar8 - *pfVar7) * (*pfVar8 - *pfVar7) +
                  (pfVar8[1] - pfVar7[1]) * (pfVar8[1] - pfVar7[1]) +
                  (pfVar8[2] - pfVar7[2]) * (pfVar8[2] - pfVar7[2]);
          if ((fVar2 < local_c) &&
             (bVar3 = true, local_c = fVar2, *(char *)(param_1 + 0x44c) == '\0')) {
            *(undefined1 *)(param_1 + 0x44c) = 1;
            this = (CObject *)(**(code **)(*piVar1 + 0x150))();
            pRVar9 = CObject::get_archetype(this);
            if ((pRVar9 == (Root *)0x0) || (*(int *)(pRVar9 + 0xa8) != 10)) {
              FUN_00489e80(DAT_00674b4c,0);
            }
            else {
              FUN_00489e80(DAT_00674b50,0);
            }
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x36c);
      iVar11 = iVar11 + 1;
      local_10 = local_10 + 0x34;
    } while (iVar11 < *(int *)(iVar5 + 0x800));
    if ((bVar3) && (*(char *)(param_1 + 0x428) == '\0')) {
      uVar10 = 0;
      goto LAB_004f1ab6;
    }
  }
  uVar10 = 1;
LAB_004f1ab6:
  (**(code **)(**(int **)(param_1 + 0x410) + 0xa8))(1,uVar10,0);
  cVar13 = (char)((uint)unaff_EBP >> 0x10);
  *(char *)(param_1 + 0x44c) = cVar13;
  if (cVar13 == '\0') {
    *(float *)(param_1 + 0x424) = DAT_005d8ef0;
    return;
  }
  if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
    FUN_005645c0(0x19);
  }
  fVar2 = (float)_DAT_005c75f8;
  *(float *)(param_1 + 0x424) = SQRT(unaff_ESI) * fVar2;
  if (DAT_005d8ef0 <= SQRT(unaff_ESI) * fVar2) {
    return;
  }
  *(float *)(param_1 + 0x424) = DAT_005d8ef0;
  return;
}

