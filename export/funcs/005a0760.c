
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a0760(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005792b0(0x15);
  if (iVar2 != 0) {
    cVar1 = FUN_00420d60();
    if (cVar1 != '\0') {
      FUN_00421ed0(0xb71);
      param_1[0x25] = (int)((float)(byte)DAT_00679bb4 * _DAT_005c7f68);
      param_1[0x26] = (int)((float)DAT_00679bb4._1_1_ * _DAT_005c7f68);
      param_1[0x27] = (int)((float)DAT_00679bb4._2_1_ * _DAT_005c7f68);
      param_1[0x29] = (int)((float)DAT_00679bb4._3_1_ * _DAT_005c7f68);
      FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
      FUN_00421ed0(0xb71);
    }
  }
  FUN_0059e5c0();
                    /* WARNING: Could not recover jumptable at 0x005a082b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x9c))();
  return;
}

