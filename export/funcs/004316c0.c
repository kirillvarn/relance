
void __fastcall FUN_004316c0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b8fb2;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  local_1c = param_1;
  FUN_00432180(&local_20,**(undefined4 **)(param_1 + 0x40),*(undefined4 **)(param_1 + 0x40));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_20 = *(int **)(param_1 + 0x24);
  local_4 = local_4 & 0xffffff00;
  piVar5 = (int *)*local_20;
  if ((int *)*local_20 != local_20) {
    do {
      piVar3 = (int *)*piVar5;
      FUN_004324c0(local_18,piVar5);
      piVar5 = piVar3;
    } while (piVar3 != local_20);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  piVar5 = *(int **)(param_1 + 0x10);
  local_20 = (int *)*piVar5;
  local_4 = 0xffffffff;
  if (((*(int *)(param_1 + 0x1c) == 0) ||
      (piVar3 = (int *)FUN_0053e430(local_18), local_20 != (int *)*piVar3)) ||
     (piVar5 != *(int **)(param_1 + 0x10))) {
    while (local_20 != piVar5) {
      puVar4 = (undefined4 *)FUN_004323f0(local_14,0);
      FUN_0041b640(local_10,*puVar4);
    }
  }
  else {
    FUN_004323b0((*(int **)(param_1 + 0x10))[1]);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
    FUN_0053e430(&local_1c);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

