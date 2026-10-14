
void __fastcall FUN_00576ac0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void **ppvVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c3ad9;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  local_4 = 0;
  ppvVar6 = &local_c;
  puVar5 = (undefined4 *)*puVar2;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar6, puVar5 != puVar2) {
    puVar3 = (undefined4 *)*puVar5;
    FUN_00516f70(local_10,puVar5);
    ppvVar6 = ExceptionList;
    puVar5 = puVar3;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

