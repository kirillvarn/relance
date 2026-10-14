
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437de0(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  MarketGoodInfo *pMVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_9c;
  float local_98;
  int local_90;
  GoodInfoList *local_8c;
  float local_88;
  int local_84 [7];
  undefined4 local_68;
  float local_64;
  int local_5c [2];
  MarketGoodInfo local_54 [28];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28 [10];
  
  local_8c = GoodList_get();
  piVar4 = (int *)**(int **)(local_8c + 4);
  if (piVar4 != *(int **)(local_8c + 4)) {
    local_98 = _DAT_005c75dc - param_1;
    local_88 = (param_1 + _DAT_005c75dc) - local_98;
    do {
      iVar3 = piVar4[2];
      MarketGoodInfo::MarketGoodInfo((MarketGoodInfo *)local_84);
      local_68 = 0;
      local_64 = 0.0;
      local_9c = *(int *)(iVar3 + 0x48);
      iVar2 = param_2;
      if (param_2 == 0) {
        iVar2 = FUN_0043b630();
      }
      FUN_00432240(&local_90,&local_9c);
      if ((local_90 == *(int *)(iVar2 + 0x14)) || ((int *)(local_90 + 0x10) == (int *)0x0)) {
        local_84[0] = *(int *)(iVar3 + 0x48);
        local_84[1] = *(undefined4 *)(iVar3 + 0x58);
        local_84[2] = 0;
        local_84[3] = 0;
        local_84[4] = 0;
      }
      else {
        piVar6 = (int *)(local_90 + 0x10);
        piVar8 = local_84;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
      }
      local_68 = 0;
      if ((local_84[2] != 0) && (0 < local_84[3])) {
        local_68 = 0x7f000000;
      }
      local_9c = rand();
      local_64 = (float)local_9c * _DAT_005caeec * local_88 + local_98;
      uVar1 = *(undefined4 *)(iVar3 + 0x48);
      MarketGoodInfo::MarketGoodInfo(local_54);
      local_38 = 0;
      local_2c = uVar1;
      local_34 = 0;
      pMVar5 = local_54;
      puVar7 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *(undefined4 *)pMVar5;
        pMVar5 = pMVar5 + 4;
        puVar7 = puVar7 + 1;
      }
      FUN_00438310(local_5c,&local_2c);
      piVar6 = local_84;
      piVar8 = (int *)(local_5c[0] + 0x10);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(local_8c + 4));
  }
  return;
}

