
void FUN_004ce4c0(int *param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_f8;
  undefined4 auStack_f0 [17];
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 auStack_54 [16];
  int local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  cVar4 = FUN_004cbc40(param_2);
  if (cVar4 != '\0') {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_60 = 0;
  local_14 = 1;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)*param_1 != 0) {
    FUN_004ce810((int *)*param_1 + 1);
    local_138 = -100;
    piVar6 = (int *)FUN_00430ab0(local_5c);
    if ((piVar6 != (int *)0x0) && (iVar11 = 0, 0 < local_14)) {
      do {
        piVar7 = (int *)(**(code **)(*piVar6 + 0x14))(auStack_54[iVar11]);
        if ((piVar7 != (int *)0x0) && (iVar8 = (**(code **)(*piVar7 + 0x38))(), local_138 < iVar8))
        {
          local_138 = iVar8;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_14);
    }
    bVar3 = false;
    if (((local_138 < 0) && ((char)param_1[3] != '\0')) && (local_138 < param_1[2])) {
      puVar2 = (uint *)*param_1;
      local_128 = 0;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
      local_f8 = 0;
      local_ac = 1;
      local_a8 = 0;
      local_a0 = 0;
      if (*puVar2 != 0) {
        puVar10 = puVar2 + 1;
        FUN_004ce810(puVar10);
        uVar9 = 1;
        if (1 < *puVar2) {
          do {
            FUN_004ce810(puVar10 + 0x26);
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 0x26;
          } while (uVar9 < *puVar2);
        }
        *puVar2 = *puVar2 - 1;
      }
      bVar3 = true;
      uStack_9c = 2;
      bVar5 = SinglePlayer();
      if (bVar5) {
        (**(code **)(*DAT_0067ecd0 + 0xfc))(uStack_130,uStack_12c,auStack_f0[local_ac],uStack_9c);
      }
    }
    if ((((char)param_1[3] != '\0') && (param_1[2] < 0)) && (param_1[2] < local_138)) {
      iVar11 = param_1[1];
      if ((*(char *)(iVar11 + 0x38) != '\0') && (*(char *)(iVar11 + 0x85) == '\0')) {
        *(undefined1 *)(iVar11 + 0x84) = 0;
        *(undefined1 *)(iVar11 + 0x85) = 1;
        if (*(int *)(iVar11 + 0x170) != 0) {
          *(undefined4 *)(iVar11 + 0x170) = 0;
        }
        if (*(int *)(iVar11 + 0x1bc) != 0) {
          pbVar1 = (byte *)(*(int *)(iVar11 + 0x1bc) + 0x6c);
          *pbVar1 = *pbVar1 & 0xfc;
        }
      }
      bVar5 = SinglePlayer();
      if (bVar5) {
        (**(code **)(*DAT_0067ecd0 + 0xfc))
                  (*(undefined4 *)(iVar11 + 0x1c4),*(undefined4 *)(iVar11 + 0x1c8),
                   *(undefined4 *)(iVar11 + 0x1cc),2);
      }
      FUN_004cbb40();
    }
    if (!bVar3) {
      if (cVar4 != '\0') {
        puVar2 = (uint *)*param_1;
        if (*puVar2 != 0) {
          puVar10 = puVar2 + 1;
          FUN_004ce810(puVar10);
          uVar9 = 1;
          if (1 < *puVar2) {
            do {
              FUN_004ce810(puVar10 + 0x26);
              uVar9 = uVar9 + 1;
              puVar10 = puVar10 + 0x26;
            } while (uVar9 < *puVar2);
          }
          *puVar2 = *puVar2 - 1;
        }
        FUN_004ce000(param_1,local_98);
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        return;
      }
      if (*(int *)COMM_CONFLICT_PRIORITY_CUTOFF_exref < local_138) {
        if (*(char *)((int)param_1 + 0xd) == '\0') {
          *(undefined1 *)((int)param_1 + 0xd) = 1;
          return;
        }
      }
      else {
        FUN_004cdc10();
        local_ac = 1;
        local_a8 = 0;
        local_a0 = 0;
        FUN_004cdc60(&uStack_130);
        uStack_9c = 2;
        FUN_004cdfc0(&uStack_130);
      }
    }
  }
  return;
}

