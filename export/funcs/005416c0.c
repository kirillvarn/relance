
int * FUN_005416c0(uint param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  uVar1 = param_1;
  piVar3 = (int *)0x0;
  if ((param_1 & 0x3fffffff) != 0) {
    piVar3 = (int *)0x0;
    if (param_2 == 0) {
      param_1 = 1;
      piVar4 = (int *)FUN_00540fc0(&param_1);
      if (piVar4 != (int *)0x0) {
        do {
          uVar5 = (**(code **)(*piVar4 + 0x20))();
          piVar3 = piVar4;
          if (uVar5 == uVar1) break;
          piVar4 = (int *)piVar4[5];
          piVar3 = (int *)0x0;
        } while (piVar4 != (int *)0x0);
      }
      if (piVar3 == (int *)0x0) {
        param_1 = 4;
        piVar4 = (int *)FUN_00540fc0(&param_1);
        while ((piVar2 = piVar3, piVar4 != (int *)0x0 &&
               (uVar5 = (**(code **)(*piVar4 + 0x20))(), piVar2 = piVar4, uVar5 != uVar1))) {
          piVar4 = (int *)piVar4[5];
        }
        piVar3 = piVar2;
        if (piVar3 == (int *)0x0) {
          param_1 = 5;
          piVar4 = (int *)FUN_00540fc0(&param_1);
          while ((piVar2 = piVar3, piVar4 != (int *)0x0 &&
                 (uVar5 = (**(code **)(*piVar4 + 0x20))(), piVar2 = piVar4, uVar5 != uVar1))) {
            piVar4 = (int *)piVar4[5];
          }
          piVar3 = piVar2;
          if (piVar3 == (int *)0x0) {
            param_1 = 6;
            piVar4 = (int *)FUN_00540fc0(&param_1);
            while ((piVar2 = piVar3, piVar4 != (int *)0x0 &&
                   (uVar5 = (**(code **)(*piVar4 + 0x20))(), piVar2 = piVar4, uVar5 != uVar1))) {
              piVar4 = (int *)piVar4[5];
            }
            piVar3 = piVar2;
            if (piVar3 == (int *)0x0) {
              param_1 = 7;
              piVar4 = (int *)FUN_00540fc0(&param_1);
              while ((piVar2 = piVar3, piVar4 != (int *)0x0 &&
                     (uVar5 = (**(code **)(*piVar4 + 0x20))(), piVar2 = piVar4, uVar5 != uVar1))) {
                piVar4 = (int *)piVar4[5];
              }
              piVar3 = piVar2;
              if (piVar3 == (int *)0x0) {
                param_1 = 2;
                piVar4 = (int *)FUN_00540fc0(&param_1);
                if (piVar4 != (int *)0x0) {
                  while (piVar3 = piVar4, uVar5 = (**(code **)(*piVar3 + 0x20))(), uVar5 != uVar1) {
                    piVar4 = (int *)piVar3[5];
                    if ((int *)piVar3[5] == (int *)0x0) {
                      return (int *)0x0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      param_1 = param_2;
      piVar4 = (int *)FUN_00540fc0(&param_1);
      if (piVar4 != (int *)0x0) {
        while (piVar3 = piVar4, uVar5 = (**(code **)(*piVar3 + 0x20))(), uVar5 != uVar1) {
          piVar4 = (int *)piVar3[5];
          if ((int *)piVar3[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
  }
  return piVar3;
}

