
void __fastcall FUN_005444a0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c0edd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-3] = &PTR_LAB_005dfd6c;
  param_1[-2] = &PTR_LAB_005dfcec;
  *param_1 = &PTR_FUN_005dfce0;
  param_1[0x28] = &PTR_FUN_005dfcd8;
  local_4 = 3;
  FUN_00420f70();
  if ((Root *)param_1[0x3e] != (Root *)0x0) {
    Archetype::Root::Release((Root *)param_1[0x3e]);
    param_1[0x3e] = 0;
  }
  if ((int *)param_1[0x4f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4f] + 0x10))();
  }
  if ((int *)param_1[0x50] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x50] + 0x60))();
    (**(code **)(*(int *)param_1[0x50] + 8))((int *)param_1[0x50]);
    param_1[0x50] = 0;
  }
  if ((int *)param_1[0x39] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x39] + 0x60))();
    (**(code **)(*(int *)param_1[0x39] + 8))((int *)param_1[0x39]);
    param_1[0x39] = 0;
  }
  iVar2 = param_1[0x5f];
  if (iVar2 != 0) {
    FUN_00503a80();
    FUN_005b7e1d(iVar2);
    param_1[0x5f] = 0;
  }
  if (param_1[1] == 0) goto LAB_00544613;
  bVar1 = SinglePlayer();
  if (bVar1) {
    iVar2 = param_1[1];
    if ((iVar2 == 0) || (((byte)*(undefined4 *)(iVar2 + 0x4c) & 3) != 3)) {
      iVar2 = FUN_0054bb00();
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xb4);
    }
    iVar3 = FUN_0054bb00();
    if (iVar2 == iVar3) goto LAB_005445bc;
  }
  else {
LAB_005445bc:
    piVar4 = (int *)param_1[1];
    if ((piVar4 == (int *)0x0) || ((piVar4[0x13] & 0x103U) != 0x103)) {
      piVar4 = (int *)0x0;
    }
    (**(code **)(*piVar4 + 0x94))(PTR_DAT_00613ed0);
  }
  piVar4 = (int *)param_1[1];
  if ((piVar4 == (int *)0x0) || ((piVar4[0x13] & 0x103U) != 0x103)) {
    piVar4 = (int *)0x0;
  }
  (**(code **)(*piVar4 + 0xbc))(-(uint)(param_1 != (undefined4 *)0xc) & (uint)(param_1 + 0x28));
LAB_00544613:
  local_4 = CONCAT31(local_4._1_3_,4);
  if (param_1[0x5c] != 0) {
    FUN_004f7a90();
    param_1[0x5c] = 0;
  }
  piVar4 = (int *)param_1[0x5b];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[0x5b] = 0;
  }
  if (param_1[0x5d] != 0) {
    FUN_00537ad0();
    param_1[0x5d] = 0;
  }
  param_1[0x5a] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1[0x58] != 0) {
    FUN_004f7a90();
    param_1[0x58] = 0;
  }
  piVar4 = (int *)param_1[0x57];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[0x57] = 0;
  }
  if (param_1[0x59] != 0) {
    FUN_00537ad0();
    param_1[0x59] = 0;
  }
  param_1[0x56] = 0;
  local_4._0_1_ = 1;
  FUN_00420d10();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[0x3c] != 0) {
    FUN_004f7a90();
    param_1[0x3c] = 0;
  }
  piVar4 = (int *)param_1[0x3b];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[0x3b] = 0;
  }
  if (param_1[0x3d] != 0) {
    FUN_00537ad0();
    param_1[0x3d] = 0;
  }
  param_1[0x3a] = 0;
  local_4 = 0xffffffff;
  FUN_00532d40();
  ExceptionList = pvStack_c;
  return;
}

