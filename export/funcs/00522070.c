
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00522070(float param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  asteroid_marker *paVar6;
  CAsteroidCube *this;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  CAsteroidCube *pCVar11;
  int *piVar12;
  undefined4 unaff_retaddr;
  undefined4 *puVar13;
  float fStack_dc;
  float local_d8;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  int iStack_d0;
  asteroid_marker *paStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int aiStack_bc [2];
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined4 uStack_7c;
  int iStack_74;
  ulong auStack_64 [21];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c010b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_d8 = param_1;
  if ((*(char *)((int)param_1 + 0x21c) != '\0') &&
     (ExceptionList = &pvStack_c, *(int **)((int)param_1 + 0x1c) != (int *)0x0)) {
    ExceptionList = &pvStack_c;
    uVar3 = (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x10))(0,0);
    uVar3 = FUN_005553b0(uVar3);
    *(undefined4 *)((int)param_1 + 0xd4) = uVar3;
  }
  *(undefined1 *)((int)param_1 + 0x21c) = 0;
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
  uStack_c8 = *puVar4;
  uStack_c4 = puVar4[1];
  uStack_c0 = puVar4[2];
  iVar5 = FUN_005792b0(0x21);
  if (iVar5 != 0) {
    fVar2 = (float)param_2 + *(float *)((int)param_1 + 0xd8);
    *(float *)((int)param_1 + 0xd8) = fVar2;
    if ((_DAT_00613848 < fVar2) || ((char)param_2[0x2f] != '\0')) {
      *(undefined4 *)((int)param_1 + 0xd8) = 0;
      if (*(int **)((int)param_1 + 0xdc) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0xdc) + 8))(&uStack_c8);
      }
    }
    iVar5 = FUN_005792b0(0x1b);
    if ((iVar5 != 0) && (*(CAsteroidField **)((int)param_1 + 4) != (CAsteroidField *)0x0)) {
      for (paVar6 = CmnAsteroid::CAsteroidField::get_changes(*(CAsteroidField **)((int)param_1 + 4))
          ; paVar6 != (asteroid_marker *)0x0; paVar6 = *(asteroid_marker **)(paVar6 + 0x10)) {
        paStack_cc = paVar6;
        FUN_00432240(&local_d8,paVar6);
        if (local_d8 == *(float *)((int)param_1 + 0xc)) {
          FUN_004b6800(&uStack_d2,0,&uStack_d1);
          uStack_b0 = 0;
          uStack_7c = 0xfa;
          auStack_64[0] = *(ulong *)paVar6;
          puStack_8 = (undefined1 *)0x0;
          FUN_00526a40(auStack_b4);
          puStack_8._0_1_ = 1;
          FUN_00526d20(aiStack_bc,auStack_64);
          puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
          FUN_00524af0();
          puStack_8 = (undefined1 *)0x2;
          FUN_0053e430(&iStack_d0);
          iVar5 = iStack_74;
          while (iStack_d0 != iVar5) {
            (**(code **)(**(int **)(iStack_d0 + 0x10) + 0x15c))(1);
            FUN_0052afa0();
          }
          FUN_00526c80();
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_005268a0();
          iVar5 = aiStack_bc[0];
          puVar4 = (undefined4 *)(aiStack_bc[0] + 0x10);
          this = CmnAsteroid::CAsteroidField::find_cube
                           (*(CAsteroidField **)((int)param_1 + 4),*(ulong *)paVar6);
          if (this == (CAsteroidCube *)0x0) {
            (**(code **)FDUMP_exref)
                      (0x100002,"%s(%d) : *** WARNING: %s",
                       "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x31d,
                       "no cmn cube found");
          }
          else {
            *puVar4 = this;
            uVar7 = CmnAsteroid::CAsteroidCube::get_id(this);
            *(ulong *)(iVar5 + 0x14) = uVar7;
            pCVar11 = this + 0xc;
            puVar4 = (undefined4 *)(iVar5 + 0x18);
            for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar4 = *(undefined4 *)pCVar11;
              pCVar11 = pCVar11 + 4;
              puVar4 = puVar4 + 1;
            }
            *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(this + 0x30);
            *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(this + 0x34);
            *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(this + 0x38);
            *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)((int)fStack_dc + 0x20);
            param_1 = fStack_dc;
            paVar6 = paStack_cc;
          }
        }
        FUN_00524cb0(paVar6);
      }
      puVar4 = *(undefined4 **)((int)param_1 + 0xc);
      puVar9 = (undefined4 *)*puVar4;
      paStack_cc = (asteroid_marker *)0x0;
      puVar13 = puVar9;
joined_r0x00522316:
      while (puVar9 != puVar4) {
        if (puVar9[0x17] != 0) {
          if (*(char *)(puVar9[2] + 0x61) != '\0') goto LAB_00522353;
          puVar8 = (undefined4 *)FUN_00527750(puVar9[2]);
          goto LAB_00522375;
        }
        FUN_00433330();
        FUN_00526f30(&fStack_dc,puVar9);
        puVar9 = puVar13;
      }
      iVar10 = *(int *)((int)param_1 + 0x228);
      for (iVar5 = *(int *)((int)param_1 + 0x224); iVar5 != iVar10; iVar5 = iVar5 + 4) {
        FUN_00525c80(unaff_retaddr,param_2,*(undefined4 *)((int)param_1 + 0xdc));
      }
    }
    iVar5 = FUN_005792b0(0x25);
    if ((((iVar5 != 0) && (*(int *)((int)param_1 + 4) != 0)) &&
        (iVar5 = FUN_005792b0(0x2c), 0 < iVar5)) && (iVar5 = FUN_005792b0(0x2c), iVar5 < 3)) {
      if (*(char *)((int)param_1 + 0xf8) != '\0') {
        FUN_0054d410(&uStack_c8);
      }
      if (*(char *)((int)param_1 + 0x180) != '\0') {
        local_d8 = CmnAsteroid::CAsteroidField::near_field_fraction
                             (*(CAsteroidField **)((int)param_1 + 4),(Vector *)&uStack_c8,1000.0);
        piVar1 = *(int **)((int)param_1 + 0x18c);
        for (piVar12 = *(int **)((int)param_1 + 0x188); piVar12 != piVar1; piVar12 = piVar12 + 1) {
          *(float *)(*piVar12 + 0x54) = local_d8;
          FUN_0054d410(&uStack_c8);
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
LAB_00522353:
  puVar8 = (undefined4 *)puVar9[1];
  if (puVar9 == (undefined4 *)puVar8[2]) {
    do {
      puVar9 = puVar8;
      puVar8 = (undefined4 *)puVar9[1];
      puVar13 = puVar9;
    } while (puVar9 == (undefined4 *)puVar8[2]);
  }
  if ((undefined4 *)puVar9[2] != puVar8) {
LAB_00522375:
    puVar9 = puVar8;
    puVar13 = puVar8;
  }
  goto joined_r0x00522316;
}

