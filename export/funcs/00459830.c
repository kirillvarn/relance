
void FUN_00459830(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba203;
  local_c = ExceptionList;
  if (DAT_0066d334 == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x14);
    local_4 = 0;
    if (puVar2 == (undefined1 *)0x0) {
      DAT_0066d334 = (undefined1 *)0x0;
    }
    else {
      *puVar2 = local_11;
      puVar2[1] = local_11;
      puVar2[0xc] = 0;
      pvVar3 = operator_new(0x20);
      *(undefined4 *)((int)pvVar3 + 4) = 0;
      *(undefined1 *)((int)pvVar3 + 0x1c) = 1;
      *(undefined1 *)((int)pvVar3 + 0x1d) = 0;
      *(void **)(puVar2 + 8) = pvVar3;
      *(undefined1 *)((int)pvVar3 + 0x1d) = 1;
      **(undefined4 **)(puVar2 + 8) = 0;
      *(undefined4 *)(*(int *)(puVar2 + 8) + 8) = 0;
      uVar1 = *(undefined4 *)(puVar2 + 8);
      pvVar3 = operator_new(0x20);
      *(undefined4 *)((int)pvVar3 + 4) = uVar1;
      *(undefined1 *)((int)pvVar3 + 0x1c) = 0;
      *(undefined1 *)((int)pvVar3 + 0x1d) = 0;
      *(void **)(puVar2 + 4) = pvVar3;
      *(void **)pvVar3 = pvVar3;
      *(int *)(*(int *)(puVar2 + 4) + 8) = *(int *)(puVar2 + 4);
      *(undefined4 *)(puVar2 + 0x10) = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00459470();
      DAT_0066d334 = puVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

