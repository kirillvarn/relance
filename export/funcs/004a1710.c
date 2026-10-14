
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1710(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  int local_1c;
  uint local_14;
  uint local_10;
  
  fVar10 = (float10)FUN_0042d680();
  fVar1 = *(float *)(param_1 + 0xbc4) - (float)fVar10;
  *(float *)(param_1 + 0xbc4) = fVar1;
  if (fVar1 < _DAT_005c7474 != (fVar1 == _DAT_005c7474)) {
    iVar4 = rand();
    iVar5 = *(int *)(param_1 + 0x404);
    *(float *)(param_1 + 0xbc4) =
         (float)(((int)(iVar4 * 2000 + (iVar4 * 2000 >> 0x1f & 0x7fffU)) >> 0xf) + 100) *
         _DAT_005d1494 + *(float *)(param_1 + 0xbc4);
    iVar4 = rand();
    iVar5 = iVar4 * iVar5 * 3;
    *(int *)(param_1 + 0xbc8) = (int)(iVar5 + (iVar5 >> 0x1f & 0x7fffU)) >> 0xf;
  }
  piVar9 = (int *)**(int **)(param_1 + 0x400);
  local_1c = 0;
  if (piVar9 != *(int **)(param_1 + 0x400)) {
    do {
      fVar1 = _DAT_005c75dc;
      piVar2 = (int *)piVar9[2];
      if (((char)piVar2[0x12] != '\0') && (*piVar2 == 0)) {
        fVar3 = (float)fVar10 * (float)piVar2[0x1a] + (float)piVar2[0x1b];
        piVar2[0x1b] = (int)fVar3;
        if (fVar1 < fVar3) {
          do {
            fVar3 = fVar3 - _DAT_005c75dc;
          } while (_DAT_005c75dc < fVar3);
          piVar2[0x1b] = (int)fVar3;
        }
        if (_DAT_005c75e0 <= (float)piVar2[0x1b]) {
          fVar1 = _DAT_005c75dc - (float)piVar2[0x1b];
        }
        else {
          fVar1 = (float)piVar2[0x1b];
        }
        piVar2[0xf] = (int)((float)_DAT_005d3f50 * (fVar1 + fVar1) + (float)piVar2[0x10]);
        iVar5 = ftol();
        uVar8 = iVar5 * 4;
        if (0xff < (int)uVar8) {
          uVar8 = 0xff;
        }
        uVar6 = ftol();
        if (*(int *)(param_1 + 0xbc8) != local_1c) {
          uVar8 = 0xff;
        }
        switch(piVar2[0x15]) {
        case 0:
          piVar2[7] = 0x3f800000;
          fVar1 = (float)(uVar6 & 0xff) * _DAT_005c7f68;
          piVar2[8] = (int)fVar1;
          piVar2[9] = (int)fVar1;
          piVar2[0xb] = (int)((float)(uVar8 & 0xff) * _DAT_005c7f68);
          break;
        case 1:
          piVar2[8] = 0x3f800000;
          fVar1 = (float)(uVar6 & 0xff) * _DAT_005c7f68;
          piVar2[7] = (int)fVar1;
          piVar2[9] = (int)fVar1;
          piVar2[0xb] = (int)((float)(uVar8 & 0xff) * _DAT_005c7f68);
          break;
        case 2:
          piVar2[9] = 0x3f800000;
          fVar1 = (float)(uVar6 & 0xff) * _DAT_005c7f68;
          piVar2[7] = (int)fVar1;
          piVar2[8] = (int)fVar1;
          piVar2[0xb] = (int)((float)(uVar8 & 0xff) * _DAT_005c7f68);
          break;
        case 3:
          piVar2[8] = 0x3f800000;
          piVar2[9] = 0x3f800000;
          piVar2[7] = (int)((float)(uVar6 & 0xff) * _DAT_005c7f68);
          piVar2[0xb] = (int)((float)(uVar8 & 0xff) * _DAT_005c7f68);
          break;
        case 4:
          FUN_004a1ad0(0xff,uVar6,0xff,uVar8);
          piVar2[7] = (int)((float)(local_14 & 0xff) * _DAT_005c7f68);
          piVar2[8] = (int)((float)(local_14 >> 8 & 0xff) * _DAT_005c7f68);
          piVar2[9] = (int)((float)(local_14 >> 0x10 & 0xff) * _DAT_005c7f68);
          piVar2[0xb] = (int)((float)(local_14 >> 0x18) * _DAT_005c7f68);
          break;
        case 5:
          FUN_004a1ad0(0xff,0xff,uVar6,uVar8);
          piVar2[7] = (int)((float)(local_10 & 0xff) * _DAT_005c7f68);
          piVar2[8] = (int)((float)(local_10 >> 8 & 0xff) * _DAT_005c7f68);
          piVar2[9] = (int)((float)(local_10 >> 0x10 & 0xff) * _DAT_005c7f68);
          piVar2[0xb] = (int)((float)(local_10 >> 0x18) * _DAT_005c7f68);
          break;
        case 6:
          uVar7 = FUN_004a1ab0(uVar6,uVar6,uVar6,uVar8);
          FUN_004a1af0(uVar7);
        }
      }
      piVar9 = (int *)*piVar9;
      local_1c = local_1c + 1;
    } while (piVar9 != (int *)*(int *)(param_1 + 0x400));
  }
  return;
}

