
void __fastcall FUN_0044f410(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  byte bStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = (int *)**(int **)(param_1 + 0xac);
  local_1c = param_1;
  if (piVar3 != *(int **)(param_1 + 0xac)) {
    do {
      if ((char)piVar3[9] == '\0') {
        piVar1 = (int *)piVar3[2];
        if (piVar1 != (int *)0x0) {
          cVar2 = (**(code **)(*piVar1 + 0x24))();
          if (cVar2 == '\0') {
            (**(code **)(*piVar1 + 0xc))();
          }
          else {
            bStack_14 = bStack_14 & 0xf8;
            uStack_18 = 0;
            uStack_10 = 0;
            uStack_c = 0;
            uStack_8 = 0;
            uStack_4 = 0;
            cVar2 = (**(code **)(*piVar1 + 0x24))();
            bStack_14 = bStack_14 ^ (cVar2 << 2 ^ bStack_14) & 4;
            bStack_14 = bStack_14 ^ (*(char *)((int)piVar3 + 0x19) << 1 ^ bStack_14) & 2;
            bStack_14 = bStack_14 ^ (*(byte *)(piVar3 + 6) ^ bStack_14) & 1;
            uStack_18 = 0;
            iStack_20 = 0;
            FUN_00428680(piVar1,&uStack_18,&iStack_20,1);
            piVar3[8] = iStack_20;
          }
        }
        *(undefined1 *)(piVar3 + 9) = 1;
        param_1 = local_1c;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xac));
  }
  return;
}

