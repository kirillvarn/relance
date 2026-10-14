
int __thiscall FUN_0040d2c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined4 **)(param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_2 + 8) - (int)puVar1 >> 3;
    }
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 8) - (int)puVar4 >> 3;
    }
    if (uVar3 < uVar6) {
      if (puVar1 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(param_2 + 8) - (int)puVar1 >> 3;
      }
      if (puVar4 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0xc) - (int)puVar4 >> 3;
      }
      if (uVar6 <= uVar3) {
        if (puVar4 == (undefined4 *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - (int)puVar4 >> 3;
        }
        puVar7 = puVar1 + iVar5 * 2;
        for (; puVar1 != puVar7; puVar1 = puVar1 + 2) {
          *puVar4 = *puVar1;
          puVar4[1] = puVar1[1];
          puVar4 = puVar4 + 2;
        }
        puVar1 = *(undefined4 **)(param_2 + 8);
        iVar5 = *(int *)(param_1 + 8);
        for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
          FUN_0040df40(iVar5,puVar7);
          iVar5 = iVar5 + 8;
        }
        if (*(int *)(param_2 + 4) != 0) {
          *(int *)(param_1 + 8) =
               *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3) * 8;
          return param_1;
        }
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
        return param_1;
      }
      FUN_005b7e1d(puVar4);
      if (*(int *)(param_2 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar2 = operator_new(iVar5 * 8);
      *(void **)(param_1 + 4) = pvVar2;
      iVar5 = *(int *)(param_2 + 8);
      for (iVar8 = *(int *)(param_2 + 4); iVar8 != iVar5; iVar8 = iVar8 + 8) {
        FUN_0040df40(pvVar2,iVar8);
        pvVar2 = (void *)((int)pvVar2 + 8);
      }
      *(void **)(param_1 + 8) = pvVar2;
      *(void **)(param_1 + 0xc) = pvVar2;
      return param_1;
    }
    puVar7 = *(undefined4 **)(param_2 + 8);
    for (; puVar1 != puVar7; puVar1 = puVar1 + 2) {
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4 = puVar4 + 2;
    }
    if (*(int *)(param_2 + 4) == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      return param_1;
    }
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3) * 8;
  }
  return param_1;
}

