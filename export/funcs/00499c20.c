
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00499c20(int param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar9 = (float10)(**(code **)(*param_2 + 8))();
  iVar7 = (int)param_3;
  fVar1 = (float)(fVar9 * (float10)_DAT_005d3eec * (float10)_DAT_005d3ee8);
  if (((*(int *)(param_1 + 2000) == 1) || (*(int *)(param_1 + 2000) == 0)) &&
     ((*(char *)(param_1 + 0x478) == '\0' || (*(int *)(param_1 + 0x4a4) != 2)))) {
    fStack_2c = *(float *)((int)param_3 + 0x34);
    fStack_28 = *(float *)((int)param_3 + 0x38);
    fStack_30 = (*(float *)((int)param_3 + 0x30) / *(float *)(param_1 + 0x4a8)) * _DAT_005d043c;
    param_3 = *(float *)((int)param_3 + 0x7c) / (float)DAT_00610850;
    param_2 = (int *)(fStack_30 - param_3 * _DAT_005c75e0);
    fStack_4c = -((fStack_28 / *(float *)(param_1 + 0x4ac)) * _DAT_005d3ee4);
    cVar4 = FUN_0049a2f0(&param_2,&fStack_4c,param_3,fVar1,iVar7);
    if (cVar4 == '\0') {
      fVar2 = (float)_DAT_005d3ed8;
      fVar3 = (float)_DAT_005d3ed0;
      if (*(int *)(param_1 + 0x86c) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*(int *)(param_1 + 0x870) - *(int *)(param_1 + 0x86c)) / 0x14;
      }
      if (iVar7 < 1) {
        return;
      }
      iVar8 = 0;
      do {
        pfVar5 = (float *)(*(int *)(param_1 + 0x86c) + iVar8);
        if (((((float)param_2 * fVar2 <= *(float *)(*(int *)(param_1 + 0x86c) + 8 + iVar8) + *pfVar5
              ) && (*pfVar5 <= (float)param_2 * fVar2 + param_3 * fVar3)) &&
            (fStack_4c <= pfVar5[3] + pfVar5[1])) &&
           ((pfVar5[1] <= fStack_4c + fVar1 && (pfVar5[4] != 0.0)))) {
          *(undefined1 *)((int)pfVar5[4] + 0x81) = 1;
        }
        iVar8 = iVar8 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
    fStack_28 = *(float *)(param_1 + 0x3d0);
    fStack_30 = (float)param_2;
    fStack_2c = fStack_4c + _DAT_005cb88c;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10._0_4_ = 0;
    uStack_10._4_4_ = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_3c = FUN_004176c0(0x3f800000,0x3cf5c28f,*(undefined4 *)(param_1 + 0x3d0));
    uStack_10 = uStack_3c;
    uVar10 = FUN_00417730(&fStack_30);
    uVar11 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fStack_48);
    uVar6 = *(undefined4 *)(iVar7 + 0x78);
  }
  else {
    pfVar5 = (float *)(param_1 + 0x418);
    fStack_30 = *pfVar5;
    fStack_2c = *(float *)(param_1 + 0x41c);
    fStack_28 = *(float *)(param_1 + 0x420);
    FUN_00422b80(-(fStack_30 * _DAT_005c75e0),-(fStack_2c * _DAT_005c75e0),
                 -(fStack_28 * _DAT_005c75e0));
    uStack_3c._4_4_ = *(float *)(param_1 + 0x41c);
    fStack_34 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
    fStack_40 = fStack_28;
    param_2 = (int *)(*(float *)(param_1 + 0x3f8) - _DAT_005c75dc);
    uStack_3c._0_4_ = (float)param_2 * *pfVar5 * _DAT_005c75e0;
    fStack_48 = fStack_30 - (float)uStack_3c;
    fStack_44 = fStack_2c - (float)param_2 * uStack_3c._4_4_ * _DAT_005c75e0;
    fVar3 = fStack_28 - fStack_34 * (float)param_2;
    fVar2 = *(float *)(param_1 + 0x3f8);
    fStack_30 = *(float *)(param_1 + 0x46c) * fVar2;
    fStack_2c = *(float *)(param_1 + 0x470) * fVar2;
    fStack_28 = *(float *)(param_1 + 0x474);
    FUN_00422b80(fStack_30 + fStack_48,fStack_2c + fStack_44,
                 fVar2 * *(float *)(param_1 + 0x474) + fVar3);
    iVar7 = (int)param_3;
    fStack_40 = *(float *)(param_1 + 0x3f8);
    fStack_48 = *pfVar5 * fStack_40;
    fStack_44 = *(float *)(param_1 + 0x41c) * fStack_40;
    uStack_3c._0_4_ = *pfVar5;
    fStack_40 = *(float *)(param_1 + 0x420) * fStack_40;
    fStack_34 = *(float *)(param_1 + 0x420);
    fStack_24 = fStack_30 +
                ((*(float *)((int)param_3 + 0x30) + *(float *)(param_1 + 0x4a8)) /
                (*(float *)(param_1 + 0x4a8) + *(float *)(param_1 + 0x4a8))) * fStack_48;
    uStack_3c._4_4_ = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
    fStack_1c = -((fStack_2c +
                  ((float)_DAT_005c89b8 -
                  (*(float *)((int)param_3 + 0x38) + *(float *)(param_1 + 0x4ac)) /
                  (*(float *)(param_1 + 0x4ac) + *(float *)(param_1 + 0x4ac))) * fStack_44) /
                 uStack_3c._4_4_);
    param_3 = *(float *)((int)param_3 + 0x7c) / (float)DAT_00610850;
    param_2 = (int *)((fStack_24 / ((float)uStack_3c * _DAT_005c75e0)) * _DAT_005d043c -
                     param_3 * _DAT_005c75e0);
    fStack_4c = -(fStack_1c * _DAT_005d3ee4);
    fStack_20 = fStack_44;
    cVar4 = FUN_0049a2f0(&param_2,&fStack_4c,param_3,fVar1,iVar7);
    if (cVar4 == '\0') {
      return;
    }
    fStack_28 = *(float *)(param_1 + 0x3d0);
    fStack_30 = (float)param_2;
    fStack_2c = fStack_4c + _DAT_005cb88c;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10._0_4_ = 0;
    uStack_10._4_4_ = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_3c = FUN_004176c0(0x3f800000,0x3cf5c28f,*(undefined4 *)(param_1 + 0x3d0));
    fStack_1c = fStack_28 - _DAT_005cb88c;
    fStack_24 = fStack_30;
    fStack_20 = fStack_2c;
    uStack_10 = uStack_3c;
    uVar10 = FUN_00417730(&fStack_24);
    fStack_28 = fStack_28 + _DAT_005d3ee0;
    uStack_3c = uVar10;
    uVar11 = FUN_00417730(&fStack_30);
    fStack_44 = (float)((ulonglong)uVar11 >> 0x20);
    uVar6 = *(undefined4 *)(iVar7 + 0x78);
    uVar10 = uStack_3c;
  }
  uStack_14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  fStack_48 = (float)uVar11;
  uStack_3c._0_4_ = (float)uVar10;
  uStack_18 = (float)uStack_3c;
  uStack_3c = uVar10;
  FUN_004143c0(uVar6,0,0);
  return;
}

