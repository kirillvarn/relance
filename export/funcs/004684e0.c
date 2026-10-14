
void __fastcall FUN_004684e0(int param_1)

{
  int iVar1;
  char cVar2;
  clock_t cVar3;
  int iVar4;
  int iVar5;
  int *local_2c;
  undefined4 *local_28;
  undefined4 *puStack_24;
  code *pcStack_20;
  undefined1 local_1c [4];
  undefined1 auStack_18 [4];
  code *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb4e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar3 = clock();
  local_2c = *(int **)(param_1 + 4);
  iVar5 = (cVar3 / 1000) * 1000;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar4 = 0;
  local_28 = (undefined4 *)FUN_0053e430(local_1c);
  local_28 = (undefined4 *)*local_28;
  cVar2 = FUN_0046ec50(&local_2c,&local_28);
  if (cVar2 == '\0') {
    do {
      iVar1 = *(int *)(*(int *)(local_2c[1] + 8) + 0xc);
      if ((*(uint *)(param_1 + 0x3c) < (uint)(iVar5 - iVar1)) || (*(int *)(param_1 + 0x40) < iVar4))
      break;
      *(int *)(param_1 + 0x38) = iVar1;
      local_2c = (int *)local_2c[1];
      iVar4 = iVar4 + 1;
      local_28 = (undefined4 *)FUN_0053e430(local_1c);
      local_28 = (undefined4 *)*local_28;
      cVar2 = FUN_0046ec50(&local_2c,&local_28);
    } while (cVar2 == '\0');
    if (iVar4 < 1) goto LAB_004685b5;
  }
  else {
LAB_004685b5:
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_004685e0;
  }
  FUN_0046c860(local_1c,**(undefined4 **)(param_1 + 0x30),*(undefined4 **)(param_1 + 0x30));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_004685e0:
  do {
    local_2c = (int *)*local_2c;
    if (local_2c != (int *)**(int **)(param_1 + 4)) {
      local_10 = *(undefined4 *)(local_2c[1] + 8);
      local_14 = _vftable__exref;
      local_4 = 0;
      local_28 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 1;
      FUN_0046c800(local_1c,*(undefined4 *)(param_1 + 0x30),&local_28);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 != (undefined4 *)0x0) {
        (**(code **)*local_28)(1);
        local_28 = (undefined4 *)0x0;
      }
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
      pcStack_20 = _vftable__exref;
      local_4 = 2;
      puStack_24 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 3;
      FUN_0046c800(auStack_18,*(undefined4 *)(param_1 + 0x30),&puStack_24);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (puStack_24 != (undefined4 *)0x0) {
        (**(code **)*puStack_24)(1);
        puStack_24 = (undefined4 *)0x0;
      }
      pcStack_20 = _vftable__exref;
    }
  } while (local_2c != (int *)**(int **)(param_1 + 4));
  ExceptionList = pvStack_c;
  return;
}

