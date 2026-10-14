
void FUN_00559c20(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c15a0;
  pvStack_c = ExceptionList;
  piStack_30 = *(int **)Pipeline_exref;
  puStack_28 = local_10;
  uStack_2c = 0x17;
  local_14 = 0x17;
  iStack_34 = 0x559c5b;
  ExceptionList = &pvStack_c;
  local_18 = piStack_30;
  (**(code **)(*piStack_30 + 0xf4))();
  iStack_34 = 8;
  (**(code **)(*piStack_24 + 0xf0))(piStack_24,uStack_20);
  piVar1 = *(int **)Pipeline_exref;
  uVar3 = 0xe;
  uStack_1c = 0;
  (**(code **)(*piVar1 + 0xf4))(piVar1,0xe,&iStack_34,piVar1,0xe);
  uVar2 = 0;
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar3,0);
  iStack_34._0_1_ = 1;
  FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_00679a28);
  iStack_34 = (uint)iStack_34._1_3_ << 8;
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar3,uVar2);
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar3,uVar2);
  ExceptionList = piVar1;
  return;
}

