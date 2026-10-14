
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054f9f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack00000010;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = param_1;
  fVar1 = param_1[3] + param_1[3];
  FUN_00422b80(fVar1 * *param_2,fVar1 * param_2[1],fVar1 * param_2[2]);
  FUN_00422b80(fVar1 * *param_3,fVar1 * param_3[1],fVar1 * param_3[2]);
  iVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  uVar6 = ftol();
  _DAT_00679838 = ((iVar3 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  iVar3 = (uint)*(byte *)((int)param_1 + 0x15) + (uint)*(byte *)((int)param_1 + 0x16) * 2;
  if (iVar3 == 0) {
    param_2 = (float *)0x0;
    param_3 = (float *)0x3f800000;
  }
  else {
    if (iVar3 == 1) {
      param_1 = (float *)0x3f800000;
      param_2 = (float *)0x0;
      param_3 = (float *)0x3f800000;
      uStack00000010 = 0x3f800000;
      goto LAB_0054fb30;
    }
    param_3 = (float *)0x0;
    param_2 = (float *)0x3f800000;
    if (iVar3 == 2) {
      param_1 = (float *)0x3f800000;
      uStack00000010 = 0x3f800000;
      goto LAB_0054fb30;
    }
  }
  param_1 = (float *)0x0;
  uStack00000010 = 0;
LAB_0054fb30:
  if (*(char *)((int)pfVar2 + 0x17) == '\0') {
    local_30 = local_24;
    local_2c = local_20;
    local_28 = local_1c;
    local_20 = local_14;
    local_1c = local_10;
    local_24 = local_18;
  }
  else {
    local_30 = local_18;
    local_2c = local_14;
    local_28 = local_10;
  }
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  if (*(char *)(pfVar2 + 6) != '\0') {
    local_3c = local_24 * _DAT_005c7500;
    local_38 = local_20 * _DAT_005c7500;
    local_34 = local_1c * _DAT_005c7500;
  }
  FUN_00422b80(*pfVar2 - local_30,pfVar2[1] - local_2c,pfVar2[2] - local_28);
  FUN_00422b80(local_30 + *pfVar2,local_2c + pfVar2[1],local_28 + pfVar2[2]);
  FUN_00422b80(local_3c + *pfVar2,local_38 + pfVar2[1],local_34 + pfVar2[2]);
  _DAT_00679830 = param_1;
  _DAT_00679834 = param_2;
  FUN_0054fd30(local_c,local_8,local_4);
  _DAT_00679830 = param_3;
  _DAT_00679834 = uStack00000010;
  FUN_0054fd30(local_30,local_2c,local_28);
  iVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  uVar6 = ftol();
  _DAT_00679838 = ((iVar3 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  _DAT_00679830 = 0x3f000000;
  _DAT_00679834 = 0x3f000000;
  FUN_0054fd30(local_3c,local_38,local_34);
  return;
}

