
void FUN_004997d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  void *local_21c [2];
  int local_214 [2];
  undefined2 auStack_20c [128];
  wchar_t local_10c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bca7e;
  local_c = ExceptionList;
  uVar4 = 0;
  if (*(int *)(param_2 + 0x78) == 0) {
    ExceptionList = &local_c;
    local_21c[0] = operator_new(0x34);
    local_4 = 0;
    if (local_21c[0] == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004144b0();
    }
    *(int *)(param_2 + 0x78) = iVar2;
    local_4 = 0xffffffff;
    if (*(int **)(iVar2 + 0x1c) != param_1) {
      *(int **)(iVar2 + 0x1c) = param_1;
      for (; (iVar1 = *(int *)(iVar2 + 0x10), iVar1 != 0 &&
             (uVar4 < (uint)(*(int *)(iVar2 + 0x14) - iVar1 >> 3))); uVar4 = uVar4 + 1) {
        (**(code **)(**(int **)(iVar1 + uVar4 * 8) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      *(undefined4 *)(iVar2 + 0x28) = 0;
    }
    FUN_004145d0(0x3f800000,*(undefined4 *)(local_214[0] + 0x3d0));
    iVar2 = FUN_004347e0(DAT_0067eca8,*(undefined4 *)(param_2 + 0x4c),auStack_20c,0x80);
    if (iVar2 == 0) {
      auStack_20c[0] = 0;
    }
    FUN_00415860(auStack_20c);
    puVar3 = (uint *)(**(code **)(*param_1 + 0x20))(local_21c,auStack_20c,0xffffffff);
    uVar4 = *puVar3;
  }
  else {
    if (*(char *)(param_2 + 0x81) == *(char *)(param_2 + 0x80)) {
      return;
    }
    ExceptionList = &local_c;
    *(char *)(param_2 + 0x80) = *(char *)(param_2 + 0x81);
    iVar2 = FUN_004347e0(DAT_0067eca8,*(undefined4 *)(param_2 + 0x4c),local_10c,0x80);
    if (iVar2 == 0) {
      local_10c[0] = L'\0';
    }
    if (*(char *)(param_2 + 0x80) == '\0') {
      wcscpy(&DAT_0066fc60,local_10c);
    }
    else {
      wcscpy(&DAT_0066fc60,L"*");
      wcscat(&DAT_0066fc60,local_10c);
    }
    FUN_00415860(&DAT_0066fc60);
    puVar3 = (uint *)(**(code **)(*param_1 + 0x20))(local_214,&DAT_0066fc60,0xffffffff);
    uVar4 = *puVar3;
  }
  *(float *)(param_2 + 0x7c) = (float)uVar4;
  ExceptionList = local_c;
  return;
}

