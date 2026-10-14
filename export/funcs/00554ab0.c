
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554ab0(undefined **param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined **ppuVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStack_24 [4];
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  ppuVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != (undefined **)0x0) {
    param_1 = &PTR_FUN_005e11c8;
    ExceptionList = &pvStack_c;
    Archetype::EnumSimples((ArchEnumerator *)&param_1);
    Archetype::EnumShips((ArchEnumerator *)&param_1);
    Archetype::EnumSolars((ArchEnumerator *)&param_1);
    Archetype::EnumAsteroids((ArchEnumerator *)&param_1);
    Archetype::EnumDynamicAsteroids((ArchEnumerator *)&param_1);
    Archetype::EnumEquipment((ArchEnumerator *)&param_1);
  }
  local_20 = &PTR_FUN_005e11c0;
  local_10 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_14 = '\0';
  local_4 = 0;
  puVar6 = (undefined4 *)FUN_005afe60();
  puVar6[1] = local_18;
  *puVar6 = 0;
  puVar6[2] = ppuVar4;
  puVar2 = puVar6;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = puVar6;
    puVar2 = local_1c;
  }
  local_1c = puVar2;
  local_18 = puVar6;
  if (ppuVar4 != (undefined **)0x0) {
    (**(code **)(*ppuVar4 + 400))();
  }
  RefreshLoadingProgress();
  FUN_005200b0();
  bVar5 = SinglePlayer();
  if (!bVar5) {
    if (DAT_00679954 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*DAT_00679954)();
    }
    CmnAsteroid::Unload(uVar7);
  }
  RefreshLoadingProgress();
  FUN_00515500();
  FUN_00541210(&local_20);
  FUN_005382f0();
  FUN_005383c0();
  if (DAT_00679954 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*DAT_00679954)();
  }
  PhySys::Shutdown(uVar7);
  RefreshLoadingProgress();
  FUN_00420f70();
  FUN_00420f70();
  FUN_00420f70();
  _DAT_0067993c = 0;
  RefreshLoadingProgress();
  FUN_0054be20();
  RefreshLoadingProgress();
  FUN_0050c6e0();
  piVar8 = (int *)*DAT_006798c8;
  if (piVar8 != DAT_006798c8) {
    do {
      FUN_00509b70(piVar8[2]);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != DAT_006798c8);
  }
  piVar3 = DAT_006798c8;
  piVar8 = (int *)*DAT_006798c8;
  while (piVar8 != piVar3) {
    piVar1 = (int *)*piVar8;
    FUN_00516f70(auStack_24,piVar8);
    piVar8 = piVar1;
  }
  FUN_0050c040();
  FUN_00425a20();
  FUN_00554ce0();
  RefreshLoadingProgress();
  local_20 = &PTR_FUN_005e11c0;
  puVar2 = local_1c;
  while (puVar6 = puVar2, puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar6;
    if (local_14 == '\0') {
      FUN_005b7e1d(puVar6);
    }
    else {
      *puVar6 = local_10;
      local_10 = puVar6;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puVar2 = local_10;
  while (puVar2 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar6;
  }
  ExceptionList = pvStack_c;
  return;
}

