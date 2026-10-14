
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a140(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  Rect local_10 [8];
  int iStack_8;
  int local_4;
  
  bVar4 = false;
  if (DAT_006166b4 != '\0') {
    bVar4 = true;
    if (DAT_006166ac <= _DAT_006166b0) {
      if (DAT_006166ac < _DAT_006166b0) {
        _DAT_006166b0 = _DAT_006166b0 - _DAT_00610690 * param_2;
        if (_DAT_006166b0 < DAT_006166ac == (_DAT_006166b0 == DAT_006166ac)) goto LAB_0041a1de;
        _DAT_006166b0 = DAT_006166ac;
      }
    }
    else {
      _DAT_006166b0 = _DAT_00610690 * param_2 + _DAT_006166b0;
      if (_DAT_006166b0 < DAT_006166ac) goto LAB_0041a1de;
      _DAT_006166b0 = DAT_006166ac;
    }
    DAT_006166b4 = '\0';
  }
LAB_0041a1de:
  if (param_1 != (int *)0x0) {
    bVar10 = DAT_006166b8 != param_1;
    DAT_006166b8 = param_1;
    if ((bVar4) || (bVar10)) {
      fVar5 = (float)DAT_00610850 / (float)DAT_00610854;
      floor((double)(((float)DAT_00610854 -
                     (float)DAT_00610850 / ((_DAT_005c9020 - fVar5) * _DAT_006166b0 + fVar5)) *
                     (float)_DAT_005c75e8 + (float)_DAT_005c75e8));
      iVar8 = ftol();
      iVar7 = DAT_00610850;
      piVar9 = (int *)Rect_to_ViewRect(local_10);
      iVar1 = *piVar9;
      iVar2 = piVar9[1];
      iVar3 = piVar9[2];
      local_4 = piVar9[3];
      fVar11 = (float10)(**(code **)(*param_1 + 0x18))();
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1[4] = iStack_8;
      fVar5 = (float)(param_1[3] - param_1[1]) * _DAT_005c75e0;
      param_1[0xc] = (int)fVar5;
      fVar6 = (float)(param_1[4] - param_1[2]) * _DAT_005c75e0;
      param_1[0xd] = (int)fVar6;
      param_1[0xe] = (int)(fVar5 / (float)param_1[9]);
      param_1[0xf] = (int)-(fVar6 / (float)param_1[10]);
      fVar11 = (float10)fptan((fVar11 + fVar11) * (float10)_DAT_005c901c);
      param_1[9] = (int)(float)fVar11;
      fVar12 = (float10)fpatan(fVar11,(float10)1);
      param_1[5] = (int)(float)(fVar12 * (float10)_DAT_005c8928);
      param_1[0x10] = 0x3f800000;
      param_1[0x11] = 0;
      param_1[0x12] = (int)(float)fVar11;
      FUN_0041a390();
      param_1[0xe] = (int)((float)param_1[0xc] / (float)param_1[9]);
      param_1[0xb] = (int)(float)((float10)iVar8 / (float10)iVar7);
      fVar11 = (float10)(float)param_1[9] / ((float10)iVar8 / (float10)iVar7);
      param_1[10] = (int)(float)fVar11;
      fVar12 = (float10)fpatan(fVar11,(float10)1);
      param_1[6] = (int)(float)(fVar12 * (float10)_DAT_005c8928);
      param_1[0x13] = 0;
      param_1[0x14] = 0x3f800000;
      param_1[0x15] = (int)(float)fVar11;
      FUN_0041a390();
      param_1[0xf] = (int)-((float)param_1[0xd] / (float)param_1[10]);
    }
  }
  return;
}

