
void __fastcall FUN_004a1620(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_28;
  int local_24;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_0055e280();
  if (cVar1 == '\0') {
    local_20[0] = *(undefined4 *)(param_1 + 0x900);
    local_20[1] = *(undefined4 *)(param_1 + 0x904);
    local_20[2] = *(undefined4 *)(param_1 + 0x908);
    local_24 = *(int *)(param_1 + 0x8fc);
    local_20[3] = *(undefined4 *)(param_1 + 0xac0);
    local_10 = *(undefined4 *)(param_1 + 0xac4);
    local_c = *(undefined4 *)(param_1 + 0xac8);
    local_8 = *(undefined4 *)(param_1 + 0xacc);
    local_4 = 0;
    if (local_24 != 0) {
      piVar2 = &local_24;
      iVar3 = local_24;
      do {
        if ((*(byte *)(iVar3 + 0x6c) & 2) != 0) goto LAB_004a16e2;
        iVar3 = piVar2[1];
        piVar2 = piVar2 + 1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    piVar2 = (int *)(param_1 + 0xae4);
    do {
      if (((piVar2[-4] != 0) && ((*(byte *)(piVar2[-4] + 0x6c) & 2) != 0)) ||
         ((*piVar2 != 0 && ((*(byte *)(*piVar2 + 0x6c) & 2) != 0)))) goto LAB_004a16e2;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 3);
    local_28 = '\0';
    if ((*(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) & 2) != 0) {
LAB_004a16e2:
      local_28 = '\x01';
    }
    if (local_28 != *(char *)(param_1 + 0xbc0)) {
      FUN_004a0a70(local_28);
    }
  }
  return;
}

