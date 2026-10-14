
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a420(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  Rect local_10 [16];
  
  bVar1 = false;
  if (DAT_006166b4 != '\0') {
    bVar1 = true;
    if (DAT_006166ac <= _DAT_006166b0) {
      if (DAT_006166ac < _DAT_006166b0) {
        _DAT_006166b0 = _DAT_006166b0 - _DAT_00610690 * param_2;
        if (_DAT_006166b0 < DAT_006166ac == (_DAT_006166b0 == DAT_006166ac)) goto LAB_0041a4c2;
        _DAT_006166b0 = DAT_006166ac;
      }
    }
    else {
      _DAT_006166b0 = _DAT_00610690 * param_2 + _DAT_006166b0;
      if (_DAT_006166b0 < DAT_006166ac) goto LAB_0041a4c2;
      _DAT_006166b0 = DAT_006166ac;
    }
    DAT_006166b4 = '\0';
  }
LAB_0041a4c2:
  if (param_1 != 0) {
    bVar4 = DAT_006166b8 != param_1;
    DAT_006166b8 = param_1;
    if ((bVar1) || (bVar4)) {
      fVar2 = (float)DAT_00610850 / (float)DAT_00610854;
      floor((double)(((float)DAT_00610854 -
                     (float)DAT_00610850 / ((_DAT_005c9020 - fVar2) * _DAT_006166b0 + fVar2)) *
                     (float)_DAT_005c75e8 + (float)_DAT_005c75e8));
      ftol();
      puVar3 = (undefined4 *)Rect_to_ViewRect(local_10);
      local_20 = *puVar3;
      local_1c = puVar3[1];
      local_18 = puVar3[2];
      local_14 = puVar3[3];
      FUN_0040fb80(&local_20,0);
    }
  }
  return;
}

