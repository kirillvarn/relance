
void FUN_005139d0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
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
  
  iVar3 = FUN_0054baf0();
  if (param_1 == iVar3) {
    if (*(int **)(param_1 + 0x17c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x17c) + 4))();
    }
    if (*(int **)(param_1 + 0x178) != (int *)0x0) {
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
      (**(code **)(**(int **)(param_1 + 0x178) + 0x94))(0xffffffff,&local_30);
      (**(code **)(**(int **)(param_1 + 0x178) + 0x60))();
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      FUN_005379b0();
      (**(code **)(**(int **)(param_1 + 0x180) + 8))();
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_004f7a90();
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x178);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      FUN_00537ad0();
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) & 0xbf;
  }
  if ((*(int *)(param_1 + 0x16c) == 0) || ((*(byte *)(*(int *)(param_1 + 0x16c) + 8) & 2) != 0)) {
    piVar1 = *(int **)(param_1 + 0x168);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (cVar2 != '\0') goto LAB_00513b19;
    }
    if ((*(int *)(param_1 + 0x170) == 0) || (*(int *)(*(int *)(param_1 + 0x170) + 0xd4) != 0))
    goto LAB_00513b22;
  }
LAB_00513b19:
  FUN_004fcef0(param_1 + 0x164);
LAB_00513b22:
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

