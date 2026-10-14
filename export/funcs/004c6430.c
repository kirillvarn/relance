
undefined4 __thiscall FUN_004c6430(int *param_1,EquipDesc *param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    param_3 = *(uint *)(param_2 + 0x14);
  }
  piVar1 = *(int **)param_1[8];
  while( true ) {
    if (piVar1 == (int *)param_1[8]) {
      return 0;
    }
    if ((EquipDesc *)(piVar1 + 2) == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  if (param_3 < *(uint *)(param_2 + 0x14)) {
    EquipDesc::set_count(param_2,*(uint *)(param_2 + 0x14) - param_3);
  }
  else {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    param_1[9] = param_1[9] + -1;
  }
  if (*param_1 != 0) {
    FUN_005850f0(param_1 + 7);
  }
  return 1;
}

