
void FUN_0046aeb0(ushort param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_24;
  uint local_20;
  undefined1 auStack_1c [4];
  code *local_18;
  undefined *local_14;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar2 = DAT_0066da7c;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb811;
  local_c = ExceptionList;
  _param_1 = (uint)param_1;
  if (((DAT_0066da7c != 0) &&
      (ExceptionList = &local_c, FUN_0046cd50(&local_24,&param_1), local_24 != *(int *)(iVar2 + 4)))
     && (*(int *)(local_24 + 0x10) != 0)) {
    if ((char)param_2 != '\0') {
      if ((DAT_0066d44c & 1) == 0) {
        DAT_0066d44c = DAT_0066d44c | 1;
        FUN_0046ba60(&param_2);
        FUN_005b7e6c(&LAB_00468bf0);
      }
      if (DAT_0066da60 == 0) {
        puVar3 = &DAT_0066d440;
      }
      else {
        puVar3 = (undefined *)FUN_004683b0();
      }
      local_14 = &DAT_0066d418;
      local_18 = _vftable__exref;
      local_4 = 0;
      param_2 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 1;
      FUN_0046c800(&local_20,*(undefined4 *)(puVar3 + 4),&param_2);
      local_4 = (uint)local_4._1_3_ << 8;
      if (param_2 != (undefined4 *)0x0) {
        (**(code **)*param_2)(1);
        param_2 = (undefined4 *)0x0;
      }
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_18);
      puVar4 = (undefined4 *)FUN_0046baf0(&local_24);
      puVar4 = (undefined4 *)*puVar4;
      uVar5 = FUN_0053e430(auStack_1c);
      FUN_0046bba0(uVar5);
      piVar6 = (int *)FUN_0046baf0(&local_18);
      iVar2 = *piVar6;
      for (; param_2 != puVar4; param_2 = (undefined4 *)*param_2) {
        puVar1 = param_2 + 2;
        iVar7 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        *(int *)(iVar2 + 4) = iVar7;
        **(int **)(iVar7 + 4) = iVar7;
        FUN_0046ea00(iVar7 + 8,puVar1);
        *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + 1;
      }
      if (DAT_0066da60 != 0) {
        FUN_004686e0();
        FUN_004684e0();
      }
    }
    iVar2 = DAT_0066da7c;
    local_20 = _param_1;
    FUN_0046cd50(&param_2,&local_20);
    puVar4 = param_2;
    if (param_2 != *(undefined4 **)(iVar2 + 4)) {
      FUN_0046cfa0(param_2 + 3);
      iVar7 = puVar4[4];
      if (iVar7 != 0) {
        FUN_0046ba90();
        FUN_005b7e1d(iVar7);
      }
      FUN_0046c8c0(auStack_10,puVar4);
      piVar6 = (int *)(iVar2 + 0x14);
      *piVar6 = *piVar6 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

