
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004f86c0(int *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  byte bVar10;
  float unaff_EBP;
  int *piVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  float fStack_78;
  undefined1 auStack_74 [8];
  undefined1 local_6c [4];
  OwnerList<pub::SpaceObj::CargoDesc> aOStack_68 [8];
  int aiStack_60 [9];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int aiStack_30 [12];
  
  iVar5 = FUN_005792b0(0x26);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = param_1[0x11];
  if (((iVar5 != 0) && (piVar11 = (int *)(iVar5 + -8), piVar11 != (int *)0x0)) &&
     ((*(int *)(iVar5 + 0x14) == 1 || (*(int *)(iVar5 + 0x14) == 2)))) {
    iVar5 = (**(code **)(*piVar11 + 0x150))();
    if ((iVar5 != 0) && ((*(uint *)(iVar5 + 0x4c) & 0x103) == 0x103)) {
      fVar8 = *(float *)(iVar5 + 0x140);
      if (fVar8 >= _DAT_005c75dc) {
        return (uint)(ushort)((ushort)(fVar8 < _DAT_005c75dc) << 8 |
                              (ushort)(NAN(fVar8) || NAN(_DAT_005c75dc)) << 10 |
                             (ushort)(fVar8 == _DAT_005c75dc) << 0xe);
      }
    }
    if (DAT_00675244 != 0) {
      fStack_78 = 0.0;
      uVar6 = (**(code **)(*piVar11 + 0x18c))(&fStack_78);
      if (uVar6 == 0) {
        if (DAT_0067524c == 2) {
          return 0;
        }
      }
      else {
        if (uVar6 != DAT_00675244) {
          return uVar6 & 0xffffff00;
        }
        if (((param_1[0x11] == 0) || (param_1[0x11] == 8)) || (param_1[0x10] == -1)) {
          piVar11 = param_1 + 4;
        }
        else {
          uVar9 = (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_1[0x10]);
          OwnerList<pub::SpaceObj::CargoDesc>::operator=
                    (aOStack_68,(OwnerList<struct_pub::SpaceObj::CargoDesc> *)0x0);
          if (DAT_00674f50 == (int *)0x0) {
            DAT_00674f50 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_00674f50 + 0x1c))(DAT_00674f50,aOStack_68,uVar9,param_1 + 4);
          FUN_00406880(aiStack_60);
          piVar11 = aiStack_30;
        }
        piVar12 = aiStack_60;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar12 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar12 = piVar12 + 1;
        }
        pfVar7 = (float *)(**(code **)(*param_3 + 0xc))(param_3);
        fVar8 = *pfVar7;
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        FUN_00422b80(fStack_3c - fVar8,fStack_38 - fVar2,fStack_34 - fVar3);
        fVar8 = fVar8 * fVar8 + fVar2 * fVar2 + fVar3 * fVar3;
        if (fVar8 >= _DAT_00675248 && (fVar8 == _DAT_00675248) == 0) {
          return (uint)(ushort)((ushort)(fVar8 < _DAT_00675248) << 8 |
                                (ushort)(NAN(fVar8) || NAN(_DAT_00675248)) << 10 |
                               (ushort)(fVar8 == _DAT_00675248) << 0xe);
        }
      }
    }
  }
  fVar8 = (float)param_1[3];
  uVar6 = (uint)(ushort)((ushort)(fVar8 < _DAT_006129c8) << 8 |
                         (ushort)(NAN(fVar8) || NAN(_DAT_006129c8)) << 10 |
                        (ushort)(fVar8 == _DAT_006129c8) << 0xe);
  if (fVar8 < _DAT_006129c8 != 0) goto LAB_004f8a00;
  puVar16 = local_6c;
  fVar13 = (float10)(**(code **)(*param_1 + 8))();
  fStack_78 = (float)fVar13;
  piVar11 = param_3;
  fVar8 = (float)(**(code **)(*param_3 + 0x40))();
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  puVar15 = auStack_74;
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&stack0xffffff74);
  fVar2 = -(float)puVar16;
  fVar14 = (float10)(**(code **)(*param_3 + 0x20))(param_3);
  fVar13 = (float10)unaff_EBP;
  uVar6 = (uint)(ushort)((ushort)(fVar14 < fVar13) << 8 | (ushort)(NAN(fVar14) || NAN(fVar13)) << 10
                        | (ushort)(fVar14 == fVar13) << 0xe);
  if (fVar14 >= fVar13) goto LAB_004f8a00;
  iVar5 = FUN_004fd560(param_1[0x17]);
  fVar3 = (float)puVar16 - fVar2;
  fVar4 = ((float)_DAT_005c89b8 - _DAT_006129c8) *
          (*(float *)(iVar5 + 0x24) - *(float *)(iVar5 + 0x20)) + *(float *)(iVar5 + 0x20);
  uVar6 = (uint)(ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                        (ushort)(fVar4 == fVar3) << 0xe);
  if (fVar4 < fVar3 != 0 || (fVar4 == fVar3) != 0) goto LAB_004f8a00;
  iVar5 = FUN_005792b0(0x40);
  if (iVar5 != 0) {
    uVar9 = FUN_0042dcd0(param_1[0x17],param_3,puVar16,param_1 + 0x20);
    if ((char)uVar9 == '\0') {
      param_1[0x20] = 0;
      return CONCAT31((int3)((uint)uVar9 >> 8),(char)param_1[0x1f]) & 0xffffff01;
    }
  }
  fVar8 = (float)piVar11 * (float)param_3[0x22] + ABS(fVar8) * (float)param_3[0x20];
  uVar6 = (uint)(ushort)((ushort)(fVar8 < fVar2) << 8 | (ushort)(NAN(fVar8) || NAN(fVar2)) << 10 |
                        (ushort)(fVar8 == fVar2) << 0xe);
  if (fVar8 < fVar2 == (fVar8 == fVar2)) {
LAB_004f89ef:
    bVar10 = 0;
  }
  else {
    fVar8 = (float)piVar11 * (float)param_3[0x25] + ABS((float)puVar15) * (float)param_3[0x24];
    uVar6 = (uint)(ushort)((ushort)(fVar8 < fVar2) << 8 | (ushort)(NAN(fVar8) || NAN(fVar2)) << 10 |
                          (ushort)(fVar8 == fVar2) << 0xe);
    if (fVar8 < fVar2 == (fVar8 == fVar2)) goto LAB_004f89ef;
    bVar10 = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x1f);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar1);
  *(byte *)(param_1 + 0x1f) = (bVar1 ^ bVar10) & 1 ^ bVar1;
LAB_004f8a00:
  return CONCAT31((int3)(uVar6 >> 8),(char)param_1[0x1f]) & 0xffffff01;
}

