
bool __fastcall FUN_00431220(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == -1) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 8))();
    uVar2 = FUN_0042b5e0(param_1,piVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
  return *(int *)(param_1 + 8) != -1;
}

