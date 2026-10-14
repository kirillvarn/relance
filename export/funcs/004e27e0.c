
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e27e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float local_1c;
  
  iVar8 = *(int *)(param_1 + 0x398);
  if ((((iVar8 == 0) || (iVar8 == 8)) || (iVar8 == -4)) ||
     ((iVar8 = *(int *)(iVar8 + 8), iVar8 == 0 || ((*(uint *)(iVar8 + 0x4c) & 0x503) != 0x503)))) {
    iVar8 = 0;
  }
  local_1c = 999999.0;
  puVar5 = (undefined4 *)FUN_0054baf0();
  if ((iVar8 != 0) && (puVar5 != (undefined4 *)0x0)) {
    if (*(int *)(param_1 + 0x398) == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x398) + -8);
    }
    pfVar6 = (float *)(**(code **)*puVar7)();
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    pfVar6 = (float *)(**(code **)*puVar5)();
    local_1c = SQRT((fVar1 - *pfVar6) * (fVar1 - *pfVar6) +
                    (fVar2 - pfVar6[1]) * (fVar2 - pfVar6[1]) +
                    (fVar3 - pfVar6[2]) * (fVar3 - pfVar6[2]));
    if (local_1c <= _DAT_005d8d08) goto LAB_004e2908;
  }
  if ((DAT_00674b00 != '\0') || (DAT_006724b4 != 0)) {
    (**(code **)(*DAT_0067ecd0 + 0x158))(DAT_00673344);
    (**(code **)(*DAT_0067ecd0 + 0x140))(DAT_00673344,0);
    DAT_00674b00 = '\0';
  }
LAB_004e2908:
  bVar4 = false;
  if (*(int **)(param_1 + 0x510) != (int *)0x0) {
    if ((((DAT_006724b4 == 0) && (local_1c < _DAT_005d8d08 != (local_1c == _DAT_005d8d08))) &&
        (iVar8 != 0)) && ((*(int *)(iVar8 + 0xb4) != 0 && (*(int *)(iVar8 + 0xb4) != DAT_00673344)))
       ) {
      bVar4 = true;
    }
    (**(code **)(**(int **)(param_1 + 0x510) + 0xa8))(1,!bVar4,0);
  }
  return;
}

