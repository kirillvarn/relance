
undefined4 FUN_004249c0(undefined4 param_1,uint *param_2,int param_3)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  uint _Mask;
  tagRECT *lpRect;
  tagRECT local_3c;
  uint local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_7;
  
  if (*(int *)Pipeline_exref == 0) {
    return 0;
  }
  if ((param_2[2] != 0) && (param_2[3] != 0)) {
    puVar3 = local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    DAT_00610864 = 0;
    if ((char)local_7 == '\0') {
      lpRect = &local_3c;
      local_1c = 0xffffffff;
      local_18 = 0xffffffff;
      hWnd = GetDesktopWindow();
      GetWindowRect(hWnd,lpRect);
      if (((uint)local_3c.right < local_2c[2]) || ((uint)local_3c.bottom < local_2c[3])) {
        local_2c[3] = (uint)(local_3c.right * 3) >> 2;
        local_2c[2] = local_3c.right;
      }
    }
    bVar4 = (char)local_7 != '\0';
    local_18 = 0xffffffff;
    local_2c[0] = 0xffffffff;
    if (bVar4) {
      FUN_00424870(param_1,local_7,local_2c[2],local_2c[3]);
    }
    iVar2 = (**(code **)(**(int **)Pipeline_exref + 0x30))
                      (*(int **)Pipeline_exref,param_1,local_2c,param_3);
    if (iVar2 == 0) {
      FUN_00424510();
      iVar2 = (**(code **)(**(int **)VertexBuffer_exref + 0xc))
                        (*(int **)VertexBuffer_exref,1,0x252,0xfc00,0);
      if (iVar2 == 0) {
        if (!bVar4) {
          FUN_00424870(param_1,*(undefined1 *)(param_3 + 0x25),*(undefined4 *)(param_3 + 8),
                       *(undefined4 *)(param_3 + 0xc));
        }
        uVar1 = _control87(0,0);
        DAT_0061084c = (-(uint)((uVar1 & 0x30000) != 0x20000) & 0x1d) + 0x18;
        if (DAT_0061084c != DAT_00610848) {
          if (DAT_00610848 == 0x18) {
            _Mask = 0x30000;
            uVar1 = 0x20000;
          }
          else if (DAT_00610848 == 0x35) {
            _Mask = 0x30000;
            uVar1 = 0x10000;
          }
          else {
            _Mask = 0;
            uVar1 = 0;
          }
          _control87(uVar1,_Mask);
        }
        FUN_00421620(0,0,DAT_00610850,DAT_00610854,
                     "E:\\FL\\Scratch\\Source\\Client\\cmn\\RenderMgr.cpp",0x269);
        InitializeRichText(DAT_00610854);
        ReinitializeRichTextFonts();
        FUN_004213d0(DAT_00610850,DAT_00610854);
        FUN_004180c0(DAT_00610850,DAT_00610854);
        FUN_0059dcc0(DAT_00610850,DAT_00610854);
        if (DAT_0067ecac != (int *)0x0) {
          (**(code **)(*DAT_0067ecac + 0x2c))(DAT_00610850,DAT_00610854);
        }
        FUN_00420350(DAT_00610865,DAT_00610850,DAT_00610854,DAT_006679f0);
        DAT_00610864 = 1;
        return 1;
      }
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\RenderMgr.cpp",0x24b,
                 "unable to initialize VertexBuffer manager\n");
      return 0;
    }
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: RenderMgr - failed to create_buffers(%d,%d) %d,%d\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\RenderMgr.cpp",0x240,local_3c.right,
               local_3c.bottom,local_2c[0],local_2c[1]);
    return 0;
  }
  return 0;
}

