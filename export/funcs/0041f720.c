
uint __fastcall FUN_0041f720(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  
  if ((*(byte *)(param_1 + 0x14) & 8) == 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 4);
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf3;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_005b7e1d(piVar3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar3 = piVar2;
    }
    in_EAX = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))
                       (*(int **)(param_1 + 0x10),DAT_0067eca0,5);
    *(byte *)(param_1 + 0x14) =
         ((-1 < in_EAX) << 3 ^ *(byte *)(param_1 + 0x14)) & 8 ^ *(byte *)(param_1 + 0x14);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0x14) >> 3) & 0xffffff01;
}

