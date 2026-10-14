
void __fastcall FUN_0048dd40(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc4d9;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    local_4._0_1_ = 3;
    local_4._1_3_ = 0;
    ExceptionList = &pvStack_c;
    FUN_004144f0();
    piVar2 = (int *)puVar1[5];
    piVar3 = (int *)puVar1[4];
    local_4 = CONCAT31(local_4._1_3_,2);
    for (; piVar3 != piVar2; piVar3 = piVar3 + 2) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
    }
    FUN_005b7e1d(puVar1[4]);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    FUN_005b7e1d(puVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0059ef20();
  ExceptionList = pvStack_c;
  return;
}

