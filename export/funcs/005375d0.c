
void __fastcall FUN_005375d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c09d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005de69c;
  iVar1 = param_1[0x37];
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = param_1[0x35];
    if ((*(char *)(iVar1 + 0x44) == '\0') ||
       (puVar4 = *(undefined4 **)(iVar1 + 0x48), puVar4 == (undefined4 *)0x0)) {
      puVar4 = operator_new(0xc);
    }
    else {
      *(undefined4 *)(iVar1 + 0x48) = *puVar4;
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x40);
    puVar4[2] = uVar2;
    puVar4[1] = uVar3;
    *puVar4 = 0;
    if (*(undefined4 **)(iVar1 + 0x40) == (undefined4 *)0x0) {
      *(undefined4 **)(iVar1 + 0x3c) = puVar4;
    }
    else {
      **(undefined4 **)(iVar1 + 0x40) = puVar4;
    }
    *(undefined4 **)(iVar1 + 0x40) = puVar4;
    param_1[0x35] = 0;
    param_1[0x37] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00410ab0();
  ExceptionList = local_c;
  return;
}

