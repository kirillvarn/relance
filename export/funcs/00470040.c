
void FUN_00470040(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  wchar_t *pwVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  bool bVar16;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_0066dac0 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = (DAT_0066dac4 - DAT_0066dac0) / 0xc;
  }
  if (param_1 == 2) {
    while (bVar10 = true, 0 < iVar14 + -1) {
      local_20 = 0;
      local_1c = iVar14 + -1;
      do {
        local_18 = *(int *)(local_20 + 0xc + DAT_0066dac0);
        piVar3 = (int *)(local_20 + 0xc + DAT_0066dac0);
        piVar1 = (int *)(local_20 + DAT_0066dac0);
        FUN_00432240(&local_14,&local_18);
        if (local_14 == DAT_0066daa8) {
          pwVar15 = L"???";
        }
        else {
          pwVar15 = *(wchar_t **)(local_14 + 0x10);
        }
        local_10 = *piVar1;
        FUN_00432240(&local_c,&local_10);
        if (local_c == DAT_0066daa8) {
          pwVar11 = L"???";
        }
        else {
          pwVar11 = *(wchar_t **)(local_c + 0x10);
        }
        iVar12 = _wcsicmp(pwVar11,pwVar15);
        if (0 < iVar12) {
          iVar12 = *piVar1;
          iVar13 = piVar1[1];
          iVar6 = piVar1[2];
          *piVar1 = *piVar3;
          piVar1[1] = piVar3[1];
          piVar1[2] = piVar3[2];
          *piVar3 = iVar12;
          piVar3[1] = iVar13;
          piVar3[2] = iVar6;
          bVar10 = false;
        }
        local_20 = local_20 + 0xc;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      if (bVar10) {
        return;
      }
    }
  }
  else if (param_1 == 1) {
    iVar12 = DAT_0066dac0;
    while (bVar10 = true, 0 < iVar14 + -1) {
      local_1c = 0;
      local_20 = iVar14 + -1;
      do {
        iVar13 = *(int *)(local_1c + 4 + iVar12);
        iVar6 = *(int *)(local_1c + 0x10 + iVar12);
        piVar1 = (int *)(local_1c + iVar12);
        piVar3 = (int *)(local_1c + 0xc + iVar12);
        if (iVar13 <= iVar6) {
          if (iVar6 <= iVar13) {
            local_c = *piVar3;
            FUN_00432240(&local_10,&local_c);
            if (local_10 == DAT_0066daa8) {
              pwVar15 = L"???";
            }
            else {
              pwVar15 = *(wchar_t **)(local_10 + 0x10);
            }
            local_14 = *piVar1;
            FUN_00432240(&local_18,&local_14);
            if (local_18 == DAT_0066daa8) {
              pwVar11 = L"???";
            }
            else {
              pwVar11 = *(wchar_t **)(local_18 + 0x10);
            }
            iVar13 = _wcsicmp(pwVar11,pwVar15);
            iVar12 = DAT_0066dac0;
            if (iVar13 < 1) goto LAB_0047026b;
          }
          iVar12 = *piVar1;
          iVar13 = piVar1[1];
          iVar6 = piVar1[2];
          *piVar1 = *piVar3;
          piVar1[1] = piVar3[1];
          piVar1[2] = piVar3[2];
          *piVar3 = iVar12;
          piVar3[1] = iVar13;
          piVar3[2] = iVar6;
          bVar10 = false;
          iVar12 = DAT_0066dac0;
        }
LAB_0047026b:
        local_1c = local_1c + 0xc;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      if (bVar10) {
        return;
      }
    }
  }
  else if (param_1 == 3) {
    while (bVar10 = true, 0 < iVar14 + -1) {
      local_1c = 0;
      local_20 = iVar14 + -1;
      do {
        local_c = *(int *)(local_1c + 0xc + DAT_0066dac0);
        piVar3 = (int *)(local_1c + 0xc + DAT_0066dac0);
        piVar1 = (int *)(local_1c + DAT_0066dac0);
        FUN_00432240(&local_10,&local_c);
        if (local_10 == DAT_0066da94) {
          pwVar15 = L"???";
        }
        else {
          pwVar15 = *(wchar_t **)(local_10 + 0x10);
        }
        local_14 = *piVar1;
        FUN_00432240(&local_18,&local_14);
        if (local_18 == DAT_0066da94) {
          pwVar11 = L"???";
        }
        else {
          pwVar11 = *(wchar_t **)(local_18 + 0x10);
        }
        iVar12 = _wcsicmp(pwVar11,pwVar15);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          if (piVar1[1] <= piVar3[1]) {
            if (piVar3[1] <= piVar1[1]) {
              local_c = *piVar3;
              FUN_00432240(&local_8,&local_c);
              if (local_8 == DAT_0066daa8) {
                pwVar15 = L"???";
              }
              else {
                pwVar15 = *(wchar_t **)(local_8 + 0x10);
              }
              local_14 = *piVar1;
              FUN_00432240(&local_4,&local_14);
              if (local_4 == DAT_0066daa8) {
                pwVar11 = L"???";
              }
              else {
                pwVar11 = *(wchar_t **)(local_4 + 0x10);
              }
              iVar12 = _wcsicmp(pwVar11,pwVar15);
              bVar16 = iVar12 == 0;
              goto LAB_004703c9;
            }
            goto LAB_004703cb;
          }
        }
        else {
LAB_004703c9:
          if (!bVar16 && -1 < iVar12) {
LAB_004703cb:
            iVar12 = *piVar1;
            iVar13 = piVar1[1];
            iVar6 = piVar1[2];
            *piVar1 = *piVar3;
            piVar1[1] = piVar3[1];
            piVar1[2] = piVar3[2];
            *piVar3 = iVar12;
            piVar3[1] = iVar13;
            piVar3[2] = iVar6;
            bVar10 = false;
          }
        }
        local_1c = local_1c + 0xc;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      if (bVar10) {
        return;
      }
    }
  }
  else if (param_1 == 4) {
    iVar12 = DAT_0066dac0;
    do {
      if (iVar14 + -1 < 1) {
        return;
      }
      param_1 = 0;
      bVar10 = true;
      local_1c = iVar14 + -1;
      do {
        cVar5 = *(char *)(param_1 + 8 + iVar12);
        puVar2 = (undefined4 *)(param_1 + iVar12);
        puVar4 = (undefined4 *)(param_1 + 0xc + iVar12);
        if (cVar5 == '\0') {
LAB_00470469:
          if (*(char *)(puVar4 + 2) == '\0') {
LAB_00470470:
            if ((int)puVar4[1] <= (int)puVar2[1]) goto LAB_004704aa;
          }
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          bVar10 = false;
          iVar12 = DAT_0066dac0;
        }
        else if (*(char *)(puVar4 + 2) != '\0') {
          if (cVar5 == '\0') goto LAB_00470469;
          goto LAB_00470470;
        }
LAB_004704aa:
        param_1 = param_1 + 0xc;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    } while (!bVar10);
  }
  return;
}

