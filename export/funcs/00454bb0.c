
void __fastcall FUN_00454bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b9fd8;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    ExceptionList = &pvStack_c;
    FUN_004554c0(1);
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 != 0) {
    FUN_005b7ec6(iVar1,0x40,*(undefined4 *)(iVar1 + -4),&LAB_00454d70);
    FUN_005b7e1d(iVar1 + -4);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FmtStr::destroy((FmtStr *)(param_1 + 0xd4));
  FmtStr::destroy((FmtStr *)(param_1 + 0xec));
  if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x108))(1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  malloc_strfree((char **)(param_1 + 0x120));
  piVar4 = (int *)**(int **)(param_1 + 0x134);
  if (piVar4 != *(int **)(param_1 + 0x134)) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1);
      }
      piVar4[2] = 0;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x134));
  }
  FUN_00456af0();
  piVar4 = (int *)**(int **)(param_1 + 0x128);
  if (piVar4 != *(int **)(param_1 + 0x128)) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1);
      }
      piVar4[2] = 0;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x128));
  }
  FUN_00456af0();
  local_4._0_1_ = 3;
  FUN_00456b40(auStack_14,**(undefined4 **)(param_1 + 0x134),*(undefined4 **)(param_1 + 0x134));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x134));
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x128);
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)FUN_0053e430(auStack_14);
  FUN_00456b40(auStack_10,*puVar3,uVar2);
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  local_4._0_1_ = 1;
  FUN_004539e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0xec));
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0xd4));
  ExceptionList = pvStack_c;
  return;
}

