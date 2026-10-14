
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055af90(int *param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 local_3c;
  undefined4 local_38;
  uint auStack_34 [3];
  undefined4 local_28;
  Vector local_24 [36];
  
  param_1[0xd2] = 0;
  iVar4 = FUN_005792b0(6);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_005792b0(9);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_005792b0(0x14);
  if (iVar4 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1b) & 2) == 0) {
    return;
  }
  if (((*(byte *)((int)param_1 + 0x331) & 0x10) == 0) && ((*(byte *)(param_1 + 0x1b) & 1) == 0)) {
    return;
  }
  if ((*(char *)((int)param_1 + 0x333) != '\0') && ((char)param_1[0xcd] != '\0')) {
    return;
  }
  FUN_0059e5c0();
  bVar2 = *(byte *)(param_1 + 0xcc);
  if (*(char *)((int)param_1 + 0x332) != '\0') {
    fVar7 = (float10)FUN_0042d680();
    if (_DAT_005c7474 < (float)param_1[0xd0]) {
      fVar7 = fVar7 * (float10)(float)param_1[0xd0];
      if ((*(byte *)(param_1 + 0xcc) & 1) == 0) {
        if ((float)param_1[0xcf] <= _DAT_005da41c) {
          fVar7 = (float10)(float)param_1[0xcf] - (fVar7 + fVar7);
          param_1[0xcf] = (int)(float)fVar7;
          if (fVar7 < (float10)_DAT_005c75dc) {
            param_1[0xcf] = 0;
          }
        }
        else {
          fVar7 = fVar7 + fVar7 + (float10)(float)param_1[0xcf];
          param_1[0xcf] = (int)(float)fVar7;
          if ((float10)_DAT_005e1734 < fVar7) {
            param_1[0xcf] = 0;
          }
        }
      }
      else {
        param_1[0xcf] = (int)(float)(fVar7 + (float10)(float)param_1[0xcf]);
      }
    }
    fVar1 = (float)param_1[0xcf];
    if ((float)param_1[0xcf] < _DAT_005ca23c) {
      if (fVar1 < _DAT_005e1730 != (fVar1 == _DAT_005e1730)) {
        fVar1 = (float)param_1[0xcf] + _DAT_005ca23c;
        goto LAB_0055b0ff;
      }
    }
    else {
      fVar1 = fVar1 - _DAT_005ca23c;
LAB_0055b0ff:
      param_1[0xcf] = (int)fVar1;
    }
    auStack_34[2] = param_1[0xcf];
    auStack_34[1] = 0;
    local_28 = 0;
    RotateMatrix(local_24);
    (**(code **)(**(int **)Engine_exref + 0x94))(*(int **)Engine_exref,param_1[0x21],local_24);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
  }
  bVar3 = *(byte *)(param_1 + 0xcc);
  local_3c = 0;
  uVar6 = DAT_00679bb0;
  local_38 = DAT_00679bb0;
  if ((bVar3 & 8) == 0) {
    if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
      if (((bVar3 & 0x40) == 0) &&
         (((*(byte *)((int)param_1 + 0x331) & 4) == 0 || ((bVar3 & 4) == 0)))) {
        if (((bVar3 & 2) == 0) &&
           (((bVar3 & 1) == 0 || ((*(byte *)((int)param_1 + 0x331) & 8) == 0)))) {
          local_3c = DAT_00679bb0;
        }
        else {
          puVar5 = (uint *)FUN_00561da0(auStack_34);
          uVar6 = *puVar5;
          local_38 = uVar6;
          puVar5 = (uint *)FUN_00561da0(auStack_34);
          local_3c = *puVar5;
        }
        goto LAB_0055b2ff;
      }
      local_38._0_3_ = 0xffff;
      local_3c._0_3_ = 0xffff;
      goto LAB_0055b2e5;
    }
    *(byte *)(param_1 + 0xcc) = bVar3 & 0xbb;
    local_3c = 0xff808080;
    local_38._0_3_ = 0x808080;
  }
  else if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    *(byte *)(param_1 + 0xcc) = bVar3 & 0xbb;
    local_38._0_3_ = 0x808080;
    local_3c._0_3_ = 0x808080;
LAB_0055b2e5:
    local_3c = CONCAT13(0xff,(undefined3)local_3c);
  }
  else {
    if (((bVar3 & 0x40) == 0) &&
       (((*(byte *)((int)param_1 + 0x331) & 4) == 0 || ((bVar3 & 4) == 0)))) {
      if (((bVar3 & 2) == 0) && (((bVar3 & 1) == 0 || ((*(byte *)((int)param_1 + 0x331) & 8) == 0)))
         ) {
        local_3c = DAT_00679bb0;
      }
      else {
        puVar5 = (uint *)FUN_00561da0(auStack_34);
        uVar6 = *puVar5;
        local_38 = uVar6;
        puVar5 = (uint *)FUN_00561da0(auStack_34);
        local_3c = *puVar5;
      }
      goto LAB_0055b2ff;
    }
    local_3c = 0xff00ffff;
    local_38._0_3_ = 0xffff;
  }
  local_38 = CONCAT13(0xff,(undefined3)local_38);
  uVar6 = local_38;
LAB_0055b2ff:
  if ((*(byte *)(param_1 + 0xcc) & 0x20) != 0) {
    local_38 = 0xffffffff;
    uVar6 = local_38;
  }
  if (*(char *)((int)param_1 + 0x336) != '\0') {
    uVar6 = param_1[0xdc];
    local_3c = uVar6;
    local_38 = uVar6;
  }
  if ((*(byte *)((int)param_1 + 0x331) & 1) == 0) {
    if ((*(char *)((int)param_1 + 0x332) == '\0') || ((*(byte *)(param_1 + 0xcc) & 1) == 0)) {
      FUN_00559aa0(param_1,&local_38,*(undefined1 *)((int)param_1 + 0x335));
    }
    else if (param_1[0x21] != -1) {
      auStack_34[0] = local_38 >> 0x18;
      param_1[0x25] = (int)((float)(uVar6 & 0xff) * _DAT_005c7f68);
      param_1[0x26] = (int)((float)(uVar6 >> 8 & 0xff) * _DAT_005c7f68);
      param_1[0x27] = (int)((float)(local_38 >> 0x10 & 0xff) * _DAT_005c7f68);
      param_1[0x29] = (int)((float)auStack_34[0] * _DAT_005c7f68);
      FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
    }
  }
  FUN_00421ed0(0xb71);
  if ((((*(byte *)((int)param_1 + 0x331) & 1) != 0) || (*(char *)((int)param_1 + 0x337) != '\0')) &&
     (param_1[0x21] != -1)) {
    param_1[0xd2] =
         CONCAT31(CONCAT21(CONCAT11(local_3c._3_1_,(undefined1)local_3c),local_3c._1_1_),
                  local_3c._2_1_);
    FUN_00434630(&DAT_0067dbf8,param_1[0x21],1,&local_3c,1,0x3f800000,0);
  }
  FUN_00421ed0(0xb71);
  *(byte *)(param_1 + 0xcc) =
       ((bVar2 >> 6 & 1) << 6 ^ *(byte *)(param_1 + 0xcc)) & 0x40 ^ *(byte *)(param_1 + 0xcc);
  (**(code **)(*param_1 + 0x9c))();
  return;
}

