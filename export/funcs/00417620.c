
undefined4 * FUN_00417620(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b88c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x2c);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[4] = 1;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined1 *)((int)puVar1 + 0x27) = 0;
    *(undefined1 *)((int)puVar1 + 0x26) = 0;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    local_4 = 1;
    *puVar1 = &PTR_LAB_005c8cb8;
    puVar1[9] = 0xff080808;
    (*(code *)PTR_FUN_005c8cd8)(1);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

