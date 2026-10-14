
void __fastcall FUN_004c9900(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  int *piVar6;
  int local_18;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd93e;
  pvStack_c = ExceptionList;
  piVar6 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar5 = &pvStack_c;
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)piVar6[0xf];
      local_10 = piVar1;
      if (piVar1 != (int *)0x0) {
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004c9a30();
        local_18 = 4;
        do {
          FUN_00420f70();
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if (*piVar1 != 0) {
          (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*piVar1);
          *piVar1 = 0;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_005b7ec6(piVar1 + 1,0x10,4,FUN_00420d10);
        FUN_005b7e1d(piVar1);
      }
      piVar6[0xf] = 0;
      piVar1 = (int *)*piVar6;
      *(int **)piVar6[1] = piVar1;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_005b7e1d(piVar6);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar6 = piVar1;
      ppvVar5 = ExceptionList;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = ppvVar5;
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar4 != puVar2) {
    puVar3 = (undefined4 *)*puVar4;
    FUN_00516f70(&local_10,puVar4);
    puVar4 = puVar3;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = pvStack_c;
  return;
}

