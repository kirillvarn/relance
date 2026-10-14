
void __fastcall FUN_00430990(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b8ee2;
  local_c = ExceptionList;
  local_14 = param_1 + 4;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00432180(&local_18,**(undefined4 **)(param_1 + 0x44),*(undefined4 **)(param_1 + 0x44));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_18 = *(int **)(param_1 + 0x28);
  local_4 = local_4 & 0xffffff00;
  piVar4 = (int *)*local_18;
  if ((int *)*local_18 != local_18) {
    do {
      piVar3 = (int *)*piVar4;
      FUN_004324c0(local_10,piVar4);
      piVar4 = piVar3;
    } while (piVar3 != local_18);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_4 = 0xffffffff;
  FUN_00432000(local_10,**(undefined4 **)(param_1 + 0x14),*(undefined4 **)(param_1 + 0x14));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_c;
  return;
}

