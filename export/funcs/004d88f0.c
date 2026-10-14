
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d88f0(int param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  IBehaviorManager *this;
  EvaluateResult EVar5;
  undefined4 uVar6;
  CEqObj *this_00;
  int *piVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  float local_34;
  int local_2c;
  int local_28;
  int local_24;
  float afStack_1c [3];
  int local_10 [4];
  
  iVar4 = FUN_0054baf0();
  if (iVar4 != 0) {
    local_34 = 0.0;
    if (((iVar4 == -0xc) || (this_00 = *(CEqObj **)(iVar4 + 0x10), this_00 == (CEqObj *)0x0)) ||
       ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
      this_00 = (CEqObj *)0x0;
    }
    this = CEqObj::get_behavior_interface(this_00);
    iVar4 = *(int *)(this + 0xc0);
    if (*(int *)(param_1 + 0x380) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (*(int *)(param_1 + 900) - *(int *)(param_1 + 0x380)) / 0x148;
    }
    local_10[0] = 0;
    local_10[1] = 2;
    local_10[2] = 1;
    local_10[3] = 3;
    local_28 = 0;
    local_2c = 0;
    do {
      iVar10 = local_10[local_2c];
      iVar1 = *(int *)(iVar10 * 0x148 + 0x138 + *(int *)(param_1 + 0x380));
      iVar8 = iVar10 * 0x148 + *(int *)(param_1 + 0x380);
      *(undefined1 *)(iVar8 + 0x13c) = 0;
      if ((((iVar1 == -1) || (iVar1 == 0x12)) && (iVar4 != iVar1)) ||
         (((EVar5 = IBehaviorManager::external_player_evaluate(this,iVar1), EVar5 == 2 &&
           ((*(int *)(iVar8 + 0x138) != 7 || (cVar3 = FUN_004d9750(), cVar3 == '\0')))) &&
          (iVar4 != *(int *)(iVar8 + 0x138))))) {
        piVar7 = *(int **)(param_1 + 0x36c + iVar10 * 4);
        (**(code **)(*piVar7 + 0xa8))(1,0,0);
        (**(code **)(*piVar7 + 0xa8))(4,iVar8 + 0xac,0);
        piVar7[0xce] = *(int *)(iVar8 + 0x144);
        (**(code **)(*piVar7 + 0xa8))(0x33,&DAT_00679b94,1);
      }
      else {
        piVar7 = *(int **)(param_1 + 0x36c + iVar10 * 4);
        iVar10 = 0;
        (**(code **)(*piVar7 + 0xa8))(1,0);
        (**(code **)(*piVar7 + 0xa8))(0x33,&DAT_00679b94,0);
        bVar9 = *(int *)(iVar8 + 0x138) == iVar10;
        (**(code **)(*piVar7 + 0xa8))(0xc,bVar9,0);
        local_28 = iVar8;
        if (bVar9) {
LAB_004d8a87:
          if (*(int *)(iVar8 + 0xa8) != 0) {
            (**(code **)(*piVar7 + 0xa8))(4,iVar8 + 0xac,0);
            piVar7[0xce] = *(int *)(iVar8 + 0x144);
            goto LAB_004d8b23;
          }
        }
        else {
          cVar3 = FUN_0045a740();
          if (cVar3 == '\0') {
            iVar10 = *piVar7;
            uVar6 = FUN_0059da70(&stack0xffffffc0);
            cVar3 = (**(code **)(iVar10 + 0x10))(uVar6);
            if (cVar3 != '\0') goto LAB_004d8a87;
          }
        }
        (**(code **)(*piVar7 + 0xa8))(4,iVar8 + 0x28,0);
        piVar7[0xce] = *(int *)(iVar8 + 0x140);
      }
LAB_004d8b23:
      local_34 = (float)((int)local_34 + 1);
      local_2c = local_2c + 1;
    } while (local_2c < 4);
    if (local_28 != 0) {
      *(undefined1 *)(local_28 + 0x13c) = 1;
    }
    FUN_004d95b0(local_34);
    fVar2 = _DAT_005c7474;
    if (((uint)local_34 & 1) == 0) {
      fVar2 = _DAT_005d1fe4;
    }
    local_34 = fVar2 - (float)((int)local_34 / 2) * _DAT_005d845c;
    if (0 < local_24) {
      piVar7 = (int *)(param_1 + 0x36c);
      do {
        if ((*(byte *)((int *)*piVar7 + 0x1b) & 2) != 0) {
          afStack_1c[0] = local_34;
          afStack_1c[1] = 0.1777;
          afStack_1c[2] = 0.5;
          (**(code **)(*(int *)*piVar7 + 0xa8))(6,afStack_1c,0);
          local_34 = local_34 + _DAT_005d845c;
        }
        piVar7 = piVar7 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    FUN_004d8bf0(iVar4);
  }
  return;
}

