
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a06a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005792b0(0x15);
  if (iVar2 != 0) {
    cVar1 = FUN_00420d60();
    if (cVar1 != '\0') {
      FUN_00421ed0(0xb71);
      *(float *)(param_1 + 0x94) = (float)(byte)DAT_00679bb4 * _DAT_005c7f68;
      *(float *)(param_1 + 0x98) = (float)DAT_00679bb4._1_1_ * _DAT_005c7f68;
      *(float *)(param_1 + 0x9c) = (float)DAT_00679bb4._2_1_ * _DAT_005c7f68;
      *(float *)(param_1 + 0xa4) = (float)DAT_00679bb4._3_1_ * _DAT_005c7f68;
      FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
      FUN_00421ed0(0xb71);
    }
  }
  return;
}

