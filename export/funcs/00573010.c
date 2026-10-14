
undefined4 __thiscall FUN_00573010(int param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  wint_t wVar3;
  size_t sVar4;
  ushort *puVar5;
  undefined4 local_58;
  
  if (param_2 == 0x3004) {
    FUN_005645c0(0);
    if (param_3 == 0x3e9) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x498) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x498) = 0;
      FUN_00579a90(1);
      FUN_00579a90(1);
      *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) & 0xfc
      ;
      *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) & 0xfc
      ;
      FUN_00564570(0x1b);
      FUN_00579890(0);
      FUN_00579890(0);
      FUN_00579890(0);
LAB_00573354:
      *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
      return 1;
    }
    if (param_3 != 0x3ea) {
      return 0;
    }
    FUN_0057c2c0(&local_58,0x29);
    uVar2 = (ushort)local_58;
    puVar5 = (ushort *)&local_58;
    while (uVar2 != 0) {
      wVar3 = towlower((wint_t)local_58);
      *puVar5 = wVar3;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar5;
      local_58 = (uint)uVar2;
    }
    sVar4 = wcslen((wchar_t *)&local_58);
    FUN_005b7e90();
    wcstombs(&stack0xffffff9c,(wchar_t *)&local_58,sVar4 + 1);
    bVar1 = CPlayerAccount::SetTextKey(&stack0xffffff9c);
    if (!bVar1) {
LAB_005732ba:
      FUN_00473cb0(0x76a,0,0);
      *(undefined4 *)(param_1 + 0xc4) = 0;
      return 1;
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x498) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x498) = 0;
  }
  else {
    if (param_2 == 0xf003) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x498) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x498) = 0;
      FUN_00579a90(1);
      FUN_00579a90(1);
      *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) & 0xfc
      ;
      *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) & 0xfc
      ;
      FUN_00564570(0x1b);
      FUN_00573370(0);
      goto LAB_00573354;
    }
    if (param_2 != 0xf004) {
      return 0;
    }
    FUN_0057c2c0(&local_58,0x29);
    uVar2 = (ushort)local_58;
    puVar5 = (ushort *)&local_58;
    while (uVar2 != 0) {
      wVar3 = towlower((wint_t)local_58);
      *puVar5 = wVar3;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar5;
      local_58 = (uint)uVar2;
    }
    sVar4 = wcslen((wchar_t *)&local_58);
    FUN_005b7e90();
    wcstombs(&stack0xffffff9c,(wchar_t *)&local_58,sVar4 + 1);
    bVar1 = CPlayerAccount::SetTextKey(&stack0xffffff9c);
    if (!bVar1) goto LAB_005732ba;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x498) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x498) = 0;
  }
  FUN_00579a90(1);
  FUN_00579a90(1);
  *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) & 0xfc;
  *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xec) + 0x6c) & 0xfc;
  FUN_00564570(0x1b);
  FUN_00573370(0);
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return 1;
}

