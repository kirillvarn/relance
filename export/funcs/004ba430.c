
void FUN_004ba430(uchar *param_1,int param_2)

{
  undefined4 *puVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_30;
  FmtStr *local_2c;
  FmtStr *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar3 = DAT_00672334;
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bd39a;
  ppvVar2 = &local_c;
  puVar4 = (undefined4 *)*DAT_00672334;
  local_c = ExceptionList;
  puVar1 = DAT_00672328;
  while (ExceptionList = ppvVar2, DAT_00672328 = puVar1, puVar4 != puVar3) {
    puVar1 = (undefined4 *)*puVar4;
    FUN_004bd4b0(&local_30,puVar4);
    ppvVar2 = ExceptionList;
    puVar4 = puVar1;
    puVar1 = DAT_00672328;
  }
  if (DAT_0066d35a == '\0') {
    puVar4 = (undefined4 *)*puVar1;
    while (puVar4 != puVar1) {
      puVar3 = (undefined4 *)*puVar4;
      FUN_004bd4b0(&local_30,puVar4);
      puVar4 = puVar3;
    }
    DAT_00672404 = 0;
  }
  param_2 = param_2 + -8;
  local_30 = *(int *)(param_1 + 4);
  param_1 = param_1 + 8;
  if (0 < local_30) {
    do {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_1b = 0;
      local_1a = 0;
      local_19 = 0;
      local_18 = 0;
      local_17 = 0;
      local_16 = 0;
      local_15 = 0;
      local_14 = 0;
      local_13 = 0;
      local_12 = 0;
      local_11 = 0;
      local_10 = 0;
      local_f = 0;
      local_4 = 0;
      ExtractMissionLogData((FmtStr *)&local_24,&param_1,&param_2);
      puVar1 = DAT_00672334;
      puVar4 = (undefined4 *)DAT_00672334[1];
      puVar3 = operator_new(0x20);
      *puVar3 = puVar1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = puVar3;
      }
      puVar3[1] = puVar4;
      puVar1[1] = puVar3;
      *(undefined4 **)puVar3[1] = puVar3;
      local_2c = (FmtStr *)(puVar3 + 2);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_28 = local_2c;
      if (local_2c != (FmtStr *)0x0) {
        FmtStr::FmtStr(local_2c,(FmtStr *)&local_24);
      }
      DAT_00672338 = DAT_00672338 + 1;
      local_4 = 0xffffffff;
      FmtStr::~FmtStr((FmtStr *)&local_24);
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  ExceptionList = local_c;
  return;
}

