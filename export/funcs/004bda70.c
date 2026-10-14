
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bda70(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *local_70;
  float fStack_5c;
  undefined1 *puStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 local_3c [4];
  float fStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [12];
  undefined4 local_24 [6];
  float fStack_c;
  
  local_70 = (undefined1 *)(float)_DAT_0067dca8;
  FUN_004bdd40(local_3c,(float)DAT_0067dca4);
  puVar5 = &DAT_0067dbfc;
  puVar6 = local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (DAT_00672448 == (int *)0x0) {
    local_70 = (undefined1 *)0x4bdabb;
    DAT_00672448 = (int *)FUN_005b73e0();
  }
  local_70 = local_3c;
  (**(code **)(*DAT_00672448 + 0x2c))(DAT_00672448,local_30,local_24);
  local_70 = (undefined1 *)((((float)DAT_0067dcac - _DAT_0067dc60) / _DAT_0067dc70) * _DAT_0067dc9c)
  ;
  fStack_54 = (((float)DAT_0067dcb0 - _DAT_0067dc64) / _DAT_0067dc74) * _DAT_0067dc9c;
  fStack_50 = -_DAT_0067dc9c;
  puVar5 = &DAT_0067dbfc;
  puVar6 = &uStack_34;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puStack_58 = local_70;
  FUN_00423b90(&fStack_4c,&uStack_34,&puStack_58);
  FUN_0059da70(&stack0xffffff9c);
  local_70 = (undefined1 *)(unaff_EBX * (_DAT_005c7500 / fStack_5c));
  fStack_40 = fStack_40 * (_DAT_005c7500 / fStack_38);
  puStack_58 = (undefined1 *)(fStack_4c * (_DAT_005c7500 / fStack_44));
  fStack_54 = fStack_48 * (_DAT_005c7500 / fStack_44);
  if (*(char *)((int)fStack_c + 0x60) != '\0') {
    pfVar1 = (float *)((int)fStack_c + 0x48);
    pfVar2 = (float *)((int)fStack_c + 0x54);
    fStack_c = _DAT_005c7500 / *(float *)((int)fStack_c + 0x50);
    local_70 = (undefined1 *)(fStack_c * (*pfVar1 - *pfVar2));
  }
  FUN_004145d0(0x3eb33333,param_1[0x1a]);
  piVar3 = (int *)FUN_00414570(&local_70);
  local_70 = (undefined1 *)(*piVar3 + 4);
  (**(code **)(*param_1 + 0x14))(&stack0xffffff9c);
  return;
}

