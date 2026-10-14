
void __thiscall FUN_004fd0d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
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
  
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      if ((param_2 == 0) || (((int *)piVar3[2] != (int *)0x0 && (*(int *)piVar3[2] == param_2)))) {
        if ((int *)piVar3[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar3[4] + 4))();
        }
        if ((int *)piVar3[3] != (int *)0x0) {
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
          (**(code **)(*(int *)piVar3[3] + 0x94))(0xffffffff,&uStack_30);
          (**(code **)(*(int *)piVar3[3] + 0x60))();
        }
        if (piVar3[5] != 0) {
          FUN_005379b0();
          (**(code **)(*(int *)piVar3[5] + 8))();
        }
        if (piVar3[4] != 0) {
          FUN_004f7a90();
          piVar3[4] = 0;
        }
        piVar1 = (int *)piVar3[3];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          piVar3[3] = 0;
        }
        if (piVar3[5] != 0) {
          FUN_00537ad0();
          piVar3[5] = 0;
        }
        piVar3[2] = 0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = (int *)*piVar1;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_00502d90();
    FUN_005b7e1d(piVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar1 = piVar2;
  }
  return;
}

