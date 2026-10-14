
void __fastcall FUN_0049a580(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_EBX;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_58;
  undefined2 *puStack_54;
  undefined4 uStack_50;
  undefined4 *apuStack_38 [2];
  void *pvStack_30;
  int iStack_28;
  undefined1 auStack_24 [4];
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bcac4;
  pvStack_c = ExceptionList;
  if ((int *)*DAT_00672950 == DAT_00672950) {
    uStack_50 = 1;
    puStack_54 = (undefined2 *)0x49a5c0;
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x904) + 0xa8))();
    puStack_54 = (undefined2 *)0x0;
    uStack_58 = 1;
    (**(code **)(**(int **)(param_1 + 0x908) + 0xa8))();
    wcscpy(&DAT_0066fc60,L" ");
    (**(code **)(**(int **)(param_1 + 0x8f0) + 0xa8))(0x1d,&DAT_0066fc60,0);
    *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) & 0xfd
    ;
    puVar2 = (undefined4 *)FUN_0042a7e0(0,0);
    iStack_28 = 0;
    piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_50,0x9ca4);
    iStack_28._0_1_ = 1;
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
    iStack_28._0_1_ = 2;
    FUN_0046c800(&uStack_58,puVar2,&stack0xffffffa4);
    iStack_28._0_1_ = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    iStack_28 = (uint)iStack_28._1_3_ << 8;
    StyleNode::~StyleNode((StyleNode *)&uStack_50);
    uVar10 = 0;
    puVar9 = &stack0xffffffb8;
    sVar5 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar5,puVar9,uVar10);
    FUN_0057b370();
    FUN_0057b3e0(&stack0xffffffb8);
    FUN_005798b0(0,0);
    iStack_28 = 0xffffffff;
    puVar4 = (undefined4 *)FUN_0053e430(&uStack_58);
    FUN_0046c860(&stack0xffffffa4,*puVar4,puVar2);
  }
  else {
    uStack_50 = DAT_006119f8;
    puStack_54 = &DAT_0066fc60;
    uStack_58 = 0x49a71c;
    ExceptionList = &pvStack_c;
    FUN_0041c970();
    uStack_50 = 0;
    puStack_54 = &DAT_0066fc60;
    uStack_58 = 0x1d;
    (**(code **)(**(int **)(param_1 + 0x8f0) + 0xa8))();
    FUN_0041c970(&DAT_0066fc60);
    auStack_24[0] = (undefined1)((uint)unaff_EBX >> 0x18);
    *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) | 2;
    pvStack_20 = operator_new(0xc);
    *(void **)pvStack_20 = pvStack_20;
    *(void **)((int)pvStack_20 + 4) = pvStack_20;
    iStack_1c = 0;
    uStack_10 = 3;
    piVar3 = (int *)StyleNode::StyleNode((StyleNode *)apuStack_38,0x9ca4);
    uStack_10._0_1_ = 4;
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
    pvVar1 = pvStack_20;
    puVar2 = *(undefined4 **)((int)pvStack_20 + 4);
    puVar4 = (undefined4 *)((int)pvStack_20 + 4);
    uStack_10._0_1_ = 5;
    puVar7 = operator_new(0xc);
    *puVar7 = pvVar1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = puVar7;
    }
    puVar7[1] = puVar2;
    *puVar4 = puVar7;
    *(undefined4 **)puVar7[1] = puVar7;
    FUN_0046ea00(puVar7 + 2);
    iStack_1c = iStack_1c + 1;
    uStack_10._0_1_ = 4;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)();
    }
    uStack_10 = CONCAT31(uStack_10._1_3_,3);
    StyleNode::~StyleNode((StyleNode *)apuStack_38);
    puVar9 = auStack_24;
    sVar5 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar5,puVar9);
    FUN_0057b370();
    FUN_0057b3e0();
    FUN_005798b0(0);
    uVar10 = 1;
    iVar8 = FUN_004c5040();
    if (((iVar8 != 0) && (*(char *)(iVar8 + 0x40) != '\a')) && (*(char *)(iVar8 + 0x40) != '\b')) {
      uVar10 = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x904) + 0xa8))(1,uVar10);
    (**(code **)(**(int **)(param_1 + 0x908) + 0xa8))(1,uVar10,0);
    puVar6 = apuStack_38[0];
    iStack_28 = 0xffffffff;
    puVar4 = (undefined4 *)*apuStack_38[0];
    puVar2 = apuStack_38[0];
    while (puVar4 != puVar6) {
      puVar7 = (undefined4 *)*puVar4;
      apuStack_38[0] = puVar2;
      FUN_0046d680(&puStack_54,puVar4);
      puVar4 = puVar7;
      puVar2 = apuStack_38[0];
    }
  }
  FUN_005b7e1d(puVar2);
  ExceptionList = pvStack_30;
  return;
}

