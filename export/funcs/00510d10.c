
undefined4 * __thiscall FUN_00510d10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfd0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_005db658;
  param_1[2] = 0x447a0000;
  pvVar2 = operator_new(0x30c);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0050d300();
  }
  param_1[5] = uVar3;
  puVar4 = operator_new(0x40);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *puVar4 = (undefined1)param_2;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 0x38) = 0x40a00000;
    *(undefined4 *)(puVar4 + 0x3c) = 0x44480000;
  }
  param_1[6] = puVar4;
  puVar4 = operator_new(0x40);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *puVar4 = (undefined1)param_2;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 0x38) = 0x3f800000;
    *(undefined4 *)(puVar4 + 0x3c) = 0x447a0000;
  }
  param_1[7] = puVar4;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x40000000;
  param_1[0xb] = 0x40000000;
  param_1[0xc] = 0x40490fdb;
  puVar5 = operator_new(0x50);
  local_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 1) = 0;
    FUN_00420750(&DAT_005c865c);
    puVar5[10] = 0x3f800000;
    puVar5[0xb] = 0x3f800000;
    puVar5[0xc] = 0x3f800000;
    puVar5[0xd] = 0x3f800000;
    puVar5[0xe] = 0x3f800000;
    puVar5[9] = 0x3f800000;
    puVar5[0xf] = 0x3f800000;
    puVar5[0x10] = 0x3f800000;
    puVar5[0x11] = 0;
    *(undefined1 *)(puVar5 + 0x13) = 0;
    puVar5[0x12] = 0;
  }
  param_1[4] = puVar5;
  iVar1 = param_1[5];
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x19] = 0x3f800000;
  uVar3 = ftol();
  *(undefined4 *)(iVar1 + 0x2b8) = uVar3;
  ExceptionList = local_c;
  return param_1;
}

