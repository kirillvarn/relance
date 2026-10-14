
int * __thiscall FUN_005038c0(int *param_1,int param_2)

{
  undefined3 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  bool bVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf927;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ID_String::clear((ID_String *)(param_1 + 6));
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x32] = 0x3f800000;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (DAT_00674fd0 == 0) {
    puVar2 = (undefined4 *)FUN_00411c50(0x10000,2);
    (**(code **)FDUMP_exref)
              (*puVar2,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0xd5,
               "no JumpShipEffectDesc was loaded, creating a default");
    pvVar3 = operator_new(0x14);
    local_4._0_1_ = 4;
    if (pvVar3 == (void *)0x0) {
      DAT_00674fd0 = 0;
      uVar1 = local_4._1_3_;
    }
    else {
      DAT_00674fd0 = FUN_00503a50();
      uVar1 = local_4._1_3_;
    }
  }
  local_4._1_3_ = uVar1;
  local_4._0_1_ = 3;
  bVar4 = DAT_00674fd0 == 0;
  *param_1 = DAT_00674fd0;
  if (bVar4) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x1d5,
               "no JumpShipEffect descriptor found");
  }
  param_1[2] = 0x40a00000;
  param_1[3] = 0x40a00000;
  param_1[5] = 0x3f000000;
  param_1[4] = 0x3f000000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x1a] = param_2;
  ExceptionList = pvStack_c;
  return param_1;
}

