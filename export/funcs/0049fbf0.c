
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049fbf0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float *pfVar5;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  local_2c = 1.0;
  local_28 = 1.0;
  local_18 = 0.0;
  local_20 = 0.0;
  local_14 = 0.0;
  local_1c = 0.0;
  local_10 = 0.0;
  if (*(char *)(param_1 + 0x478) == '\0') {
    if (*(int *)(param_1 + 2000) != 2) goto LAB_0049fcfa;
    local_28 = 8.6;
    local_20 = *(float *)(param_1 + 0x46c) + _DAT_005d3f48;
    local_1c = *(float *)(param_1 + 0x470) - _DAT_005d3f40;
  }
  else {
    if (*(int *)(param_1 + 2000) != 2) {
      local_18 = *(float *)(param_1 + 0x47c);
      local_14 = *(float *)(param_1 + 0x488) + _DAT_005d3f48;
      local_2c = 1.0;
      local_28 = 8.6;
      local_20 = 0.027;
      local_1c = -0.0115;
      local_10 = *(float *)(param_1 + 0x48c) - _DAT_005d3f40;
      goto LAB_0049fcfa;
    }
    local_18 = *(float *)(param_1 + 0x47c);
    local_20 = _DAT_005d3f48 - *(float *)(param_1 + 0x488);
    local_28 = 1.0;
    local_1c = _DAT_005d3f44 - *(float *)(param_1 + 0x48c);
  }
  local_2c = 8.6;
LAB_0049fcfa:
  local_24 = 0;
  puVar3 = (undefined4 *)(param_1 + 0xb08);
  do {
    fVar1 = ((local_20 + (float)local_24 * _DAT_005d3168) - _DAT_005d3164) * local_2c;
    fVar1 = ((((float)local_24 * _DAT_005d3168 + local_14) - _DAT_005d3164) * local_28 - fVar1) *
            local_18 + fVar1;
    if ((_DAT_005d3f3c < fVar1) || (fVar1 < _DAT_005d3f38)) {
      pfVar5 = (float *)0x1;
      uVar4 = 1;
    }
    else {
      (**(code **)(*(int *)*puVar3 + 0xa8))(1,0,0);
      pfVar5 = &fStack_c;
      fStack_8 = -0.294;
      uStack_4 = 0;
      uVar4 = 6;
      fStack_c = fVar1;
    }
    (**(code **)(*(int *)*puVar3 + 0xa8))(uVar4,pfVar5,0);
    local_24 = local_24 + 1;
    puVar3 = puVar3 + 1;
  } while (local_24 < 8);
  local_24 = 0;
  puVar3 = (undefined4 *)(param_1 + 0xb28);
  do {
    fVar1 = _DAT_005d314c - (float)local_24 * _DAT_005d3168;
    fVar2 = (local_1c + fVar1) * local_2c;
    fVar2 = ((fVar1 + local_10) * local_28 - fVar2) * local_18 + fVar2;
    if ((_DAT_005d3f34 < fVar2) || (fVar2 < _DAT_005d3f30)) {
      pfVar5 = (float *)0x1;
      uVar4 = 1;
    }
    else {
      (**(code **)(*(int *)*puVar3 + 0xa8))(1,0,0);
      pfVar5 = &fStack_c;
      fStack_c = -0.309;
      uStack_4 = 0;
      uVar4 = 6;
      fStack_8 = fVar2;
    }
    (**(code **)(*(int *)*puVar3 + 0xa8))(uVar4,pfVar5,0);
    local_24 = local_24 + 1;
    puVar3 = puVar3 + 1;
  } while (local_24 < 8);
  return;
}

