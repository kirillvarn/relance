
void __thiscall FUN_00503cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
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
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x158);
  if (((iVar1 == 2) || (iVar1 == 3)) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_004ff3c0(param_2);
  }
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x158) == 4) {
    if (*(char *)(param_1 + 0xd8) == '\0') {
      if ((*(char *)(param_1 + 0x6d) == '\0') &&
         (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x70))) {
        if (*(int **)(param_1 + 0x40) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x40) + 4))();
        }
        if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
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
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(0xffffffff,&local_30);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x60))();
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_005379b0();
          (**(code **)(**(int **)(param_1 + 0x44) + 8))();
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_004f7a90();
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x3c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_00537ad0();
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined1 *)(param_1 + 0x6d) = 1;
      }
      if (*(char *)(param_1 + 0xd8) == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}

