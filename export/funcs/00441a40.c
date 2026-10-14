
void __thiscall FUN_00441a40(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  
  piVar2 = *(int **)(param_1 + 0x380);
  piVar3 = (int *)*piVar2;
  piVar5 = (int *)0x0;
  piVar4 = (int *)0x0;
  if (piVar3 != piVar2) {
    do {
      piVar6 = piVar5;
      if (((*(char *)((int)piVar3 + 9) == '\0') &&
          (iVar1 = piVar3[0xe], piVar6 = piVar3 + 2, iVar1 != 6)) &&
         ((iVar1 == 5 || ((iVar1 == 7 || (piVar6 = piVar5, iVar1 == 8)))))) {
        piVar4 = piVar3 + 2;
        piVar6 = piVar5;
      }
      piVar3 = (int *)*piVar3;
      piVar5 = piVar6;
    } while (piVar3 != piVar2);
    if ((piVar6 != (int *)0x0) && (piVar4 != (int *)0x0)) {
      if (param_2 == '\0') {
        uStack_1c = 0;
        piStack_20 = (int *)0x0;
        *(undefined1 *)piVar4 = 0;
        uStack_24 = 2;
        (**(code **)(*(int *)piVar4[6] + 0xa8))();
        (**(code **)(*(int *)piVar6[6] + 0xa8))(7,&stack0xffffffe8,0);
        (**(code **)(*(int *)piVar4[6] + 0xa8))(6,&uStack_24,0);
        piVar2 = (int *)piVar6[6];
        *(undefined1 *)piVar6 = 1;
      }
      else {
        if ((char)piVar4[8] != '\0') {
          uStack_1c = 0;
          piStack_20 = piVar4 + 9;
          *(undefined1 *)(piVar4 + 8) = 0;
          uStack_24 = 6;
          (**(code **)(*(int *)piVar4[6] + 0xa8))();
        }
        uStack_1c = 0;
        piStack_20 = (int *)0x0;
        *(undefined1 *)piVar6 = 0;
        uStack_24 = 2;
        (**(code **)(*(int *)piVar6[6] + 0xa8))();
        (**(code **)(*(int *)piVar4[6] + 0xa8))(7,&stack0xffffffe8,0);
        (**(code **)(*(int *)piVar6[6] + 0xa8))(6,&uStack_24,0);
        piVar2 = (int *)piVar4[6];
        *(undefined1 *)piVar4 = 1;
      }
      (**(code **)(*piVar2 + 0xa8))(2,1,0);
    }
  }
  return;
}

