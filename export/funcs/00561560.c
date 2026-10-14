
void __fastcall FUN_00561560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0057c2c0(*(undefined4 *)(param_1 + 0xb8),0x18);
  iVar2 = wcscmp(*(wchar_t **)(param_1 + 0xb8),L"higeneko");
  if (iVar2 == 0) {
    wcscpy(*(wchar_t **)(param_1 + 0xb8),(wchar_t *)s_r0R0m0S0_00614344);
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
    FUN_0057bff0();
    FUN_0057c0e0(uVar1,0);
  }
  if (**(short **)(param_1 + 0xb8) != 0) {
    iVar2 = FUN_005aa750(*(short **)(param_1 + 0xb8));
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0xe4) = 1;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      FUN_00561b20();
      return;
    }
    if ((iVar2 == 2) || (iVar2 != 4)) {
      *(undefined4 *)(param_1 + 0xe4) = 2;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      FUN_00561b20();
      return;
    }
    FUN_00473cb0(0x738,0,0);
  }
  return;
}

