
void FUN_00471e80(void)

{
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
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bba49;
  local_c = ExceptionList;
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
  ExceptionList = &local_c;
  FmtStr::begin_mad_lib((FmtStr *)&local_24,0x723);
  FmtStr::end_mad_lib((FmtStr *)&local_24);
  FUN_004b9c60(&local_24,5);
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)&local_24);
  ExceptionList = local_c;
  return;
}

