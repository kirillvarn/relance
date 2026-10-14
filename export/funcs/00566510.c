
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00566510(byte *param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  DWORD DVar5;
  IDirectPlay8Client *pIVar6;
  float *pfVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    if ((*(byte *)(piVar3 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar3 + 0x30))();
      piVar3 = piVar1;
    }
    else {
      (**(code **)(*piVar3 + 0x2c))();
      piVar3 = piVar1;
    }
  }
  DVar5 = timeGetTime();
  if (*(uint *)(param_1 + 0x554) < DVar5 - *(int *)(param_1 + 0x558)) {
    pIVar6 = CDPClient::GetClient((CDPClient *)&DAT_0067e7bc);
    if (pIVar6 == (IDirectPlay8Client *)0x0) {
      bVar11 = false;
    }
    else if ((DAT_00614ae0 == '\0') && (*(code **)(param_1 + 0x550) != (code *)0x0)) {
      uStack_44 = 0;
      iVar10 = (**(code **)(param_1 + 0x550))(&uStack_44);
      bVar11 = iVar10 != 0;
    }
    else {
      bVar11 = true;
    }
    param_1[0x34a] = bVar11;
    *(DWORD *)(param_1 + 0x558) = DVar5;
  }
  if (*(double *)(param_1 + 0x560) < _DAT_005c89b8 ==
      (*(double *)(param_1 + 0x560) == _DAT_005c89b8)) {
    if (param_1[0x56c] == 0) {
      return;
    }
  }
  else if (param_1[0x56c] == 0) {
    fVar12 = (float10)FUN_0042d680();
    if ((float10)_DAT_005c75e8 < fVar12) {
      fVar12 = (float10)_DAT_005c75e8;
    }
    uStack_48 = 0;
    uStack_44 = 6;
    pbVar8 = param_1 + 0x534;
    pbVar9 = param_1 + 0x84;
    *(double *)(param_1 + 0x560) =
         (double)(fVar12 * (float10)_DAT_005d3c48 + (float10)*(double *)(param_1 + 0x560));
    do {
      uStack_40 = (double)((float)(int)uStack_44 * (float)_DAT_005c7720);
      fVar2 = ((float)(int)uStack_44 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x560)) -
              (float)_DAT_005e28d0;
      if (fVar2 <= (float)_DAT_005e28c8) {
        fStack_1c = _DAT_005e28c0 - (float)(int)uStack_48 * _DAT_005e28c4;
        fStack_18 = _DAT_005c7500;
        fStack_20 = fVar2;
        (**(code **)(*(int *)pbVar9 + 0x14))(&fStack_20);
        uStack_14 = 0;
        fStack_10 = 0.0;
        pfVar7 = &fStack_18;
        fStack_18 = (float)((float10)(double)CONCAT44((undefined4)uStack_40,uStack_44) +
                           (float10)*(double *)(param_1 + 0x560));
      }
      else {
        uStack_38 = 0xbee8f5c3;
        fStack_34 = _DAT_005e28c0 - (float)(int)uStack_48 * _DAT_005e28c4;
        fStack_30 = _DAT_005c7500;
        (**(code **)(*(int *)pbVar9 + 0x14))(&uStack_38);
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        fStack_28 = 0.0;
        pfVar7 = &fStack_30;
      }
      (**(code **)(**(int **)pbVar8 + 0x14))(pfVar7);
      uStack_48 = uStack_48 + 1;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 0xf0;
      uStack_44 = uStack_44 - 1;
    } while (uStack_48 < 5);
    if (*(double *)(param_1 + 0x560) <= _DAT_005d5078) {
      return;
    }
    if (_DAT_005d5070 <= *(double *)(param_1 + 0x560)) {
      return;
    }
    FUN_00564570(0x1b);
    return;
  }
  fVar12 = (float10)FUN_0042d680();
  uStack_44 = 0;
  uStack_48 = 6;
  pbVar8 = param_1 + 0x534;
  pbVar9 = param_1 + 0x84;
  *(double *)(param_1 + 0x560) =
       (double)((float10)*(double *)(param_1 + 0x560) - fVar12 * (float10)_DAT_005d3c48);
  do {
    uVar4 = uStack_44;
    uStack_40 = (double)((float)(int)uStack_48 * (float)_DAT_005c7720);
    fVar2 = ((float)(int)uStack_48 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x560)) -
            (float)_DAT_005e28d0;
    if (fVar2 <= (float)_DAT_005e28c8) {
      fStack_28 = _DAT_005e28c0 - (float)(int)uStack_44 * _DAT_005e28c4;
      fStack_24 = _DAT_005c7500;
      fStack_2c = fVar2;
      (**(code **)(*(int *)pbVar9 + 0x14))(&fStack_2c);
      uStack_38 = 0;
      fStack_34 = 0.0;
      pfVar7 = (float *)((int)&uStack_40 + 4);
      uStack_40 = (double)CONCAT44((float)((float10)(double)CONCAT44((undefined4)uStack_40,uStack_44
                                                                    ) +
                                          (float10)*(double *)(param_1 + 0x560)),
                                   (undefined4)uStack_40);
    }
    else {
      uStack_14 = 0xbee8f5c3;
      fStack_10 = _DAT_005e28c0 - (float)(int)uStack_44 * _DAT_005e28c4;
      fStack_c = _DAT_005c7500;
      (**(code **)(*(int *)pbVar9 + 0x14))(&uStack_14);
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
      pfVar7 = &fStack_24;
    }
    (**(code **)(**(int **)pbVar8 + 0x14))(pfVar7);
    uStack_44 = uVar4 + 1;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 0xf0;
    uStack_48 = uStack_48 + -1;
  } while (uStack_44 < 5);
  if ((*(double *)(param_1 + 0x560) < _DAT_005c8ba8) &&
     (_DAT_005e28b8 < *(double *)(param_1 + 0x560))) {
    FUN_00564570(0x1b);
  }
  if (*(double *)(param_1 + 0x560) < _DAT_005e1b90 !=
      (*(double *)(param_1 + 0x560) == _DAT_005e1b90)) {
    *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + 1;
    pbVar8 = param_1 + 0x534;
    iVar10 = 5;
    pbVar9 = param_1;
    do {
      pbVar9 = pbVar9 + 0xf0;
      *pbVar9 = *pbVar9 & 0xfc;
      *(byte *)(*(int *)pbVar8 + 0x6c) = *(byte *)(*(int *)pbVar8 + 0x6c) & 0xfc;
      pbVar8 = pbVar8 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (1 < *(int *)(param_1 + 0x570)) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x568);
      param_1[0x56c] = 0;
    }
  }
  return;
}

