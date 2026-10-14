
char __thiscall FUN_005a0340(int *param_1,undefined4 param_2)

{
  char cVar1;
  float *pfVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float local_30 [12];
  
  local_30[8] = 1.0;
  local_30[4] = 1.0;
  local_30[0] = 1.0;
  local_30[7] = 0.0;
  local_30[6] = 0.0;
  local_30[5] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_30[0xb] = 0.0;
  local_30[10] = 0.0;
  local_30[9] = 0.0;
  cVar1 = FUN_00420d60();
  if (cVar1 == '\0') {
    local_30[9] = (float)param_1[0x18] + (float)param_1[0x2a];
    local_30[10] = (float)param_1[0x19] + (float)param_1[0x2b];
    local_30[0xb] = (float)param_1[0x1a] + (float)param_1[0x2c];
  }
  else {
    pfVar2 = (float *)(**(code **)(**(int **)Engine_exref + 0xa0))
                                (*(int **)Engine_exref,param_1[0x21]);
    pfVar6 = local_30;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  local_30[9] = local_30[9] + (float)param_1[0x30];
  local_30[10] = local_30[10] + (float)param_1[0x31];
  local_30[0xb] = local_30[0xb] + (float)param_1[0x32];
  if (*(char *)((int)param_1 + 0x2d3) != '\0') {
    local_30[8] = 1.0;
    local_30[4] = 1.0;
    local_30[0] = 1.0;
    local_30[7] = 0.0;
    local_30[6] = 0.0;
    local_30[5] = 0.0;
    local_30[3] = 0.0;
    local_30[2] = 0.0;
    local_30[1] = 0.0;
  }
  cVar1 = FUN_005a1130(local_30,param_2);
  if (cVar1 == '\0') {
    return '\0';
  }
  if (((int *)param_1[1] != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar3 != (int *)0x0)) {
    iVar5 = *piVar3;
    uVar4 = (**(code **)(*param_1 + 8))(0);
    (**(code **)(iVar5 + 0xa8))(0x25,uVar4);
    if (param_1[0x33] == 0) {
      return cVar1;
    }
    iVar5 = *piVar3;
    uVar4 = (**(code **)(*param_1 + 8))(0);
    iVar5 = (**(code **)(iVar5 + 0xa8))(0x4f,uVar4);
    if (iVar5 != 0) {
      return cVar1;
    }
  }
  if (((param_1[0x33] != 0) && ((*(byte *)(param_1 + 0x1b) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x1b) & 2) != 0)) {
    (**(code **)(*param_1 + 0x88))();
  }
  return cVar1;
}

