
void __thiscall FUN_004af900(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  int local_2b8;
  undefined1 local_2ac [4];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c [4];
  int local_298;
  int local_294;
  undefined2 local_28c [64];
  undefined2 local_20c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcf0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ae030(local_29c);
  local_4 = 0;
  if (local_298 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (local_294 - local_298) / 0x2c;
  }
  if (iVar3 - 0xdU < param_2) {
    FUN_005b7e1d(local_298);
  }
  else {
    iVar3 = param_2 * 0x2c;
    local_20c[0] = 0;
    local_2b8 = 0;
    piVar6 = (int *)(param_1 + 0x37c);
    do {
      iVar2 = FUN_004ae030(local_2ac);
      if (*(int *)(iVar2 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x2c;
      }
      FUN_005b7e1d(local_2a8);
      local_2a8 = 0;
      local_2a4 = 0;
      local_2a0 = 0;
      if (local_2b8 + param_2 < uVar4) {
        iVar2 = piVar6[0xd];
        iVar1 = piVar6[0x1a];
        iVar5 = iVar3 + local_298;
        *(undefined4 *)(*piVar6 + 0x348) = DAT_00679bb0;
        *(undefined4 *)(piVar6[0x35] + 900) = 10;
        if (*(char *)(iVar5 + 0x28) == '\0') {
          *(undefined4 *)(iVar2 + 0x348) = DAT_00679b94;
          *(undefined4 *)(iVar1 + 0x348) = DAT_00679b94;
        }
        else {
          *(undefined4 *)(iVar2 + 0x348) = DAT_00679bb0;
          *(undefined4 *)(iVar1 + 0x348) = DAT_00679bb0;
        }
        if (*(int *)(iVar5 + 0x24) == 1) {
          FUN_00577f50(iVar5,local_20c,0x100);
          FUN_0058a530(local_20c);
          if (*(char *)(iVar5 + 0x28) == '\0') goto LAB_004afab7;
          puVar7 = &DAT_005c8ce0;
        }
        else if (*(int *)(iVar5 + 0x24) == 2) {
          FUN_00577f50(iVar5,local_20c,0x100);
          FUN_0058a530(local_20c);
          FUN_00577f50(iVar5 + 0xc,local_20c,0x100);
LAB_004afab7:
          puVar7 = local_20c;
        }
        else {
          FUN_0058a530(&DAT_005c8ce0);
          puVar7 = &DAT_005c8ce0;
        }
        FUN_0058a530(puVar7);
        if (*(int *)(iVar5 + 0x18) < 1) {
          puVar7 = &DAT_005c8ce0;
        }
        else {
          FUN_004347e0(DAT_0067eca8,*(int *)(iVar5 + 0x18),local_28c,0x40);
          puVar7 = local_28c;
        }
        (**(code **)(*(int *)*piVar6 + 0xa8))(0x1d,puVar7,0);
      }
      local_2b8 = local_2b8 + 1;
      iVar3 = iVar3 + 0x2c;
      piVar6 = piVar6 + 1;
    } while (local_2b8 < 0xd);
    FUN_005b7e1d(local_298);
  }
  ExceptionList = local_c;
  return;
}

