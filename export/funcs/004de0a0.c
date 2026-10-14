
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004de0a0(float param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float **ppfStack_88;
  float *pfStack_84;
  float *pfStack_80;
  int *piStack_7c;
  float *pfStack_78;
  undefined4 *puStack_74;
  float *pfStack_70;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24 [9];
  
  pfStack_70 = (float *)0x4de0b2;
  local_50 = param_1;
  FUN_004dd9e0();
  iVar5 = 0;
  if (*(int *)((int)param_1 + 0x590) == 0) {
    local_58 = 0.0;
  }
  else {
    local_58 = (float)((*(int *)((int)param_1 + 0x594) - *(int *)((int)param_1 + 0x590)) / 0x24);
  }
  uVar2 = 0;
  if (10 < (int)local_58) {
    uVar2 = (int)local_58 - 10;
  }
  if (uVar2 < *(uint *)((int)param_1 + 0x5c8)) {
    *(uint *)((int)param_1 + 0x5c8) = uVar2;
  }
  local_48 = (((float)DAT_00616840 - _DAT_0067dc60) / _DAT_0067dc70) * _DAT_0067dc9c;
  puVar6 = &DAT_0067dbfc;
  puVar7 = local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_44 = (((float)DAT_00616844 - _DAT_0067dc64) / _DAT_0067dc74) * _DAT_0067dc9c;
  local_40 = -_DAT_0067dc9c;
  local_30 = local_48;
  local_2c = local_44;
  local_28 = local_40;
  if (DAT_00674a9c == (int *)0x0) {
    pfStack_70 = (float *)0x4de177;
    DAT_00674a9c = (int *)FUN_005b73e0();
  }
  pfStack_70 = &local_30;
  puStack_74 = local_24;
  pfStack_78 = &local_48;
  pfStack_80 = (float *)0x4de191;
  piStack_7c = DAT_00674a9c;
  (**(code **)(*DAT_00674a9c + 0x2c))();
  iVar4 = *(int *)((int)param_1 + 0x5c8);
  local_44 = _DAT_005c75dc / SQRT(local_50 * local_50 + fStack_54 * fStack_54 + local_58 * local_58)
  ;
  fStack_4c = local_58 * local_44;
  local_48 = fStack_54 * local_44;
  local_44 = local_50 * local_44;
  if (iVar4 < unaff_ESI) {
    puVar6 = (undefined4 *)((int)param_1 + 0x508);
    do {
      pfStack_80 = &fStack_4c;
      pfStack_84 = (float *)0x4de243;
      cVar1 = (**(code **)(*(int *)puVar6[10] + 0x10))();
      if (cVar1 == '\0') {
        pfStack_84 = &local_50;
        ppfStack_88 = (float **)0x4de253;
        cVar1 = (**(code **)(*(int *)*puVar6 + 0x10))();
        if (cVar1 != '\0') goto LAB_004de268;
        pfStack_84 = &local_50;
        ppfStack_88 = (float **)0x4de264;
        cVar1 = (**(code **)(*(int *)puVar6[0x14] + 0x10))();
        if (cVar1 != '\0') goto LAB_004de268;
      }
      else {
LAB_004de268:
        pfStack_84 = (float *)0x4de26d;
        cVar1 = FUN_0045a740();
        if (cVar1 == '\0') {
          pfStack_84 = pfStack_70;
          ppfStack_88 = (float **)&stack0xffffffa0;
          piVar3 = (int *)FUN_00561f20();
          pfStack_70 = (float *)*piVar3;
        }
      }
      pfStack_84 = (float *)0x1;
      ppfStack_88 = &pfStack_70;
      (**(code **)(*(int *)puVar6[10] + 0xa8))(0x33);
      (**(code **)(*(int *)*puVar6 + 0xa8))(0x33,&piStack_7c,1);
      (**(code **)(*(int *)puVar6[0x14] + 0xa8))(0x33,&ppfStack_88,1);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while ((iVar5 < 10) && (iVar4 = iVar4 + 1, iVar4 < unaff_ESI));
  }
  return;
}

