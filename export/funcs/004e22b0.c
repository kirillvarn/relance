
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e22b0(int *param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  wchar_t *_Format;
  undefined4 *puVar7;
  float *pfVar8;
  CEquip *pCVar9;
  CEScanner *this;
  Scanner *pSVar10;
  undefined4 *puVar11;
  float10 fVar12;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar12 = (float10)FUN_0042d680();
  fVar12 = fVar12 + (float10)(float)param_1[0x156];
  param_1[0x156] = (int)(float)fVar12;
  if (fVar12 <= (float10)_DAT_005d8864) {
    return;
  }
  param_1[0x156] = (int)(float)(fVar12 - (float10)_DAT_005d8864);
  if (((((char)param_1[0x134] != '\0') && (param_1[0xe6] != 0)) && (param_1[0xe6] != 8)) &&
     (param_2 != '\0')) {
    if ((((param_1[10] != 0) && (param_1[10] != 8)) &&
        ((param_1[0xe6] != 0 && ((param_1[0xe6] != 8 && (param_1[0x140] != 0)))))) &&
       (param_1[0x141] != 0)) {
      FUN_0045a4e0(&local_1c);
      (**(code **)(*(int *)param_1[0x140] + 0xa8))(0x33);
      (**(code **)(*(int *)param_1[0x141] + 0xa8))(0x33,&stack0xffffffd8,1);
    }
    (**(code **)(*param_1 + 0x3c))();
  }
  iVar6 = param_1[0xe6];
  if ((((iVar6 == 0) || (iVar6 == 8)) || (iVar6 == -4)) ||
     ((iVar6 = *(int *)(iVar6 + 8), iVar6 == 0 || ((*(uint *)(iVar6 + 0x4c) & 0x503) != 0x503)))) {
    iVar6 = 0;
  }
  bVar2 = false;
  if (((param_1[0xe6] != 0) && (param_1[0xe6] != 8)) && (0 < param_1[0x15e])) {
    bVar2 = true;
  }
  if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0xe0) & 0x200000) == 0)) {
    bVar2 = false;
  }
  local_1c = iVar6;
  if (((int *)param_1[0x145] != (int *)0x0) && (param_2 != '\0')) {
    if ((bVar2) && ((char)param_1[0x134] != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(*(int *)param_1[0x145] + 0xa8))(1,uVar4,0);
  }
  if ((int *)param_1[0x146] == (int *)0x0) {
LAB_004e2492:
    if (param_2 != '\0') {
      if (iVar6 == 0) {
        *(byte *)(param_1[0x195] + 0x6c) = *(byte *)(param_1[0x195] + 0x6c) & 0xfc;
      }
      else if (((char)param_1[0x134] != '\0') && (cVar3 = FUN_0055e280(), cVar3 == '\0')) {
        *(byte *)(param_1[0x195] + 0x6c) = *(byte *)(param_1[0x195] + 0x6c) | 3;
        if (param_1[0xe6] == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(param_1[0xe6] + -8);
        }
        iVar6 = (**(code **)(*piVar5 + 0x144))();
        bVar2 = (float)iVar6 < _DAT_005c7474;
        param_1[0x197] = (int)(float)iVar6;
        if ((bVar2) || (_DAT_005ca218 < (float)iVar6)) {
          param_1[0x197] = param_1[0x196];
        }
        if ((float)param_1[0x197] != (float)param_1[0x196]) {
          param_1[0x196] = param_1[0x197];
          FUN_004347e0(DAT_0067eca8,0x619,&DAT_0066fc60,DAT_006119f8);
          _Format = (wchar_t *)ftol();
          swprintf(&DAT_0066dc60,0x5d8d00,_Format);
          wcscat(&DAT_0066fc60,&DAT_0066dc60);
          (**(code **)(*(int *)param_1[0x195] + 0xa8))();
        }
      }
    }
  }
  else if (param_2 != '\0') {
    if ((bVar2) && ((char)param_1[0x134] != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(*(int *)param_1[0x146] + 0xa8))(1,uVar4,0);
    goto LAB_004e2492;
  }
  iVar6 = param_1[0xe6];
  if ((((iVar6 == 0) || (iVar6 == 8)) || (iVar6 == -4)) ||
     ((iVar6 = *(int *)(iVar6 + 8), iVar6 == 0 || ((*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)))) {
    iVar6 = 0;
  }
  _param_2 = 999999.0;
  puVar7 = (undefined4 *)FUN_0054baf0();
  if (((iVar6 == 0) && (local_1c != 0)) && (puVar7 != (undefined4 *)0x0)) {
    if (param_1[0xe6] == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)(param_1[0xe6] + -8);
    }
    pfVar8 = (float *)(**(code **)*puVar11)();
    fStack_18 = *pfVar8;
    fStack_14 = pfVar8[1];
    fStack_10 = pfVar8[2];
    pfVar8 = (float *)(**(code **)*puVar7)();
    fStack_c = *pfVar8;
    fStack_8 = pfVar8[1];
    fStack_4 = pfVar8[2];
    _param_2 = SQRT((fStack_18 - fStack_c) * (fStack_18 - fStack_c) +
                    (fStack_14 - fStack_8) * (fStack_14 - fStack_8) +
                    (fStack_10 - fStack_4) * (fStack_10 - fStack_4));
  }
  if (param_1[0x142] != 0) {
    cVar3 = '\x01';
    if (((((iVar6 == 0) && (local_1c != 0)) && (puVar7 != (undefined4 *)0x0)) &&
        ((puVar7 != (undefined4 *)0xfffffff4 && (iVar1 = puVar7[4], iVar1 != 0)))) &&
       ((*(uint *)(iVar1 + 0x4c) & 0x503) == 0x503)) {
      pCVar9 = CEquipManager::FindFirst((CEquipManager *)(iVar1 + 0xe4),0x80000);
      this = CEScanner::cast(pCVar9);
      if ((this != (CEScanner *)0x0) &&
         (pSVar10 = CEScanner::ScannerArch(this),
         _param_2 < *(float *)(pSVar10 + 0x78) != (_param_2 == *(float *)(pSVar10 + 0x78)))) {
        cVar3 = '\0';
      }
    }
    (**(code **)(*(int *)param_1[0x142] + 0xa8))(1,cVar3,0);
    piVar5 = (int *)FUN_0059da10("NN_Scanner");
    *(bool *)(param_1 + 0x165) = piVar5 != (int *)0x0;
    (**(code **)(*(int *)param_1[0x142] + 0xa8))(0xc,piVar5 != (int *)0x0,0);
    if ((piVar5 != (int *)0x0) && (cVar3 != '\0')) {
      (**(code **)(*piVar5 + 0x5c))(0xef02,0,0);
    }
  }
  if ((int *)param_1[0x143] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x143] + 0xa8))(1,iVar6 == 0,0);
  }
  if ((int *)param_1[0x147] == (int *)0x0) goto LAB_004e27c2;
  bVar2 = false;
  if (local_1c == 0) {
LAB_004e2796:
    uVar4 = 1;
  }
  else {
    if (*(char *)(local_1c + 0x2bd) != '\0') {
      bVar2 = true;
      goto LAB_004e2796;
    }
    uVar4 = 0;
  }
  (**(code **)(*(int *)param_1[0x147] + 0xa8))(1,uVar4,0);
  (**(code **)(*(int *)param_1[0x148] + 0xa8))(1,!bVar2,0);
LAB_004e27c2:
  FUN_004e27e0();
  return;
}

