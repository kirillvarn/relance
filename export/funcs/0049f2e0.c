
void __fastcall FUN_0049f2e0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bcb0a;
  pvStack_c = ExceptionList;
  uStack_34 = 0;
  uStack_38 = 1;
  puStack_3c = (undefined4 *)0x1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x904) + 0xa8))();
  (**(code **)(**(int **)(param_1 + 0x908) + 0xa8))(1,1,0);
  if ((int *)*DAT_00672950 != DAT_00672950) {
    FUN_0041c970(&DAT_0066fc60,DAT_006119f8);
    wcscat(&DAT_0066fc60,L"\n\n");
    puVar7 = &DAT_0066dc60;
    uVar9 = DAT_006119f8;
    bVar1 = SinglePlayer();
    FUN_004347e0(DAT_0067eca8,(-(uint)bVar1 & 0xfffffe52) + 0x689,puVar7,uVar9);
    wcscat(&DAT_0066fc60,&DAT_0066dc60);
    *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x8f4) + 0x6c) | 2;
    puVar2 = operator_new(0xc);
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_38,0x9ca4);
    puStack_3c = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
    puVar6 = (undefined4 *)puVar2[1];
    puVar4 = operator_new(0xc);
    *puVar4 = puVar2;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = puVar4;
    }
    puVar4[1] = puVar6;
    puVar2[1] = puVar4;
    *(undefined4 **)puVar4[1] = puVar4;
    FUN_0046ea00(puVar4 + 2,&puStack_3c);
    if (puStack_3c != (undefined4 *)0x0) {
      (**(code **)*puStack_3c)(1);
      puStack_3c = (undefined4 *)0x0;
    }
    StyleNode::~StyleNode((StyleNode *)&uStack_38);
    uVar9 = 0;
    puVar8 = &stack0xffffffd0;
    sVar5 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar5,puVar8,uVar9);
    FUN_0057b370();
    FUN_0057b3e0(&stack0xffffffd0);
    FUN_005798b0(0,0);
    (**(code **)(**(int **)(param_1 + 0xac0) + 0xa8))(1,0,0);
    (**(code **)(**(int **)(param_1 + 0xac4) + 0xa8))(1,0,0);
    (**(code **)(**(int **)(param_1 + 0xac8) + 0xa8))(1,0,0);
    (**(code **)(**(int **)(param_1 + 0xacc) + 0xa8))(1,0,0);
    puVar6 = (undefined4 *)*puVar2;
    while (puVar6 != puVar2) {
      puVar4 = (undefined4 *)*puVar6;
      FUN_0046d680(&puStack_3c,puVar6);
      puVar6 = puVar4;
    }
    FUN_005b7e1d(puVar2);
  }
  ExceptionList = pvStack_24;
  return;
}

