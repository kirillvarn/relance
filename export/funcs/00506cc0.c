
void __fastcall FUN_00506cc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  NebulaExclusionZoneMgr *this;
  int iVar3;
  undefined1 local_34 [4];
  undefined1 local_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0xe0));
    piVar1 = *(int **)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      if (piVar2[2] != 0) {
        FUN_00506f00(1);
      }
      FUN_0053ab20(local_34,0);
    }
    FUN_00535980();
    this = *(NebulaExclusionZoneMgr **)(param_1 + 0x34);
    if (this != (NebulaExclusionZoneMgr *)0x0) {
      Exclusion::NebulaExclusionZoneMgr::~NebulaExclusionZoneMgr(this);
      FUN_005b7e1d(this);
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = 0;
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      iVar3 = piVar2[4];
      if (iVar3 != 0) {
        FUN_00506eb0();
        FUN_005b7e1d(iVar3);
      }
      FUN_0052afa0();
    }
    FUN_00509d60(local_34,**(undefined4 **)(param_1 + 0x3c),*(undefined4 **)(param_1 + 0x3c));
    FUN_005526d0();
    if (*(int **)(param_1 + 0xec) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xec) + 4))();
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_004215b0();
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      (**(code **)(**(int **)(param_1 + 0xe8) + 0x94))(0xffffffff,local_30);
      (**(code **)(**(int **)(param_1 + 0xe8) + 0x60))();
    }
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_005379b0();
      (**(code **)(**(int **)(param_1 + 0xf0) + 8))();
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      FUN_004f7a90();
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_00537ad0();
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    piVar1 = *(int **)(param_1 + 0x270);
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)(piVar1 + 0x2d) & 8) != 0) {
        (**(code **)(*piVar1 + 8))();
      }
      FUN_00537ad0();
    }
    FUN_00425a20();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  return;
}

