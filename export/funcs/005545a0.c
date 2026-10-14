
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005545a0(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [4];
  char acStack_104 [260];
  
  RefreshLoadingProgress();
  DAT_00679954 = (int *)Universe::get_system(param_1);
  if ((ISystem *)DAT_00679954 == (ISystem *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x48b,
               "Player trying to ENTER invalid system");
  }
  pcVar2 = (char *)(**(code **)(*DAT_00679954 + 0x14))();
  Universe::get_filename(acStack_104,pcVar2);
  DAT_006798d8 = 0;
  DAT_006798e8 = 0;
  DAT_006798dc = 0;
  DAT_006798ec = 0;
  DAT_006798e0 = 0;
  DAT_006798f0 = 0;
  DAT_006798e4 = 0;
  DAT_006798f4 = 0;
  DAT_006798d0 = 1;
  DAT_006798d4 = 0xbf800000;
  DAT_00679958 = 0;
  DAT_0067995c = 0;
  DAT_00679960 = 0;
  _DAT_00679964 = 0;
  DAT_00679968 = 0;
  _DAT_0067996c = 0x447a0000;
  DAT_00679970 = 0;
  FUN_005547c0(&param_1);
  *(undefined1 **)m_pCollisionFilter_exref = &LAB_005544e0;
  PhySys::Startup(param_1);
  RefreshLoadingProgress();
  FUN_00553740(acStack_104);
  RefreshLoadingProgress();
  piVar6 = (int *)*DAT_006798a4;
  if (piVar6 != DAT_006798a4) {
    do {
      Archetype::Root::Release((Root *)piVar6[2]);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != DAT_006798a4);
  }
  piVar1 = DAT_006798a4;
  piVar6 = (int *)*DAT_006798a4;
  while (piVar6 != piVar1) {
    puVar3 = (undefined4 *)FUN_0053ab20(auStack_108,0);
    FUN_00516f70(auStack_10c,*puVar3);
  }
  RefreshLoadingProgress();
  iVar4 = FUN_0054baf0();
  if ((((iVar4 != 0) && (iVar4 != -0xc)) && (piVar6 = *(int **)(iVar4 + 0x10), piVar6 != (int *)0x0)
      ) && ((piVar6[0x13] & 0x103U) == 0x103)) {
    (**(code **)(*piVar6 + 0x90))(PTR_DAT_00613ed0);
  }
  piVar6 = (int *)*DAT_00679874;
  if (piVar6 != DAT_00679874) {
    do {
      Archetype::Root::Release((Root *)piVar6[2]);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != DAT_00679874);
  }
  piVar1 = DAT_00679874;
  piVar6 = (int *)*DAT_00679874;
  while (piVar6 != piVar1) {
    piVar6 = (int *)*piVar6;
    piVar5 = (int *)FUN_0053ab20(auStack_10c,0);
    piVar5 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_005b7e1d(piVar5);
    DAT_00679878 = DAT_00679878 + -1;
  }
  return;
}

