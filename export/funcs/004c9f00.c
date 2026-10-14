
int * __thiscall FUN_004c9f00(int *param_1,ulong *param_2)

{
  ulong uVar1;
  int *piVar2;
  CostumeDescriptions *pCVar3;
  bodypart *pbVar4;
  int iVar5;
  code *pcVar6;
  
  iVar5 = 8;
  piVar2 = param_1 + 0x1a;
  do {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = -1;
    piVar2 = piVar2 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar2 = param_1 + 0x4a;
  iVar5 = 8;
  do {
    *piVar2 = 0;
    *(undefined1 *)(piVar2 + 1) = 0;
    piVar2 = piVar2 + 0x25;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *param_1 = 0;
  param_1[1] = (int)(param_1 + 0x1a);
  uVar1 = param_2[1];
  pCVar3 = GetCostumeDescriptions();
  if (uVar1 != 0) {
    pbVar4 = CostumeDescriptions::find_bodypart(pCVar3,0,uVar1);
    pcVar6 = (code *)0x0;
    if (pbVar4 != (bodypart *)0x0) {
      pcVar6 = _C_exref;
      if (*(code **)(pbVar4 + 8) != (code *)0x0) {
        pcVar6 = *(code **)(pbVar4 + 8);
      }
    }
    iVar5 = *param_1;
    if (iVar5 < 8) {
      *param_1 = iVar5 + 1;
      if (iVar5 != 0) {
        FUN_004ca2f0();
      }
      FUN_004ca220(0,0,pcVar6);
    }
  }
  uVar1 = *param_2;
  pCVar3 = GetCostumeDescriptions();
  if (uVar1 != 0) {
    pbVar4 = CostumeDescriptions::find_bodypart(pCVar3,1,uVar1);
    pcVar6 = (code *)0x0;
    if (pbVar4 != (bodypart *)0x0) {
      pcVar6 = _C_exref;
      if (*(code **)(pbVar4 + 8) != (code *)0x0) {
        pcVar6 = *(code **)(pbVar4 + 8);
      }
    }
    iVar5 = *param_1;
    if (iVar5 < 8) {
      *param_1 = iVar5 + 1;
      FUN_004ca220(iVar5,1,pcVar6);
    }
  }
  uVar1 = param_2[2];
  pCVar3 = GetCostumeDescriptions();
  if (uVar1 != 0) {
    pbVar4 = CostumeDescriptions::find_bodypart(pCVar3,2,uVar1);
    pcVar6 = (code *)0x0;
    if (pbVar4 != (bodypart *)0x0) {
      pcVar6 = _C_exref;
      if (*(code **)(pbVar4 + 8) != (code *)0x0) {
        pcVar6 = *(code **)(pbVar4 + 8);
      }
    }
    FUN_004ca070(2,pcVar6);
  }
  uVar1 = param_2[3];
  pCVar3 = GetCostumeDescriptions();
  if (uVar1 != 0) {
    pbVar4 = CostumeDescriptions::find_bodypart(pCVar3,3,uVar1);
    pcVar6 = (code *)0x0;
    if (pbVar4 != (bodypart *)0x0) {
      pcVar6 = _C_exref;
      if (*(code **)(pbVar4 + 8) != (code *)0x0) {
        pcVar6 = *(code **)(pbVar4 + 8);
      }
    }
    iVar5 = *param_1;
    if (iVar5 < 8) {
      *param_1 = iVar5 + 1;
      FUN_004ca220(iVar5,3,pcVar6);
    }
  }
  return param_1;
}

