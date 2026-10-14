
/* WARNING: Removing unreachable block (ram,0x00498408) */
/* WARNING: Removing unreachable block (ram,0x00498410) */

void __fastcall FUN_004981f0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  char local_20 [32];
  
  if (*(int *)(param_1 + 0x85c) == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (*(int *)(param_1 + 0x860) - *(int *)(param_1 + 0x85c)) / 0x7c;
  }
  if (0 < local_78) {
    local_74 = 0;
    local_70 = local_78;
    do {
      iVar5 = *(int *)(param_1 + 0x85c) + local_74;
      if ((*(char *)(*(int *)(param_1 + 0x85c) + 0x5c + local_74) == '\0') &&
         (*(char *)(iVar5 + 0x38) != '\0')) {
        *(undefined1 *)(iVar5 + 4) = 0;
        puVar9 = (uint *)(iVar5 + 0x34);
        puVar12 = &local_24;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        local_6c = *(float *)(iVar5 + 0x24);
        local_68 = *(float *)(iVar5 + 0x28);
        local_64 = *(float *)(iVar5 + 0x2c);
LAB_00498290:
        do {
          iVar5 = 0;
          iVar7 = 0;
          do {
            iVar10 = *(int *)(param_1 + 0x85c) + iVar7;
            if ((*(char *)(iVar10 + 4) != '\0') &&
               (iVar6 = stricmp(local_20,(char *)(iVar10 + 4)), iVar6 == 0)) {
              local_28 = *(float *)(param_1 + 0xf48);
              fVar2 = *(float *)(iVar10 + 0x24);
              fVar3 = *(float *)(iVar10 + 0x28);
              fVar4 = *(float *)(iVar10 + 0x2c);
              local_30 = fVar2 * local_28;
              local_2c = fVar3 * local_28;
              local_28 = fVar4 * local_28;
              local_34 = *(float *)(param_1 + 0xf48);
              local_3c = local_6c * local_34;
              local_38 = local_68 * local_34;
              local_34 = local_64 * local_34;
              FUN_004a3680(*(undefined4 *)(param_1 + 0x850),1,&local_3c);
              *(undefined1 *)(iVar10 + 4) = 0;
              pcVar11 = (char *)(iVar10 + 0x38);
              if (*(char *)(iVar10 + 0x38) == '\0') goto LAB_004983da;
              local_6c = fVar2;
              local_68 = fVar3;
              local_64 = fVar4;
              if (pcVar11 != (char *)0x0) {
                uVar8 = 0xffffffff;
                pcVar13 = pcVar11;
                goto code_r0x004983a7;
              }
              local_20[0] = '\0';
              local_24 = 0;
              break;
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 0x7c;
          } while (iVar5 < local_78);
        } while( true );
      }
LAB_004983da:
      local_74 = local_74 + 0x7c;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
  }
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x85c);
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 == '\0') break;
code_r0x004983a7:
    if (uVar8 == 0) break;
  }
  local_24 = ~uVar8 - 1;
  if (0x1f < local_24) {
    local_24 = 0x1f;
  }
  pcVar13 = local_20;
  for (uVar8 = local_24 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = local_24 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  local_20[local_24] = '\0';
  goto LAB_00498290;
}

