
/* WARNING: Removing unreachable block (ram,0x0041578c) */
/* WARNING: Removing unreachable block (ram,0x00415790) */

void FUN_004155c0(int param_1)

{
  short *psVar1;
  wchar_t *_Str;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 *extraout_ECX;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint unaff_retaddr;
  void *in_stack_00002008;
  void *local_c;
  int *local_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = (int *)&LAB_005b88a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  extraout_ECX[10] = DAT_006105b0;
  psVar1 = (short *)*extraout_ECX;
  iVar6 = 0;
  if (((psVar1 != (short *)0x0) && (*psVar1 != 0)) && ((int *)extraout_ECX[7] != (int *)0x0)) {
    local_c = (void *)0x0;
    if (*(char *)(extraout_ECX + 0xc) == '\0') {
      iVar6 = (**(code **)(*(int *)extraout_ECX[7] + 0x24))(extraout_ECX[0xb],psVar1,0xffffffff);
      if (0 < iVar6) {
        local_c = (void *)0x1;
        piVar3 = (int *)FUN_00414640(0,0);
        (**(code **)(*piVar3 + 0x14))(*extraout_ECX);
      }
    }
    else {
      FUN_005b7fba(&stack0x00000008,8,0x400,FUN_00415850,FUN_00444e20);
      uVar2 = extraout_ECX[2];
      if (0x3ff < uVar2) {
        uVar2 = 0x400;
      }
      local_8 = (int *)extraout_ECX[0xb];
      uStack_4 = 0;
      FUN_00418180(extraout_ECX[7],*extraout_ECX,(float)local_8,&stack0x00000008,&local_c,uVar2);
      if (0 < (int)local_c) {
        do {
          piVar3 = (int *)FUN_00414640(iVar6,0);
          _Str = *(wchar_t **)(&stack0x00000008 + iVar6 * 8);
          sVar4 = wcslen(_Str);
          while ((1 < (int)sVar4 && (sVar4 = sVar4 - 1, _Str[sVar4] == L' '))) {
            _Str[sVar4] = L'\0';
          }
          (**(code **)(*piVar3 + 0x14))(*(undefined4 *)(&stack0x00000008 + iVar6 * 8));
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_c);
      }
      FUN_005b7ec6(&stack0x00000008,8,0x400,FUN_00444e20);
    }
    local_8 = (int *)0x0;
    uStack_4 = uStack_4 & 0xffffff00;
    iVar6 = extraout_ECX[4];
    if (iVar6 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(extraout_ECX[5] - iVar6 >> 3);
    }
    if (pvVar5 < local_c) {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = extraout_ECX[5] - iVar6 >> 3;
      }
      FUN_00418610(extraout_ECX[5],(int)local_c - iVar6,&local_8);
    }
    else if ((iVar6 != 0) && (local_c < (void *)(extraout_ECX[5] - iVar6 >> 3))) {
      unaff_retaddr = extraout_ECX[5];
      uVar2 = iVar6 + (int)local_c * 8;
      for (uVar7 = uVar2; uVar7 != unaff_retaddr; uVar7 = uVar7 + 8) {
        FUN_00418f70(0);
      }
      extraout_ECX[5] = uVar2;
    }
    uVar2 = 0;
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 4))();
    }
    extraout_ECX[8] = 0;
    extraout_ECX[9] = 0;
    for (; (extraout_ECX[4] != 0 && (uVar2 < (uint)((int)(extraout_ECX[5] - extraout_ECX[4]) >> 3)))
        ; uVar2 = uVar2 + 1) {
      (**(code **)(**(int **)(extraout_ECX[4] + uVar2 * 8) + 0x18))(&stack0x00000000);
      if ((uint)extraout_ECX[8] < unaff_retaddr) {
        extraout_ECX[8] = unaff_retaddr;
      }
      extraout_ECX[9] = extraout_ECX[9] + param_1;
    }
  }
  ExceptionList = in_stack_00002008;
  return;
}

