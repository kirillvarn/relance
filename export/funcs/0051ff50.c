
undefined4 FUN_0051ff50(undefined4 param_1,char *param_2)

{
  int *piVar1;
  CAsteroidField *this;
  int iVar2;
  uint uVar3;
  IZone *pIVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bff7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0x238);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_005201e0();
  }
  piVar1 = (int *)(DAT_006753c4 + 4);
  local_4 = 0xffffffff;
  iVar2 = FUN_0042a7e0(DAT_006753c4,*(undefined4 *)(DAT_006753c4 + 4));
  *piVar1 = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  FUN_005999b0(iVar2 + 8,&local_14);
  DAT_006753c8 = DAT_006753c8 + 1;
  iVar2 = *(int *)(*(int *)(DAT_006753c4 + 4) + 8);
  pcVar6 = param_2;
  uVar3 = FUN_00554e90();
  pIVar4 = Universe::get_non_const_zone(uVar3,pcVar6);
  if (pIVar4 == (IZone *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: AsteroidField (%s) linked to missing Zone (%s)",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",200,param_1,param_2);
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar5 = (**(code **)(*(int *)pIVar4 + 0x18))();
  if ((iVar5 != 1) && (iVar5 != 2)) {
    (**(code **)FDUMP_exref)
              (0x100002,
               "%s(%d) : *** WARNING: Asteroid field (%s) hooked up to zone (%s) which is not a valid shape"
               ,"E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0xd1,param_1,param_2);
  }
  this = *(CAsteroidField **)(iVar2 + 4);
  *(IZone **)(iVar2 + 0x1c) = pIVar4;
  if (this != (CAsteroidField *)0x0) {
    CmnAsteroid::CAsteroidField::set_zone(this,pIVar4);
  }
  FUN_00524880(DAT_00613844);
  FUN_00520850(param_1);
  ExceptionList = pvStack_c;
  return 1;
}

