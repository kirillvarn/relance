
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554eb0(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar5 = FUN_0040f130();
  if (iVar5 == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x513,
               "No active camera available upon StarSys update");
  }
  else {
    FUN_0054beb0(DAT_00679954,iVar5);
  }
  iVar6 = FUN_005792b0(0x25);
  fVar2 = param_1;
  if (iVar6 != 0) {
    iVar6 = FUN_005792b0(0x27);
    if (((iVar6 != 0) && (DAT_006798cc != 0)) &&
       (piVar9 = (int *)*DAT_006798c8, piVar9 != DAT_006798c8)) {
      do {
        (**(code **)(*(int *)piVar9[2] + 8))(iVar5,fVar2);
        piVar9 = (int *)*piVar9;
      } while (piVar9 != DAT_006798c8);
    }
    iVar6 = FUN_00509f20();
    puVar7 = *(undefined4 **)(iVar6 + 4);
    for (puVar1 = (undefined4 *)*puVar7; puVar1 != puVar7; puVar1 = (undefined4 *)*puVar1) {
      (**(code **)(*(int *)puVar1[2] + 0xc))(iVar5,fVar2);
    }
  }
  iVar6 = FUN_005201c0();
  if (0 < iVar6) {
    bVar3 = SinglePlayer();
    if ((!bVar3) && (iVar6 = FUN_005792b0(0x21), iVar6 != 0)) {
      CmnAsteroid::Update((IObjDB *)PTR_DAT_00613ed0,fVar2);
    }
    FUN_00520130(iVar5,fVar2);
  }
  piStack_14 = (int *)0x0;
  cVar4 = FUN_00428ba0(&piStack_14);
  if (cVar4 != '\0') {
    cVar4 = (**(code **)(*piStack_14 + 0x74))();
    if (cVar4 != '\0') {
      DAT_006798d8 = 0;
      DAT_006798dc = 0;
      DAT_006798e0 = 0;
      DAT_006798e4 = 0;
      DAT_006798d4 = 0xbf800000;
      DAT_006798d0 = 1;
    }
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  iVar5 = DAT_006798f4;
  if (DAT_006798e4 != 0) {
    iVar5 = DAT_006798e4;
  }
  iStack_8 = DAT_006798e0;
  if (DAT_006798e0 == 0) {
    iStack_8 = DAT_006798f0;
  }
  iStack_4 = DAT_006798dc;
  if (DAT_006798dc == 0) {
    iStack_4 = DAT_006798ec;
  }
  iVar6 = DAT_006798e8;
  if (DAT_006798d8 != 0) {
    iVar6 = DAT_006798d8;
  }
  iStack_c = iVar6;
  if (((DAT_006798e4 == 0) && (puVar7 = (undefined4 *)FUN_0054baf0(), DAT_00679954 != (int *)0x0))
     && (puVar7 != (undefined4 *)0x0)) {
    iVar10 = *DAT_00679954;
    uVar8 = (**(code **)*puVar7)(0x400000);
    piVar9 = (int *)(**(code **)(iVar10 + 0x30))(uVar8);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x74))(&iStack_10);
      bVar3 = ID_String::IsEmpty((ID_String *)&iStack_10);
      if (!bVar3) {
        iVar5 = iStack_10;
      }
    }
  }
  bVar3 = DAT_00679958 != 2;
  bVar12 = DAT_00679968 != '\x01';
  DAT_00679968 = '\0';
  iVar10 = FUN_0054baf0();
  if (iVar10 == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = *(int *)(iVar10 + 0x158) != 0;
  }
  if ((bVar3) || (bVar12)) {
    if (DAT_00679960 == '\0') goto LAB_00555136;
  }
  else {
    DAT_00679960 = '\x01';
    _DAT_00679964 = _DAT_005c7474;
  }
  _DAT_00679964 = _DAT_00679964 + param_1;
  if (*(float *)MUSIC_CROSS_FADE_DELAY_exref <= _DAT_00679964) {
    DAT_00679960 = '\0';
    _DAT_00679964 = 0.0;
    _DAT_0067996c = 1000.0;
  }
LAB_00555136:
  if (iVar6 == 0) {
    if (DAT_00679960 != '\0') {
      return;
    }
  }
  else {
    DAT_00679960 = '\0';
  }
  _DAT_0067996c = _DAT_0067996c + param_1;
  if (_DAT_005d55b4 <= _DAT_0067996c) {
    DAT_00679970 = FUN_00555240();
    _DAT_0067996c = 0.0;
    iVar6 = iStack_c;
  }
  if (bVar12) {
    if (DAT_00679970 == '\0') {
      uVar11 = -(uint)bVar13 & 4;
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 2;
  }
  if (iVar6 != 0) {
    uVar11 = 3;
  }
  if (uVar11 != DAT_00679958) {
    DAT_00679960 = '\x01';
    _DAT_00679964 = 0.0;
    DAT_00679958 = uVar11;
  }
  iVar10 = 0;
  if ((((DAT_00679958 != 4) && (iVar10 = iVar5, DAT_00679958 != 0)) &&
      (iVar10 = iStack_8, DAT_00679958 != 1)) &&
     ((iVar10 = iStack_4, DAT_00679958 != 2 && (iVar10 = 0, DAT_00679958 == 3)))) {
    iVar10 = iVar6;
  }
  if (DAT_0067995c != iVar10) {
    param_1 = (float)iVar10;
    FUN_004288e0(&param_1,DAT_006798d0,DAT_006798d4);
    DAT_0067995c = iVar10;
  }
  return;
}

