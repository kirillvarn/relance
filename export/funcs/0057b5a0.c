
undefined1 __thiscall FUN_0057b5a0(int param_1,undefined4 param_2)

{
  LPVOID lpParam;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  
  uVar4 = FUN_004b5060(param_2,0);
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x400) = 1;
  *(undefined1 *)(param_1 + 0x401) = 1;
  *(undefined4 *)(param_1 + 0x330) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x334) = 0x3e99999a;
  FUN_00579e90();
  lpParam = *(LPVOID *)(param_1 + 0x32c);
  if (lpParam != (LPVOID)0x0) {
    if (*(HWND *)((int)lpParam + 8) != (HWND)0x0) {
      DestroyWindow(*(HWND *)((int)lpParam + 8));
      *(undefined4 *)((int)lpParam + 8) = 0;
    }
    cVar5 = FUN_0057b700();
    if (cVar5 != '\0') {
      CreateWindowExA(0,PTR_s_RichDisplayDebugWindow_005e4573_1_0061516c,"Rich Text Display Window",
                      0xcf0000,100,100,0x100,0x120,DAT_0067eca0,(HMENU)0x0,DAT_0067eca4,lpParam);
      if (*(HWND *)((int)lpParam + 8) != (HWND)0x0) {
        ShowWindow(*(HWND *)((int)lpParam + 8),5);
        UpdateWindow(*(HWND *)((int)lpParam + 8));
      }
    }
  }
  piVar1 = *(int **)(param_1 + 0x48c);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar3);
    *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + -1;
    piVar3 = piVar2;
  }
  return uVar4;
}

