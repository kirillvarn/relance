
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00585630(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float unaff_ESI;
  undefined4 *puVar4;
  float unaff_EDI;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  undefined1 *puVar10;
  int *piVar11;
  float fVar12;
  int *piVar13;
  float fVar14;
  float fStack_48;
  undefined1 auStack_44 [8];
  float fStack_3c;
  float afStack_38 [4];
  
  fVar14 = *(float *)(param_1 + 0x4b8);
  if (fVar14 != -NAN) {
    fptan((float10)*(float *)(param_1 + 0x4b4) * (float10)_DAT_005c8a5c * (float10)_DAT_005d7470);
    if (param_2 == 1) {
      piVar13 = *(int **)Engine_exref;
      pfVar1 = (float *)(**(code **)(*piVar13 + 0xa0))(piVar13,fVar14);
      fVar7 = (float10)fcos((float10)_DAT_005d8ec0);
      pfVar5 = afStack_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      iVar3 = 3;
      fVar8 = (float10)fsin((float10)_DAT_005d8ec0);
      pfVar1 = afStack_38 + 2;
      do {
        fVar12 = pfVar1[-1];
        iVar3 = iVar3 + -1;
        pfVar1[-1] = (float)((float10)fVar12 * fVar7 + fVar8 * (float10)*pfVar1);
        *pfVar1 = (float)(fVar7 * (float10)*pfVar1 - (float10)fVar12 * fVar8);
        pfVar1 = pfVar1 + 3;
      } while (iVar3 != 0);
      fVar12 = *(float *)(param_1 + 0x4b8);
      piVar11 = *(int **)Engine_exref;
      uVar2 = (**(code **)(*piVar11 + 0xa0))(piVar11,fVar12);
      if (DAT_0067c500 == (int *)0x0) {
        DAT_0067c500 = (int *)FUN_005b73e0();
      }
      fVar9 = (float)(param_1 + 0x4a8);
      (**(code **)(*DAT_0067c500 + 0x28))(DAT_0067c500,&stack0xffffffa8,uVar2,fVar9);
      FUN_00422b80(fStack_48 * fVar9,fStack_3c * fVar9,afStack_38[2] * fVar9);
      fVar9 = (float)piVar11 + fVar14;
    }
    else {
      if (param_2 != 0) {
        return;
      }
      piVar13 = *(int **)Engine_exref;
      pfVar1 = (float *)(**(code **)(*piVar13 + 0xa0))(piVar13,fVar14);
      pfVar5 = afStack_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      if (DAT_0067c500 == (int *)0x0) {
        DAT_0067c500 = (int *)FUN_005b73e0();
      }
      fVar12 = (float)(param_1 + 0x4a8);
      pfVar1 = afStack_38;
      puVar10 = auStack_44;
      (**(code **)(*DAT_0067c500 + 0x28))(DAT_0067c500,puVar10,pfVar1,fVar12);
      FUN_00422b80(fStack_48 * (float)puVar10,fStack_3c * (float)puVar10,
                   afStack_38[2] * (float)puVar10);
      fVar9 = fVar14 + (float)pfVar1;
    }
    FUN_00422b80(fVar9,fVar12 + unaff_EDI,(float)piVar13 + unaff_ESI);
    afStack_38[3] = fVar14;
    *(undefined1 *)(param_1 + 0x3bc) = 1;
    puVar4 = (undefined4 *)&stack0xffffffb0;
    puVar6 = (undefined4 *)(param_1 + 0x38c);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

