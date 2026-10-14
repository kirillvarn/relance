
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  for (_DAT_0067dce8 = _DAT_0067dce8 + (float)(double)CONCAT44(param_2,param_1);
      _DAT_005e5dc4 < _DAT_0067dce8; _DAT_0067dce8 = _DAT_0067dce8 - _DAT_005e5dc4) {
    DAT_0067dce4 = DAT_0067dce4 == '\0';
  }
  FUN_004be2b0(param_1,param_2);
  FUN_004b6290(param_1,param_2);
  cVar3 = FUN_0041dd90();
  piVar4 = (int *)0x0;
  if (cVar3 != '\0') {
    if (DAT_0067dce0 == (int *)0x0) {
      piVar4 = (int *)FUN_0059dd80();
    }
    else {
      piVar4 = (int *)FUN_0059de50(DAT_0067dce0,&DAT_0067dbcc);
      if (piVar4 == (int *)0x0) {
        piVar4 = DAT_0067dce0;
      }
    }
  }
  if (DAT_0067dcd8 != piVar4) {
    if (DAT_0067dcd8 != (int *)0x0) {
      (**(code **)(*DAT_0067dcd8 + 0x40))(&DAT_0067dbcc);
    }
    DAT_0067dcd8 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x3c))(&DAT_0067dbcc);
      (**(code **)(*piVar4 + 0x38))(&DAT_0067dbcc);
    }
  }
  _DAT_0067dcd0 = 0;
  piVar4 = DAT_0067dbe8;
  piVar2 = DAT_0067dbe8;
  if (DAT_0067dccc != 0) {
    for (; piVar2 = DAT_0067dbe8, piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      if ((((int *)piVar4[2] != (int *)0x0) &&
          (iVar5 = (**(code **)(*(int *)piVar4[2] + 8))(), iVar5 != 0)) &&
         (*(char *)(iVar5 + 0x2d0) != '\0')) {
        piVar4 = (int *)piVar4[2];
        if ((*(byte *)(piVar4 + 0x1b) & 1) == 0) {
          (**(code **)(*piVar4 + 0x30))();
          iVar5 = DAT_0067dbdc;
        }
        else {
          (**(code **)(*piVar4 + 0x2c))();
          iVar5 = DAT_0067dbdc;
        }
        for (; iVar1 = DAT_0067dbdc, iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
          piVar4 = *(int **)(iVar5 + 8);
          if (piVar4 != (int *)0x0) {
            iVar1 = *piVar4;
            piVar2 = (int *)piVar4[1];
            piVar4[2] = 0;
            FUN_005b7e1d(piVar4);
            piVar4 = piVar2;
            if (iVar1 != 0) {
              *(int **)(iVar1 + 4) = piVar2;
              piVar4 = DAT_0067dbe8;
            }
            DAT_0067dbe8 = piVar4;
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar1;
              iVar1 = _DAT_0067dbec;
            }
            _DAT_0067dbec = iVar1;
            _DAT_0067dbe4 = _DAT_0067dbe4 + -1;
          }
        }
        while (iVar1 != 0) {
          iVar5 = *(int *)(iVar1 + 4);
          FUN_005b7e1d(iVar1);
          iVar1 = iVar5;
        }
        _DAT_0067dbd8 = 0;
        DAT_0067dbdc = 0;
        _DAT_0067dbe0 = 0;
        return;
      }
    }
  }
  for (; iVar5 = DAT_0067dbdc, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    piVar4 = (int *)piVar2[2];
    if ((piVar4 != (int *)0x0) && (piVar4[1] == 0)) {
      if ((*(byte *)(piVar4 + 0x1b) & 1) == 0) {
        (**(code **)(*piVar4 + 0x30))();
      }
      else {
        (**(code **)(*piVar4 + 0x2c))();
      }
    }
    _DAT_0067dcd0 = _DAT_0067dcd0 + 1;
  }
  for (; iVar1 = DAT_0067dbdc, iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    piVar4 = *(int **)(iVar5 + 8);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      piVar2 = (int *)piVar4[1];
      piVar4[2] = 0;
      FUN_005b7e1d(piVar4);
      piVar4 = piVar2;
      if (iVar1 != 0) {
        *(int **)(iVar1 + 4) = piVar2;
        piVar4 = DAT_0067dbe8;
      }
      DAT_0067dbe8 = piVar4;
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar1;
        iVar1 = _DAT_0067dbec;
      }
      _DAT_0067dbec = iVar1;
      _DAT_0067dbe4 = _DAT_0067dbe4 + -1;
    }
  }
  while (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 4);
    FUN_005b7e1d(iVar1);
    iVar1 = iVar5;
  }
  _DAT_0067dbd8 = 0;
  _DAT_0067dbe0 = 0;
  DAT_0067dbdc = 0;
  return;
}

