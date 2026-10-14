
uint __fastcall FUN_0041f7b0(int param_1)

{
  byte bVar1;
  HWND in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
    in_EAX = GetForegroundWindow();
    if (in_EAX == DAT_0067eca0) {
      iVar4 = 0;
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(*(int **)(param_1 + 0x10));
        if (iVar2 != -0x7ff8ffe2) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 100);
      uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(-1 < iVar2) << 2 ^ *(byte *)(param_1 + 0x14)) &
              0xffffff04;
      bVar1 = (byte)uVar3 ^ *(byte *)(param_1 + 0x14);
      in_EAX = (HWND)CONCAT31((int3)(uVar3 >> 8),bVar1);
      *(byte *)(param_1 + 0x14) = bVar1;
      if (((bVar1 & 4) != 0) && ((bVar1 & 2) != 0)) {
        in_EAX = (HWND)(**(code **)(**(int **)(param_1 + 0x10) + 0x24))
                                 (*(int **)(param_1 + 0x10),0x14,(int *)(param_1 + 0x2c));
        if (-1 < (int)in_EAX) {
          in_EAX = (HWND)(*(int *)(param_1 + 0x2c) - DAT_00616840);
          *(HWND *)(param_1 + 0x18) = in_EAX;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x30) - DAT_00616844;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x34) - DAT_00616848;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0x14) >> 2) & 0xffffff01;
}

