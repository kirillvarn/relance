
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b5fd0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  
  if (param_2[1] != 0) {
    cVar3 = FUN_0041dd90();
    if (cVar3 == '\0') {
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfd;
      return;
    }
    iVar4 = FUN_005b36b0("enable_rollover");
    if ((float)_DAT_005c8b68 <= *(float *)(iVar4 + 0x14)) {
      bVar2 = *(byte *)(param_1 + 0x1b);
      *(byte *)(param_1 + 0x1b) = bVar2 | 1;
      if ((param_1[0x3b] == *param_2) && (_DAT_005c7474 < (float)param_1[0x59])) {
        *(byte *)(param_1 + 0x1b) = bVar2 | 3;
        return;
      }
      cVar3 = FUN_005b0880();
      piVar1 = param_1 + 0x5b;
      if (cVar3 == '\0') {
        *piVar1 = param_1[0x61];
        param_1[0x5c] = 0x3ec51eb8;
        param_1[0x5d] = -0x40800000;
      }
      else {
        *piVar1 = param_1[0x62];
        param_1[0x5c] = 0x3ec51eb8;
        param_1[0x5d] = -0x40800000;
      }
      param_1[0x59] = param_3;
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 2;
      param_1[0x3b] = *param_2;
      iVar4 = param_2[1];
      param_1[0x3c] = iVar4;
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x70))(param_2[2]);
      }
      else {
        FUN_004347e0(DAT_0067eca8,iVar4,&DAT_0066fc60,DAT_006119f8);
        (**(code **)(*param_1 + 0x70))(&DAT_0066fc60);
      }
      (**(code **)(*param_1 + 0x14))(piVar1);
      FUN_00459930(param_2[1]);
    }
  }
  return;
}

