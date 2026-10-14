
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054d410(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x7c) == '\0') &&
     (iVar5 = *(int *)(param_1 + 0x80) + 1, *(int *)(param_1 + 0x80) = iVar5, 1 < iVar5)) {
    FUN_0054cfb0();
  }
  if ((float)_DAT_005c75f8 <= *(float *)(param_1 + 0x54)) {
    fVar1 = *(float *)(param_1 + 100);
    fVar3 = *(float *)(param_1 + 0x6c);
    fVar2 = *(float *)(param_1 + 0x68);
    fVar4 = *(float *)(param_1 + 0x70);
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar5 = 0;
      do {
        FUN_0054c420(param_2,fVar1 * fVar1,fVar2 * fVar2,fVar3 * fVar3,fVar4 * fVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x44));
    }
  }
  return;
}

