
void __fastcall FUN_0044ed90(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined4 unaff_EBX;
  int *piVar13;
  int *piStack_28;
  int iStack_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  iVar5 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))(*(int **)(param_1 + 0x3c));
  pvVar6 = operator_new(iVar5 * 4);
  *(void **)(param_1 + 0x48) = pvVar6;
  iVar7 = 0;
  *(int *)(param_1 + 0x4c) = iVar5;
  if (0 < iVar5) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  iVar7 = 0;
  piStack_28 = (int *)0x0;
  piVar13 = (int *)0x0;
  if (0 < iVar5) {
    do {
      puVar8 = (undefined4 *)
               (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(*(int **)(param_1 + 0x3c),iVar7);
      cVar3 = *(byte *)(puVar8 + 1) & 1;
      uStack_18 = CONCAT31(uStack_18._1_3_,(char)((uint)puVar8[1] >> 1)) & 0xffffff01;
      uStack_1c = CONCAT31(uStack_1c._1_3_,(char)((uint)puVar8[1] >> 2)) & 0xffffff01;
      pcVar9 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"nofog");
      pcVar10 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"running_lights");
      pcVar11 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"priority");
      if ((pcVar11 == (char *)0x0) || (bVar2 = RtcSlider::is_enabled(pcVar11), bVar2)) {
        piVar13 = (int *)0x0;
        switch(*puVar8) {
        case 1:
          piVar13 = (int *)FUN_0044dd80(iVar7,puVar8);
          break;
        case 2:
          piVar13 = (int *)FUN_0044ded0(iVar7,puVar8);
          break;
        case 3:
          if ((bool)cVar3 == false) {
            piVar13 = (int *)FUN_0044dba0(iVar7,puVar8);
          }
          else {
            piVar13 = (int *)FUN_0044dc20(iVar7,puVar8);
          }
          break;
        case 4:
          piVar13 = (int *)FUN_0044d9b0(iVar7,puVar8);
          break;
        case 5:
          if ((bool)cVar3 == false) {
            piVar13 = (int *)FUN_0044e260(iVar7,puVar8);
          }
          else {
            piVar13 = (int *)FUN_0044e2d0(iVar7,puVar8);
          }
          break;
        case 6:
          if ((bool)cVar3 == false) {
            iVar12 = stricmp((char *)puVar8[0xf],PTR_s_PlayerShipSound_00611004);
            if (iVar12 == 0) {
              piVar13 = (int *)FUN_0044e180(iVar7,puVar8);
            }
            else {
              piVar13 = (int *)FUN_0044e030(iVar7,puVar8);
            }
          }
          else {
            piVar13 = (int *)FUN_0044e1f0(iVar7,puVar8);
          }
          break;
        case 7:
          piVar13 = (int *)FUN_0044d810(iVar7,puVar8);
          break;
        default:
          goto switchD_0044ee8f_caseD_8;
        case 9:
          cVar3 = ThornGetUserFloat(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"TextStart",&fStack_20
                                   );
          bVar2 = ThornGetUserInt(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"TextString",&iStack_24)
          ;
          if (((bool)cVar3) && (bVar2)) {
            FUN_0045b430(fStack_20,iStack_24);
          }
          pcVar11 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),iVar7,"priority");
          if (pcVar11 != (char *)0x0) {
            iVar12 = atoi(pcVar11);
            *(int *)(param_1 + 0x58) = iVar12;
          }
          piVar13 = (int *)FUN_0044d630(iVar7,puVar8);
          piStack_28 = piVar13;
          break;
        case 0xd:
          if (pcVar11 == (char *)0x0) {
            bVar2 = RtcSlider::is_enabled("script_particles");
            piVar13 = (int *)0x0;
            if (!bVar2) goto switchD_0044ee8f_caseD_8;
          }
          piVar13 = (int *)0x0;
          pcVar11 = (char *)puVar8[0xf];
          iVar12 = stricmp(pcVar11,PTR_s_PlayerShipEngines_00611008);
          if (iVar12 == 0) {
            piVar13 = (int *)FUN_0044e3c0(iVar7,puVar8);
          }
          else {
            iVar12 = stricmp(pcVar11,PTR_s_PlayerShipHover_0061100c);
            if ((iVar12 == 0) && (iVar12 = FUN_00446be0(), iVar12 == 0))
            goto switchD_0044ee8f_caseD_8;
            piVar13 = (int *)FUN_0044e340(iVar7,puVar8);
          }
        }
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 0x50))
                    (uStack_18,uStack_1c,pcVar9 == (char *)0x0,pcVar10 != (char *)0x0);
        }
switchD_0044ee8f_caseD_8:
        *(int **)(*(int *)(param_1 + 0x48) + iVar7 * 4) = piVar13;
      }
      iVar7 = iVar7 + 1;
      piVar13 = piStack_28;
    } while (iVar7 < iVar5);
  }
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar7 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x4c))(piVar13);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + iVar7 * 4) + 0x3c))
                  (*(int *)(param_1 + 0x48),iVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
      if (iVar12 != 0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c),iVar7,iVar12);
        *(int *)(*(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4) + 0x24) = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4) != 0) {
        piVar13 = (int *)(**(code **)(**(int **)(param_1 + 0x3c) + 0x24))
                                   (*(int **)(param_1 + 0x3c),iVar7);
        cVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + iVar7 * 4) + 0x58))();
        if ((cVar4 == '\0') && (cVar3 == '\0')) {
          if (*piVar13 == 3) {
            iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
            (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(iVar12 + 0x10,piVar13[0x11]);
            iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
            (**(code **)(*(int *)(iVar12 + 0x10) + 0x18))(iVar12 + 0x10,piVar13[0x12]);
            iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
            (**(code **)(*(int *)(iVar12 + 0x10) + 0x1c))(iVar12 + 0x10,piVar13[0x13]);
          }
          else if (*piVar13 == 6) {
            iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
            (**(code **)(*(int *)(iVar12 + 4) + 0x24))(iVar12 + 4,piVar13 + 0x11,0xffffffff);
          }
          if (*(char *)(param_1 + 0x56) != '\0') {
            iVar12 = *piVar13;
            if ((((iVar12 == 1) || (iVar12 == 2)) || (iVar12 == 3)) ||
               ((iVar12 == 6 || (iVar12 == 0xd)))) {
              iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
              (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(iVar12 + 0xc,piVar13 + 2);
              iVar12 = *(int *)(*(int *)(param_1 + 0x48) + iVar7 * 4);
              (**(code **)(*(int *)(iVar12 + 0xc) + 0x10))(iVar12 + 0xc,piVar13 + 5);
            }
            if (*piVar13 == 2) {
              piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar7 * 4);
              (**(code **)(*piVar1 + 0x14))(piVar1,piVar13[0x11]);
            }
          }
          if (*piVar13 == 7) {
            FUN_0044d6a0(piVar13,*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar7 * 4));
          }
          else if (*piVar13 == 3) {
            iStack_14 = piVar13[0x11];
            iStack_10 = piVar13[0x12];
            iStack_c = piVar13[0x13];
            iStack_8 = piVar13[0x14];
            FUN_0044da40(piVar13,*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar7 * 4),&iStack_14);
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  return;
}

