
undefined4 * __thiscall FUN_00590d70(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  short *psVar3;
  size_t sVar4;
  void *pvVar5;
  undefined2 *puVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  pwVar2 = (wchar_t *)param_2[2];
  if (pwVar2 == (wchar_t *)0x0) {
    psVar3 = (short *)param_1[2];
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      *psVar3 = 0;
    }
  }
  else {
    sVar4 = wcslen(pwVar2);
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
    wcsncpy((wchar_t *)param_1[2],pwVar2,sVar4);
    *(undefined2 *)(param_1[2] + sVar4 * 2) = 0;
  }
  pwVar2 = (wchar_t *)param_2[4];
  if (pwVar2 == (wchar_t *)0x0) {
    psVar3 = (short *)param_1[4];
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      *psVar3 = 0;
    }
  }
  else {
    sVar4 = wcslen(pwVar2);
    uVar1 = sVar4 + 1;
    if ((uint)param_1[5] < uVar1) {
      if ((void *)param_1[4] == (void *)0x0) {
        puVar6 = malloc(uVar1 * 2);
        param_1[4] = puVar6;
        *puVar6 = 0;
      }
      else {
        pvVar5 = realloc((void *)param_1[4],uVar1 * 2);
        param_1[4] = pvVar5;
      }
      param_1[5] = uVar1;
    }
    wcsncpy((wchar_t *)param_1[4],pwVar2,sVar4);
    *(undefined2 *)(param_1[4] + sVar4 * 2) = 0;
  }
  param_1[6] = param_2[6];
  FUN_00591230(param_2 + 7);
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
  return param_1;
}

