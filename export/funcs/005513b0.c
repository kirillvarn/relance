
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005513b0(undefined4 *param_1,NebulaExclusionZoneMgr *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_30;
  int local_2c;
  NebulaExclusionZone *pNStack_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  piVar6 = (int *)*param_1;
  local_2c = 0;
  if (0 < (int)param_1[3]) {
    do {
      if (local_2c < (int)param_1[4]) {
        pfVar4 = (float *)random_inside_sphere((float)local_18);
        local_24 = (float)param_1[0x3d] + *pfVar4;
        pfVar1 = (float *)*piVar6;
        local_20 = (float)param_1[0x3e] + pfVar4[1];
        local_1c = (float)param_1[0x3f] + pfVar4[2];
        *pfVar1 = local_24;
        pfVar1[1] = local_20;
        pfVar1[2] = local_1c;
        puVar5 = (undefined4 *)random_inside_sphere((float)local_c);
        iVar2 = *piVar6;
        *(undefined4 *)(iVar2 + 0x44) = *puVar5;
        *(undefined4 *)(iVar2 + 0x48) = puVar5[1];
        *(undefined4 *)(iVar2 + 0x4c) = puVar5[2];
        if (((undefined4 *)param_1[0x31] == (undefined4 *)0x0) ||
           (fVar7 = (float10)(*(code *)**(undefined4 **)param_1[0x31])(*piVar6),
           fVar7 <= (float10)_DAT_005c8ba8)) {
          *(undefined1 *)(*piVar6 + 0x50) = 0;
          *(undefined1 *)(*piVar6 + 0x51) = 1;
        }
        else {
          *(undefined1 *)(*piVar6 + 0x50) = 1;
          *(undefined1 *)(*piVar6 + 0x51) = 0;
          if (param_2 != (NebulaExclusionZoneMgr *)0x0) {
            fStack_30 = -1.0;
            bVar3 = Exclusion::NebulaExclusionZoneMgr::is_in_exclusion_zone
                              (param_2,(Vector *)*piVar6,&pNStack_28,&fStack_30,true);
            if ((bVar3) && (_DAT_005e0e00 < fStack_30)) {
              *(undefined1 *)(*piVar6 + 0x51) = 1;
            }
          }
        }
      }
      else {
        *(undefined1 *)(*piVar6 + 0x50) = 0;
        *(undefined1 *)(*piVar6 + 0x51) = 1;
      }
      local_2c = local_2c + 1;
      piVar6 = piVar6 + 1;
    } while (local_2c < (int)param_1[3]);
  }
  return;
}

