
void FUN_00590b40(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4924;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = 0;
    param_1[3] = 0;
    pwVar3 = (wchar_t *)param_2[2];
    if (pwVar3 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar3);
      uVar1 = sVar4 + 1;
      if ((uint)param_1[3] < uVar1) {
        if ((void *)param_1[2] == (void *)0x0) {
          puVar6 = malloc(uVar1 * 2);
          param_1[2] = puVar6;
          *puVar6 = 0;
        }
        else {
          pvVar5 = realloc((void *)param_1[2],uVar1 * 2);
          param_1[2] = pvVar5;
        }
        param_1[3] = uVar1;
      }
      wcsncpy((wchar_t *)param_1[2],pwVar3,sVar4);
      *(undefined2 *)(param_1[2] + sVar4 * 2) = 0;
    }
    piVar2 = param_1 + 4;
    *piVar2 = 0;
    param_1[5] = 0;
    pwVar3 = (wchar_t *)param_2[4];
    local_4._0_1_ = 1;
    if (pwVar3 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar3);
      FUN_004142a0(sVar4 + 1);
      wcsncpy((wchar_t *)*piVar2,pwVar3,sVar4);
      *(undefined2 *)(*piVar2 + sVar4 * 2) = 0;
    }
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (param_2[8] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(param_2[9] - param_2[8]) >> 3;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    pvVar5 = operator_new(iVar7 << 3);
    param_1[8] = pvVar5;
    uVar8 = FUN_00591420(param_2[8],param_2[9],pvVar5);
    param_1[9] = uVar8;
    param_1[10] = uVar8;
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  }
  ExceptionList = local_c;
  return;
}

