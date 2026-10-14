
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b6130(int *param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  if (param_2[1] != 0) {
    cVar2 = FUN_0041dd90();
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfd;
      return;
    }
    iVar3 = FUN_005b36b0("enable_rollover");
    if ((float)_DAT_005c8b68 <= *(float *)(iVar3 + 0x14)) {
      bVar1 = *(byte *)(param_1 + 0x1b);
      *(byte *)(param_1 + 0x1b) = bVar1 | 1;
      if ((param_1[0x3b] == *param_2) && (_DAT_005c7474 < (float)param_1[0x59])) {
        *(byte *)(param_1 + 0x1b) = bVar1 | 3;
        return;
      }
      param_1[0x5b] = param_4;
      param_1[0x5c] = 0x3ec51eb8;
      param_1[0x5d] = -0x40800000;
      param_1[0x59] = param_3;
      *(byte *)(param_1 + 0x1b) = bVar1 | 3;
      param_1[0x3b] = *param_2;
      iVar3 = param_2[1];
      param_1[0x3c] = iVar3;
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x70))(param_2[2]);
      }
      else {
        FUN_004347e0(DAT_0067eca8,iVar3,&DAT_0066fc60,DAT_006119f8);
        (**(code **)(*param_1 + 0x70))(&DAT_0066fc60);
      }
      (**(code **)(*param_1 + 0x14))(param_1 + 0x5b);
      FUN_00459930(param_2[1]);
    }
  }
  return;
}

