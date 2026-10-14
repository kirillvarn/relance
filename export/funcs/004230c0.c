
void FUN_004230c0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_2;
  puVar3 = param_1;
  FUN_00421ed0(0xde1);
  param_1 = param_1 + param_2 * 3;
  if (1 < param_3 + -1) {
    param_2 = param_3 + -2;
    do {
      FUN_00421670(7);
      iVar2 = iVar1;
      if (0 < iVar1) {
        do {
          FUN_00421cc0(*param_1,param_1[1],param_1[2]);
          param_1 = param_1 + 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00421690();
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (0 < iVar1) {
    param_1 = (undefined4 *)iVar1;
    do {
      FUN_00421670(3);
      puVar4 = puVar3;
      iVar2 = param_3;
      if (0 < param_3) {
        do {
          FUN_00421cc0(*puVar4,puVar4[1],puVar4[2]);
          puVar4 = puVar4 + iVar1 * 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00421690();
      puVar3 = puVar3 + 3;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  return;
}

