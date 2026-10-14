
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ffbb0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c [4];
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_68 = param_3 + (float)_DAT_005da738;
  if (_DAT_005c75dc < local_68) {
    local_68 = param_3 - (float)_DAT_005da738;
  }
  fVar4 = (float10)FUN_00501810(param_3);
  local_70 = (float)fVar4;
  fVar4 = (float10)FUN_00501810(param_3);
  local_6c = (float)fVar4;
  local_58 = param_1 + 200;
  fVar4 = (float10)FUN_00501810(param_3);
  local_84 = local_6c;
  local_80 = local_70;
  local_88 = (float)fVar4;
  FUN_004e7090(&local_54,&local_88);
  fVar1 = local_68;
  fVar4 = (float10)FUN_00501810(local_68);
  local_6c = (float)fVar4;
  fVar4 = (float10)FUN_00501810(fVar1);
  local_70 = (float)fVar4;
  fVar4 = (float10)FUN_00501810(fVar1);
  local_84 = local_70;
  local_88 = (float)fVar4;
  local_80 = local_6c;
  FUN_004e7090(local_c,&local_88);
  FUN_00423b60(&local_88,local_c,&local_54);
  fVar4 = (float10)FUN_00410190();
  fVar4 = (float10)_DAT_005c75dc / fVar4;
  FUN_00422b80((float)-((float10)local_88 * fVar4),(float)-((float10)local_84 * fVar4),
               (float)-((float10)local_80 * fVar4));
  FUN_004215b0();
  FUN_00422b80(local_78 * _DAT_005c7474 - local_74,
               local_74 * _DAT_005c7474 - local_7c * _DAT_005c7474,
               local_7c - local_78 * _DAT_005c7474);
  FUN_00422b80(-local_88,-local_84,-local_80);
  FUN_00422b80(local_5c * local_78 - local_60 * local_74,local_74 * local_64 - local_5c * local_7c,
               local_60 * local_7c - local_78 * local_64);
  local_3c[3] = local_60;
  local_24 = local_5c;
  local_2c = local_44;
  local_3c[0] = local_64;
  local_20 = local_40;
  local_28 = local_78;
  local_3c[1] = (float)local_48;
  local_1c = local_74;
  local_14 = local_50;
  local_3c[2] = local_7c;
  local_10 = local_4c;
  local_18 = local_54;
  pfVar3 = local_3c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

