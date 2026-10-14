
void __fastcall FUN_0057ab10(int *param_1)

{
  TextRenderContext *this;
  ushort uVar1;
  UINT cLines;
  int *piVar2;
  HBRUSH hbr;
  void *lpvBits;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  tagBITMAPINFO *ptVar7;
  int local_60;
  RECT local_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  tagBITMAPINFO local_2c;
  
  if ((*(byte *)(param_1 + 0x1b) & 2) == 0) {
    return;
  }
  FUN_00579e90();
  if ((((*(char *)((int)param_1 + 0x401) == '\0') && ((char)param_1[0x100] == '\0')) ||
      (param_1[0xd6] < 1)) || (param_1[0xd7] < 1)) goto LAB_0057ae1d;
  SelectClipRgn((HDC)param_1[0xf5],(HRGN)0x0);
  local_5c.bottom = param_1[0xf9];
  local_5c.right = param_1[0xf8];
  local_5c.top = 0;
  local_5c.left = 0;
  hbr = CreateSolidBrush(0);
  FillRect((HDC)param_1[0xf5],&local_5c,hbr);
  if (hbr != (HBRUSH)0x0) {
    DeleteObject(hbr);
  }
  if (param_1[0xfc] != 0) {
    FUN_00595de0((float)param_1[0xd7]);
    local_60 = param_1[0xd7] / 10;
    FUN_00595e10((float)local_60);
  }
  FUN_0057a680();
  iVar3 = param_1[0x102];
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar3 = 0;
    }
    else if (iVar3 == 2) {
      iVar3 = (param_1[0xd7] - param_1[0xe0]) / 2;
    }
    else {
      if (iVar3 != 3) goto LAB_0057ac53;
      iVar3 = param_1[0xd7] - param_1[0xe0];
    }
    iVar5 = param_1[0xd8];
    TextRenderContext::set_origin_v((TextRenderContext *)(param_1 + 0xe1),iVar3);
    TextRenderContext::set_origin_h((TextRenderContext *)(param_1 + 0xe1),-iVar5);
  }
LAB_0057ac53:
  this = (TextRenderContext *)(param_1 + 0xe1);
  TextRenderContext::reset_to_default(this);
  TextRenderContext::set_pos_v(this,0);
  TextRenderContext::set_pos_h(this,0);
  RenderDisplayList::execute((RenderDisplayList *)(param_1 + 0xdd),this,true);
  iVar3 = param_1[0xfa];
  iVar5 = param_1[0xf9];
  lpvBits = operator_new(iVar3 * iVar5);
  local_2c.bmiHeader.biWidth = param_1[0xf8];
  ptVar7 = &local_2c;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    (ptVar7->bmiHeader).biSize = 0;
    ptVar7 = (tagBITMAPINFO *)&(ptVar7->bmiHeader).biWidth;
  }
  cLines = param_1[0xf9];
  local_2c.bmiHeader.biHeight = -cLines;
  local_2c.bmiHeader.biSize = 0x28;
  local_2c.bmiHeader.biBitCount = 0x10;
  local_2c.bmiHeader.biPlanes = 1;
  local_2c.bmiHeader.biCompression = 0;
  local_2c.bmiHeader.biClrUsed = 0;
  local_2c.bmiHeader.biClrImportant = 0;
  local_2c.bmiHeader.biSizeImage = iVar3 * iVar5;
  SelectObject((HDC)param_1[0xf5],(HGDIOBJ)param_1[0xf7]);
  iVar3 = GetDIBits((HDC)param_1[0xf5],(HBITMAP)param_1[0xf6],0,cLines,lpvBits,&local_2c,0);
  SelectObject((HDC)param_1[0xf5],(HGDIOBJ)param_1[0xf6]);
  if ((iVar3 != 0) && (iVar3 = 0, pvVar6 = lpvBits, 0 < param_1[0xf9])) {
    do {
      iVar5 = 0;
      if (0 < param_1[0xf8]) {
        do {
          uVar1 = *(ushort *)((int)pvVar6 + iVar5 * 2);
          if (uVar1 != 0) {
            *(ushort *)((int)pvVar6 + iVar5 * 2) = uVar1 | 0x8000;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[0xf8]);
      }
      pvVar6 = (void *)((int)pvVar6 + param_1[0xfa]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0xf9]);
  }
  if ((*(char *)((int)param_1 + 0x472) == '\0') && (param_1[0xfb] != 0)) {
    local_60 = FUN_005b7010(0);
    FUN_005b7050(0x10,5,5,5,1);
    iVar3 = (**(code **)(*(int *)param_1[0xfb] + 0x28))
                      ((int *)param_1[0xfb],lpvBits,&local_60,param_1[0xf8],param_1[0xf9],
                       param_1[0xfa]);
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_1 + 0x401) = 0;
    }
    else {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Interface\\RichDisplay.cpp",0x5a1,
                 "Failed to set BigImage from a buffer.\n");
    }
  }
  FUN_005b7e1d(lpvBits);
LAB_0057ae1d:
  FUN_005a06a0();
  piVar2 = (int *)param_1[0xfb];
  if (piVar2 != (int *)0x0) {
    local_5c.left = 0x3f800000;
    local_5c.top = 0x3f800000;
    local_5c.right = 0x3f800000;
    (**(code **)(*piVar2 + 0x18))(piVar2,param_1[0x11d]);
    (**(code **)(*(int *)param_1[0xfb] + 0x1c))((int *)param_1[0xfb],&stack0xffffff9c);
    local_5c.top = param_1[0xd3];
    local_5c.left = param_1[0xd2];
    local_5c.bottom = param_1[0xd5] + 1;
    local_5c.right = param_1[0xd4] + 1;
    iStack_40 = (param_1[0xd5] - local_5c.top) + 1;
    iStack_44 = (param_1[0xd4] - local_5c.left) + 1;
    uStack_48 = 0;
    uStack_4c = 0;
    (**(code **)(*(int *)param_1[0xfb] + 0x10))((int *)param_1[0xfb],&uStack_4c,&local_5c);
    if (*(char *)((int)param_1 + 0x402) != '\0') {
      FUN_00421ed0(0xb71);
      FUN_00421ed0(0xb44);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,0);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,1);
      FUN_00422690(0,param_1 + 0xf);
      FUN_00421ba0((int)param_1 + 0x403);
      FUN_00421ed0(0xde1);
      FUN_00421670(7);
      FUN_00421cc0(0,0,0);
      FUN_00421cc0(param_1[0xcc],0,0);
      FUN_00421cc0(param_1[0xcc],-(float)param_1[0xcd],0);
      FUN_00421cc0(0,-(float)param_1[0xcd],0);
      FUN_00421690();
      FUN_00421dd0(0xb71);
      FUN_00422190(1);
    }
  }
  FUN_0059e5c0();
  (**(code **)(*param_1 + 0x9c))();
  return;
}

