
undefined4 * __thiscall FUN_0040e0a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  *param_1 = *param_2;
  if (param_1 + 1 != param_2 + 1) {
    puVar3 = (undefined4 *)param_2[2];
    if (puVar3 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_2[3] - (int)puVar3 >> 2;
    }
    puVar8 = (undefined4 *)param_1[2];
    if (puVar8 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1[3] - (int)puVar8 >> 2;
    }
    if (uVar2 < uVar7) {
      if (puVar3 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_2[3] - (int)puVar3 >> 2;
      }
      if (puVar8 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = param_1[4] - (int)puVar8 >> 2;
      }
      if (uVar2 < uVar7) {
        FUN_005b7e1d(puVar8);
        iVar4 = FUN_005ad970();
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        pvVar5 = operator_new(iVar4 << 2);
        param_1[2] = pvVar5;
        uVar6 = FUN_00597c70(param_2[2],param_2[3],pvVar5);
        param_1[3] = uVar6;
        param_1[4] = uVar6;
      }
      else {
        iVar4 = FUN_005ad970();
        FUN_00527820(puVar3,puVar3 + iVar4,puVar8);
        FUN_00597c70(puVar3 + iVar4,param_2[3],param_1[3]);
        iVar4 = FUN_005ad970();
        param_1[3] = param_1[2] + iVar4 * 4;
      }
    }
    else {
      puVar1 = (undefined4 *)param_2[3];
      for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        *puVar8 = *puVar3;
        puVar8 = puVar8 + 1;
      }
      if (param_2[2] == 0) {
        param_1[3] = param_1[2];
      }
      else {
        param_1[3] = param_1[2] + ((int)(param_2[3] - param_2[2]) >> 2) * 4;
      }
    }
  }
  FUN_005595c0(param_2 + 5);
  return param_1;
}

