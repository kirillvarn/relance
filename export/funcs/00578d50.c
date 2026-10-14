
void __fastcall FUN_00578d50(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3c0b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0) {
    ExceptionList = &local_c;
    piVar1 = operator_new(900);
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_0059f860();
      piVar1[0xce] = 0x40400000;
      piVar1[0xe0] = 0;
      *piVar1 = (int)&PTR_FUN_005e44a4;
      piVar1[0x1f] = (int)&PTR_OnReceive_005e4498;
      piVar1[0xcf] = 0;
      DAT_0067c3e0 = 0;
      *(undefined1 *)(piVar1 + 0xcb) = 0;
      *(byte *)(piVar1 + 0x1b) = *(byte *)(piVar1 + 0x1b) & 0xfe;
      piVar1[0xcd] = 0;
    }
    *(int **)(param_1 + 8) = piVar1;
    local_4 = 0xffffffff;
    (**(code **)(*piVar1 + 0x24))(0,0);
    uVar2 = 0xffffffff;
    pcVar5 = "?LoadingProgressBar";
    do {
      pcVar5 = pcVar5 + 1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
    } while (*pcVar5 != '\0');
    uVar2 = ~uVar2 - 1;
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    piVar4 = (int *)0x5e4430;
    piVar6 = piVar1 + 6;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar6 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    *(undefined1 *)(uVar2 + (int)(piVar1 + 6)) = 0;
    piVar1[5] = uVar2;
    piVar1[4] = (int)"LoadingProgressBar";
  }
  ExceptionList = local_c;
  return;
}

