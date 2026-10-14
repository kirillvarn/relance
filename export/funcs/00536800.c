
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00536800(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  CObject *pCVar6;
  char *pcVar7;
  float *pfVar8;
  Vector *pVVar9;
  char *pcVar10;
  int *piVar11;
  float10 fVar12;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 uStack_bd;
  undefined1 auStack_bc [4];
  int *piStack_b8;
  int *piStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  Vector aVStack_6c [8];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [12];
  CObject aCStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c09bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
  auStack_bc[0] = uStack_bd;
  piStack_b8 = (int *)0x0;
  piStack_b4 = (int *)0x0;
  fStack_b0 = 0.0;
  uStack_4 = 0;
  FUN_00536c20(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x2c),auStack_bc);
  piVar11 = piStack_b8;
  if (piStack_b8 != piStack_b4) {
    do {
      fVar12 = (float10)(**(code **)(*(int *)*piVar11 + 100))(auStack_18);
      if (fVar12 <= (float10)_DAT_005c7474) {
        CObject::Release((CObject *)*piVar11);
      }
      else {
        iVar5 = FUN_00536b50(*(int *)(param_1 + 8) + 0x50);
        if (iVar5 != 0) {
          if (((int *)*piVar11)[0x15] == 0) {
            uStack_ac = 0x3f800000;
            uStack_a8 = *(undefined4 *)DEFAULT_LINEAR_DAMPING_exref;
            uStack_a4 = *(undefined4 *)DEFAULT_ANGULAR_DAMPING_exref;
            uStack_a0 = *(undefined4 *)(DEFAULT_ANGULAR_DAMPING_exref + 4);
            uStack_9c = *(undefined4 *)(DEFAULT_ANGULAR_DAMPING_exref + 8);
            uStack_98 = 0;
            uStack_94 = 2;
            uStack_90 = 0;
            uStack_8f = 1;
            uStack_86 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            uStack_8e = 0;
            fVar12 = (float10)(**(code **)(*(int *)*piVar11 + 100))(auStack_30);
            fStack_b0 = (float)(fVar12 * (float10)_DAT_005de598);
            uStack_9c = FUN_00554e90();
            iVar2 = *(int *)(param_1 + 0xc);
            if ((((iVar2 == 0) || (iVar2 == -0xc)) ||
                (pCVar6 = *(CObject **)(iVar2 + 0x10), pCVar6 == (CObject *)0x0)) ||
               (((byte)*(undefined4 *)(pCVar6 + 0x4c) & 1) != 1)) {
              pCVar6 = (CObject *)0x0;
            }
            pcVar7 = PhySys::GetCollisionGroup(pCVar6);
            pcVar10 = (char *)((int)&uStack_94 + 2);
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              *pcVar10 = cVar1;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            fVar12 = (float10)(**(code **)(*(int *)*piVar11 + 100))(auStack_64);
            PhySys::BuildIVP_Sphere
                      ((CObject *)*piVar11,(float)(fVar12 * (float10)_DAT_005de590),
                       (CreateParms *)&uStack_ac);
          }
          FUN_00530620(*piVar11,iVar5);
          (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(&fStack_78);
          (**(code **)(**(int **)(param_1 + 0xc) + 4))(&fStack_70);
          pfVar8 = (float *)PhySys::GetCenterOfMass(aCStack_24);
          FUN_00422b80(*pfVar8 - fStack_78,pfVar8[1] - fStack_74,pfVar8[2] - fStack_70);
          if (SQRT(fStack_cc * fStack_cc + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8) <
              (float)_DAT_005dbc98) {
            pfVar8 = (float *)random_on_unit_sphere();
            fStack_cc = *pfVar8;
            fStack_c8 = pfVar8[1];
            fStack_c4 = pfVar8[2];
          }
          fVar3 = *(float *)(*(int *)(param_1 + 8) + 0x30) /
                  SQRT(fStack_cc * fStack_cc + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8);
          fStack_cc = fStack_cc * fVar3;
          fStack_c8 = fStack_c8 * fVar3;
          fStack_c4 = fStack_c4 * fVar3;
          pfVar8 = (float *)random_inside_sphere((float)auStack_54);
          fStack_cc = fStack_cc + *pfVar8;
          fStack_c8 = fStack_c8 + pfVar8[1];
          fStack_c4 = fStack_c4 + pfVar8[2];
          PhySys::AddToVelocity((CObject *)*piVar11,aVStack_6c);
          if (*(int *)((CObject *)*piVar11 + 0x54) != 0) {
            PhySys::LinearImpulse((CObject *)*piVar11,(Vector *)&fStack_cc,1.0);
          }
          pVVar9 = (Vector *)random_inside_sphere((float)auStack_48);
          PhySys::AddToAngularVelocityOS((CObject *)*piVar11,pVVar9);
        }
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piStack_b4);
  }
  FUN_005b7e1d(piStack_b8);
  ExceptionList = pvStack_c;
  return;
}

