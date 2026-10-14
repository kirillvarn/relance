
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ab6e0(int param_1)

{
  byte *pbVar1;
  char cVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  double local_a8;
  float fStack_a0;
  float local_9c [3];
  double local_90;
  float fStack_88;
  float afStack_84 [9];
  int local_60 [6];
  int local_48 [17];
  
  FUN_005a17b0();
  fVar9 = (float10)FUN_0042d680();
  local_a8 = (double)fVar9;
  local_60[1] = *(undefined4 *)(param_1 + 0x34c);
  cVar2 = *(char *)(param_1 + 0x32d);
  local_60[0] = *(int *)(param_1 + 0x350);
  local_60[2] = *(undefined4 *)(param_1 + 0x354);
  local_60[3] = *(undefined4 *)(param_1 + 0x358);
  if (cVar2 == '\0') {
    local_60[4] = *(undefined4 *)(param_1 + 0x35c);
    local_60[5] = *(undefined4 *)(param_1 + 0x360);
  }
  else {
    local_60[5] = *(undefined4 *)(param_1 + 0x360);
  }
  local_48[0] = *(int *)(param_1 + 0x368);
  local_48[1] = *(undefined4 *)(param_1 + 0x364);
  local_48[2] = *(undefined4 *)(param_1 + 0x36c);
  local_48[3] = *(undefined4 *)(param_1 + 0x370);
  if (cVar2 == '\0') {
    local_48[4] = *(undefined4 *)(param_1 + 0x374);
    local_48[5] = *(undefined4 *)(param_1 + 0x378);
  }
  else {
    local_48[5] = *(undefined4 *)(param_1 + 0x378);
  }
  if (_DAT_005cf100 < local_a8) {
    local_a8 = 0.2;
  }
  if ((_DAT_005c89b8 <= *(double *)(param_1 + 0x840)) || (cVar2 != '\0')) {
    if (*(char *)(param_1 + 0x8a2) == '\0') goto LAB_004abb5b;
  }
  else if (*(char *)(param_1 + 0x8a2) == '\0') {
    local_90._0_4_ = 6;
    iVar8 = 0;
    *(double *)(param_1 + 0x840) = local_a8 * _DAT_005d3c48 + *(double *)(param_1 + 0x840);
    do {
      iVar5 = local_90._0_4_;
      fVar3 = (float)local_90._0_4_;
      local_90 = (double)(fVar3 * (float)_DAT_005c7720);
      fVar3 = fVar3 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x840);
      if (fVar3 <= (float)_DAT_005c8ba8) {
        afStack_84[7] = 0.0;
        afStack_84[8] = 0.0;
        afStack_84[6] = fVar3;
        (**(code **)(**(int **)((int)local_60 + iVar8) + 0x14))(afStack_84 + 6);
        local_9c[0] = 0.0;
        local_9c[1] = 0.0;
        pfVar6 = &fStack_a0;
        fStack_a0 = (float)((float10)(double)CONCAT44(local_90._0_4_,local_9c[2]) +
                           (float10)*(double *)(param_1 + 0x840));
      }
      else {
        afStack_84[3] = 0.0;
        afStack_84[4] = 0.0;
        afStack_84[5] = 0.0;
        (**(code **)(**(int **)((int)local_60 + iVar8) + 0x14))(afStack_84 + 3);
        fStack_88 = 0.0;
        afStack_84[0] = 0.0;
        afStack_84[1] = 0.0;
        pfVar6 = &fStack_88;
      }
      (**(code **)(**(int **)((int)local_48 + iVar8 + -4) + 0x14))(pfVar6);
      local_90._0_4_ = iVar5 + -1;
      iVar8 = iVar8 + 4;
    } while (0 < local_90._0_4_);
    if (*(double *)(param_1 + 0x840) <= _DAT_005c8ba8) {
      local_9c[1] = 0.0;
      local_9c[2] = 0.0;
      local_9c[0] = (float)((float10)*(double *)(param_1 + 0x840) * (float10)_DAT_005d5080);
      (**(code **)(**(int **)(param_1 + 0x338) + 0x14))(local_9c);
    }
    else {
      FUN_004ae650();
      FUN_004ae650();
      *(undefined1 *)(param_1 + 0x8a0) = 0;
      local_9c[0] = 0.0;
      local_9c[1] = 0.0;
      local_9c[2] = 0.0;
      (**(code **)(**(int **)(param_1 + 0x338) + 0x14))(local_9c);
      *(undefined4 *)(param_1 + 0x840) = 0;
      *(undefined4 *)(param_1 + 0x844) = 0x3ff00000;
    }
    if ((_DAT_005d5078 < *(double *)(param_1 + 0x840)) &&
       (*(double *)(param_1 + 0x840) < _DAT_005d5070)) {
      FUN_00564570(0x1b);
    }
    goto LAB_004abb5b;
  }
  if (cVar2 == '\0') {
    if (_DAT_005d4c88 < local_a8) {
      local_a8 = 0.03;
    }
    local_90._0_4_ = 6;
    iVar8 = 0;
    *(double *)(param_1 + 0x840) = *(double *)(param_1 + 0x840) - local_a8 * _DAT_005d3c48;
    do {
      iVar5 = local_90._0_4_;
      fVar3 = (float)local_90._0_4_;
      local_90 = (double)(fVar3 * (float)_DAT_005c7720);
      fVar3 = fVar3 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x840);
      if (fVar3 <= (float)_DAT_005c8ba8) {
        afStack_84[1] = 0.0;
        afStack_84[2] = 0.0;
        afStack_84[0] = fVar3;
        (**(code **)(**(int **)((int)local_60 + iVar8) + 0x14))(afStack_84);
        afStack_84[3] = 0.0;
        afStack_84[4] = 0.0;
        pfVar6 = afStack_84 + 2;
        afStack_84[2] =
             (float)((float10)(double)CONCAT44(local_90._0_4_,local_9c[2]) +
                    (float10)*(double *)(param_1 + 0x840));
      }
      else {
        local_9c[0] = 0.0;
        local_9c[1] = 0.0;
        local_9c[2] = 0.0;
        (**(code **)(**(int **)((int)local_60 + iVar8) + 0x14))(local_9c);
        afStack_84[5] = 0.0;
        afStack_84[6] = 0.0;
        afStack_84[7] = 0.0;
        pfVar6 = afStack_84 + 5;
      }
      (**(code **)(**(int **)((int)local_48 + iVar8 + -4) + 0x14))(pfVar6);
      local_90._0_4_ = iVar5 + -1;
      iVar8 = iVar8 + 4;
    } while (0 < local_90._0_4_);
    if (_DAT_005c8ba8 < *(double *)(param_1 + 0x840) + _DAT_005d5068) {
      FUN_00564570(0x1b);
    }
    if (*(double *)(param_1 + 0x840) < _DAT_005d5060) {
      iVar8 = 0;
      do {
        pbVar1 = (byte *)(*(int *)((int)local_60 + iVar8) + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
        pbVar1 = (byte *)(*(int *)((int)local_48 + iVar8) + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0x18);
      *(undefined1 *)(param_1 + 0x32c) = 1;
      DAT_0067dcc8 = 0;
      return;
    }
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[0] = (float)((float10)*(double *)(param_1 + 0x840) * (float10)_DAT_005d5080);
    (**(code **)(**(int **)(param_1 + 0x338) + 0x14))(local_9c);
  }
LAB_004abb5b:
  if (*(char *)(param_1 + 0x32d) == '\0') {
    if (*(char *)(param_1 + 0x8a0) != '\0') {
      if (_DAT_005d4c88 < local_a8) {
        local_a8 = 0.03;
      }
      dVar4 = local_a8 * *(double *)(param_1 + 0x898) + *(double *)(param_1 + 0x890);
      *(double *)(param_1 + 0x890) = dVar4;
      if (_DAT_005d5058 <= dVar4) {
        *(undefined4 *)(param_1 + 0x890) = 0;
        *(undefined4 *)(param_1 + 0x894) = 0;
        switch(*(undefined4 *)(param_1 + 0x7f4)) {
        case 0:
          FUN_004ae4b0();
          break;
        case 1:
          FUN_004ae650();
          break;
        case 2:
          FUN_004ae770();
          break;
        case 3:
          FUN_004ae890();
          break;
        case 4:
          FUN_004ae9a0();
        }
        *(bool *)(param_1 + 0x8a1) = *(char *)(param_1 + 0x8a1) == '\0';
        *(undefined1 *)(param_1 + 0x8a0) = 0;
      }
      fVar9 = (float10)*(double *)(param_1 + 0x890);
      if (*(char *)(param_1 + 0x8a1) != '\0') {
        fVar9 = fVar9 + (float10)_DAT_005d5058;
      }
      local_9c[0] = (float)fVar9;
      local_9c[1] = 0.0;
      local_9c[2] = 0.0;
      RotateMatrix((Vector *)local_48);
      (**(code **)(**(int **)Engine_exref + 0x94))
                (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x84),local_48);
      (**(code **)(**(int **)Engine_exref + 0x6c))
                (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x84),0,0);
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x7f4)) {
    case 0:
      FUN_004ae4b0();
      break;
    case 1:
      FUN_004ae650();
      break;
    case 2:
      FUN_004ae770();
      break;
    case 3:
      FUN_004ae890();
      break;
    case 4:
      FUN_004ae9a0();
    }
    *(undefined1 *)(param_1 + 0x8a0) = 0;
  }
  if ((*(int *)(param_1 + 0x7f4) == 4) && (*(char *)(param_1 + 0x8a0) == '\0')) {
    *(double *)(param_1 + 0x8a8) =
         local_a8 * *(double *)(param_1 + 0x8b0) + *(double *)(param_1 + 0x8a8);
    uVar7 = ftol();
    FUN_005798b0(0,uVar7);
  }
  if (*(char *)(param_1 + 0x84d) != '\0') {
    local_a8 = *(double *)(param_1 + 0x8c0) - local_a8;
    *(double *)(param_1 + 0x8c0) = local_a8;
    if (local_a8 < _DAT_005c8ba8 != (local_a8 == _DAT_005c8ba8)) {
      FUN_004b2700();
      return;
    }
    swprintf((wchar_t *)local_48,0x5d5048,local_a8._0_4_);
    (**(code **)(**(int **)(param_1 + 0x4f0) + 0xa8))(0x1d,local_48 + 3,0);
  }
  return;
}

