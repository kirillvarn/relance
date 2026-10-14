
void __thiscall FUN_0052ced0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar2 = FUN_00428f80(100);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00428790();
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x8c))(param_2);
    iVar2 = **(int **)(param_1 + 0x1c);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
    (**(code **)(iVar2 + 0x80))((float)-(iVar4 * (param_2 + -1)));
    iVar2 = **(int **)(param_1 + 0x1c);
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
    (**(code **)(iVar2 + 0x98))((float)fVar5);
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c));
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x58))(*(undefined4 *)(param_1 + 0x18));
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 100))(0);
  }
  return;
}

