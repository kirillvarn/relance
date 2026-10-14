
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034a0(int *param_1,float param_2,undefined4 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  float unaff_EBX;
  int *piVar9;
  float unaff_EBP;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float unaff_retaddr;
  float local_30;
  float local_2c;
  float afStack_28 [4];
  float afStack_18 [4];
  undefined4 uStack_8;
  float fStack_4;
  
  piVar9 = param_1;
  cVar3 = FUN_00403350(param_1,param_2,param_4,&local_2c,&local_30,&param_2,&param_1,&param_4);
  if (cVar3 != '\0') {
    iVar4 = FUN_00402f40();
    piVar5 = (int *)(**(code **)(*piVar9 + 0x14))(piVar9);
    if ((float)_DAT_005c75f0 < ABS(param_4)) {
      fVar14 = (float10)fcos((float10)param_4);
      fVar15 = (float10)fsin((float10)param_4);
      afStack_28[0] = (float)(fVar14 * (float10)(float)param_1);
      local_2c = (float)((float10)(float)param_1 * fVar15);
      param_1 = (int *)(float)(fVar14 * (float10)unaff_retaddr);
      param_4 = (float)(fVar15 * (float10)unaff_retaddr);
      fVar14 = (float10)(**(code **)(*piVar9 + 0x20))(piVar9);
      iVar6 = 0;
      fStack_4 = (float)((float10)_DAT_005c75dc - fVar14 * (float10)param_2);
      afStack_18[0] = (unaff_EBX - local_2c) - (float)param_3;
      afStack_28[0] = (local_30 + unaff_EBP) - unaff_retaddr;
      afStack_18[1] = (unaff_EBX - local_2c) + (float)param_3;
      afStack_28[1] = unaff_retaddr + local_30 + unaff_EBP;
      afStack_18[2] = (float)param_3 + local_2c + unaff_EBX;
      afStack_28[2] = unaff_retaddr + (unaff_EBP - local_30);
      afStack_18[3] = (local_2c + unaff_EBX) - (float)param_3;
      afStack_28[3] = (unaff_EBP - local_30) - unaff_retaddr;
      do {
        if (*(float *)((int)afStack_18 + iVar6) < (float)*piVar5) {
          return;
        }
        if ((float)piVar5[2] < *(float *)((int)afStack_18 + iVar6) !=
            ((float)piVar5[2] == *(float *)((int)afStack_18 + iVar6))) {
          return;
        }
        if (*(float *)((int)afStack_28 + iVar6) < (float)piVar5[1]) {
          return;
        }
        if ((float)piVar5[3] < *(float *)((int)afStack_28 + iVar6) !=
            ((float)piVar5[3] == *(float *)((int)afStack_28 + iVar6))) {
          return;
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x10);
      iVar6 = *(int *)(iVar4 + 0x18);
      uVar8 = *(uint *)(iVar6 + 0x18);
      piVar9 = (int *)(iVar6 + 0x14);
      *(uint *)(iVar6 + 0x18) = uVar8 + 4;
      if (*(int *)(iVar6 + 0x1c) < (int)(uVar8 + 4)) {
        *(uint *)(iVar6 + 0x1c) = uVar8 + 0x24;
        param_3 = (undefined4 *)uVar8;
        puVar7 = operator_new((uVar8 + 0x24) * 0x20);
        if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
          puVar11 = (undefined4 *)*piVar9;
          puVar12 = puVar7;
          for (iVar6 = (uVar8 & 0x7ffffff) << 3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (iVar6 = 0; uVar8 = (uint)param_3, iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        FUN_005b7e1d(*piVar9);
        *piVar9 = (int)puVar7;
      }
      fVar1 = *(float *)(iVar4 + 0x24);
      fVar2 = *(float *)(iVar4 + 0x20);
      pfVar10 = (float *)(uVar8 * 0x20 + *piVar9);
      pfVar10[2] = fStack_4;
      pfVar10[4] = (float)param_1;
      pfVar10[5] = 0.0;
      *pfVar10 = afStack_18[0];
      pfVar10[1] = afStack_28[0];
      pfVar10[3] = param_2;
      pfVar10[6] = fVar2;
      pfVar10[7] = fVar1;
      fVar1 = *(float *)(iVar4 + 0x2c);
      fVar2 = *(float *)(iVar4 + 0x20);
      pfVar10[10] = fStack_4;
      pfVar10[0xc] = (float)param_1;
      pfVar10[0xd] = 0.0;
      pfVar10[8] = afStack_18[1];
      pfVar10[9] = afStack_28[1];
      pfVar10[0xb] = param_2;
      pfVar10[0xe] = fVar2;
      pfVar10[0xf] = fVar1;
      fVar1 = *(float *)(iVar4 + 0x2c);
      fVar2 = *(float *)(iVar4 + 0x28);
      pfVar10[0x12] = fStack_4;
      pfVar10[0x14] = (float)param_1;
      pfVar10[0x10] = afStack_18[2];
      pfVar10[0x15] = 0.0;
      pfVar10[0x11] = afStack_28[2];
      pfVar10[0x13] = param_2;
      pfVar10[0x16] = fVar2;
      pfVar10[0x17] = fVar1;
      fVar1 = *(float *)(iVar4 + 0x24);
      fVar2 = *(float *)(iVar4 + 0x28);
      pfVar10[0x1a] = fStack_4;
      pfVar10[0x1c] = (float)param_1;
      pfVar10[0x18] = afStack_18[3];
      pfVar10[0x1d] = 0.0;
      pfVar10[0x19] = afStack_28[3];
      pfVar10[0x1b] = param_2;
      pfVar10[0x1e] = fVar2;
      pfVar10[0x1f] = fVar1;
    }
    else {
      afStack_18[1] = *(float *)(iVar4 + 0x20);
      afStack_18[2] = *(float *)(iVar4 + 0x24);
      afStack_28[1] = (local_30 - (float)param_1) + (float)_DAT_005c75e8;
      afStack_18[3] = *(float *)(iVar4 + 0x28);
      uStack_8 = *(undefined4 *)(iVar4 + 0x2c);
      afStack_28[3] = local_30 + (float)param_1 + (float)_DAT_005c75e8;
      afStack_28[2] = (unaff_EBX - unaff_retaddr) + (float)_DAT_005c75e8;
      afStack_18[0] = unaff_EBX + unaff_retaddr + (float)_DAT_005c75e8;
      iVar6 = FUN_00404670(afStack_28 + 1,afStack_28 + 3,afStack_18 + 1,afStack_18 + 3,
                           (float)*piVar5,(float)piVar5[2],(float)param_1 + (float)param_1);
      if ((iVar6 != 0) &&
         (iVar6 = FUN_00404670(afStack_28 + 2,afStack_18,afStack_18 + 2,&uStack_8,(float)piVar5[1],
                               (float)piVar5[3],unaff_retaddr + unaff_retaddr), iVar6 != 0)) {
        fVar13 = (float10)(**(code **)(*piVar9 + 0x20))(piVar9);
        fVar14 = (float10)param_2;
        iVar4 = *(int *)(iVar4 + 0x18);
        iVar6 = *(int *)(iVar4 + 0xc);
        piVar9 = (int *)(iVar4 + 8);
        fVar15 = (float10)_DAT_005c75dc;
        *(int *)(iVar4 + 0xc) = iVar6 + 1;
        if (*(int *)(iVar4 + 0x10) < iVar6 + 1) {
          *(int *)(iVar4 + 0x10) = iVar6 + 0x21;
          param_3 = operator_new((iVar6 + 0x21) * 0x2c);
          if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)*piVar9;
            puVar11 = param_3;
            for (uVar8 = (uint)(iVar6 * 0x2c) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
          }
          FUN_005b7e1d(*piVar9);
          *piVar9 = (int)param_3;
        }
        pfVar10 = (float *)(iVar6 * 0x2c + *piVar9);
        *pfVar10 = afStack_28[0];
        pfVar10[1] = afStack_28[1];
        pfVar10[2] = afStack_28[2];
        pfVar10[3] = afStack_28[3];
        pfVar10[4] = (float)(fVar15 - fVar13 * fVar14);
        pfVar10[5] = param_2;
        pfVar10[6] = afStack_18[0];
        pfVar10[7] = afStack_18[1];
        pfVar10[8] = afStack_18[2];
        pfVar10[9] = afStack_18[3];
        pfVar10[10] = (float)param_1;
        return;
      }
    }
  }
  return;
}

