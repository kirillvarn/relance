
void __thiscall FUN_004a8e80(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint local_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined4 *puStack_14;
  int iStack_10;
  void *local_c;
  undefined *puStack_8;
  int iStack_4;
  
  iVar4 = (int)param_2;
  iStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bcd3a;
  local_c = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x410);
  if (((iVar8 != 0) && (*(int *)(param_1 + 0x414) - iVar8 >> 3 != 0)) &&
     (ExceptionList = &local_c,
     local_24 = Reputation::get_info_card(*(uint *)(iVar8 + (int)param_2 * 8)), local_24 != 0)) {
    param_2 = (undefined4 *)**(int **)(param_1 + 0x330);
    uVar10 = 0;
    uVar5 = Reputation::get_name(*(uint *)(iVar8 + iVar4 * 8));
    (**(code **)((int)param_2 + 0xa8))(0x1e,uVar5,uVar10);
    piVar6 = (int *)(param_1 + 0x3cc);
    iVar8 = 0xd;
    do {
      *(byte *)(piVar6[-0xd] + 0x6c) = *(byte *)(piVar6[-0xd] + 0x6c) & 0xfc;
      *(byte *)(*piVar6 + 0x6c) = *(byte *)(*piVar6 + 0x6c) & 0xfc;
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(byte *)(*(int *)(param_1 + 0x400) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x400) + 0x6c) | 2;
    *(byte *)(*(int *)(param_1 + 0x404) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x404) + 0x6c) | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x408) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    local_24 = CONCAT31(local_24._1_3_,puStack_8._0_1_);
    pvStack_20 = operator_new(0xc);
    *(void **)pvStack_20 = pvStack_20;
    *(void **)((int)pvStack_20 + 4) = pvStack_20;
    uStack_1c = 0;
    iStack_10 = 0;
    piVar6 = (int *)StyleNode::StyleNode((StyleNode *)&stack0xffffffd4,0x9ca4);
    iStack_10 = CONCAT31(iStack_10._1_3_,1);
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    puVar3 = puStack_14;
    puVar9 = (undefined4 *)puStack_14[1];
    puVar2 = puStack_14 + 1;
    iStack_4._0_1_ = 2;
    puVar7 = operator_new(0xc);
    *puVar7 = puVar3;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = puVar7;
    }
    puVar7[1] = puVar9;
    *puVar2 = puVar7;
    *(undefined4 **)puVar7[1] = puVar7;
    FUN_0046ea00(puVar7 + 2,&param_2);
    iStack_10 = iStack_10 + 1;
    iStack_4._0_1_ = 1;
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    StyleNode::~StyleNode((StyleNode *)&pvStack_20);
    FUN_0057da40(local_24,auStack_18);
    FUN_0057b370();
    FUN_0057b3e0(auStack_18);
    FUN_005798b0(0,0);
    puVar9 = puStack_14;
    iStack_4 = 0xffffffff;
    puVar2 = (undefined4 *)*puStack_14;
    while (puVar2 != puVar9) {
      puVar3 = (undefined4 *)*puVar2;
      FUN_0046d680(&local_24,puVar2);
      puVar2 = puVar3;
    }
    FUN_005b7e1d(puStack_14);
  }
  ExceptionList = local_c;
  return;
}

