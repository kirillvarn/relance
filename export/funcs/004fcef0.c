
undefined4 __thiscall FUN_004fcef0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    do {
      if (((piVar2[4] == param_2[2]) && (piVar2[3] == param_2[1])) && (piVar2[5] == param_2[3])) {
        if (piVar2[4] != 0) {
          FUN_004f7a90();
          piVar2[4] = 0;
        }
        piVar1 = (int *)piVar2[3];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          piVar2[3] = 0;
        }
        if (piVar2[5] != 0) {
          FUN_00537ad0();
          piVar2[5] = 0;
        }
        piVar2[2] = 0;
        if ((int *)param_2[2] != (int *)0x0) {
          (**(code **)(*(int *)param_2[2] + 4))();
        }
        if ((int *)param_2[1] != (int *)0x0) {
          uStack_10 = 0x3f800000;
          uStack_20 = 0x3f800000;
          uStack_30 = 0x3f800000;
          uStack_14 = 0;
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_4 = 0;
          uStack_8 = 0;
          uStack_c = 0;
          (**(code **)(*(int *)param_2[1] + 0x94))(0xffffffff,&uStack_30);
          (**(code **)(*(int *)param_2[1] + 0x60))();
        }
        if (param_2[3] != 0) {
          FUN_005379b0();
          (**(code **)(*(int *)param_2[3] + 8))();
        }
        if (param_2[2] != 0) {
          FUN_004f7a90();
          param_2[2] = 0;
        }
        piVar1 = (int *)param_2[1];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          param_2[1] = 0;
        }
        if (param_2[3] != 0) {
          FUN_00537ad0();
          param_2[3] = 0;
        }
        *param_2 = 0;
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
  }
  return 0;
}

