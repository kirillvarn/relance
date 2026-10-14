
int __fastcall FUN_005201e0(int param_1)

{
  uint uVar1;
  CAsteroidField *this;
  undefined4 *puVar2;
  uchar *puVar3;
  undefined1 local_1e;
  IDPMsgHandler local_1d;
  undefined4 local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bffe1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 9) = local_1e;
  *(undefined1 *)(param_1 + 8) = local_1e;
  *(undefined1 *)(param_1 + 0x14) = 0;
  local_18 = param_1;
  FUN_005274a0();
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  FUN_004a2f10(&local_1d,&local_1e);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xe4);
  local_4._0_1_ = 1;
  FUN_0054c580();
  *(IDPMsgHandler *)(param_1 + 0x184) = local_1d;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)(param_1 + 0x1e4) = 4;
  FUN_00422b80(0x3f800000,0x3f800000,0x3f800000);
  FUN_00422b80(0x3f800000,0x3f800000,0x3f800000);
  FUN_00422b80(0x3f800000,0x3f800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x19c) = 0x451c4000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x1a0) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 100;
  *(undefined4 *)(param_1 + 0x1b0) = 100;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1c4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1c8) = 0x442f0000;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x1dc) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x1e0) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(IDPMsgHandler *)(param_1 + 0x220) = local_1d;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar1 = FUN_00554e90();
  this = CmnAsteroid::CreateAsteroidField(uVar1);
  *(CAsteroidField **)(param_1 + 4) = this;
  if (this == (CAsteroidField *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x11e,
               "NO cmn field created for client asteroid field");
  }
  else {
    CmnAsteroid::CAsteroidField::AddRef(this);
  }
  *(undefined4 *)(param_1 + 0x20) = 400;
  *(undefined4 *)(param_1 + 0x24) = 0x4b0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  local_1c = *(undefined4 *)(param_1 + 0xc);
  puVar2 = (undefined4 *)FUN_0053e430(local_14);
  FUN_00527310(local_10,*puVar2,local_1c);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x42c80000;
  FUN_005995c0(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  *(undefined4 *)(param_1 + 0x194) = 0;
  puVar3 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x228),
                                 *(undefined4 *)(param_1 + 0x224));
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x220),puVar3,*(ulong *)(param_1 + 0x228));
  *(uchar **)(param_1 + 0x228) = puVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x234) = 1;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  ExceptionList = local_c;
  return param_1;
}

