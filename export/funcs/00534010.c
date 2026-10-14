
void __thiscall FUN_00534010(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_00539c60(param_2);
  piVar4 = (int *)**(int **)(param_1 + 0xb8);
  if (piVar4 != *(int **)(param_1 + 0xb8)) {
    do {
      cVar3 = (**(code **)(*(int *)piVar4[2] + 8))(param_2);
      if (cVar3 == '\0') {
        if ((int *)piVar4[2] != (int *)0x0) {
          (**(code **)(*(int *)piVar4[2] + 4))(1);
        }
        piVar5 = (int *)*piVar4;
        *(int **)piVar4[1] = piVar5;
        *(int *)(*piVar4 + 4) = piVar4[1];
        FUN_005b7e1d(piVar4);
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
      }
      else {
        piVar5 = (int *)*piVar4;
      }
      piVar4 = piVar5;
    } while (piVar5 != *(int **)(param_1 + 0xb8));
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    Fuse::Burn((Fuse *)(puVar2 + 2),param_2);
  }
  return;
}

