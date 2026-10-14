
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00449990(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float10 fVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float local_78;
  float local_74 [5];
  undefined4 auStack_60 [4];
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  float afStack_44 [4];
  undefined4 uStack_34;
  undefined4 auStack_30 [3];
  undefined1 local_24 [36];
  
  if (*(char *)(param_1 + 0x1338) != '\0') {
    param_2 = param_2 + *(float *)(param_1 + 0x1344);
    *(float *)(param_1 + 0x1344) = param_2;
    fVar1 = *(float *)(param_1 + 0x133c);
    cVar4 = FUN_00454910();
    if (((cVar4 != '\0') && (*(char *)(param_1 + 0x1340) != '\0')) || (fVar1 < param_2)) {
      *(undefined1 *)(param_1 + 0x1338) = 0;
      DAT_0066d359 = 0;
      if (DAT_00668ac0 == (int *)0x0) {
        DAT_00668ac0 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00668ac0 + 0x54))(DAT_00668ac0,local_24,param_1 + 0x1348);
      puVar7 = auStack_30;
      puVar9 = auStack_60;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      afStack_44[2] = *(float *)(param_1 + 0x1358);
      afStack_44[3] = *(float *)(param_1 + 0x135c);
      uStack_34 = *(undefined4 *)(param_1 + 0x1360);
      FUN_00556cd0(*(undefined4 *)(param_1 + 0x500),auStack_60);
      FUN_00556ce0(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x1364));
      FUN_00556e00(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x1368));
      FUN_00556f10(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x136c));
      if (*(code **)(param_1 + 0x1398) != (code *)0x0) {
        (**(code **)(param_1 + 0x1398))
                  (*(undefined4 *)(param_1 + 0x139c),*(undefined4 *)(param_1 + 0x13a0),0);
        return;
      }
    }
    else {
      fVar11 = (float10)fcos(((float10)*(float *)(param_1 + 0x1344) /
                             (float10)*(float *)(param_1 + 0x133c)) * (float10)_DAT_005c8a5c);
      fVar1 = (float)((float10)_DAT_005c75dc -
                     (fVar11 + (float10)_DAT_005c75dc) * (float10)_DAT_005c75e0);
      fVar3 = (*(float *)(param_1 + 0x1358) - *(float *)(param_1 + 0x1380)) * fVar1 +
              *(float *)(param_1 + 0x1380);
      fVar2 = (*(float *)(param_1 + 0x135c) - *(float *)(param_1 + 0x1384)) * fVar1 +
              *(float *)(param_1 + 0x1384);
      local_78 = (*(float *)(param_1 + 0x1360) - *(float *)(param_1 + 5000)) * fVar1 +
                 *(float *)(param_1 + 5000);
      if (DAT_00668ac0 == (int *)0x0) {
        DAT_00668ac0 = (int *)FUN_005b73e0();
      }
      iVar5 = param_1 + 0x1348;
      iVar13 = param_1 + 0x1370;
      pfVar12 = local_74;
      fVar14 = fVar1;
      (**(code **)(*DAT_00668ac0 + 0x58))(DAT_00668ac0,pfVar12,iVar13,iVar5,fVar1);
      local_74[0] = fVar1;
      local_74[1] = fVar3;
      local_74[2] = fVar2;
      if (DAT_00668ac0 == (int *)0x0) {
        DAT_00668ac0 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00668ac0 + 0x54))(DAT_00668ac0,afStack_44 + 3,&local_78);
      pfVar8 = afStack_44;
      pfVar10 = local_74;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      iStack_50 = iVar13;
      iStack_4c = iVar5;
      fStack_48 = fVar14;
      FUN_00556cd0(*(undefined4 *)(param_1 + 0x500),local_74);
      FUN_00556ce0(*(undefined4 *)(param_1 + 0x500),
                   (*(float *)(param_1 + 0x1364) - *(float *)(param_1 + 0x138c)) * (float)pfVar12 +
                   *(float *)(param_1 + 0x138c));
      FUN_00556e00(*(undefined4 *)(param_1 + 0x500),
                   (*(float *)(param_1 + 0x1368) - *(float *)(param_1 + 0x1390)) * (float)pfVar12 +
                   *(float *)(param_1 + 0x1390));
      FUN_00556f10(*(undefined4 *)(param_1 + 0x500),
                   (*(float *)(param_1 + 0x136c) - *(float *)(param_1 + 0x1394)) * (float)pfVar12 +
                   *(float *)(param_1 + 0x1394));
    }
  }
  return;
}

