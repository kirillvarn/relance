
int * FUN_00541890(uint param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1;
  piVar2 = (int *)0x0;
  if ((param_1 & 0x3fffffff) != 0) {
    piVar2 = (int *)0x0;
    if (param_2 == 0) {
      param_1 = 1;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        do {
          iVar4 = (**(code **)(*piVar3 + 0x150))();
          if ((iVar4 == 0) || ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
            iVar4 = 0;
          }
          piVar2 = piVar3;
        } while ((*(uint *)(iVar4 + 0x104) != uVar1) &&
                (piVar3 = (int *)piVar3[5], piVar2 = (int *)0x0, piVar3 != (int *)0x0));
      }
      if (piVar2 == (int *)0x0) {
        param_1 = 2;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while( true ) {
            piVar2 = piVar3;
            iVar4 = (**(code **)(*piVar2 + 0x150))();
            if ((iVar4 == 0) || ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
              iVar4 = 0;
            }
            if (*(uint *)(iVar4 + 0x104) == uVar1) break;
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
      }
    }
    else {
      param_1 = param_2;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        while (piVar2 = piVar3, uVar5 = (**(code **)(*piVar2 + 0x20))(), uVar5 != uVar1) {
          piVar3 = (int *)piVar2[5];
          if ((int *)piVar2[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
  }
  return piVar2;
}

