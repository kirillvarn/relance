
/* WARNING: Removing unreachable block (ram,0x004a8d78) */
/* WARNING: Removing unreachable block (ram,0x004a8d83) */
/* WARNING: Removing unreachable block (ram,0x004a8da3) */
/* WARNING: Removing unreachable block (ram,0x004a8db0) */
/* WARNING: Removing unreachable block (ram,0x004a8dc5) */
/* WARNING: Removing unreachable block (ram,0x004a8dcc) */
/* WARNING: Removing unreachable block (ram,0x004a8dd0) */
/* WARNING: Removing unreachable block (ram,0x004a8b6e) */
/* WARNING: Removing unreachable block (ram,0x004a8b70) */
/* WARNING: Removing unreachable block (ram,0x004a8d0c) */
/* WARNING: Removing unreachable block (ram,0x004a8d10) */

void __thiscall FUN_004a8820(int param_1,wchar_t *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  Ship *pSVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  uint *puVar10;
  wchar_t *_Format;
  uint *puVar11;
  int iVar12;
  void *pvVar13;
  undefined4 uVar14;
  uint uVar15;
  wchar_t *pwStack_10;
  uint *puStack_c;
  wchar_t *pwStack_8;
  int iStack_4;
  
  puVar2 = (undefined4 *)param_2;
  swprintf(&DAT_0066fc60,0x5d0ec4,*(wchar_t **)((int)param_2 + 0x14));
  (**(code **)(**(int **)(param_1 + 0x3b0) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,*(wchar_t **)((int)param_2 + 0x18));
  (**(code **)(**(int **)(param_1 + 0x3b4) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,*(wchar_t **)((int)param_2 + 0x1c));
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0xa8))();
  iVar5 = ftol();
  swprintf(&DAT_0066fc60,0x5d49b4,(wchar_t *)(iVar5 / 0xe10));
  (**(code **)(**(int **)(param_1 + 0x3ac) + 0xa8))();
  piVar1 = (int *)((int)param_2 + 0x20);
  _Format = (wchar_t *)0x0;
  pwStack_8 = (wchar_t *)0x0;
  pwStack_10 = (wchar_t *)0x0;
  param_2 = (wchar_t *)0x0;
  iVar5 = *piVar1;
  if (0 < *piVar1) {
    do {
      iStack_4 = iVar5;
      pSVar6 = Archetype::GetShip(*param_3);
      if (pSVar6 != (Ship *)0x0) {
        uVar7 = *(uint *)(pSVar6 + 0x10);
        if ((uVar7 & 0x20000) == 0) {
          if ((uVar7 & 0x100000) == 0) {
            if ((uVar7 & 0x280000) == 0) {
              _Format = (wchar_t *)((int)_Format + param_3[1]);
            }
            else {
              param_2 = (wchar_t *)((int)param_2 + param_3[1]);
            }
          }
          else {
            pwStack_10 = (wchar_t *)((int)pwStack_10 + param_3[1]);
          }
        }
        else {
          pwStack_8 = (wchar_t *)((int)pwStack_8 + param_3[1]);
        }
      }
      param_3 = param_3 + 2;
      iStack_4 = iStack_4 + -1;
      iVar5 = iStack_4;
    } while (iStack_4 != 0);
  }
  swprintf(&DAT_0066fc60,0x5d0ec4,_Format);
  (**(code **)(**(int **)(param_1 + 0x3bc) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,pwStack_8);
  (**(code **)(**(int **)(param_1 + 0x3c0) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,pwStack_10);
  (**(code **)(**(int **)(param_1 + 0x3c4) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,param_2);
  (**(code **)(**(int **)(param_1 + 0x3c8) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,
           (wchar_t *)((int)param_2 + (int)pwStack_10 + (int)pwStack_8 + (int)_Format));
  (**(code **)(**(int **)(param_1 + 0x3a8) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,(wchar_t *)*puVar2);
  (**(code **)(**(int **)(param_1 + 0x3a4) + 0xa8))();
  swprintf(&DAT_0066fc60,0x5d0ec4,(wchar_t *)puVar2[9]);
  (**(code **)(**(int **)(param_1 + 0x398) + 0xa8))();
  FUN_004779a0(&DAT_0066fc60);
  (**(code **)(**(int **)(param_1 + 0x39c) + 0xa8))(0x1d);
  iVar5 = puVar2[0xb];
  if (iVar5 == 0x7fffffff) {
    uVar14 = 0x3e4;
  }
  else {
    if (0 < iVar5) {
      FUN_004779a0(&DAT_0066fc60,iVar5,0xffffffff);
      goto LAB_004a8b45;
    }
    uVar14 = 0x620;
  }
  FUN_004347e0(DAT_0067eca8,uVar14,&DAT_0066fc60,DAT_006119f8);
LAB_004a8b45:
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))(0x1d,&DAT_0066fc60,0);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x410);
  iVar5 = puVar2[0xc];
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (0 < iVar5) {
    do {
      puVar10 = puStack_c;
      cVar3 = FUN_004c4da0(*puStack_c,&pwStack_10,0,1);
      if (((cVar3 != '\0') && (((uint)pwStack_10 & 1) != 0)) &&
         (bVar4 = Reputation::IsStoryFaction(*puVar10), !bVar4)) {
        uVar15 = *puVar10;
        uVar7 = puVar10[1];
        puVar10 = *(uint **)(param_1 + 0x414);
        if (*(int *)(param_1 + 0x418) - (int)puVar10 >> 3 == 0) {
          iVar12 = *(int *)(param_1 + 0x410);
          if ((iVar12 == 0) || (uVar7 = (int)puVar10 - iVar12 >> 3, uVar7 < 2)) {
            uVar7 = 1;
          }
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = (int)puVar10 - iVar12 >> 3;
          }
          iVar12 = uVar7 + iVar12;
          iVar8 = iVar12;
          if (iVar12 < 0) {
            iVar8 = 0;
          }
          pvVar9 = operator_new(iVar8 * 8);
          pvVar13 = pvVar9;
          for (puVar11 = *(uint **)(param_1 + 0x410); puVar11 != puVar10; puVar11 = puVar11 + 2) {
            FUN_004e5fc0(pvVar13,puVar11);
            pvVar13 = (void *)((int)pvVar13 + 8);
          }
          FUN_004e5fc0(pvVar13,&stack0xffffffd8);
          puVar11 = *(uint **)(param_1 + 0x414);
          if (puVar10 != puVar11) {
            iVar8 = 8 - (int)puVar10;
            do {
              FUN_004e5fc0((int)puVar10 + (int)pvVar13 + iVar8,puVar10);
              puVar10 = puVar10 + 2;
            } while (puVar10 != puVar11);
          }
          FUN_005b7e1d(*(undefined4 *)(param_1 + 0x410));
          *(void **)(param_1 + 0x418) = (void *)((int)pvVar9 + iVar12 * 8);
          if (*(int *)(param_1 + 0x410) == 0) {
            iVar12 = (int)pvVar9 + 8;
            *(void **)(param_1 + 0x410) = pvVar9;
          }
          else {
            iVar12 = (int)pvVar9 +
                     (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 3) * 8 + 8;
            *(void **)(param_1 + 0x410) = pvVar9;
          }
        }
        else {
          iVar12 = *(int *)(param_1 + 0x414);
          for (iVar8 = 1 - (iVar12 - (int)puVar10 >> 3); iVar8 != 0; iVar8 = iVar8 + -1) {
            FUN_004e5fc0(iVar12,&stack0xffffffd8);
            iVar12 = iVar12 + 8;
          }
          puVar11 = *(uint **)(param_1 + 0x414);
          for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
            *puVar10 = uVar15;
            puVar10[1] = uVar7;
          }
          iVar12 = *(int *)(param_1 + 0x414) + 8;
        }
        *(int *)(param_1 + 0x414) = iVar12;
        *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
        puVar10 = puStack_c;
      }
      puStack_c = puVar10 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004a8750();
  (**(code **)(**(int **)(param_1 + 0x394) + 0xa8))(0x37,0,*(int *)(param_1 + 0x41c) + -1);
  return;
}

