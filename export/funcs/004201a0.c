
void __thiscall FUN_004201a0(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  tagPOINT local_1c;
  tagCURSORINFO tStack_14;
  
  if (param_2 == '\0') {
    piVar1 = *(int **)(param_1 + 0x10);
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 4);
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf3;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_005b7e1d(piVar3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar3 = piVar2;
    }
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,DAT_0067eca0,6);
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf7;
    }
    tStack_14.cbSize = 0x14;
    GetCursorInfo(&tStack_14);
    if (((byte)tStack_14.flags & 1) == 0) {
      local_1c.x = DAT_00616840;
      local_1c.y = DAT_00616844;
      BVar4 = ClientToScreen(DAT_0067eca0,&local_1c);
      if (BVar4 != 0) {
        SetCursorPos(local_1c.x,local_1c.y);
      }
      do {
        iVar5 = ShowCursor(1);
      } while (iVar5 < 1);
    }
    return;
  }
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((((DAT_00679bc8 != 0) && (DAT_00679bcc != 0)) && (DAT_00679be5 == '\0')) &&
     ((BVar4 = GetCursorPos(&local_1c), BVar4 != 0 &&
      (BVar4 = ScreenToClient(DAT_0067eca0,&local_1c), BVar4 != 0)))) {
    DAT_00616840 = local_1c.x;
    DAT_00616844 = local_1c.y;
    DAT_00616848 = 0;
  }
  if (DAT_00616840 < 0) {
    DAT_00616840 = 0;
  }
  else if (DAT_00610850 <= DAT_00616840) {
    DAT_00616840 = DAT_00610850 + -1;
  }
  if (DAT_00616844 < 0) {
    DAT_00616844 = 0;
  }
  else if (DAT_00610854 <= DAT_00616844) {
    DAT_00616844 = DAT_00610854 + -1;
  }
  do {
    iVar5 = ShowCursor(0);
  } while (-1 < iVar5);
  return;
}

