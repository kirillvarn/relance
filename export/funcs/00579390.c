
void __fastcall FUN_00579390(undefined4 *param_1)

{
  if ((HDC)*param_1 != (HDC)0x0) {
    if ((HGDIOBJ)param_1[2] != (HGDIOBJ)0x0) {
      SelectObject((HDC)*param_1,(HGDIOBJ)param_1[2]);
    }
    if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[1]);
    }
    DeleteDC((HDC)*param_1);
  }
  param_1[4] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

