
void FUN_0048a180(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  list<EquipDesc,std::allocator<EquipDesc>_> local_30 [4];
  int *local_2c;
  int iStack_28;
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
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar3 = param_2;
  puStack_8 = &LAB_005bc2c2;
  pvStack_c = ExceptionList;
  DAT_00671f78 = param_1;
  DAT_00671f74 = param_2;
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
  param_1 = 0;
  ExceptionList = &pvStack_c;
  plVar5 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)FUN_004c4060();
  std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
            (local_30,plVar5);
  piVar8 = (int *)*local_2c;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (piVar8 != local_2c) {
    do {
      uVar6 = Arch2Good(piVar8[3]);
      if (uVar6 == uVar3) {
        param_1 = piVar8[7];
        break;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != local_2c);
  }
  FmtStr::begin_mad_lib((FmtStr *)&local_24,0x51e);
  FmtStr::append_good((FmtStr *)&local_24,(uint *)&DAT_00671f74);
  FmtStr::append_string((FmtStr *)&local_24,0x3ca);
  FmtStr::append_int((FmtStr *)&local_24,param_1);
  FmtStr::append_string((FmtStr *)&local_24,0x3cb);
  FmtStr::end_mad_lib((FmtStr *)&local_24);
  piVar8 = DAT_00671ff4;
  if (DAT_00671ff4 != (int *)0x0) {
    DAT_0067dcc8 = 0;
    iVar2 = DAT_00671ff4[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar8 + 0x28))();
    (**(code **)*piVar8)(1);
  }
  FmtStr::operator=((FmtStr *)&DAT_00671f98,(FmtStr *)&local_24);
  DAT_00671ff8 = 4;
  FUN_0059db20("NeuroNetMissionMessage","NeuroNetMissionMessage",0,0);
  piVar4 = local_2c;
  piVar8 = (int *)*local_2c;
  local_4 = local_4 & 0xffffff00;
  while (piVar8 != piVar4) {
    piVar8 = (int *)*piVar8;
    piVar7 = (int *)FUN_0053ab20(&param_2,0);
    piVar7 = (int *)*piVar7;
    *(int *)piVar7[1] = *piVar7;
    *(int *)(*piVar7 + 4) = piVar7[1];
    FUN_005b7e1d(piVar7);
    iStack_28 = iStack_28 + -1;
  }
  FUN_005b7e1d(local_2c);
  local_2c = (int *)0x0;
  iStack_28 = 0;
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)&local_24);
  ExceptionList = pvStack_c;
  return;
}

