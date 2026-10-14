
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc990(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd459;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((DAT_0066d398 != 0) && (ExceptionList = &local_c, cVar2 = FUN_0045b2c0(), cVar2 != '\0')) ||
     (DAT_00672400 != 0)) {
    _DAT_00672408 = 0.0;
    ExceptionList = local_c;
    return;
  }
  if ((DAT_0067232c == 0) && (DAT_0067240c == 0)) {
    fVar6 = (float10)FUN_0042d680();
    _DAT_00672408 = (float)(fVar6 + (float10)_DAT_00672408);
    ExceptionList = local_c;
    return;
  }
  bVar1 = true;
  if ((DAT_0067dcc8 != '\0') || (cVar2 = FUN_0042d740(), cVar2 != '\0')) {
    bVar1 = false;
  }
  cVar2 = FUN_0045a470();
  if (cVar2 != '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar2 = FUN_00442720();
  if (cVar2 != '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar2 = FUN_0041dd90();
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return;
  }
  if (!bVar1) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = FUN_0059da10("NeuroNetMissionMessage");
  if (iVar3 != 0) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = FUN_0059da10("NN_Trade");
  if (iVar3 != 0) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = FUN_0059da10("NN_Scanner");
  if (iVar3 != 0) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = FUN_0059da10("NN_CommodityByBase");
  if (iVar3 != 0) {
    ExceptionList = local_c;
    return;
  }
  if (DAT_0067240c != 0) {
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
    FmtStr::begin_mad_lib((FmtStr *)&local_24,0x3d3);
    FmtStr::append_int((FmtStr *)&local_24,DAT_0067240c);
    FmtStr::end_mad_lib((FmtStr *)&local_24);
    DAT_0067240c = 0;
    iVar3 = *DAT_00672328;
    piVar5 = *(int **)(iVar3 + 4);
    piVar4 = operator_new(0x20);
    *piVar4 = iVar3;
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar4;
    }
    piVar4[1] = (int)piVar5;
    *(int **)(iVar3 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    FUN_004bd5d0(piVar4 + 2,&local_24);
    DAT_0067232c = DAT_0067232c + 1;
    FUN_004ba5a0(*DAT_00672328 + 8);
    FUN_005645c0(0x27);
    local_4 = 0xffffffff;
    FmtStr::~FmtStr((FmtStr *)&local_24);
  }
  iVar3 = FUN_0059db20("MissionObjectiveWindow","MissionObjectiveWindow",0,0);
  _DAT_00672408 = 0.0;
  if (iVar3 == 0) {
    _DAT_00672408 = 0.0;
    ExceptionList = local_c;
    return;
  }
  FUN_004bb6b0();
  ExceptionList = local_c;
  return;
}

