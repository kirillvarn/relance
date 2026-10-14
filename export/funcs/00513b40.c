
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00513b40(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CEquip *pCVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  undefined1 *puVar13;
  byte bStack_a1;
  int *local_a0;
  float fStack_9c;
  float fStack_98;
  int local_94;
  int local_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c [12];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 auStack_68 [4];
  undefined1 local_64 [40];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14) + -8;
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    local_a0 = (int *)0x0;
    local_8c = 1e+07;
    FUN_0053e430(&local_94);
    piVar4 = (int *)0x0;
    if (*(int *)(param_1 + 0xc) != local_94) {
      do {
        iVar3 = local_94;
        uVar6 = *(undefined4 *)(local_94 + 8);
        local_90 = local_94;
        FUN_0053ab20(local_70,0);
        piVar4 = (int *)FUN_005416c0(uVar6,1);
        if (piVar4 == (int *)0x0) {
          FUN_00516f70(local_64,iVar3);
        }
        else {
          if (*(int *)(param_1 + 0x14) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x14) + -8;
          }
          iVar7 = FUN_005140c0(iVar7);
          if (piVar4[0x58] == param_1) {
            if (*(int *)(param_1 + 0x14) == 0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              puVar10 = (undefined4 *)(*(int *)(param_1 + 0x14) + -8);
            }
            uVar6 = (**(code **)*puVar10)();
            uVar5 = (**(code **)*piVar4)();
            FUN_00423b60(&uStack_88,uVar5,uVar6);
            fVar12 = (float10)FUN_00513fb0();
            fStack_9c = (float)fVar12;
            if ((char)piVar4[0x61] < '\0') {
              fVar12 = (float10)_DAT_005db7d8;
            }
            else {
              (**(code **)(*piVar4 + 4))(local_7c);
              fVar12 = (float10)FUN_00513fb0();
            }
            fStack_98 = 100.0;
            if ((float10)_DAT_005c75dc < fVar12) {
              fStack_98 = (float)((float10)fStack_9c / fVar12);
            }
            if ((fStack_98 < *(float *)(iVar7 + 0x94)) &&
               (FUN_005145a0(piVar4), DAT_00675200 != '\0')) {
              FUN_00514750(piVar4);
            }
            if ((char)piVar4[0x61] < '\0') {
              fStack_9c = (float)FUN_00514260();
              if (fStack_9c == 0.0) {
                if (fStack_98 < *(float *)(iVar7 + 0x98)) {
                  FUN_00514bf0(piVar4,1);
                }
              }
              else if (fStack_98 < *(float *)(iVar7 + 0x9c)) {
                FUN_00514960(piVar4);
              }
              bStack_a1 = 1;
              if (*(int *)(param_1 + 0x14) == 0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = (int *)(*(int *)(param_1 + 0x14) + -8);
              }
              iVar3 = *piVar11;
              uVar6 = (**(code **)(*piVar4 + 0x10))(&bStack_a1);
              (**(code **)(iVar3 + 300))(uVar6);
              if ((*(byte *)(piVar4 + 0x61) >> 1 & 1) != bStack_a1) {
                FUN_00516f70(auStack_68,local_90);
                piVar4[0x58] = 0;
                if (fStack_9c == 0.0) {
                  piVar4[0x61] = 0;
                }
                else {
                  FUN_00515200(fStack_9c,*(undefined1 *)(param_1 + 0x1c),1);
                  if (((*(byte *)(piVar4 + 0x61) & 0x20) != 0) &&
                     (piVar11 = (int *)FUN_0054baf0(), piVar4 == piVar11)) {
                    *(byte *)(piVar4 + 0x61) = *(byte *)(piVar4 + 0x61) | 0x40;
                  }
                  FUN_005142e0(piVar4);
                }
              }
            }
            else if (fStack_9c < local_8c) {
              local_8c = fStack_9c;
              local_a0 = piVar4;
            }
          }
          else {
            FUN_00516f70(local_6c,iVar3);
          }
        }
        piVar4 = local_a0;
      } while (*(int *)(param_1 + 0xc) != local_94);
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)(*(int *)(param_1 + 0x14) + -8);
    }
    local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(param_1 + 0x1c));
    uVar6 = FUN_00514110(local_7c,piVar11,local_90);
    (**(code **)(*piVar11 + 0x10))();
    FUN_004e7090(&uStack_88,uVar6);
    FUN_004215b0();
    uStack_3c = uStack_88;
    uStack_38 = uStack_84;
    uStack_34 = uStack_80;
    local_a0 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      local_a0 = (int *)(**(code **)*piVar4)();
      iVar3 = param_1 + 0x30;
      if ((((*(int *)(param_1 + 0x38) == 0) || ((*(byte *)(*(int *)(param_1 + 0x38) + 8) & 2) != 0))
          && ((piVar4 = *(int **)(param_1 + 0x34), piVar4 == (int *)0x0 ||
              (cVar1 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar1 == '\0')))) &&
         (((*(int *)(param_1 + 0x3c) == 0 || (*(int *)(*(int *)(param_1 + 0x3c) + 0xd4) != 0)) &&
          (*(char *)(param_1 + 0x1d) != '\0')))) {
        iVar7 = *(int *)(param_1 + 0x14);
        if (((iVar7 == 0) || (iVar7 == 8)) ||
           ((iVar7 == -4 ||
            ((iVar7 = *(int *)(iVar7 + 8), iVar7 == 0 ||
             ((*(uint *)(iVar7 + 0x4c) & 0x303) != 0x303)))))) {
          iVar7 = 0;
        }
        pCVar8 = CEquipManager::FindFirst((CEquipManager *)(iVar7 + 0xe4),0x800000);
        if (pCVar8 == (CEquip *)0x0) {
          iVar7 = 0;
        }
        else if (*(int *)(pCVar8 + 0xc) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(pCVar8 + 0xc) + 4);
        }
        if (*(int *)(param_1 + 0x14) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x14) + -8;
        }
        uVar6 = FUN_00514110(local_7c,iVar9,*(undefined1 *)(param_1 + 0x1c));
        FUN_00514010(uVar6);
        if (*(int *)(param_1 + 0x14) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(*(int *)(param_1 + 0x14) + -8);
        }
        if (*(int *)(param_1 + 0x14) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x14) + -8;
        }
        puVar13 = auStack_30;
        uVar6 = (**(code **)(*piVar4 + 0x1c))(puVar13,iVar3);
        FUN_00514070(iVar7 + 0x7c,iVar9,uVar6,puVar13,iVar3);
      }
    }
    fVar12 = (float10)FUN_004fcc40(param_2,&uStack_3c,local_a0);
    local_a0 = (int *)(float)fVar12;
    if (*(int *)(param_1 + 0x10) == 0) {
      if ((float)local_a0 <= (float)_DAT_005c75f8) {
        return 0;
      }
    }
    FUN_00514050(local_a0);
    uVar2 = 1;
  }
  return uVar2;
}

