
/* WARNING: Removing unreachable block (ram,0x0046360f) */

void __thiscall FUN_004632f0(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int iVar6;
  clock_t cVar7;
  undefined *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined *local_38;
  undefined4 *local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  code *local_24;
  int iStack_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005badd2;
  local_c = ExceptionList;
  puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x358);
  while (puVar5 != *(undefined4 **)(param_1 + 0x358)) {
    if ((puVar5[4] == 0) || ((undefined4 *)puVar5[4] != param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    puVar5 = (undefined4 *)*puVar5;
    if (bVar2) {
      return;
    }
  }
  local_14 = 0;
  local_18 = 0;
  local_10 = (uint)param_2;
  ExceptionList = &local_c;
  iVar6 = FUN_005416c0(param_2,1);
  if (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 0x10);
    if ((iVar6 == 0) || (((byte)*(undefined4 *)(iVar6 + 0x4c) & 3) != 3)) {
      uVar4 = FUN_0054bb00();
    }
    else {
      uVar4 = (ushort)*(undefined4 *)(iVar6 + 0xb4);
    }
    param_2 = (undefined4 *)(uint)uVar4;
    local_14 = (uint)param_2;
  }
  cVar7 = clock();
  local_18 = (cVar7 / 1000) * 1000;
  FUN_0046d600(&param_2,*(undefined4 *)(param_1 + 0x358),&local_18);
  FUN_00462e30();
  if ((DAT_0066d44c & 1) == 0) {
    DAT_0066d44c = DAT_0066d44c | 1;
    RenderDisplayList::RenderDisplayList((RenderDisplayList *)&DAT_0066d440);
    FUN_005b7e6c(&LAB_00468bf0);
  }
  if (DAT_0066da60 == 0) {
    puVar8 = &DAT_0066d440;
  }
  else {
    puVar8 = (undefined *)FUN_004683b0();
  }
  iVar3 = DAT_0066da7c;
  piVar9 = (int *)FUN_0046cd50(&param_2,&local_14);
  iVar6 = DAT_0066da60;
  if ((*piVar9 != *(int *)(iVar3 + 4)) && (*(int *)(*piVar9 + 0x10) != 0)) {
    piVar9 = (int *)StyleNode::StyleNode((StyleNode *)&local_24,0x3ea8);
    local_4 = 0;
    param_2 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
    local_4._0_1_ = 1;
    FUN_0046c800(auStack_30,*(undefined4 *)(puVar8 + 4),&param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_24);
    iStack_20 = param_1 + 0x378;
    local_24 = _vftable__exref;
    local_4 = 2;
    param_2 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 3;
    FUN_0046c800(auStack_30,*(undefined4 *)(puVar8 + 4),&param_2);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_24);
    piVar9 = (int *)FUN_0046baf0(auStack_30);
    puVar5 = (undefined4 *)*piVar9;
    uVar10 = FUN_0053e430(auStack_2c);
    FUN_0046bba0(uVar10);
    puVar11 = (undefined4 *)FUN_0046baf0(auStack_28);
    uVar10 = *puVar11;
    for (; param_2 != puVar5; param_2 = (undefined4 *)*param_2) {
      FUN_0046c800(&local_24,uVar10,param_2 + 2);
    }
    if (DAT_0066da60 != 0) {
      FUN_004686e0();
      FUN_004684e0();
      ExceptionList = local_c;
      return;
    }
    ExceptionList = local_c;
    return;
  }
  if (DAT_0066da60 == 0) {
    ExceptionList = local_c;
    return;
  }
  puVar5 = (undefined4 *)**(undefined4 **)(DAT_0066da60 + 4);
  while( true ) {
    if (puVar5 == *(undefined4 **)(DAT_0066da60 + 4)) {
      ExceptionList = local_c;
      return;
    }
    puVar1 = (undefined *)puVar5[2];
    if (puVar1 == puVar8) break;
    puVar5 = (undefined4 *)*puVar5;
  }
  local_38 = puVar1;
  FUN_0046bb50();
  *(undefined4 *)(puVar1 + 0xc) = 0;
  FUN_005947a0(&param_2,*(undefined4 *)(iVar6 + 0x10),&local_38);
  local_34 = puVar5;
  piVar9 = (int *)FUN_0053ab20(local_1c,0);
  piVar9 = (int *)*piVar9;
  *(int *)piVar9[1] = *piVar9;
  *(int *)(*piVar9 + 4) = piVar9[1];
  FUN_005b7e1d(piVar9);
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
  ExceptionList = local_c;
  return;
}

