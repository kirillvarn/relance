
char __thiscall FUN_004b6d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_0047b3e0(param_2,param_3);
  if (cVar1 != '\0') {
    FUN_0047b410();
    if (*(int **)(param_1 + 900) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 900) + 0xa8))(0x1e,0xbcb,0);
    }
    if (*(int **)(param_1 + 0x4b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4b0) + 0xa8))(1,1,0);
    }
    if (*(int **)(param_1 + 0x3b4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3b4) + 0xa8))(1,1,0);
    }
    if (*(int **)(param_1 + 0x340) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x340) + 0xa8))(1,1,0);
    }
    if (*(int **)(param_1 + 0x4dc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4dc) + 0xa8))(1,1,0);
    }
    if (*(int **)(param_1 + 0x4d0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4d0) + 0xa8))(1,1,0);
      *(undefined4 *)(param_1 + 0x4d0) = 0;
    }
    FUN_0047f240(4,1);
  }
  FUN_005760d0(0xf);
  return cVar1;
}

