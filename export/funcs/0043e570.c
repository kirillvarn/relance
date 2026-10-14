
void __thiscall FUN_0043e570(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  char unaff_DI;
  
  piVar1 = *(int **)(param_1 + 0x380);
  piVar5 = (int *)*piVar1;
  if (piVar5 != piVar1) {
    while ((*(char *)((int)piVar5 + 9) != '\0' || (piVar5[0xe] != 0xc))) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar1) {
        return;
      }
    }
    cVar3 = FUN_004b4510();
    if ((cVar3 == '\0') || (param_2 != '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    (**(code **)(*(int *)piVar5[8] + 0xa8))(2,uVar4,0);
    iVar2 = piVar5[2];
    if ((cVar3 == '\0') || (unaff_DI != '\0')) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    *(char *)(piVar5 + 2) = cVar3;
    if ((char)iVar2 != cVar3) {
      FUN_0043e210(0);
    }
  }
  return;
}

