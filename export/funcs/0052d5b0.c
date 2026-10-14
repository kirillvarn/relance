
void __fastcall thunk_FUN_0052caa0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_005c047e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005dd4bc;
  uStack_4 = 2;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0x60))();
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[10] != 0) {
    uStack_1c = 0x3f800000;
    uStack_2c = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    FUN_004f7d20(0,0xffffffff,&uStack_3c);
    (**(code **)(*(int *)param_1[10] + 4))();
    FUN_004f7a90();
    param_1[10] = 0;
  }
  if (param_1[9] != 0) {
    FUN_00536170(param_1[9]);
  }
  if (param_1[8] != 0) {
    FUN_0040e990();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x10))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0x10))();
  }
  AnimDB::Rem(param_1[4]);
  if (param_1[4] != -1) {
    (**(code **)(**(int **)Anim_exref + 0x38))(*(int **)Anim_exref,param_1[4]);
    (**(code **)(**(int **)Anim_exref + 0x28))(*(int **)Anim_exref,param_1[4]);
    param_1[4] = 0xffffffff;
  }
  if (param_1[0xb] != 0) {
    FUN_0040e990();
  }
  if (param_1[0xe] != 0) {
    FUN_004f7a90();
    param_1[0xe] = 0;
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd] = 0;
  }
  if (param_1[0xf] != 0) {
    FUN_00537ad0();
    param_1[0xf] = 0;
  }
  param_1[0xc] = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if (param_1[0xe] != 0) {
    FUN_004f7a90();
    param_1[0xe] = 0;
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd] = 0;
  }
  if (param_1[0xf] != 0) {
    FUN_00537ad0();
    param_1[0xf] = 0;
  }
  param_1[0xc] = 0;
  uStack_4 = uStack_4 & 0xffffff00;
  if (param_1[4] != -1) {
    (**(code **)(**(int **)Anim_exref + 0x38))(*(int **)Anim_exref,param_1[4]);
    (**(code **)(**(int **)Anim_exref + 0x28))(*(int **)Anim_exref,param_1[4]);
    param_1[4] = 0xffffffff;
  }
  uStack_4 = 0xffffffff;
  FUN_00531af0();
  ExceptionList = pvStack_c;
  return;
}

