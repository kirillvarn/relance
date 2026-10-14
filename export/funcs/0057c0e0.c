
void __thiscall FUN_0057c0e0(int param_1,wint_t *param_2,wint_t *param_3)

{
  wint_t wVar1;
  wint_t *pwVar2;
  uchar *puVar3;
  wint_t **ppwVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  wint_t *local_18;
  int local_14;
  int local_10;
  ushort local_c [2];
  undefined4 local_8;
  
  puVar3 = (uchar *)FUN_0057fb50(*(undefined4 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x4cc),
                                 *(undefined4 *)(param_1 + 0x4c8));
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x4c4),puVar3,*(ulong *)(param_1 + 0x4cc));
  *(uchar **)(param_1 + 0x4cc) = puVar3;
  if (param_3 == (wint_t *)0x0) {
    local_8 = *(undefined4 *)(param_1 + 0x4d4);
  }
  else {
    local_8 = *(undefined4 *)param_3;
  }
  wVar1 = *param_2;
  param_3 = param_2;
  while (wVar1 != 0) {
    if (*(uint *)(param_1 + 0x510) != 0) {
      if (*(int *)(param_1 + 0x4c8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
      }
      if (*(uint *)(param_1 + 0x510) <= uVar6) break;
    }
    if (*(int *)(param_1 + 0x50c) == 0) {
      local_c[0] = *param_3;
    }
    else if (*(int *)(param_1 + 0x50c) == 1) {
      local_c[0] = towupper(*param_3);
    }
    else {
      local_c[0] = towlower(*param_3);
    }
    pwVar2 = *(wint_t **)(param_1 + 0x518);
    if (*(char *)(param_1 + 0x52a) == '\0') {
      local_14 = FUN_0057fa70(local_c);
      if ((local_14 == *(int *)(param_1 + 0x518)) || (local_c[0] < *(ushort *)(local_14 + 0xc))) {
        local_10 = *(int *)(param_1 + 0x518);
        piVar5 = &local_10;
      }
      else {
        piVar5 = &local_14;
      }
      if ((wint_t *)*piVar5 != pwVar2) goto LAB_0057c245;
    }
    else {
      FUN_0057f740(&param_2,local_c);
      if ((param_2 == *(wint_t **)(param_1 + 0x518)) || (local_c[0] < param_2[6])) {
        local_18 = *(wint_t **)(param_1 + 0x518);
        ppwVar4 = &local_18;
      }
      else {
        ppwVar4 = &param_2;
      }
      if (*ppwVar4 == pwVar2) {
LAB_0057c245:
        local_c[0] = *(ushort *)(param_1 + 0x528);
      }
    }
    FUN_0057eec0(*(undefined4 *)(param_1 + 0x4cc),1,local_c);
    param_3 = param_3 + 1;
    wVar1 = *param_3;
  }
  if (*(int *)(param_1 + 0x4c8) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
  }
  *(int *)(param_1 + 0x4a4) = iVar7;
  *(int *)(param_1 + 0x4a0) = iVar7;
  *(int *)(param_1 + 0x49c) = iVar7;
  FUN_0057d330();
  return;
}

