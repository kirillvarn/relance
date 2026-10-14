
void FUN_00575e00(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 **ppuVar8;
  undefined1 *local_1c;
  undefined1 *local_18;
  int *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3abb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0067c3a4 == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    puVar5 = operator_new(0x14);
    local_4 = 0;
    local_1c = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      DAT_0067c3a4 = (undefined1 *)0x0;
    }
    else {
      *puVar5 = param_2._0_1_;
      puVar5[1] = param_2._0_1_;
      puVar5[0xc] = 1;
      pvVar6 = operator_new(0x18);
      *(undefined4 *)((int)pvVar6 + 4) = 0;
      *(undefined1 *)((int)pvVar6 + 0x14) = 1;
      *(undefined1 *)((int)pvVar6 + 0x15) = 0;
      *(void **)(puVar5 + 8) = pvVar6;
      *(undefined1 *)((int)pvVar6 + 0x15) = 1;
      **(undefined4 **)(puVar5 + 8) = 0;
      *(undefined4 *)(*(int *)(puVar5 + 8) + 8) = 0;
      uVar7 = FUN_0040f110(*(undefined4 *)(puVar5 + 8),0);
      *(undefined4 *)(puVar5 + 4) = uVar7;
      *(undefined4 *)uVar7 = uVar7;
      *(int *)(*(int *)(puVar5 + 4) + 8) = *(int *)(puVar5 + 4);
      *(undefined4 *)(puVar5 + 0x10) = 0;
      DAT_0067c3a4 = puVar5;
    }
  }
  local_4 = 0xffffffff;
  local_14 = param_2;
  local_10 = param_1;
  piVar1 = *(int **)(DAT_0067c3a4 + 4);
  bVar2 = true;
  piVar3 = piVar1;
  piVar4 = (int *)piVar1[1];
  while (piVar4 != *(int **)(DAT_0067c3a4 + 8)) {
    bVar2 = (int)param_2 < piVar4[3];
    piVar3 = piVar4;
    if (bVar2) {
      piVar4 = (int *)*piVar4;
    }
    else {
      piVar4 = (int *)piVar4[2];
    }
  }
  if (DAT_0067c3a4[0xc] == '\0') {
    param_2 = piVar3;
    if (bVar2) {
      if (piVar3 == (int *)*piVar1) {
        ppuVar8 = &local_1c;
        goto LAB_00575f28;
      }
      FUN_0043c010();
    }
    if ((int)local_14 <= param_2[3]) {
      ExceptionList = local_c;
      return;
    }
    ppuVar8 = &local_18;
  }
  else {
    ppuVar8 = &param_1;
  }
LAB_00575f28:
  FUN_004029a0(ppuVar8,piVar4,piVar3,&local_14);
  ExceptionList = local_c;
  return;
}

