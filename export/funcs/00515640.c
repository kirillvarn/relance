
void __fastcall FUN_00515640(undefined4 *param_1)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    local_10 = 0x3f800000;
    local_20 = 0x3f800000;
    local_30 = 0x3f800000;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    (**(code **)(*(int *)param_1[1] + 0x94))(0xffffffff,&local_30);
    (**(code **)(*(int *)param_1[1] + 0x60))();
  }
  if (param_1[3] != 0) {
    FUN_005379b0();
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  if (param_1[2] != 0) {
    FUN_004f7a90();
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00537ad0();
    param_1[3] = 0;
  }
  *param_1 = 0;
  return;
}

