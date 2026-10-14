
void __fastcall FUN_00522480(int param_1)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c012b;
  puVar6 = *(undefined4 **)(param_1 + 0x44);
  local_4 = 0;
  ppvVar3 = &pvStack_c;
  puVar7 = (undefined4 *)*puVar6;
  pvStack_c = ExceptionList;
joined_r0x005224b0:
  ExceptionList = ppvVar3;
  if (puVar7 == puVar6) {
    piVar1 = *(int **)(param_1 + 0x44);
    piVar2 = (int *)*piVar1;
    if (((*(int *)(param_1 + 0x50) == 0) ||
        (piVar5 = (int *)FUN_0053e430(local_18), piVar2 != (int *)*piVar5)) ||
       (piVar1 != *(int **)(param_1 + 0x44))) {
      while (piVar2 != piVar1) {
        puVar6 = (undefined4 *)FUN_00526960(local_18,0);
        FUN_0046c8c0(auStack_10,*puVar6);
      }
    }
    else {
      FUN_00527400((*(int **)(param_1 + 0x44))[1]);
      *(undefined4 *)(*(int *)(param_1 + 0x44) + 4) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(int *)(*(int *)(param_1 + 0x44) + 8) = *(int *)(param_1 + 0x44);
      FUN_0053e430(auStack_14);
    }
    local_4 = 0xffffffff;
    FUN_00526bd0(auStack_10,**(undefined4 **)(param_1 + 0x44),*(undefined4 **)(param_1 + 0x44));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  (**(code **)(*(int *)puVar7[4] + 0x15c))(1);
  if (*(char *)(puVar7[2] + 0x15) != '\0') goto LAB_005224d2;
  puVar4 = (undefined4 *)FUN_00527440(puVar7[2]);
  goto LAB_005224ef;
LAB_005224d2:
  puVar4 = (undefined4 *)puVar7[1];
  if (puVar7 == (undefined4 *)puVar4[2]) {
    do {
      puVar7 = puVar4;
      puVar4 = (undefined4 *)puVar7[1];
    } while (puVar7 == (undefined4 *)puVar4[2]);
  }
  ppvVar3 = ExceptionList;
  if ((undefined4 *)puVar7[2] != puVar4) {
LAB_005224ef:
    ppvVar3 = ExceptionList;
    puVar7 = puVar4;
  }
  goto joined_r0x005224b0;
}

