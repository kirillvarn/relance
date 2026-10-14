
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428040(int *param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 local_c [12];
  
  DAT_00667cb8 = 0;
  if (_DAT_005c7474 <= _DAT_00610904) {
    _DAT_00610904 = _DAT_00610904 - param_2;
    if (_DAT_00610904 < _DAT_005c7474 == (_DAT_00610904 == _DAT_005c7474)) {
      fVar11 = (float10)1.4426950408889634 * (float10)_DAT_00667ca4 * (float10)_DAT_005c9cf4;
      fVar10 = ROUND(fVar11);
      fVar11 = (float10)f2xm1(fVar11 - fVar10);
      fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
      fVar12 = (float10)1.4426950408889634 * (float10)DAT_00667ca0 * (float10)_DAT_005c9cf4;
      fVar11 = ROUND(fVar12);
      fVar12 = (float10)f2xm1(fVar12 - fVar11);
      fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
      fVar10 = ((float10)param_2 / ((float10)_DAT_00610904 + (float10)param_2)) * (fVar11 - fVar10)
               + fVar10;
      if (fVar10 < (float10)_DAT_005c9cf0 == (fVar10 == (float10)_DAT_005c9cf0)) {
        fVar10 = (float10)log2(fVar10);
        _DAT_00667ca4 = (float)((float10)0.3010299956639812 * fVar10 * (float10)_DAT_005c9ce8);
      }
      else {
        _DAT_00667ca4 = -96.0;
      }
    }
    else {
      _DAT_00610904 = -1.0;
      _DAT_00667ca4 = DAT_00667ca0;
    }
  }
  if ((DAT_00667c68 & 1) == 0) {
    DAT_00667c68 = DAT_00667c68 | 1;
    _DAT_00667c5c = 0;
    _DAT_00667c60 = 0;
    _DAT_00667c64 = 0;
    FUN_005b7e6c(&DAT_00428420);
  }
  if (param_1 == (int *)0x0) {
    piVar5 = *(int **)Sound_exref;
    if (piVar5 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x58))(piVar5,local_c);
      _DAT_00667c5c = *puVar3;
      _DAT_00667c60 = puVar3[1];
      _DAT_00667c64 = puVar3[2];
    }
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xc))(param_1);
    _DAT_00667c5c = *puVar3;
    _DAT_00667c60 = puVar3[1];
    _DAT_00667c64 = puVar3[2];
    if (*(int **)Sound_exref != (int *)0x0) {
      iVar6 = **(int **)Sound_exref;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      (**(code **)(iVar6 + 0x38))(*(undefined4 *)Sound_exref,uVar4);
      (**(code **)(**(int **)Sound_exref + 0x3c))(*(int **)Sound_exref,&DAT_00667c5c);
      piVar5 = (int *)FUN_0040f130();
      if (piVar5 != (int *)0x0) {
        iVar6 = **(int **)Sound_exref;
        uVar4 = (**(code **)(*piVar5 + 0x48))(local_c);
        (**(code **)(iVar6 + 0x40))(*(undefined4 *)Sound_exref,uVar4);
      }
    }
  }
  param_1 = (int *)0x80;
  iVar6 = FUN_005792b0(0x2d);
  if (iVar6 != 0) {
    param_1 = (int *)FUN_005b3860();
    if (param_1 < 0x80) {
      if ((int)param_1 < 8) {
        param_1 = (int *)0x8;
      }
    }
    else {
      param_1 = (int *)0x80;
    }
  }
  piVar5 = DAT_00667c70;
  if (DAT_00667c70 != (int *)*DAT_00667c70) {
    do {
      piVar5 = (int *)piVar5[1];
      piVar1 = (int *)piVar5[2];
      cVar2 = (**(code **)(*piVar1 + 0x70))();
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*piVar1 + 0xa8))(&DAT_00667c5c,param_2), cVar2 != '\0')) &&
         ((*(byte *)(piVar1 + 3) & 4) != 0)) {
        if (((float)piVar1[10] == DAT_00667c58) || (0x7f < DAT_00667cb8)) {
          if ((*(byte *)(piVar1 + 3) & 8) == 0) {
            (**(code **)(*piVar1 + 0xc))(piVar1);
          }
        }
        else {
          (&DAT_00667a58)[DAT_00667cb8] = piVar1;
          DAT_00667cb8 = DAT_00667cb8 + 1;
        }
      }
    } while (piVar5 != (int *)*DAT_00667c70);
  }
  if (*(int *)Sound_exref != 0) {
    puVar3 = &DAT_00667a58 + DAT_00667cb8;
    if ((int)(DAT_00667cb8 * 4) < 0x41) {
      FUN_0042a9e0(&DAT_00667a58,puVar3,param_2);
    }
    else {
      FUN_0042a810(&DAT_00667a58,puVar3,param_2,0);
      FUN_0042a9e0(&DAT_00667a58,&DAT_00667a98,param_2,0);
      for (puVar8 = &DAT_00667a98; puVar3 != puVar8; puVar8 = puVar8 + 1) {
        FUN_0042a9a0(puVar8,*puVar8,param_2);
      }
    }
    if (param_1 < DAT_00667cb8) {
      DAT_00667cb8 = (uint)param_1;
    }
    uVar9 = 0;
    uVar7 = DAT_00667cb8;
    if (DAT_00667cb8 != 0) {
      do {
        piVar5 = (int *)(&DAT_00667a58)[uVar9];
        if ((*(byte *)(piVar5 + 3) & 8) == 0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
          uVar7 = DAT_00667cb8;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    (**(code **)(**(int **)Sound_exref + 0x98))(*(int **)Sound_exref,&DAT_00667a58,uVar7);
    (**(code **)(**(int **)Sound_exref + 0xb8))(*(int **)Sound_exref,0);
  }
  piVar5 = (int *)*DAT_00667c70;
  if (piVar5 != DAT_00667c70) {
    do {
      piVar1 = (int *)piVar5[2];
      piVar5 = (int *)*piVar5;
      cVar2 = (**(code **)(*piVar1 + 0x70))();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x74))(), cVar2 != '\0')) {
        (**(code **)(*piVar1 + 0x60))();
      }
    } while (piVar5 != DAT_00667c70);
  }
  return;
}

