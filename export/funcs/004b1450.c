
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1450(int param_1,int param_2,wchar_t *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  uint uVar8;
  float10 fVar9;
  wchar_t *in_stack_fffffec0;
  size_t in_stack_fffffec4;
  wchar_t *in_stack_fffffec8;
  wchar_t *in_stack_fffffecc;
  size_t in_stack_fffffed0;
  wchar_t *in_stack_fffffed4;
  wchar_t *_Count;
  undefined4 uVar10;
  undefined8 uVar11;
  int *local_108;
  float fStack_104;
  undefined1 auStack_100 [128];
  undefined1 auStack_80 [64];
  wchar_t awStack_40 [32];
  
  if (param_2 == 0x534) {
    uVar11 = CONCAT44(&local_108,1);
LAB_004b1485:
    local_108 = (int *)0x0;
    (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,uVar11);
    if (local_108 == (int *)0x0) {
      return;
    }
  }
  else if (param_2 == 0x657) {
    uVar11 = CONCAT44(&local_108,8);
    goto LAB_004b1485;
  }
  piVar4 = (int *)FUN_005b3770();
  if ((piVar4 == (int *)0x0) || (param_2 == 0x57f)) {
LAB_004b1631:
    if (0x581 < param_2) {
      if (param_2 < 0x688) {
        if (param_2 == 0x687) {
          swprintf(awStack_40,0x5d0ec4,param_3);
          if (-1 < param_4) {
            (**(code **)(**(int **)(param_1 + 0x6fc + param_4 * 4) + 0xa8))(0x1d,awStack_40,0);
          }
        }
        else if (param_2 == 0x583) {
          if (-1 < param_4) {
            FUN_00564650();
          }
        }
        else if ((param_2 == 0x584) && (-1 < param_4)) {
          FUN_00564650();
        }
      }
      else if (param_2 == 0x767) {
        uVar8 = 0;
        local_108 = (int *)0x0;
        while ((*(int *)(param_1 + 0x548) != 0 &&
               (uVar8 < (uint)((*(int *)(param_1 + 0x54c) - *(int *)(param_1 + 0x548)) / 0x18)))) {
          piVar4 = (int *)(*(int *)(param_1 + 0x548) + (int)local_108);
          iVar7 = piVar4[3];
          if ((iVar7 == -1) || (iVar5 = *piVar4, iVar5 == 0x767)) {
LAB_004b1ad3:
            uVar8 = uVar8 + 1;
            local_108 = local_108 + 6;
          }
          else {
            if ((char)piVar4[5] == '\0') {
              if (((int)param_3 < iVar7) || (piVar4[4] < (int)param_3)) {
                uVar11 = 0xffffffff00000000;
              }
              else {
                uVar11 = 0xffffffff00000001;
              }
              FUN_004b1d20(iVar5,uVar11);
              goto LAB_004b1ad3;
            }
            uVar10 = 0xffffffff;
            if (iVar7 < (int)param_3) {
              if ((int)param_3 < piVar4[4]) {
                fStack_104 = (float)((int)param_3 - iVar7);
                uVar6 = ftol();
                FUN_004b1450(iVar5,uVar6,uVar10);
                uVar8 = uVar8 + 1;
                local_108 = local_108 + 6;
              }
              else {
                FUN_004b1450(iVar5,100,0xffffffff);
                uVar8 = uVar8 + 1;
                local_108 = local_108 + 6;
              }
            }
            else {
              FUN_004b1450(iVar5,0,0xffffffff);
              uVar8 = uVar8 + 1;
              local_108 = local_108 + 6;
            }
          }
        }
        piVar4 = (int *)FUN_005b36b0();
        fStack_104 = (float)(int)param_3 * (float)_DAT_005d5138;
        piVar4[4] = (int)fStack_104;
        (**(code **)*piVar4)();
        if ((float)piVar4[5] != (float)piVar4[4]) {
          fStack_104 = (float)piVar4[4];
          piVar4[5] = (int)fStack_104;
          (**(code **)(*piVar4 + 4))();
        }
        if (*(char *)(param_1 + 0x32e) == '\0') {
          *(undefined1 *)(param_1 + 0x8c8) = 1;
          FUN_004b0920();
          *(undefined1 *)(param_1 + 0x8c8) = 0;
        }
        else {
          FUN_004b0920();
        }
      }
      goto switchD_004b1659_caseD_535;
    }
    if (param_2 == 0x581) {
      if (-1 < param_4) {
        FUN_00564650();
      }
      goto switchD_004b1659_caseD_535;
    }
  }
  else {
    piVar2 = (int *)((float)(int)param_3 * (float)_DAT_005d5138);
    piVar4[4] = (int)piVar2;
    local_108 = piVar2;
    (**(code **)*piVar4)();
    if ((float)piVar4[5] != (float)piVar4[4]) {
      fStack_104 = (float)piVar4[4];
      piVar4[5] = (int)fStack_104;
      (**(code **)(*piVar4 + 4))();
    }
    if (param_2 == 0x538) {
      piVar4 = (int *)FUN_005b3770();
      piVar4[4] = (int)local_108;
      (**(code **)*piVar4)();
      if ((float)piVar4[5] != (float)piVar4[4]) {
        fStack_104 = (float)piVar4[4];
        piVar4[5] = (int)fStack_104;
        (**(code **)(*piVar4 + 4))();
      }
    }
    else if (param_2 == 0x539) {
      piVar4 = (int *)FUN_005b3770();
      piVar4[4] = (int)local_108;
      (**(code **)*piVar4)();
      if ((float)piVar4[5] != (float)piVar4[4]) {
        fStack_104 = (float)piVar4[4];
        piVar4[5] = (int)fStack_104;
        (**(code **)(*piVar4 + 4))();
      }
    }
    else {
      if (param_2 != 0x57c) goto LAB_004b1631;
      piVar4 = (int *)FUN_005b3770();
      piVar4[4] = (int)local_108;
      (**(code **)*piVar4)();
      if ((float)piVar4[5] != (float)piVar4[4]) {
        local_108 = (int *)piVar4[4];
        piVar4[5] = (int)local_108;
        (**(code **)(*piVar4 + 4))(local_108);
      }
      piVar4 = (int *)FUN_005b3770(0x5ca);
      piVar4[4] = unaff_EBX;
      (**(code **)*piVar4)(piVar2);
      if ((float)piVar4[5] != (float)piVar4[4]) {
        fStack_104 = (float)piVar4[4];
        piVar4[5] = (int)fStack_104;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  switch(param_2) {
  case 0x534:
    swprintf(in_stack_fffffecc,in_stack_fffffed0,in_stack_fffffed4);
    if (-1 < param_4) {
      (**(code **)(**(int **)(param_1 + 0x6fc + param_4 * 4) + 0xa8))(0x1d,auStack_80,0);
    }
    break;
  case 0x536:
    if ((int)param_3 < 0) {
      return;
    }
    iVar7 = 0;
    iVar5 = 0;
    piVar4 = (int *)(param_1 + 0x954);
    do {
      if ((wchar_t *)*piVar4 == param_3) {
        iVar7 = iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 10);
    puVar1 = (undefined4 *)(param_1 + 0x8cc + iVar7 * 0xc);
    iVar7 = puVar1[2];
    *(undefined4 *)(param_1 + 0x330) = *puVar1;
    swprintf(in_stack_fffffec0,in_stack_fffffec4,in_stack_fffffec8);
    if (*(char *)(param_1 + 0x97c) != '\0') {
      if (iVar7 == 0x20) {
        *(undefined1 *)(param_1 + 0x334) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x334) = 0;
      }
      if (*(char *)(param_1 + 0x334) == '\0') {
        _Count = L"%s x 16";
      }
      else {
        _Count = L"%s x 32";
      }
      swprintf((wchar_t *)&stack0xfffffef4,(size_t)_Count,(wchar_t *)&stack0xfffffef4);
    }
    if (-1 < param_4) {
      (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(0x1d,auStack_100,0);
      FUN_004b0920();
    }
    break;
  case 0x538:
    if (-1 < param_4) {
      FUN_00564650();
    }
    break;
  case 0x539:
    if (-1 < param_4) {
      local_108 = (int *)0x0;
      cVar3 = FUN_00428ba0();
      if (cVar3 == '\0') {
        FUN_00564650();
      }
      else {
        (**(code **)(*local_108 + 8))();
      }
    }
    break;
  case 0x57f:
    local_108 = (int *)((float)(int)param_3 * (float)_DAT_005c75e8);
    fVar9 = (float10)FUN_005b3510();
    piVar2 = local_108;
    if (fVar9 != (float10)(float)local_108) {
      piVar4[4] = (int)local_108;
      (**(code **)*piVar4)();
      if ((float)piVar4[5] != (float)piVar4[4]) {
        fStack_104 = (float)piVar4[4];
        piVar4[5] = (int)fStack_104;
        (**(code **)(*piVar4 + 4))();
      }
      if ((DAT_0067ecd0 != (int *)0x0) && (DAT_00673344 != 0)) {
        (**(code **)(*DAT_0067ecd0 + 0x15c))(piVar2,DAT_00673344);
      }
    }
    if (param_4 < 0) break;
    switch(param_3) {
    case (wchar_t *)0x0:
      uVar10 = 0x702;
      goto LAB_004b173b;
    case (wchar_t *)0x1:
      uVar11 = CONCAT44(0x40,auStack_100);
      uVar10 = 0x703;
      break;
    case (wchar_t *)0x2:
      uVar11 = CONCAT44(0x40,auStack_100);
      uVar10 = 0x704;
      break;
    case (wchar_t *)0x3:
      uVar10 = 0x705;
LAB_004b173b:
      uVar11 = CONCAT44(0x40,auStack_100);
      break;
    default:
      goto switchD_004b16f1_default;
    }
    FUN_004347e0(DAT_0067eca8,uVar10,uVar11);
switchD_004b16f1_default:
    (**(code **)(**(int **)(param_1 + 0x6fc + param_4 * 4) + 0xa8))(0x1d,auStack_100,0);
  }
switchD_004b1659_caseD_535:
  FUN_004b1f30(0xffffffff,0xbf800000);
  return;
}

