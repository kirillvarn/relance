
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004d8e20(undefined4 param_1,char param_2)

{
  BaseWatcher *this;
  float fVar1;
  bool bVar2;
  int iVar3;
  IBehaviorManager *this_00;
  Watchable *pWVar4;
  IObjRW *pIVar5;
  int *piVar6;
  CEqObj *this_01;
  DirectiveFaceOp *pDVar7;
  float local_c8;
  float local_c4;
  float local_c0;
  int local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float local_9c [2];
  float local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  DirectiveFaceOp local_70 [12];
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_2c;
  float local_20;
  undefined1 local_18;
  
  iVar3 = FUN_0054baf0();
  if (iVar3 == 0) {
    return false;
  }
  if (((iVar3 == -0xc) || (this_01 = *(CEqObj **)(iVar3 + 0x10), this_01 == (CEqObj *)0x0)) ||
     ((*(uint *)(this_01 + 0x4c) & 0x503) != 0x503)) {
    this_01 = (CEqObj *)0x0;
  }
  this_00 = CEqObj::get_behavior_interface(this_01);
  bVar2 = false;
  local_ac = param_1;
  local_b0 = 0;
  local_b4 = 1;
  switch(param_1) {
  default:
    goto switchD_004d8e9e_caseD_0;
  case 2:
    pub::AI::DirectiveGotoOp::DirectiveGotoOp((DirectiveGotoOp *)local_70);
    local_18 = 0;
    pIVar5 = CShip::get_target((CShip *)this_01);
    if (pIVar5 == (IObjRW *)0x0) {
      local_64 = 1;
      local_94 = *(float *)(this_01 + 0x28);
      local_20 = 500.0;
      local_c8 = *(float *)(this_01 + 0x10) * _DAT_005d8460 + *(float *)(this_01 + 0x2c);
      local_c4 = *(float *)(this_01 + 0x1c) * _DAT_005d8460 + *(float *)(this_01 + 0x30);
      local_c0 = local_94 * _DAT_005d8460 + *(float *)(this_01 + 0x34);
      local_60 = local_c8;
      local_5c = local_c4;
      local_58 = local_c0;
    }
    else {
      local_64 = 0;
      local_54 = (float)(**(code **)(*(int *)pIVar5 + 0x20))();
      local_b8 = 0.0;
      (**(code **)(*(int *)pIVar5 + 0x2c))(&local_b8,local_9c);
      uStack_a8 = 0x3f800000;
      (**(code **)(*(int *)pIVar5 + 0x88))(&local_ac);
      local_20 = _DAT_005d8464;
      if (((((uStack_a4 & 0x30000) == 0) && (local_20 = _DAT_005d55b4, (uStack_a4 & 0x140000) == 0))
          && (local_20 = _DAT_005c75dc, (uStack_a4 & 0x680000) == 0)) &&
         ((local_20 = _DAT_005c75e0, (uStack_a4 & 0xf) == 0 &&
          (local_20 = fStack_a0, (uStack_a4 & 0xfdff) != 0)))) {
        local_20 = _DAT_005c75dc;
      }
      local_20 = local_20 * local_b8;
      if (local_20 < (float)_DAT_005ca320) {
        local_20 = 100.0;
      }
      if (uStack_a4 == 0x200) {
        local_20 = 100.0;
      }
      else if (uStack_a4 == 0x80) {
        local_20 = 750.0;
      }
    }
    bVar2 = IBehaviorManager::set_current_directive
                      (this_00,(IDirectiveInfo *)&local_b4,(BaseOp *)local_70);
    if (pIVar5 == (IObjRW *)0x0) {
      FUN_004c7950();
    }
    goto switchD_004d8e9e_caseD_0;
  case 3:
    pub::AI::DirectiveTrailOp::DirectiveTrailOp((DirectiveTrailOp *)local_9c);
    pIVar5 = CShip::get_target((CShip *)this_01);
    if (pIVar5 == (IObjRW *)0x0) {
      return false;
    }
    uStack_90 = (**(code **)(*(int *)pIVar5 + 0x20))();
    uStack_8c = *(undefined4 *)(local_bc + 0x3ac);
    uStack_88 = *(undefined4 *)(local_bc + 0x3b0);
    pDVar7 = (DirectiveFaceOp *)local_9c;
    break;
  case 7:
    pub::AI::DirectiveDockOp::DirectiveDockOp((DirectiveDockOp *)local_9c);
    pIVar5 = CShip::get_target((CShip *)this_01);
    if (pIVar5 == (IObjRW *)0x0) {
      return false;
    }
    uStack_90 = (**(code **)(*(int *)pIVar5 + 0x20))();
    pDVar7 = (DirectiveFaceOp *)local_9c;
    break;
  case 10:
    if (param_2 == '\0') {
      if (*(int *)(local_bc + 0x38c) != 1) {
        pIVar5 = CShip::get_target((CShip *)this_01);
        this = (BaseWatcher *)(local_bc + 0x390);
        if (pIVar5 == (IObjRW *)0x0) {
          pWVar4 = (Watchable *)0x0;
        }
        else {
          pWVar4 = (Watchable *)(pIVar5 + 8);
        }
        if (pWVar4 != *(Watchable **)this) {
          BaseWatcher::set_pointer(this,pWVar4);
        }
        piVar6 = (int *)0x0;
        if ((*(int *)this != 0) && (*(int *)this != 8)) {
          local_b8 = 0.0;
          if (*(int *)this != 0) {
            piVar6 = (int *)(*(int *)this + -8);
          }
          (**(code **)(*piVar6 + 0xb0))(&local_b8);
          if ((local_bc != 0) && ((Watchable *)(local_bc + 8) != *(Watchable **)this)) {
            BaseWatcher::set_pointer(this,(Watchable *)(local_bc + 8));
          }
          fVar1 = local_c0;
          *(undefined4 *)((int)local_c0 + 0x38c) = 1;
          if (*(int *)(this_00 + 0xc0) == 7) {
            local_b8 = 0.0;
            IBehaviorManager::set_current_directive
                      (this_00,(IDirectiveInfo *)&local_b8,(BaseOp *)0x0);
          }
          if (*(int *)this == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(*(int *)this + -8);
          }
          local_ac = (**(code **)(*piVar6 + 0x20))();
          if (*(int *)((int)local_c0 + 0x28) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)((int)local_c0 + 0x28) + -8;
          }
          (**(code **)(*(int *)(iVar3 + 4) + 0x5c))(1,&local_ac,&DAT_005d8274,0,(int)fVar1 + 0x368);
        }
        return true;
      }
    }
    else {
      pub::AI::DirectiveFormationOp::DirectiveFormationOp((DirectiveFormationOp *)local_9c);
      IBehaviorManager::set_current_directive
                (this_00,(IDirectiveInfo *)&local_b4,(BaseOp *)local_9c);
    }
    goto switchD_004d8e9e_caseD_0;
  case 0xc:
    pDVar7 = (DirectiveFaceOp *)0x0;
    break;
  case 0xd:
    pub::AI::DirectiveStrafeOp::DirectiveStrafeOp((DirectiveStrafeOp *)local_9c);
    pIVar5 = CShip::get_target((CShip *)this_01);
    if (pIVar5 == (IObjRW *)0x0) {
      return false;
    }
    uStack_90 = (**(code **)(*(int *)pIVar5 + 0x20))();
    pDVar7 = (DirectiveFaceOp *)local_9c;
    break;
  case 0xf:
    pub::AI::DirectiveFaceOp::DirectiveFaceOp(local_70);
    pIVar5 = CShip::get_target((CShip *)this_01);
    if (pIVar5 == (IObjRW *)0x0) {
      local_64 = 2;
      local_60 = 0.0;
      local_9c[0] = *(float *)(this_01 + 0x10) * _DAT_005ca21c;
      local_2c = 1;
      local_c8 = local_9c[0] + *(float *)(this_01 + 0x2c);
      local_c4 = *(float *)(this_01 + 0x1c) * _DAT_005ca21c + *(float *)(this_01 + 0x30);
      pDVar7 = local_70;
      local_c0 = *(float *)(this_01 + 0x28) * _DAT_005ca21c + *(float *)(this_01 + 0x34);
      local_5c = local_c8;
      local_58 = local_c4;
      local_54 = local_c0;
    }
    else {
      local_60 = (float)(**(code **)(*(int *)pIVar5 + 0x20))();
      pDVar7 = local_70;
      local_64 = 1;
      local_2c = 1;
    }
    break;
  case 0x10:
    pDVar7 = (DirectiveFaceOp *)0x0;
    break;
  case 0xffffffff:
  case 0x13:
    local_c4 = 0.0;
    local_c8 = 1.4013e-45;
    local_c0 = 2.66247e-44;
    bVar2 = IBehaviorManager::set_current_directive
                      (this_00,(IDirectiveInfo *)&local_c8,(BaseOp *)0x0);
    FUN_004c7950();
    goto switchD_004d8e9e_caseD_0;
  }
  bVar2 = IBehaviorManager::set_current_directive
                    (this_00,(IDirectiveInfo *)&local_b4,(BaseOp *)pDVar7);
switchD_004d8e9e_caseD_0:
  pIVar5 = CShip::get_target((CShip *)this_01);
  if (pIVar5 != (IObjRW *)0x0) {
    if (*(int *)(local_bc + 0x28) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(local_bc + 0x28) + -8);
    }
    local_c8 = (float)(**(code **)(*piVar6 + 0x20))();
    local_c4 = (float)(**(code **)(*(int *)pIVar5 + 0x20))();
    local_c0 = (float)param_1;
    (**(code **)(*DAT_0067ecd0 + 0x108))(DAT_00673344,&local_c8);
  }
  return bVar2;
}

