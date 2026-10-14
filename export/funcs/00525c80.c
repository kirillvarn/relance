
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00525c80(int *param_1,int *param_2)

{
  CShip *this;
  undefined4 *puVar1;
  float fVar2;
  CObject *pCVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float10 fVar13;
  int *piVar14;
  undefined1 *puVar15;
  int *piVar16;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  ID_String *pIStack_64;
  double dStack_60;
  double dStack_58;
  float fStack_48;
  undefined1 auStack_44 [36];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar8 = FUN_005792b0(0x22);
  if (iVar8 == 0) {
    if (param_1[3] != 0) {
      iVar8 = 0;
      if (0 < param_1[5]) {
        do {
          piVar14 = *(int **)(param_1[3] + iVar8 * 4);
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0x15c))(1);
            *(undefined4 *)(param_1[3] + iVar8 * 4) = 0;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[5]);
      }
      FUN_005b7e1d(param_1[3]);
      param_1[3] = 0;
      return;
    }
  }
  else {
    if (param_1[3] == 0) {
      iVar8 = ftol();
      param_1[5] = iVar8;
      pvVar9 = operator_new(iVar8 * 4);
      param_1[3] = (int)pvVar9;
      iVar8 = 0;
      if (0 < param_1[5]) {
        do {
          *(undefined4 *)(param_1[3] + iVar8 * 4) = 0;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[5]);
      }
    }
    iVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    pIStack_64 = *(ID_String **)(iVar8 + 0x20);
    fStack_70 = -(float)param_1[9];
    uStack_7c._4_4_ = *(float *)(iVar8 + 8) * fStack_70;
    fStack_74 = *(float *)(iVar8 + 0x14) * fStack_70;
    fStack_70 = (float)pIStack_64 * fStack_70;
    pfVar10 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
    fStack_80 = fStack_74 + pfVar10[2];
    fStack_84 = uStack_7c._4_4_ + pfVar10[1];
    fStack_88 = (float)uStack_7c + *pfVar10;
    iVar8 = FUN_0054baf0();
    if ((((iVar8 == 0) || (iVar8 == -0xc)) ||
        (this = *(CShip **)(iVar8 + 0x10), this == (CShip *)0x0)) ||
       (((*(uint *)(this + 0x4c) & 0x503) != 0x503 ||
        (bVar6 = CShip::is_using_tradelane(this), !bVar6)))) {
      if (((undefined4 *)*param_1 == (undefined4 *)0x0) ||
         (fVar13 = (float10)(*(code *)**(undefined4 **)*param_1)(&fStack_88),
         (float10)_DAT_005d1494 < fVar13)) {
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (((char)param_1[0xd] != '\0') && (param_2 != (int *)0x0)) {
      cVar7 = (**(code **)(*param_2 + 4))(&fStack_88,3,0);
      *(char *)(param_1 + 0xd) = '\x01' - (cVar7 != '\0');
    }
    iVar8 = 0;
    fVar2 = (float)param_1[8] * (float)param_1[8];
    fVar5 = _DAT_005d3e6c * fVar2;
    dStack_60 = (double)fVar5;
    fVar2 = fVar2 * _DAT_00613858;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    uStack_7c = (double)fVar2;
    dStack_58 = (double)(fVar5 - fVar2);
    if (0 < param_1[5]) {
      do {
        puVar1 = *(undefined4 **)(param_1[3] + iVar8 * 4);
        if ((puVar1 == (undefined4 *)0x0) || (*(char *)((int)puVar1 + 0xad) == '\0')) {
LAB_00525ed6:
          if ((char)param_1[0xd] == '\0') {
            piVar14 = *(int **)(param_1[3] + iVar8 * 4);
            if (piVar14 != (int *)0x0) {
              (**(code **)(*piVar14 + 0x15c))(1);
              *(undefined4 *)(param_1[3] + iVar8 * 4) = 0;
            }
          }
          else {
            if (*(int *)(param_1[3] + iVar8 * 4) == 0) {
              uVar11 = FUN_00526650();
              *(undefined4 *)(param_1[3] + iVar8 * 4) = uVar11;
            }
            if (*(int *)(param_1[3] + iVar8 * 4) == 0) {
              (**(code **)FDUMP_exref)
                        (0x100002,"%s(%d) : *** WARNING: %s",
                         "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x986,
                         "dynamic asteroid not created");
            }
            if (*(char *)(*(int *)(param_1[3] + iVar8 * 4) + 0xad) != '\0') {
              (**(code **)FDUMP_exref)
                        (0x100002,"%s(%d) : *** WARNING: %s",
                         "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x988,
                         "dynamic asteroid should be flagged as !valid_pos");
            }
            fVar2 = (float)param_1[8];
            pfVar10 = (float *)random_on_unit_sphere();
            fStack_48 = fVar2 * pfVar10[2];
            fStack_70 = fVar2 * *pfVar10 + fStack_88;
            fStack_6c = fVar2 * pfVar10[1] + fStack_84;
            fStack_68 = fStack_48 + fStack_80;
            FUN_004fcef0(*(int *)(param_1[3] + iVar8 * 4) + 0xb8);
            pCVar3 = *(CObject **)(*(int *)(param_1[3] + iVar8 * 4) + 0x10);
            if (pCVar3 != (CObject *)0x0) {
              PhySys::SetCollisionState(pCVar3,false);
            }
            FUN_00525200(&fStack_70,param_1[6],param_1[7]);
            pCVar3 = *(CObject **)(*(int *)(param_1[3] + iVar8 * 4) + 0x10);
            if (pCVar3 != (CObject *)0x0) {
              PhySys::SetCollisionState(pCVar3,true);
            }
            piVar14 = *(int **)(param_1[3] + iVar8 * 4);
            iVar4 = param_1[2];
            if ((((piVar14[0x30] != 0) && ((*(byte *)(piVar14[0x30] + 8) & 2) == 0)) ||
                ((piVar16 = (int *)piVar14[0x2f], piVar16 != (int *)0x0 &&
                 (cVar7 = (**(code **)(*piVar16 + 0x14))(piVar16), cVar7 != '\0')))) ||
               ((piVar14[0x31] != 0 && (*(int *)(piVar14[0x31] + 0xd4) == 0)))) {
              (**(code **)FDUMP_exref)
                        (0x100002,"%s(%d) : *** WARNING: %s",
                         "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x87c,
                         "dynamic asteroid effect already created");
              FUN_004fcef0(piVar14 + 0x2e);
            }
            iVar4 = *(int *)(iVar4 + 4);
            if ((iVar4 != 0) && (*(char *)(iVar4 + 0x58) != '\0')) {
              FUN_004215b0();
              uStack_18 = 0;
              uStack_1c = 0;
              uStack_20 = 0;
              uVar11 = (**(code **)(*piVar14 + 0x1c))();
              pIStack_64 = (ID_String *)(iVar4 + 0x54);
              bVar6 = ID_String::IsEmpty(pIStack_64);
              if (!bVar6) {
                piVar16 = piVar14 + 0x2e;
                puVar15 = auStack_44;
                uVar12 = FUN_0040f080(pIStack_64,piVar14,uVar11,puVar15,piVar16);
                FUN_00503070(uVar12,piVar14,uVar11,puVar15,piVar16);
              }
            }
            *(undefined1 *)(*(int *)(param_1[3] + iVar8 * 4) + 0xad) = 1;
            *(undefined1 *)(*(int *)(param_1[3] + iVar8 * 4) + 0xac) = 1;
            *(undefined1 *)((int)param_1 + 0x35) = 1;
          }
        }
        else {
          pfVar10 = (float *)(**(code **)*puVar1)();
          fVar2 = (*pfVar10 - fStack_88) * (*pfVar10 - fStack_88) +
                  (pfVar10[1] - fStack_84) * (pfVar10[1] - fStack_84) +
                  (pfVar10[2] - fStack_80) * (pfVar10[2] - fStack_80);
          if ((float)dStack_60 < fVar2) {
            *(undefined1 *)(*(int *)(param_1[3] + iVar8 * 4) + 0xad) = 0;
            goto LAB_00525ed6;
          }
          iVar4 = *(int *)(param_1[3] + iVar8 * 4);
          if (*(char *)(iVar4 + 0xac) != '\0') {
            fVar5 = _DAT_005c75dc;
            if ((float)dStack_58 < fVar2) {
              fVar5 = ((float)dStack_60 - fVar2) / (float)uStack_7c;
            }
            *(float *)(iVar4 + 0xb0) = fVar5;
            if (_DAT_005d3e44 < fVar5) {
              *(undefined1 *)((int)param_1 + 0x35) = 1;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1[5]);
    }
  }
  return;
}

