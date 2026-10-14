
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050f850(int param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  undefined1 local_1c [28];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar14 = 0;
    FUN_004205c0(param_1 + 0x14);
    cVar10 = FUN_00420690(local_1c);
    if (cVar10 == '\0') {
      piVar12 = (int *)FUN_004206c0(&local_50,local_1c);
      DAT_006750b4 = *piVar12;
    }
    if ((DAT_006750b4 == DAT_006750a4) || (iVar14 = DAT_006750b4 + 0x28, iVar14 == 0)) {
      puVar11 = (undefined4 *)FUN_00411c50(0x10000,2);
      (**(code **)FDUMP_exref)
                (*puVar11,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                 "cmn\\ShapeDB.h",0xf2,param_1 + 0x14);
    }
    *(int *)(param_1 + 0x34) = iVar14;
  }
  piVar12 = (int *)(**(code **)(*param_2 + 0x14))(param_2);
  local_50 = (float)param_2[0x1f];
  fStack_4c = (float)param_2[0x20];
  fStack_48 = (float)param_2[0x21];
  fVar1 = (float)param_2[0x19];
  fVar9 = (float)_DAT_005c89b8;
  fVar8 = (float)_DAT_005c89b8;
  fVar2 = (float)param_2[0x22];
  if (fVar2 <= *(float *)(param_1 + 0x3c)) {
    if (fVar2 < *(float *)(param_1 + 0x38)) {
      fVar2 = *(float *)(param_1 + 0x38);
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x3c);
  }
  param_2 = (int *)0x3f800000;
  fStack_38 = (float)(*piVar12 + piVar12[2]) * (float)_DAT_005c75e8 - local_50;
  fStack_34 = (float)(piVar12[3] + piVar12[1]) * (float)_DAT_005c75e8 - fStack_4c;
  fVar5 = (float)(piVar12[2] - *piVar12) * (float)_DAT_005c7720;
  fVar5 = fVar5 * fVar5;
  fVar4 = fStack_38 * fStack_38 + fStack_34 * fStack_34 + -fStack_48 * -fStack_48;
  if (fVar4 < fVar5) {
    param_2 = (int *)(fVar4 / fVar5);
  }
  fStack_38 = fStack_38 * _DAT_005d4f28;
  fStack_34 = fStack_34 * _DAT_005d4f28;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar13 = FUN_00425640(0);
    FUN_004220a0(uVar13);
    FUN_00421670(8);
    puVar11 = *(undefined4 **)(param_1 + 4);
    if (puVar11 != *(undefined4 **)(param_1 + 8)) {
      do {
        pfVar3 = (float *)*puVar11;
        FUN_00421bd0(pfVar3[2],pfVar3[3],pfVar3[4],(float)param_2 * pfVar3[5]);
        fStack_28 = fStack_34 * *pfVar3;
        fStack_44 = fStack_38 * *pfVar3 + local_50;
        fStack_40 = fStack_28 + fStack_4c;
        fVar4 = fVar2 * (fVar8 - (fVar9 - fVar1) * (fVar9 - fVar1)) * param_3 * pfVar3[1];
        FUN_00421ca0(0,0);
        fVar5 = fStack_40 - fVar4;
        fVar6 = fStack_44 - fVar4;
        FUN_00421cc0(fVar6,fVar5,0);
        FUN_00421ca0(0x3f800000,0);
        fVar7 = fStack_44 + fVar4;
        FUN_00421cc0(fVar7,fVar5,0);
        FUN_00421ca0(0x3f800000,0x3f800000);
        fVar4 = fStack_40 + fVar4;
        FUN_00421cc0(fVar7,fVar4,0);
        FUN_00421ca0(0,0x3f800000);
        FUN_00421cc0(fVar6,fVar4,0);
        puVar11 = puVar11 + 1;
      } while (puVar11 != *(undefined4 **)(param_1 + 8));
    }
    FUN_00421690();
  }
  return;
}

