
void __fastcall FUN_005594b0(undefined4 *param_1)

{
  int *piVar1;
  uchar *puVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c157b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e14a4;
  local_4 = 0;
  for (uVar3 = 0; (param_1[9] != 0 && (uVar3 < (uint)((int)(param_1[10] - param_1[9]) >> 2)));
      uVar3 = uVar3 + 1) {
    FUN_0041b030(param_1[9] + uVar3 * 4);
  }
  puVar2 = (uchar *)FUN_00527820(param_1[10],param_1[10],param_1[9]);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 8),puVar2,param_1[10]);
  param_1[10] = puVar2;
  piVar1 = (int *)*DAT_00679a14;
  do {
    if (piVar1 == DAT_00679a14) {
LAB_00559564:
      FUN_005b7e1d(param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      ExceptionList = local_c;
      return;
    }
    if ((undefined4 *)piVar1[2] == param_1) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_005b7e1d(piVar1);
      DAT_00679a18 = DAT_00679a18 + -1;
      goto LAB_00559564;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

