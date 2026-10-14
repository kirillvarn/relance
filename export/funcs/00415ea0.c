
undefined4 __thiscall FUN_00415ea0(int param_1,int param_2)

{
  HFONT h;
  
  if (*(HGDIOBJ *)(param_1 + 0x118) != (HGDIOBJ)0x0) {
    if (*(int *)(param_1 + 0x11c) == param_2) {
      return 1;
    }
    if (param_2 == *(int *)(param_1 + 0x120)) {
      return 1;
    }
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  ((LOGFONTA *)(param_1 + 0xdc))->lfHeight = param_2;
  h = CreateFontIndirectA((LOGFONTA *)(param_1 + 0xdc));
  *(HFONT *)(param_1 + 0x118) = h;
  if (h != (HFONT)0x0) {
    *(int *)(param_1 + 0x11c) = param_2;
    SelectObject(*(HDC *)(param_1 + 0xd8),h);
    GetTextMetricsA(*(HDC *)(param_1 + 0xd8),(LPTEXTMETRICA)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x158) = DAT_006105b0;
    return 1;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: failed to create font %s height=%d\n",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\Font.cpp",0x9ae,param_1 + 8,param_2);
  return 0;
}

