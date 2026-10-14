
bool __thiscall FUN_00456150(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    return true;
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x2e) == '\0') {
LAB_00456235:
    cVar2 = FUN_0044f7f0(param_2);
    if (cVar2 == '\0') goto LAB_004562a4;
    if (*(int *)(*(int *)(param_1 + 0xc0) * 0x40 + *(int *)(param_1 + 0xb4)) != 0) {
      FUN_0044ed00();
    }
    iVar3 = FUN_00455fc0();
    *(int *)(param_1 + 0xc0) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xbc)) {
      FUN_00454fb0(iVar3);
      return *(char *)(param_1 + 0xc4) == '\0';
    }
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  }
  else {
    do {
      if (bVar1) goto LAB_0045628e;
      FUN_0044f9d0();
      FUN_0044f7f0(0);
      if (*(int *)(*(int *)(param_1 + 0xc0) * 0x40 + *(int *)(param_1 + 0xb4)) != 0) {
        FUN_0044ed00();
      }
      iVar3 = FUN_00455fc0();
      *(int *)(param_1 + 0xc0) = iVar3;
      bVar1 = *(int *)(param_1 + 0xbc) <= iVar3;
      if (bVar1) {
        *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc0) * 0x40 + 0x3c + *(int *)(param_1 + 0xb4));
        if ((iVar3 == 1) || (iVar3 == 4)) {
          *(undefined1 *)(param_1 + 0x2e) = 0;
        }
        FUN_00454fb0(*(int *)(param_1 + 0xc0));
      }
    } while (*(char *)(param_1 + 0x2e) != '\0');
    if (!bVar1) goto LAB_00456235;
  }
LAB_0045628e:
  FUN_004554c0(0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc4) = 0;
LAB_004562a4:
  return *(char *)(param_1 + 0xc4) == '\0';
}

