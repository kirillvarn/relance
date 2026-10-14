
void __fastcall FUN_0044f550(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0xac);
  if (piVar3 != *(int **)(param_1 + 0xac)) {
    do {
      if ((char)piVar3[9] != '\0') {
        piVar1 = (int *)piVar3[2];
        if (piVar1 != (int *)0x0) {
          cVar2 = (**(code **)(*piVar1 + 0x24))();
          if (cVar2 == '\0') {
            (**(code **)(*piVar1 + 0x10))();
          }
          else {
            piVar1 = (int *)piVar3[8];
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x60))();
              (**(code **)(*piVar1 + 8))(piVar1);
              piVar3[8] = 0;
            }
          }
        }
        *(undefined1 *)(piVar3 + 9) = 0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xac));
  }
  return;
}

