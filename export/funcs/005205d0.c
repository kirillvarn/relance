
/* WARNING: Removing unreachable block (ram,0x00520727) */
/* WARNING: Removing unreachable block (ram,0x0052073d) */

void __fastcall FUN_005205d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piStack_18;
  uchar *puStack_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c0041;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  if (*(CAsteroidField **)(param_1 + 4) != (CAsteroidField *)0x0) {
    ExceptionList = &pvStack_c;
    CmnAsteroid::CAsteroidField::Release(*(CAsteroidField **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_00425a20();
  piVar2 = *(int **)(param_1 + 0x18c);
  piVar4 = *(int **)(param_1 + 0x188);
  piStack_18 = piVar2;
  if (piVar4 != piVar2) {
    do {
      puStack_14 = (uchar *)*piVar4;
      if (puStack_14 != (uchar *)0x0) {
        FUN_0054c600();
        FUN_005b7e1d(puStack_14);
        piVar2 = piStack_18;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
  }
  puStack_14 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x18c),
                                     *(undefined4 *)(param_1 + 0x18c),
                                     *(undefined4 *)(param_1 + 0x188));
  IDPMsgHandler::OnReceive
            ((IDPMsgHandler *)(param_1 + 0x184),puStack_14,*(ulong *)(param_1 + 0x18c));
  *(uchar **)(param_1 + 0x18c) = puStack_14;
  piVar2 = *(int **)(param_1 + 0x228);
  piVar4 = *(int **)(param_1 + 0x224);
  piStack_18 = piVar2;
  if (piVar4 != piVar2) {
    do {
      puStack_14 = (uchar *)*piVar4;
      if (puStack_14 != (uchar *)0x0) {
        FUN_00525760();
        FUN_005b7e1d(puStack_14);
        piVar2 = piStack_18;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
  }
  piStack_18 = *(int **)(param_1 + 0x228);
  puStack_14 = *(uchar **)(param_1 + 0x224);
  IDPMsgHandler::OnReceive
            ((IDPMsgHandler *)(param_1 + 0x220),puStack_14,*(ulong *)(param_1 + 0x228));
  *(uchar **)(param_1 + 0x228) = puStack_14;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x224));
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x188));
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  local_4._0_1_ = 1;
  FUN_0054c600();
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  local_4 = (uint)local_4._1_3_ << 8;
  puVar3 = (undefined4 *)FUN_0053e430(&puStack_14);
  FUN_00509ca0(&piStack_18,*puVar3,uVar1);
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_4 = 0xffffffff;
  FUN_00527310(&local_10,**(undefined4 **)(param_1 + 0xc),*(undefined4 **)(param_1 + 0xc));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = pvStack_c;
  return;
}

