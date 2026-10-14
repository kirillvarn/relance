
void __fastcall FUN_00477da0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bbff5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d0eec;
  param_1[0x1f] = &PTR_OnReceive_005d0ee0;
  local_4 = 2;
  if (param_1[0xd8] != 0) {
    FUN_0059dd00(param_1[0xd8],0);
    piVar1 = (int *)param_1[0xd8];
    if (piVar1 != (int *)0x0) {
      iVar5 = piVar1[3];
      while (iVar5 != 0) {
        iVar2 = *(int *)(iVar5 + 8);
        FUN_0043d2a0(iVar5);
        iVar5 = iVar2;
      }
      (**(code **)(*piVar1 + 0x28))();
      (**(code **)*piVar1)(1);
    }
    param_1[0xd8] = 0;
    FUN_00442850();
  }
  local_18 = 0;
  local_14 = 0x3d9ba5e3;
  local_10 = 0xbfa4dd2f;
  FUN_0045a780(0x66,&local_18);
  piVar1 = (int *)param_1[0xeb];
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    piVar3 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_005b7e1d(piVar4);
    param_1[0xec] = param_1[0xec] + -1;
    piVar4 = piVar3;
  }
  FUN_005b7e1d(param_1[0xeb]);
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004c6200();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_c;
  return;
}

