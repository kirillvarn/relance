
bool __thiscall FUN_004ed9f0(int param_1,char param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  CSolar *this;
  ID_String *pIVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float unaff_retaddr;
  undefined1 local_18 [24];
  
  puVar1 = (undefined2 *)(param_1 + 0x446);
  piVar2 = (int *)(param_1 + 0x448);
  *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  *piVar2 = 0;
  iVar7 = FUN_0054baf0();
  if ((((iVar7 == 0) || (iVar7 == -0xc)) || (iVar7 = *(int *)(iVar7 + 0x10), iVar7 == 0)) ||
     ((*(uint *)(iVar7 + 0x4c) & 0x503) != 0x503)) {
    return false;
  }
  if (DAT_00674b74 != 0) {
    *piVar2 = DAT_00674b74;
    *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    return true;
  }
  iVar3 = param_1 + 0x380;
  if ((DAT_00674b78 == iVar3) || ((DAT_00674b78 != 0 && (*(char *)(DAT_00674b78 + 0x31) != '\0'))))
  {
    *piVar2 = 0;
    *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    if (param_2 != '\0') {
      return false;
    }
    FUN_004ceeb0(0);
    return true;
  }
  if ((DAT_00674b78 == param_1 + 0x3b4) ||
     ((DAT_00674b78 != 0 && (*(char *)(DAT_00674b78 + 0x30) != '\0')))) {
    *piVar2 = 0;
    *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    if (param_2 != '\0') {
      return false;
    }
    FUN_004cef30(0);
    return true;
  }
  FUN_004ed180();
  if ((((((*(char *)(param_1 + 0x3ad) != '\0') &&
         (fVar4 = (float)DAT_00616840,
         *(float *)(param_1 + 900) - *(float *)(param_1 + 0x3a0) <= fVar4)) &&
        (fVar5 = *(float *)(param_1 + 0x3a0) + *(float *)(param_1 + 900),
        fVar4 < fVar5 != (fVar4 == fVar5))) &&
       ((fVar4 = (float)DAT_00616844,
        *(float *)(param_1 + 0x388) - *(float *)(param_1 + 0x3a0) <= fVar4 &&
        (fVar5 = *(float *)(param_1 + 0x3a0) + *(float *)(param_1 + 0x388), iVar13 = iVar3,
        fVar4 < fVar5 != (fVar4 == fVar5))))) ||
      ((((*(char *)(param_1 + 0x3e1) != '\0' &&
         ((fVar4 = (float)DAT_00616840,
          *(float *)(param_1 + 0x3b8) - *(float *)(param_1 + 0x3d4) <= fVar4 &&
          (fVar5 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x3b8),
          fVar4 < fVar5 != (fVar4 == fVar5))))) &&
        (fVar4 = (float)DAT_00616844,
        *(float *)(param_1 + 0x3bc) - *(float *)(param_1 + 0x3d4) <= fVar4)) &&
       (fVar5 = *(float *)(param_1 + 0x3bc) + *(float *)(param_1 + 0x3d4), iVar13 = param_1 + 0x3b4,
       fVar4 < fVar5 != (fVar4 == fVar5))))) &&
     ((iVar13 != 0 &&
      ((*(int *)(param_1 + 1000) < 0 || (*(float *)(iVar13 + 0x20) < *(float *)(param_1 + 0x3ec)))))
     )) {
    if (iVar13 == iVar3) {
      if (param_2 == '\0') {
        FUN_004ceeb0(0);
      }
    }
    else if (param_2 == '\0') {
      FUN_004cef30(0);
    }
    *piVar2 = 0;
    *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    return param_2 == '\0';
  }
  if (-1 < *(int *)(param_1 + 1000)) {
    piVar9 = (int *)(*(int *)(param_1 + 0x36c) + *(int *)(param_1 + 1000) * 8);
    iVar3 = *piVar9;
    if ((iVar3 != 0) && (iVar3 != 8)) {
      iVar7 = *piVar9;
      if (iVar7 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(iVar7 + -8);
      }
      iVar7 = (**(code **)(*piVar9 + 0x20))();
      *piVar2 = iVar7;
      *puVar1 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
      this = (CSolar *)(**(code **)(*piVar9 + 0x150))();
      if ((this != (CSolar *)0x0) && ((*(uint *)(this + 0x4c) & 0x303) == 0x303)) {
        pIVar8 = CSolar::GetParentNickname(this);
        bVar6 = ID_String::IsEmpty(pIVar8);
        if (!bVar6) {
          pIVar8 = CSolar::GetParentNickname(this);
          piVar9 = (int *)FUN_005416c0(*(undefined4 *)pIVar8,2);
          if (piVar9 != (int *)0x0) {
            iVar7 = (**(code **)(*piVar9 + 0x20))();
            *piVar2 = iVar7;
            return *piVar2 != 0;
          }
        }
      }
      goto LAB_004ede28;
    }
  }
  piVar9 = (int *)FUN_0040f130();
  FUN_0051dd20(local_18,piVar9,(float)DAT_00616840,(float)DAT_00616844,iVar7,1);
  FUN_004edeb0(local_18,piVar2,puVar1);
  if ((*piVar2 == 0) && (piVar10 = (int *)FUN_004ee100(), piVar10 != (int *)0x0)) {
    iVar7 = (**(code **)(*piVar10 + 0x20))();
    *piVar2 = iVar7;
    (**(code **)(*piVar9 + 0xc))(piVar9);
    (**(code **)*piVar10)();
  }
  piVar10 = (int *)FUN_004f1c20();
  if (piVar10 != (int *)0x0) {
    pfVar11 = (float *)(**(code **)(*piVar9 + 0xc))(piVar9);
    pfVar12 = (float *)(**(code **)*piVar10)();
    if ((*pfVar12 - *pfVar11) * (*pfVar12 - *pfVar11) +
        (pfVar12[1] - pfVar11[1]) * (pfVar12[1] - pfVar11[1]) +
        (pfVar12[2] - pfVar11[2]) * (pfVar12[2] - pfVar11[2]) < unaff_retaddr) {
      iVar7 = (**(code **)(*piVar10 + 0x20))();
      *piVar2 = iVar7;
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Targetable_Objects.cpp",0x9ae,
                 "Used Hostile Pick Assistance!");
    }
  }
LAB_004ede28:
  return *piVar2 != 0;
}

