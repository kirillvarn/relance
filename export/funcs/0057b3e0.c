
void __thiscall FUN_0057b3e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 8) != 0) {
    piVar4 = (int *)**(int **)(param_2 + 4);
    if (piVar4 != *(int **)(param_2 + 4)) {
      do {
        iVar1 = *(int *)(param_1 + 0x48c);
        piVar3 = *(int **)(iVar1 + 4);
        piVar2 = operator_new(0xc);
        *piVar2 = iVar1;
        if (piVar3 == (int *)0x0) {
          piVar3 = piVar2;
        }
        piVar2[1] = (int)piVar3;
        *(int **)(iVar1 + 4) = piVar2;
        *(int **)piVar2[1] = piVar2;
        FUN_0046ea00(piVar2 + 2,piVar4 + 2);
        *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(param_2 + 4));
    }
    *(undefined1 *)(param_1 + 0x400) = 1;
    *(undefined1 *)(param_1 + 0x401) = 1;
  }
  return;
}

