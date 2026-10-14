
void __thiscall FUN_00455d20(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x134);
  if (piVar2 != *(int **)(param_1 + 0x134)) {
    while (iVar1 = (**(code **)(*(int *)piVar2[2] + 0x18))(), iVar1 != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)*(int *)(param_1 + 0x134)) {
        return;
      }
    }
    *(undefined1 *)(piVar2[2] + 0x48) = param_3;
  }
  return;
}

