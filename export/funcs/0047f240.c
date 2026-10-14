
void __thiscall FUN_0047f240(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x32c) = param_2;
  if ((*(int *)(param_1 + 0x360) == 0) && (*(char *)(param_1 + 0x35c) == '\0')) {
    DAT_00671ce4 = param_2;
  }
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  FUN_0047e590();
  FUN_004795f0(0);
  if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x3c4),0);
  }
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  FUN_004c6a50(0,0,5);
  FUN_004795f0(0);
  if (*(int *)(param_1 + 0x360) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
  }
  if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,0,0);
  }
  if (((*(int *)(param_1 + 0x360) != 0) && (param_3 != '\0')) &&
     (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 1)) {
    FUN_0047f240(*(undefined4 *)(param_1 + 0x32c),1);
    iVar1 = *(int *)(param_1 + 0x360);
    *(undefined4 *)(iVar1 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(iVar1 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 0x360) + 0x4ec) = 0;
    }
  }
  piVar2 = *(int **)(param_1 + 0x330);
  if (piVar2 != (int *)0x0) {
    switch(param_2) {
    case 0:
      (**(code **)(*piVar2 + 0xa8))(0x4c,0,0);
      return;
    case 1:
    case 3:
    case 4:
    case 5:
      (**(code **)(*piVar2 + 0xa8))(0x4c,2,0);
      break;
    case 2:
      (**(code **)(*piVar2 + 0xa8))(0x4c,1,0);
      return;
    }
  }
  return;
}

