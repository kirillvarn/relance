
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053e770(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  bVar4 = SinglePlayer();
  if (!bVar4) {
    puVar2 = *(undefined4 **)(param_2 + 4);
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if (*(short *)(puVar3 + 2) == *(short *)SUBOBJ_ID_ROOT_exref) {
        piVar5 = *(int **)(param_1 + 0x10);
        if ((piVar5 == (int *)0x0) || ((piVar5[0x13] & 0x803U) != 0x803)) {
          piVar5 = (int *)0x0;
        }
        (**(code **)(*piVar5 + 0x98))(puVar3[3]);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x10);
        if ((float)puVar3[3] <= _DAT_005c7474) {
          if ((iVar6 == 0) || (iVar7 = iVar6, (*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)) {
            iVar7 = 0;
          }
          if ((iVar6 == 0) || ((*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)) {
            iVar6 = 0;
          }
          *(int *)(iVar6 + 0xf0) = *(int *)(iVar7 + 0xf0) + -1;
          iVar6 = *(int *)(param_1 + 0x10);
          if ((iVar6 == 0) || (iVar7 = iVar6, (*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)) {
            iVar7 = 0;
          }
          if ((iVar6 == 0) || ((*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)) {
            iVar6 = 0;
          }
          uVar1 = *(undefined4 *)(*(int *)(iVar7 + 0xec) + 0x1c);
        }
        else {
          if ((iVar6 == 0) || ((*(uint *)(iVar6 + 0x4c) & 0x803) != 0x803)) {
            iVar6 = 0;
          }
          uVar1 = puVar3[3];
        }
        *(undefined4 *)(iVar6 + 0xf4) = uVar1;
      }
    }
  }
  return;
}

