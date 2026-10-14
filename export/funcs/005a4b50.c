
void FUN_005a4b50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar2 = *(int *)(param_1 + iVar5 * 4);
      iVar1 = iVar5 + 1;
      iVar6 = 0;
      if (iVar1 != param_2) {
        iVar6 = *(int *)(param_1 + 4 + iVar5 * 4);
      }
      bVar4 = *(byte *)(iVar2 + 0x35c) >> 1 & 1;
      if ((((bVar4 == 0) && ((*(byte *)(iVar2 + 0x35c) & 1) == 0)) ||
          ((bVar3 = true, iVar6 != 0 && ((*(byte *)(iVar6 + 0x35c) & 0x10) != 0)))) ||
         ((iVar7 != 0 && ((*(byte *)(iVar7 + 0x35c) & 0x10) != 0)))) {
        bVar3 = false;
      }
      if ((((iVar6 == 0) || ((*(byte *)(iVar6 + 0x6c) & 2) == 0)) ||
          ((*(byte *)(iVar6 + 0x6c) & 1) == 0)) ||
         (((*(byte *)(iVar2 + 0x35c) & 0x10) != 0 || (bVar3)))) {
        *(undefined4 *)(iVar2 + 900) = 0xf;
      }
      else if ((bVar4 == 0) && ((*(byte *)(iVar2 + 0x35c) & 1) == 0)) {
        if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x35c) & 0x13) == 0)) {
          *(undefined4 *)(iVar2 + 900) = 0xb;
        }
        else {
          *(undefined4 *)(iVar2 + 900) = 10;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 900) = 10;
        if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x35c) & 0x10) == 0)) {
          *(undefined4 *)(iVar2 + 900) = 0xb;
        }
        if ((*(byte *)(iVar6 + 0x35c) & 0x10) == 0) {
          *(uint *)(iVar2 + 900) = *(uint *)(iVar2 + 900) | 4;
        }
      }
      if ((((iVar7 != 0) && ((*(uint *)(iVar7 + 900) & 4) == 0)) &&
          ((*(byte *)(iVar2 + 900) & 1) != 0)) &&
         ((*(char *)(iVar7 + 0x37c) == '\0' && (*(char *)(iVar2 + 0x37c) != '\0')))) {
        *(uint *)(iVar7 + 900) = *(uint *)(iVar7 + 900) | 4;
        *(uint *)(iVar2 + 900) = *(uint *)(iVar2 + 900) & 0xfffffffe;
      }
      iVar5 = iVar1;
      iVar7 = iVar2;
    } while (iVar1 < param_2);
  }
  return;
}

