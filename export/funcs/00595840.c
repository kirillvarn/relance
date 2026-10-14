
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595840(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float local_c;
  
  cVar3 = *(char *)(param_1 + 0x3b4);
  if (*(char *)(param_1 + 0x42c) == '\0') {
    fVar4 = *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x3b0);
    fVar1 = (*(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x334)) -
            *(float *)(param_1 + 0x3b0);
    if (cVar3 == '\0') {
      fVar2 = *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x334);
    }
    else {
      *(float *)(param_1 + 0x3c4) = *(float *)(param_1 + 0x3c4) - _DAT_005c75dc;
      fVar2 = *(float *)(param_1 + 0x334) * _DAT_005cfc9c;
    }
    fVar2 = (*(float *)(param_1 + 0x338) - fVar2) -
            (*(float *)(param_1 + 0x3b0) + *(float *)(param_1 + 0x3b0));
    local_c = fVar2;
    fVar5 = _DAT_005c7474;
    if (*(float *)(param_1 + 0x3c4) != *(float *)(param_1 + 0x3c0)) {
      local_c = *(float *)(param_1 + 0x3c4) - *(float *)(param_1 + 0x3c0);
      fVar5 = ((*(float *)(param_1 + 0x3c8) - *(float *)(param_1 + 0x3c0)) * fVar2) / local_c;
      local_c = (fVar2 * *(float *)(param_1 + 0x3cc)) / local_c;
      if (local_c < _DAT_005c99c8) {
        local_c = 0.01;
      }
      if (cVar3 != '\0') {
        local_c = 0.0;
      }
      if (fVar2 < local_c + fVar5) {
        fVar5 = fVar2 - local_c;
      }
    }
    fVar2 = *(float *)(param_1 + 0x334);
    if (cVar3 == '\0') {
      *(float *)(param_1 + 0x390) = -(fVar5 + fVar4);
      *(float *)(param_1 + 0x394) = fVar2;
      *(float *)(param_1 + 0x398) = -(local_c + fVar5 + fVar4);
    }
    else {
      *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x334);
      *(float *)(param_1 + 0x398) = -(fVar2 + fVar2 + fVar5 + fVar4);
      *(float *)(param_1 + 0x390) = -(fVar5 + fVar4);
    }
    *(undefined4 *)(param_1 + 0x38c) = 0;
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(float *)(param_1 + 0x348) = -*(float *)(param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x350) = 0;
    *(float *)(param_1 + 0x354) = -(*(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x334));
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x334);
    *(float *)(param_1 + 0x35c) = -*(float *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x364) = 0;
    *(float *)(param_1 + 0x368) = -fVar4;
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_1 + 0x334);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x338) + *(float *)(param_1 + 0x3b0);
    if (cVar3 == '\0') {
      fVar4 = *(float *)(param_1 + 0x338) + *(float *)(param_1 + 0x338);
    }
    else {
      *(float *)(param_1 + 0x3c4) = *(float *)(param_1 + 0x3c4) - _DAT_005c75dc;
      fVar4 = *(float *)(param_1 + 0x338) * _DAT_005cfc9c;
    }
    fVar4 = (*(float *)(param_1 + 0x334) - fVar4) -
            (*(float *)(param_1 + 0x3b0) + *(float *)(param_1 + 0x3b0));
    local_c = fVar4;
    fVar2 = _DAT_005c7474;
    if (*(float *)(param_1 + 0x3c4) != *(float *)(param_1 + 0x3c0)) {
      local_c = *(float *)(param_1 + 0x3c4) - *(float *)(param_1 + 0x3c0);
      fVar2 = ((*(float *)(param_1 + 0x3c8) - *(float *)(param_1 + 0x3c0)) * fVar4) / local_c;
      local_c = (fVar4 * *(float *)(param_1 + 0x3cc)) / local_c;
      if (local_c < _DAT_005c99c8) {
        local_c = 0.01;
      }
      if (cVar3 != '\0') {
        local_c = 0.0;
      }
      if (fVar4 < local_c + fVar2) {
        fVar2 = fVar4 - local_c;
      }
    }
    if (cVar3 == '\0') {
      *(float *)(param_1 + 0x38c) = fVar1 + fVar2;
      *(float *)(param_1 + 0x394) = local_c + fVar2 + fVar1;
    }
    else {
      *(float *)(param_1 + 0x394) =
           *(float *)(param_1 + 0x338) + *(float *)(param_1 + 0x338) + fVar2 + fVar1;
      *(float *)(param_1 + 0x38c) = fVar2 + fVar1;
    }
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(float *)(param_1 + 0x398) = -*(float *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(float *)(param_1 + 0x348) = -*(float *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x354) = 0;
    *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x334);
    *(float *)(param_1 + 0x35c) = -*(float *)(param_1 + 0x338);
    *(float *)(param_1 + 0x364) = fVar1;
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(float *)(param_1 + 0x370) = -*(float *)(param_1 + 0x338);
    fVar1 = *(float *)(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x394);
    *(float *)(param_1 + 0x380) =
         (*(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x338)) - *(float *)(param_1 + 0x3b0);
  }
  *(float *)(param_1 + 900) = -fVar1;
  if (*(char *)(param_1 + 0x3b4) != '\0') {
    *(float *)(param_1 + 0x3c4) = *(float *)(param_1 + 0x3c4) + _DAT_005c75dc;
  }
  return;
}

