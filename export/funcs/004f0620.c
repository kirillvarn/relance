
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f0620(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float unaff_EDI;
  int **ppiVar7;
  float10 fVar8;
  int unaff_retaddr;
  int *piStack_104;
  undefined4 *puStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_c4;
  int *apiStack_c0 [9];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [36];
  Vector aVStack_5c [36];
  Vector aVStack_38 [56];
  
  FUN_0054baf0();
  piVar2 = (int *)FUN_0040f130();
  fStack_fc = (float)(**(code **)(*piVar2 + 0x10))();
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  fStack_f8 = (float)(unaff_retaddr + 0x10);
  puStack_100 = &uStack_e0;
  piStack_104 = DAT_00674b6c;
  (**(code **)(*DAT_00674b6c + 0x3c))();
  apiStack_c0[2] = (int *)0x0;
  uStack_e0 = 0;
  fStack_dc = 180.0;
  apiStack_c0[0] = piVar2;
  uVar3 = RotateMatrix(aVStack_5c);
  uVar4 = LookMatrix(aVStack_38);
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b6c + 0x20))(DAT_00674b6c,auStack_80,uVar4,uVar3);
  puVar6 = auStack_90;
  ppiVar7 = apiStack_c0;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar7 = (int *)*puVar6;
    puVar6 = puVar6 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  if (ABS((float)puStack_100) <= ABS(fStack_fc) * _DAT_0067dc98) {
    fVar8 = (float10)fptan((float10)_DAT_0067dc94 * (float10)_DAT_005c77f4);
    fVar8 = -(float10)DAT_005d8f04 * fVar8 * (float10)_DAT_005d9654;
    if (fStack_fc <= _DAT_005c7474) {
      fVar8 = -fVar8;
    }
    fStack_f0 = (float)fVar8;
    fVar8 = (float10)fStack_f0 / ((float10)fStack_fc / (float10)(float)puStack_100);
  }
  else {
    fVar8 = (float10)fptan((float10)_DAT_0067dc90 * (float10)_DAT_005c77f4);
    fVar8 = -(float10)DAT_005d8f04 * fVar8 * (float10)_DAT_005d9654;
    if ((float)puStack_100 <= _DAT_005c7474) {
      fVar8 = -fVar8;
    }
    fStack_f0 = (float)(((float10)fStack_fc / (float10)(float)puStack_100) * fVar8);
  }
  fStack_dc = (float)fVar8;
  fStack_98 = fStack_f0;
  fStack_d8 = fStack_f0;
  fStack_94 = DAT_005d8f04;
  fStack_d4 = DAT_005d8f04;
  fStack_9c = fStack_dc;
  if ((*(int *)(param_1 + 0x7b8) != 0) && (*(int *)(param_1 + 0x7d4) != 0)) {
    uStack_c4 = DAT_00679b80;
    piStack_104 = (int *)0xff7a3e0c;
    FUN_00559900(*(int *)(param_1 + 0x7d4),&fStack_9c,&piStack_104,0x3d75c28f,0,0);
    FUN_00559900(*(undefined4 *)(param_1 + 0x7b8),&fStack_9c,&uStack_c4,0x3d75c28f,0,0);
  }
  cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))
                    (&DAT_0067dbf8,&stack0xffffff18,&stack0xffffff1c,&uStack_e0,&fStack_dc);
  if (cVar1 != '\0') {
    if (SQRT((fStack_fc - (float)DAT_00616840) * (fStack_fc - (float)DAT_00616840) +
             (fStack_f8 - (float)DAT_00616844) * (fStack_f8 - (float)DAT_00616844) +
             (unaff_EDI - unaff_EDI) * (unaff_EDI - unaff_EDI)) <=
        (((_DAT_005c7500 / DAT_005d8f04) * _DAT_005d9650) / _DAT_0067dc9c) * _DAT_0067dc9c *
        _DAT_0067dc70) {
      DAT_00674b74 = 0;
      DAT_00674b78 = unaff_retaddr;
    }
  }
  return;
}

