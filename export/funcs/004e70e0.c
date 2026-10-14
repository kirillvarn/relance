
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e70e0(int param_1,char param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74 [5];
  float fStack_60;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44 [4];
  undefined1 local_34 [16];
  Transform aTStack_24 [36];
  
  local_9c = *(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x4c0);
  local_94 = *(float *)(param_1 + 0x4bc);
  local_98 = *(float *)(param_1 + 0x4b8) + *(float *)(param_1 + 0x4c4);
  local_88 = *(float *)(param_1 + 0x4bc);
  local_90 = *(float *)(param_1 + 0x4b4) + *(float *)(param_1 + 0x4c0);
  local_8c = *(float *)(param_1 + 0x4b8) - *(float *)(param_1 + 0x4c4);
  puVar2 = (undefined4 *)FUN_004c71b0(local_34,&local_9c,&local_90);
  local_84 = *puVar2;
  local_80 = puVar2[1];
  local_7c = puVar2[2];
  local_78 = puVar2[3];
  local_44[0] = local_84;
  local_84 = ftol();
  local_7c = ftol();
  local_84 = ftol();
  local_80 = ftol();
  local_7c = ftol();
  local_78 = ftol();
  FUN_0040fb80(&local_84,1);
  if ((DAT_00674b0c & 1) == 0) {
    DAT_00674b0c = DAT_00674b0c | 1;
    fVar9 = (float10)fptan((float10)DAT_006127b4 * (float10)_DAT_005c77f4);
    _DAT_00674b08 = (float)((float10)_DAT_005c89b8 / fVar9);
  }
  FUN_0040f8c0(DAT_006127b4);
  if (param_2 == '\0') {
    fVar1 = _DAT_00674b08 * *(float *)(param_1 + 0x388) * _DAT_005d8468;
    FUN_004215b0();
    iVar7 = *(int *)(param_1 + 0x28);
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    if ((((iVar7 == 0) || (iVar7 == 8)) || (iVar7 == -4)) ||
       ((iVar7 = *(int *)(iVar7 + 8), iVar7 == 0 || ((*(uint *)(iVar7 + 0x4c) & 0x503) != 0x503))))
    {
      iVar7 = 0;
    }
    if (*(int *)(param_1 + 0x398) == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x398) + -8);
    }
    (**(code **)*puVar2)();
    pfVar3 = (float *)GetDirectionMatrix(aTStack_24,(Vector *)(iVar7 + 8));
    iVar7 = *(int *)(param_1 + 0x398);
    pfVar8 = local_74;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar8 = pfVar8 + 1;
    }
    if (iVar7 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar7 + -8);
    }
    (**(code **)(*piVar6 + 0x10))();
    FUN_004e7090(local_44,param_1 + 0x38c);
    FUN_00422b80(local_74[2],fStack_60,fStack_54);
    FUN_00411d60(&local_9c,&local_90,fVar1);
    iVar7 = *(int *)(param_1 + 0x398);
    if (((iVar7 != 0) && (iVar7 != 8)) &&
       ((iVar7 != -4 &&
        ((*(int *)(iVar7 + 8) != 0 && ((*(uint *)(*(int *)(iVar7 + 8) + 0x4c) & 0x803) == 0x803)))))
       ) {
      local_9c = local_9c * _DAT_005cfc9c;
      local_98 = local_98 * _DAT_005cfc9c;
      local_94 = local_94 * _DAT_005cfc9c;
    }
    FUN_00423b30(&local_90,local_44,&local_9c);
    local_50 = local_90;
    local_4c = local_8c;
    local_48 = local_88;
  }
  else {
    if (*(int *)(param_1 + 0x398) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(param_1 + 0x398) + -8);
    }
    pfVar3 = (float *)(**(code **)(*piVar6 + 0xc))();
    fVar9 = (float10)fcos((float10)_DAT_005d8ec0);
    pfVar8 = local_74;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    iVar7 = 3;
    fVar10 = (float10)fsin((float10)_DAT_005d8ec0);
    pfVar3 = local_74 + 2;
    do {
      fVar1 = pfVar3[-1];
      iVar7 = iVar7 + -1;
      pfVar3[-1] = (float)(fVar10 * (float10)*pfVar3 + (float10)fVar1 * fVar9);
      *pfVar3 = (float)(fVar9 * (float10)*pfVar3 - (float10)fVar1 * fVar10);
      pfVar3 = pfVar3 + 3;
    } while (iVar7 != 0);
    fVar1 = _DAT_00674b08 * *(float *)(param_1 + 0x388) * _DAT_005d8468;
    if (*(int *)(param_1 + 0x398) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(param_1 + 0x398) + -8);
    }
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    if (DAT_00674b1c == (int *)0x0) {
      DAT_00674b1c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00674b1c + 0x28))(DAT_00674b1c,&local_9c,uVar4,param_1 + 0x38c);
    FUN_00422b80(local_74[2] * fVar1,fStack_60 * fVar1,fStack_54 * fVar1);
    FUN_00422b80(local_9c + local_90,local_98 + local_8c,local_94 + local_88);
    local_50 = local_9c;
    local_4c = local_98;
    local_48 = local_94;
  }
  *(undefined1 *)(param_1 + 0x3ec) = 1;
  pfVar3 = local_74;
  pfVar8 = (float *)(param_1 + 0x3bc);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar8 = pfVar8 + 1;
  }
  FUN_00422610(param_1 + 0x3b8,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Target_Base.cpp",0x16b);
  FUN_00422910(param_1 + 0x3b8);
  *(undefined1 *)(param_1 + 0x4b0) = 1;
  return;
}

