
void __fastcall FUN_004f1b40(int param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  bVar1 = SinglePlayer();
  if (!bVar1) {
    fVar5 = (float10)FUN_0042d680();
    fVar5 = fVar5 + (float10)*(float *)(param_1 + 0x440);
    *(float *)(param_1 + 0x440) = (float)fVar5;
    if ((float10)DAT_005d8f00 <= fVar5) {
      *(float *)(param_1 + 0x440) = (float)(fVar5 - (float10)DAT_005d8f00);
      uVar2 = CDPClient::GetPingDelay();
      uVar3 = CDPClient::GetPingDelay();
      if (uVar3 < 0x4b1) {
        *(undefined1 *)(param_1 + 0x444) = 0;
        (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))(0x18,&DAT_00679ba4,&DAT_00679ba4);
      }
      else {
        *(bool *)(param_1 + 0x444) = *(char *)(param_1 + 0x444) == '\0';
        (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))(0x18,&DAT_00679ba8,&DAT_00679ba8);
      }
      if ((uVar2 < 0x259) || (*(char *)(param_1 + 0x444) != '\0')) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))(1,uVar4,0);
      return;
    }
  }
  return;
}

