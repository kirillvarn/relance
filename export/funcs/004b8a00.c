
void __thiscall FUN_004b8a00(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  GoodInfo *pGVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int unaff_ESI;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piStack_bc;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  void *pvStack_9c;
  void *pvStack_98;
  int iStack_94;
  uint uStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  void *pvStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bd32f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(param_1 + 0x3d0) = param_2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    puVar13 = (undefined4 *)(param_1 + 0x340);
    do {
      uStack_64 = 0;
      if (iVar9 != param_2) {
        uStack_68 = 0;
        uStack_6c = 0xc;
        uStack_70 = 0x4b8a64;
        (**(code **)(*(int *)puVar13[-3] + 0xa8))();
      }
      else {
        uStack_68 = 1;
        uStack_6c = 0xc;
        uStack_70 = 0x4b8a56;
        (**(code **)(*(int *)puVar13[-3] + 0xa8))();
      }
      uStack_70 = 0;
      uStack_74 = (uint)(iVar9 == param_2);
      uStack_78 = 0xc;
      iStack_7c = 0x4b8a72;
      (**(code **)(*(int *)*puVar13 + 0xa8))();
      iVar9 = iVar9 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x3cc));
  }
  piVar5 = *(int **)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x3d0) == -2) {
    uStack_64 = 0;
    uStack_68 = 1;
    uStack_6c = 0xc;
    uStack_70 = 0x4b8aa2;
    (**(code **)(*piVar5 + 0xa8))();
    uStack_74 = 1;
LAB_004b8ab9:
    uStack_70 = 0;
    uStack_78 = 0xc;
    iStack_7c = 0x4b8ac9;
    (**(code **)(**(int **)(param_1 + 0x3dc) + 0xa8))();
  }
  else if (piVar5 != (int *)0x0) {
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0xc;
    uStack_70 = 0x4b8ab7;
    (**(code **)(*piVar5 + 0xa8))();
    uStack_74 = 0;
    goto LAB_004b8ab9;
  }
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 1;
  uStack_70 = 0x4b8adb;
  (**(code **)(**(int **)(param_1 + 0x370) + 0xa8))();
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 1;
  iStack_7c = 0x4b8aed;
  (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))();
  iStack_7c = 0;
  pvStack_80 = (void *)0x0;
  uStack_84 = 1;
  iStack_88 = 0x4b8aff;
  (**(code **)(**(int **)(param_1 + 0x38c) + 0xa8))();
  iStack_88 = 0;
  puStack_8c = (undefined4 *)0x0;
  uStack_90 = 1;
  iStack_94 = 0x4b8b11;
  (**(code **)(**(int **)(param_1 + 900) + 0xa8))();
  iStack_94 = 0;
  pvStack_98 = (void *)0x0;
  pvStack_9c = (void *)0x1;
  uStack_a0 = 0x4b8b23;
  (**(code **)(**(int **)(param_1 + 0x388) + 0xa8))();
  uStack_a0 = 0;
  uStack_a4 = 1;
  (**(code **)(**(int **)(param_1 + 0x394) + 0xa8))();
  (**(code **)(**(int **)(param_1 + 0x398) + 0xa8))();
  piStack_bc = (int *)0x1;
  (**(code **)(**(int **)(param_1 + 0x39c) + 0xa8))();
  if (*(int *)(param_1 + 0x3d0) == -2) {
    uVar8 = FUN_004c3e10();
    Archetype::GetShip(uVar8);
    FUN_00585a90();
    FUN_004c4060();
    FUN_005850f0();
    (**(code **)(**(int **)(param_1 + 900) + 0xa8))();
    (**(code **)(**(int **)(param_1 + 0x388) + 0xa8))();
  }
  else {
    iVar9 = *(int *)(param_1 + 0x3b4 + unaff_ESI * 4);
    if (iVar9 != 0) {
      pGVar4 = GoodList::find_by_id(*(uint *)(iVar9 + 0x90));
      Archetype::GetShip(*(uint *)(pGVar4 + 0x54));
      FUN_00585a90();
      FUN_005850f0();
      (**(code **)(**(int **)(param_1 + 900) + 0xa8))();
      (**(code **)(**(int **)(param_1 + 0x388) + 0xa8))();
    }
  }
  uStack_84 = CONCAT31(uStack_84._1_3_,(char)unaff_ESI);
  pvStack_80 = operator_new(0xc);
  *(void **)pvStack_80 = pvStack_80;
  *(void **)((int)pvStack_80 + 4) = pvStack_80;
  iStack_7c = 0;
  uStack_64 = 0;
  piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_a4,0x9ca4);
  uStack_64._0_1_ = 1;
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  pvVar3 = pvStack_80;
  puVar13 = *(undefined4 **)((int)pvStack_80 + 4);
  puVar10 = (undefined4 *)((int)pvStack_80 + 4);
  uStack_64._0_1_ = 2;
  puVar7 = operator_new(0xc);
  *puVar7 = pvVar3;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = puVar7;
  }
  puVar7[1] = puVar13;
  *puVar10 = puVar7;
  *(undefined4 **)puVar7[1] = puVar7;
  FUN_0046ea00();
  iStack_7c = iStack_7c + 1;
  uStack_64._0_1_ = 1;
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)();
  }
  uStack_64._0_1_ = 0;
  StyleNode::~StyleNode((StyleNode *)&uStack_a4);
  FUN_0057da40();
  FUN_005798b0();
  FUN_0057b370();
  FUN_0057b3e0();
  uStack_90 = uStack_90 & 0xffffff00;
  puStack_8c = operator_new(0xc);
  *puStack_8c = puStack_8c;
  puStack_8c[1] = puStack_8c;
  iStack_88 = 0;
  uStack_64._0_1_ = 3;
  piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_a4,0x9ca4);
  uStack_64._0_1_ = 4;
  puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  puVar6 = puStack_8c;
  puVar13 = (undefined4 *)puStack_8c[1];
  puVar11 = puStack_8c + 1;
  uStack_64._0_1_ = 5;
  puVar10 = operator_new(0xc);
  *puVar10 = puVar6;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = puVar10;
  }
  puVar10[1] = puVar13;
  *puVar11 = puVar10;
  *(undefined4 **)puVar10[1] = puVar10;
  FUN_0046ea00();
  iStack_88 = iStack_88 + 1;
  uStack_64._0_1_ = 4;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)();
  }
  uStack_64._0_1_ = 3;
  StyleNode::~StyleNode((StyleNode *)&uStack_a4);
  FUN_0057da40();
  FUN_005798b0();
  FUN_0057b370();
  FUN_0057b3e0();
  FUN_005799f0();
  pvStack_9c = (void *)((uint)pvStack_9c & 0xffffff00);
  pvStack_98 = operator_new(0xc);
  *(void **)pvStack_98 = pvStack_98;
  *(void **)((int)pvStack_98 + 4) = pvStack_98;
  iStack_94 = 0;
  uStack_64._0_1_ = 6;
  piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_a4,0x9ca4);
  uStack_64._0_1_ = 7;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x1c))();
  pvVar3 = pvStack_98;
  puVar6 = *(undefined4 **)((int)pvStack_98 + 4);
  puVar13 = (undefined4 *)((int)pvStack_98 + 4);
  uStack_64._0_1_ = 8;
  puVar7 = operator_new(0xc);
  *puVar7 = pvVar3;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar7;
  }
  puVar7[1] = puVar6;
  *puVar13 = puVar7;
  piVar1 = puVar7 + 2;
  *(undefined4 **)puVar7[1] = puVar7;
  uStack_64._0_1_ = 9;
  if (piVar1 != (int *)0x0) {
    iVar9 = (**(code **)(*piVar5 + 0x1c))();
    *piVar1 = iVar9;
  }
  iStack_94 = iStack_94 + 1;
  uStack_64._0_1_ = 7;
  if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)();
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,6);
  StyleNode::~StyleNode((StyleNode *)&uStack_a4);
  FUN_0057da40();
  FUN_005798b0();
  FUN_0057b370();
  FUN_0057b3e0();
  FUN_005799f0();
  uStack_78 = 0x432294bc;
  uStack_74 = 0xc28f49d5;
  uStack_70 = 0;
  FUN_00586900();
  FUN_00585070();
  iVar9 = *(int *)(param_1 + 0x3fc + *(int *)(param_1 + 0x3d0) * 4);
  if (iVar9 == 1) {
    FUN_004347e0();
    swprintf(&DAT_0066fc60,0x66dc60,*(wchar_t **)(param_1 + 0x408 + *(int *)(param_1 + 0x3d0) * 4));
    piStack_bc = (int *)&DAT_0066fc60;
LAB_004b9017:
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
    puVar13 = (undefined4 *)0x0;
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
    (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))();
    uVar12 = 1;
  }
  else {
    if (iVar9 == 2) goto LAB_004b9017;
    if (*(int *)(param_1 + 0x3a4) < *(int *)(param_1 + 0x3a8 + *(int *)(param_1 + 0x3d0) * 4)) {
      puVar13 = (undefined4 *)0x49a;
      (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
      (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
      (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x38c) + 0xa8))(1,1,0);
      goto LAB_004b90db;
    }
    puVar13 = (undefined4 *)0x1;
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
    (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))();
    uVar12 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x38c) + 0xa8))(1,uVar12,0);
LAB_004b90db:
  if (*(int *)(param_1 + 0x3d0) == -2) {
    (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x38c) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))(1,1,0);
  }
  iStack_94._0_1_ = 3;
  puVar6 = (undefined4 *)*puVar13;
  puVar7 = puVar13;
  puVar10 = puStack_8c;
  while (puStack_8c = puVar6, puStack_8c != puVar13) {
    puVar6 = (undefined4 *)*puStack_8c;
    piVar5 = (int *)FUN_0053ab20(&stack0xffffff28,0);
    piVar5 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar5);
    puVar10 = puStack_8c;
  }
  puStack_8c = puVar10;
  FUN_005b7e1d(puVar7);
  iStack_94 = (uint)iStack_94._1_3_ << 8;
  piVar5 = (int *)*piStack_bc;
  while (piVar5 != piStack_bc) {
    piVar2 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar5);
    piVar5 = piVar2;
  }
  FUN_005b7e1d(piStack_bc);
  iStack_94 = 0xffffffff;
  piVar5 = (int *)*piVar1;
  while (piVar5 != piVar1) {
    piVar2 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar5);
    piVar5 = piVar2;
  }
  FUN_005b7e1d(piVar1);
  ExceptionList = pvStack_9c;
  return;
}

