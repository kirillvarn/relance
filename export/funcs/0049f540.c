
void __fastcall FUN_0049f540(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  size_t sVar6;
  int iVar7;
  undefined4 *puVar8;
  void **ppvVar9;
  undefined4 uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  void *pvStack_48;
  void *pvStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bcb0a;
  pvStack_c = ExceptionList;
  uStack_3c = 0;
  iStack_40 = 1;
  pvStack_44 = (void *)0x1;
  pvStack_48 = (void *)0x49f573;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)param_1[0x2b0] + 0xa8))();
  pvStack_48 = (void *)0x0;
  uStack_4c = 1;
  puStack_50 = (undefined4 *)0x1;
  puStack_54 = (undefined4 *)0x49f586;
  (**(code **)(*(int *)param_1[0x2b1] + 0xa8))();
  puStack_54 = (undefined4 *)0x0;
  uStack_58 = 1;
  uStack_5c = 1;
  uStack_60 = 0x49f599;
  (**(code **)(*(int *)param_1[0x2b2] + 0xa8))();
  uStack_60 = 0;
  (**(code **)(*(int *)param_1[0x2b3] + 0xa8))(1,1);
  DAT_0066fc60 = 0;
  pvStack_48 = (void *)CONCAT31(pvStack_48._1_3_,uStack_58._3_1_);
  pvStack_44 = operator_new(0xc);
  *(void **)pvStack_44 = pvStack_44;
  *(void **)((int)pvStack_44 + 4) = pvStack_44;
  iStack_40 = 0;
  piVar4 = (int *)StyleNode::StyleNode((StyleNode *)&puStack_50,0x9ca4);
  puStack_54 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))();
  pvVar3 = pvStack_44;
  puVar8 = *(undefined4 **)((int)pvStack_44 + 4);
  puVar1 = (undefined4 *)((int)pvStack_44 + 4);
  puVar5 = operator_new(0xc);
  *puVar5 = pvVar3;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = puVar5;
  }
  puVar5[1] = puVar8;
  *puVar1 = puVar5;
  *(undefined4 **)puVar5[1] = puVar5;
  FUN_0046ea00(puVar5 + 2,&puStack_54);
  iStack_40 = iStack_40 + 1;
  if (puStack_54 != (undefined4 *)0x0) {
    (**(code **)*puStack_54)(1);
    puStack_54 = (undefined4 *)0x0;
  }
  StyleNode::~StyleNode((StyleNode *)&puStack_50);
  uVar10 = 0;
  ppvVar9 = &pvStack_48;
  sVar6 = wcslen(&DAT_0066fc60);
  FUN_0057e2c0(&DAT_0066fc60,sVar6,ppvVar9,uVar10);
  FUN_0057b370();
  FUN_0057b3e0(&pvStack_48);
  FUN_005798b0(0,0);
  *(byte *)(param_1[0x23d] + 0x6c) = *(byte *)(param_1[0x23d] + 0x6c) & 0xfd;
  piVar4 = param_1 + 0x2b9;
  iVar7 = 3;
  do {
    (**(code **)(*(int *)*piVar4 + 0xa8))(0x1d,&DAT_0066fc60,0);
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  (**(code **)(*(int *)param_1[0x2b8] + 0xa8))(2,1,0);
  iVar7 = FUN_004c5040();
  if (((iVar7 != 0) && (cVar2 = *(char *)(iVar7 + 0x40), cVar2 != '\a')) && (cVar2 != '\b')) {
    (**(code **)(*DAT_0067ecd0 + 0x110))(DAT_00673344,cVar2);
    FUN_004b9bb0();
    if ((char)param_1[0x3c9] == '\0') {
      FUN_0045a460();
    }
    else {
      FUN_0043d580();
      (**(code **)(*param_1 + 0x5c))(0xef02,0,0);
    }
  }
  puVar8 = puStack_50;
  iStack_40 = 0xffffffff;
  puVar1 = (undefined4 *)*puStack_50;
  while (puVar1 != puVar8) {
    puVar5 = (undefined4 *)*puVar1;
    FUN_0046d680(&uStack_60,puVar1);
    puVar1 = puVar5;
  }
  FUN_005b7e1d(puStack_50);
  ExceptionList = pvStack_48;
  return;
}

