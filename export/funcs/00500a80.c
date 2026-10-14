
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00500a80(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf730;
  if (param_2 < 1) {
    iVar5 = *(int *)(param_1 + 0x78);
    local_34 = *(float *)(param_1 + 0x7c) * _DAT_005c75e0;
    local_38 = *(float *)(param_1 + 0x7c) * _DAT_005cef60;
    ExceptionList = &local_c;
    FUN_005a6900(&param_2);
    iVar8 = 0;
    local_4 = 0;
    local_3c = 0;
    FUN_00501530(iVar5,&local_3c);
    *(float *)(param_1 + 0xe8) = local_38;
    *(float *)(param_1 + 0xec) = local_34;
    if (0 < iVar5) {
      do {
        local_38 = local_18;
        local_34 = (float)rand();
        iVar8 = iVar8 + 1;
        *(float *)((int)local_38 + -4 + iVar8 * 4) =
             (*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe8)) *
             (float)(int)local_34 * _DAT_005da778 + *(float *)(param_1 + 0xe8);
      } while (iVar8 < iVar5);
    }
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar8 + (int)local_18) = 0;
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0xc);
    FUN_00501750(iVar5,local_18,1);
    local_4 = 0xffffffff;
    FUN_004de730();
    FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(float *)(param_1 + 0x80) * _DAT_005cef60,
                 *(float *)(param_1 + 0x80) * _DAT_005c75e0,3,0);
    local_2c = (undefined1)param_2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar1 = *(uint *)(param_1 + 0x78);
    local_4 = 1;
    local_30 = 0;
    uVar4 = FUN_005ad970();
    uVar3 = local_24;
    if (uVar4 < uVar1) {
      puVar9 = &local_30;
      iVar5 = FUN_005ad970(puVar9);
      FUN_00537260(uVar3,uVar1 - iVar5,puVar9);
    }
    else {
      uVar4 = FUN_005ad970();
      if (uVar1 < uVar4) {
        FUN_005995c0(local_28 + uVar1 * 4,local_24);
      }
    }
    local_3c = *(int *)(param_1 + 0x78);
    param_2 = 0;
    if (0 < local_3c) {
      do {
        fVar2 = (float)param_2;
        param_2 = param_2 + 1;
        *(float *)(local_28 + -4 + param_2 * 4) =
             -((fVar2 * *(float *)(param_1 + 0x84)) / (float)local_3c) - _DAT_005d8464;
        local_3c = *(int *)(param_1 + 0x78);
      } while (param_2 < local_3c);
    }
    FUN_00501750(*(undefined4 *)(param_1 + 0x78),local_28,1);
    local_4 = 0xffffffff;
    FUN_004de730();
  }
  else {
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 2;
    }
    ExceptionList = &local_c;
    if ((7 < param_2) && (ExceptionList = &local_c, 7 < iVar8)) {
      iVar7 = 0;
      ExceptionList = &local_c;
      if (0 < param_2) {
        iVar6 = (iVar8 - param_2) * 4;
        ExceptionList = &local_c;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0xcc) + iVar7 * 4) =
               *(undefined4 *)(iVar6 + *(int *)(param_1 + 0xcc));
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < param_2);
      }
      while (iVar7 < iVar8) {
        local_3c = *(int *)(param_1 + 0xcc);
        param_2 = rand();
        iVar7 = iVar7 + 1;
        *(float *)(local_3c + -4 + iVar7 * 4) =
             (*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe8)) *
             (float)param_2 * _DAT_005da778 + *(float *)(param_1 + 0xe8);
      }
      FUN_005018a0(*(undefined4 *)(param_1 + 0xcc),iVar8 + -1,param_1 + 0xd8);
    }
    if (*(int *)(param_1 + 0xf4) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 2;
    }
    if ((7 < iVar5) && (7 < iVar8)) {
      iVar7 = 0;
      if (0 < iVar5) {
        iVar6 = (iVar8 - iVar5) * 4;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0xf4) + iVar7 * 4) =
               *(undefined4 *)(iVar6 + *(int *)(param_1 + 0xf4));
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < iVar5);
      }
      while (iVar7 < iVar8) {
        iVar5 = *(int *)(param_1 + 0xf4);
        param_2 = rand();
        iVar7 = iVar7 + 1;
        *(float *)(iVar5 + -4 + iVar7 * 4) =
             (*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x110)) *
             (float)param_2 * _DAT_005da778 + *(float *)(param_1 + 0x110);
      }
      FUN_005018a0(*(undefined4 *)(param_1 + 0xf4),iVar8 + -1,param_1 + 0x100);
    }
  }
  ExceptionList = local_c;
  return;
}

