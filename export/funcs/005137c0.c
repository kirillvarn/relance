
void __fastcall FUN_005137c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_30;
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
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (piVar5 = (int *)**(int **)(param_1 + 0xc), piVar5 != *(int **)(param_1 + 0xc))) {
    do {
      iVar3 = FUN_005416c0(piVar5[2],1);
      if (iVar3 != 0) {
        iVar4 = FUN_0054baf0();
        if (iVar3 == iVar4) {
          if (*(int **)(iVar3 + 0x17c) != (int *)0x0) {
            (**(code **)(**(int **)(iVar3 + 0x17c) + 4))();
          }
          piVar1 = *(int **)(iVar3 + 0x178);
          if (piVar1 != (int *)0x0) {
            FUN_004215b0();
            uStack_4 = 0;
            uStack_8 = 0;
            uStack_c = 0;
            (**(code **)(*piVar1 + 0x94))(0xffffffff,&local_30);
            (**(code **)(**(int **)(iVar3 + 0x178) + 0x60))();
          }
          if (*(int *)(iVar3 + 0x180) != 0) {
            FUN_005379b0();
            (**(code **)(**(int **)(iVar3 + 0x180) + 8))();
          }
          FUN_00502d90();
          *(byte *)(iVar3 + 0x184) = *(byte *)(iVar3 + 0x184) & 0xbf;
        }
        cVar2 = FUN_00503330();
        if (cVar2 != '\0') {
          FUN_004fcef0(iVar3 + 0x164);
        }
        *(undefined4 *)(iVar3 + 0x184) = 0;
        *(undefined4 *)(iVar3 + 0x160) = 0;
      }
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      FUN_005b7e1d(piVar5);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      piVar5 = (int *)**(int **)(param_1 + 0xc);
    } while (piVar5 != *(int **)(param_1 + 0xc));
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    uStack_10 = 0x3f800000;
    uStack_20 = 0x3f800000;
    local_30 = 0x3f800000;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_4 = 0;
    uStack_8 = 0;
    uStack_c = 0;
    (**(code **)(**(int **)(param_1 + 0x34) + 0x94))(0xffffffff,&local_30);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x60))();
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_005379b0();
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  piVar5 = *(int **)(param_1 + 0x34);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

