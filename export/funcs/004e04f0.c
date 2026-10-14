
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e04f0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uStack_c;
  
  FUN_00421ed0(0xde1);
  FUN_00421ed0(0xb71);
  FUN_004227d0(param_2);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(2,4);
  pfVar2 = param_3;
  param_3 = (float *)ftol();
  *pfVar2 = (float)(int)param_3;
  param_3 = (float *)ftol();
  pfVar2[1] = (float)(int)param_3;
  fVar9 = (float10)_CIpow();
  fVar1 = (float)(fVar9 * (float10)*(float *)(param_1 + 0xc));
  if (_DAT_005c7474 < *(float *)(param_1 + 4)) {
    param_3 = (float *)0x0;
    iVar5 = ftol();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    iVar6 = ftol();
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    uVar7 = ftol();
    uVar3 = FUN_004104c0(uVar7);
    uVar7 = ftol();
    uVar4 = FUN_004104c0(uVar7);
    param_3 = (float *)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11((char)iVar6,(char)iVar5)));
    FUN_00421aa0(&param_3);
    FUN_004dfca0(pfVar2,fVar1 * (float)_DAT_005d8848);
    iVar5 = ftol();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    iVar6 = ftol();
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    iVar8 = ftol();
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0xff < iVar8) {
      iVar8 = 0xff;
    }
    uVar7 = ftol();
    uVar3 = FUN_004104c0(uVar7);
    uStack_c = CONCAT13(uVar3,CONCAT12((char)iVar8,CONCAT11((char)iVar6,(char)iVar5)));
    param_3 = (float *)uStack_c;
    FUN_00421aa0(&param_3);
    FUN_004dfca0(pfVar2,fVar1 * (float)_DAT_005d3ed0);
  }
  FUN_00421aa0(param_1 + 0x20);
  FUN_004dfca0(pfVar2,fVar1);
  FUN_00422950(param_2);
  return;
}

