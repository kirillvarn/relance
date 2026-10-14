
void FUN_00577b40(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3b9b;
  local_c = ExceptionList;
  if (DAT_0067c3ac == 0) {
    DAT_0067c3ac = param_1;
    return;
  }
  ExceptionList = &local_c;
  if (DAT_0067c3a8 == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0xc);
    local_4 = 0;
    if (puVar2 == (undefined1 *)0x0) {
      DAT_0067c3a8 = (undefined1 *)0x0;
    }
    else {
      *puVar2 = (undefined1)param_1;
      pvVar3 = operator_new(0xc);
      *(void **)pvVar3 = pvVar3;
      *(void **)((int)pvVar3 + 4) = pvVar3;
      *(void **)(puVar2 + 4) = pvVar3;
      *(undefined4 *)(puVar2 + 8) = 0;
      DAT_0067c3a8 = puVar2;
    }
  }
  puVar2 = DAT_0067c3a8;
  local_4 = 0xffffffff;
  iVar1 = *(int *)(DAT_0067c3a8 + 4);
  piVar5 = *(int **)(iVar1 + 4);
  piVar4 = operator_new(0xc);
  *piVar4 = iVar1;
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar4;
  }
  piVar4[1] = (int)piVar5;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = DAT_0067c3ac;
  }
  *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + 1;
  DAT_0067c3ac = param_1;
  ExceptionList = local_c;
  return;
}

