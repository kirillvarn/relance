
undefined4 FUN_005b05a0(HWND param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  wchar_t local_200 [256];
  
  if (param_2 != 0x110) {
    if (param_2 == 0x111) {
      pHVar2 = GetDlgItem(param_1,0x84);
      LVar3 = SendMessageA(pHVar2,0xf0,0,0);
      switch(param_3) {
      case 1:
      case 6:
        DAT_0067a439 = LVar3 == 0;
        EndDialog(param_1,1);
        return 1;
      case 2:
      case 7:
        EndDialog(param_1,2);
        return 1;
      }
    }
    return 0;
  }
  iVar4 = FUN_004347e0();
  if (iVar4 == 0) {
    wcscpy(local_200,L"");
  }
  puVar1 = PTR_FUN_00616438;
  (*(code *)PTR_FUN_00616438)();
  GetDlgItem(param_1,0x83);
  (*(code *)puVar1)();
  pHVar2 = GetDlgItem(param_1,0x84);
  iVar4 = FUN_004347e0();
  if (iVar4 == 0) {
    wcscpy((wchar_t *)&stack0xfffffdf0,L"");
  }
  (*(code *)puVar1)();
  SendMessageA(pHVar2,0xf1,(uint)(DAT_0067a439 == '\0'),0);
  (*(code *)PTR_FUN_00616424)();
  pHVar2 = GetDlgItem(param_1,0x85);
  iVar4 = FUN_004347e0(DAT_0067eca8,0x87,&stack0xfffffde0,0x100);
  if (iVar4 == 0) {
    wcscpy((wchar_t *)&stack0xfffffde0,L"");
  }
  (*(code *)puVar1)(pHVar2,&stack0xfffffde0);
  pHVar2 = GetDlgItem(param_1,6);
  iVar4 = FUN_004347e0(DAT_0067eca8,0x4dc,&stack0xfffffdd8,0x100);
  if (iVar4 == 0) {
    wcscpy((wchar_t *)&stack0xfffffdd8,L"");
  }
  (*(code *)puVar1)(pHVar2,&stack0xfffffdd8);
  pHVar2 = GetDlgItem(param_1,7);
  iVar4 = FUN_004347e0(DAT_0067eca8,0x4dd,&stack0xfffffdd0,0x100);
  if (iVar4 == 0) {
    wcscpy((wchar_t *)&stack0xfffffdd0,L"");
  }
  (*(code *)puVar1)(pHVar2,&stack0xfffffdd0);
  return 1;
}

