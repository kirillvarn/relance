
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5410(float param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_40;
  undefined4 *local_2c;
  float local_28;
  float local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005be098;
  pvStack_c = ExceptionList;
  local_2c = (undefined4 *)((float)DAT_00610854 * (float)(double)s_UUUUUUu__d_____005d7e68._0_8_);
  ExceptionList = &pvStack_c;
  iVar7 = ftol();
  piVar5 = (int *)((float)iVar7 * (float)_DAT_005d7e50);
  fVar2 = (float)_DAT_005c75e8;
  DACOM_CRC::GetCRC32("core_bars");
  FUN_00402d30();
  iVar8 = FUN_00402e30(&DAT_006101d8,0,0);
  local_28 = (float)iVar7 * (float)_DAT_005c75e8 +
             ((float)(DAT_00610850 / 2) - (float)(iVar7 << 4) * fVar2);
  piVar6 = (int *)(param_1 * (float)(double)s_UUUUUUU_core_bars_005d7e38._0_8_ * (float)DAT_00610854
                  );
  fVar2 = (float)local_2c + (float)local_2c;
  fVar3 = (float)(iVar7 << 4) * param_3 + local_28;
  local_20 = local_28 + (float)piVar5;
  if (fVar3 < local_28 + (float)piVar5) {
    local_20 = fVar3;
  }
  local_40 = 0;
  do {
    iVar1 = *(int *)(iVar8 + 0xc);
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (*(int *)(iVar8 + 0x10) < iVar1 + 1) {
      *(int *)(iVar8 + 0x10) = iVar1 + 0x21;
      local_2c = operator_new((iVar1 + 0x21) * 0x2c);
      if (*(undefined4 **)(iVar8 + 8) != (undefined4 *)0x0) {
        puVar12 = *(undefined4 **)(iVar8 + 8);
        puVar13 = local_2c;
        for (uVar9 = (uint)(iVar1 * 0x2c) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
      }
      FUN_005b7e1d();
      *(undefined4 **)(iVar8 + 8) = local_2c;
    }
    fVar4 = (float)iVar7 + local_28;
    pfVar11 = (float *)(iVar1 * 0x2c + *(int *)(iVar8 + 8));
    *pfVar11 = local_28;
    pfVar11[1] = (float)piVar6;
    pfVar11[2] = local_20;
    pfVar11[3] = fVar2 + (float)piVar6;
    pfVar11[4] = 1.0;
    pfVar11[5] = 1.0;
    pfVar11[6] = DAT_006101dc;
    pfVar11[7] = DAT_006101e0;
    pfVar11[8] = DAT_006101e4;
    pfVar11[9] = DAT_006101e8;
    pfVar11[10] = param_2;
    if (fVar3 < fVar4) break;
    local_20 = (float)iVar7 + local_20;
    if (fVar3 < local_20) {
      local_20 = fVar3;
    }
    local_40 = local_40 + 1;
    local_28 = fVar4;
  } while (local_40 < 0x10);
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x17);
  (**(code **)(*piVar6 + 0xf0))(piVar6,local_20,8);
  FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_00674980);
  (**(code **)(*piVar5 + 0xf0))(piVar5,local_2c,fVar4);
  ExceptionList = piVar5;
  return;
}

