
void __fastcall FUN_0059ce50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c4dd7;
  puVar1 = *(undefined4 **)(param_1 + 0x4b8);
  local_4 = 1;
  puVar5 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_0046d680(local_10,puVar5);
    puVar5 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x4b8));
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  piVar3 = *(int **)(param_1 + 0x4ac);
  local_4 = local_4 & 0xffffff00;
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    piVar4 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar6);
    *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + -1;
    piVar6 = piVar4;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x4ac));
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  local_4 = 0xffffffff;
  FUN_0057b260();
  ExceptionList = local_c;
  return;
}

