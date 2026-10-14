
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00496d40(int param_1,float *param_2,char param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x400);
  do {
    if (puVar2 == *(undefined4 **)(param_1 + 0x400)) {
      return (int *)0x0;
    }
    piVar3 = (int *)puVar2[2];
    if (((param_3 == '\0') || ((*piVar3 != 3 && (*piVar3 != 4)))) && ((char)piVar3[0x12] != '\0')) {
      fVar5 = (*param_2 - (float)piVar3[0xc]) * (*param_2 - (float)piVar3[0xc]) +
              (param_2[2] - (float)piVar3[0xe]) * (param_2[2] - (float)piVar3[0xe]);
      fVar1 = (float)piVar3[0xf];
      if ((*(byte *)(piVar3 + 1) & 4) != 0) {
        fVar1 = fVar1 * _DAT_005ca220;
      }
      iVar4 = *piVar3;
      if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
        fVar6 = *(float *)(param_1 + 0x3f8) * _DAT_005c75e0;
        if (fVar6 < _DAT_005c75dc) {
          fVar6 = _DAT_005c75dc;
        }
        fVar1 = fVar1 / fVar6;
      }
      else {
        fVar1 = fVar1 * *(float *)(param_1 + 0xf48);
      }
      fVar1 = fVar1 * _DAT_005d3e6c * fVar1 * _DAT_005d3e6c;
      if (fVar5 < fVar1 != (fVar5 == fVar1)) {
        return piVar3;
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

