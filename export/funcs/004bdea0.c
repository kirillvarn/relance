
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdea0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x164) = 1;
  cVar1 = FUN_0041dd90();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x159) = 0;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
    return;
  }
  FUN_004b62b0(param_2);
  iVar2 = FUN_005b36b0("enable_tooltips");
  if ((float)_DAT_005c8b68 <= *(float *)(iVar2 + 0x14)) {
    if (*(char *)(param_1 + 0x159) != '\0') {
      if (((*(int *)(param_1 + 0xf4) == *param_2) &&
          (*(char *)(param_1 + 0x154) == (char)param_2[0x18])) &&
         ((*(char *)(param_1 + 0x154) == '\0' ||
          ((*(float *)(param_1 + 0x13c) == (float)param_2[0x12] &&
           (*(float *)(param_1 + 0x140) == (float)param_2[0x13])))))) {
        *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
        return;
      }
      if (*(char *)(param_1 + 0x159) != '\0') {
        *(undefined1 *)(param_1 + 0x159) = 0;
        *(undefined4 *)(param_1 + 0x15c) = 0;
        *(undefined4 *)(param_1 + 0x160) = 0;
      }
    }
    if (((*(int *)(param_1 + 0xf4) != *param_2) ||
        (*(char *)(param_1 + 0x154) != (char)param_2[0x18])) ||
       (((*(char *)(param_1 + 0x154) != '\0' &&
         ((*(float *)(param_1 + 0x13c) != (float)param_2[0x12] ||
          (*(float *)(param_1 + 0x140) != (float)param_2[0x13])))) ||
        (*(char *)(param_1 + 0x158) == '\0')))) {
      if ((*(float *)(param_1 + 0x15c) <= _DAT_005c7474) &&
         (*(float *)(param_1 + 0x160) < *(float *)(param_1 + 0x168))) {
        return;
      }
      FUN_004bd880(param_2);
    }
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 3;
  }
  return;
}

