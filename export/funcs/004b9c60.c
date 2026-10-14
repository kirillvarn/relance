
void FUN_004b9c60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void **ppvVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined4 local_24;
  int local_20;
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
  
  iVar1 = param_2;
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd459;
  local_c = ExceptionList;
  if (param_2 == 10) {
    ExceptionList = &local_c;
    FUN_004ba0f0();
    ExceptionList = local_c;
    return;
  }
  if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) && (param_2 != 3)) {
    if (param_2 != 5) {
      if ((param_2 == 7) || (ExceptionList = &local_c, param_2 == 9)) {
        ExceptionList = &local_c;
        FUN_004b9f90(param_1);
      }
      if ((iVar1 != 8) && (iVar1 != 9)) {
        ExceptionList = local_c;
        return;
      }
      FUN_004ba2a0(iVar2);
      ExceptionList = local_c;
      return;
    }
LAB_004b9cfa:
    ExceptionList = &local_c;
    FUN_004ba2a0(param_1);
    goto LAB_004b9e8b;
  }
  if (param_2 == 5) goto LAB_004b9cfa;
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
  switch(param_2) {
  case 0:
    uVar7 = *(uint *)(param_1 + 4);
    ppvVar4 = &local_c;
    if (uVar7 == 1) {
      uVar7 = 0x412;
      ppvVar4 = &local_c;
    }
    break;
  case 1:
    uVar7 = *(uint *)(param_1 + 4);
    ExceptionList = &local_c;
    ppvVar4 = &local_c;
    if (uVar7 == 1) goto LAB_004b9e20;
    break;
  case 2:
    ExceptionList = &local_c;
    if (DAT_0066d35a == '\0') {
      ExceptionList = &local_c;
      FUN_004bd550(&param_1,*DAT_00672328,DAT_00672328);
      DAT_00672404 = 0;
    }
    if (DAT_00672400 != 0) {
      FUN_0059dd00(DAT_00672400,0);
      FUN_0043d2a0(DAT_00672400);
    }
    goto switchD_004b9d5d_default;
  case 3:
    ExceptionList = &local_c;
    if (DAT_0066d35a == '\0') {
      ExceptionList = &local_c;
      FUN_004bd550(&param_1,*DAT_00672328,DAT_00672328);
      DAT_00672404 = 0;
    }
    if (DAT_00672400 != 0) {
      FUN_0059dd00(DAT_00672400,0);
      FUN_0043d2a0(DAT_00672400);
    }
LAB_004b9e20:
    uVar7 = 0x4cf;
    ppvVar4 = ExceptionList;
    break;
  default:
    goto switchD_004b9d5d_default;
  }
  ExceptionList = ppvVar4;
  FmtStr::begin_mad_lib((FmtStr *)&local_24,uVar7);
switchD_004b9d5d_default:
  FmtStr::end_mad_lib((FmtStr *)&local_24);
  if (local_20 == 0) {
    FUN_004b9f90(iVar2);
    FUN_004ba2a0(iVar2);
  }
  else {
    FUN_004b9f90(&local_24);
    if ((iVar1 == 2) || (iVar1 == 3)) {
      FUN_004ba2a0(iVar2);
    }
    FUN_004ba2a0(&local_24);
  }
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)&local_24);
LAB_004b9e8b:
  if ((iVar1 == 0) || (iVar1 == 5)) {
    bVar5 = SinglePlayer();
    if ((!bVar5) && (cVar6 = FUN_0059e6a0(), cVar6 != '\0')) {
      FUN_0045dcc0(1);
      FUN_0041dda0(1);
      ExceptionList = local_c;
      return;
    }
    FUN_0041a0f0(0,0x40400000);
    FUN_0041dda0(1);
    FUN_0041dde0("Arrow",0);
    if (DAT_006723fc != (int *)0x0) {
      FUN_0059dd00(DAT_006723fc,0);
      piVar3 = DAT_006723fc;
      if (DAT_006723fc != (int *)0x0) {
        iVar2 = DAT_006723fc[3];
        while (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 8);
          FUN_0043d2a0(iVar2);
          iVar2 = iVar1;
        }
        (**(code **)(*piVar3 + 0x28))();
        (**(code **)*piVar3)(1);
      }
      FUN_0045cef0();
    }
    FUN_0045dcc0(1);
    DAT_0067dcc8 = 0;
    FUN_005763b0(0x67,0);
    DAT_0067dcc8 = 1;
  }
  ExceptionList = local_c;
  return;
}

