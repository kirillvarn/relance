
int * FUN_005419a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar4 = *(int *)(param_1 + 0x4c);
  piVar2 = (int *)0x0;
  if (iVar4 < 0x304) {
    if (iVar4 == 0x303) {
      param_1 = 2;
      piVar2 = (int *)0x0;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
          piVar3 = (int *)piVar2[5];
          if ((int *)piVar2[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
    else {
      switch(iVar4) {
      case 1:
        param_1 = 10;
        piVar2 = (int *)0x0;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
        break;
      case 0xf:
        param_1 = 5;
        piVar2 = (int *)0x0;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
        break;
      case 0x17:
        param_1 = 6;
        piVar2 = (int *)0x0;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
        break;
      case 0x67:
        param_1 = 3;
        piVar2 = (int *)0x0;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
        break;
      case 0xa7:
        param_1 = 4;
        piVar2 = (int *)0x0;
        piVar3 = (int *)FUN_00540fc0(&param_1);
        if (piVar3 != (int *)0x0) {
          while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
            piVar3 = (int *)piVar2[5];
            if ((int *)piVar2[5] == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
      }
    }
  }
  else if (iVar4 < 0x1004) {
    if (iVar4 == 0x1003) {
      param_1 = 8;
      piVar2 = (int *)0x0;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
          piVar3 = (int *)piVar2[5];
          if ((int *)piVar2[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
    else if (iVar4 == 0x503) {
      param_1 = 1;
      piVar2 = (int *)0x0;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
          piVar3 = (int *)piVar2[5];
          if ((int *)piVar2[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
    else if (iVar4 == 0x803) {
      param_1 = 7;
      piVar2 = (int *)0x0;
      piVar3 = (int *)FUN_00540fc0(&param_1);
      if (piVar3 != (int *)0x0) {
        while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
          piVar3 = (int *)piVar2[5];
          if ((int *)piVar2[5] == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
  }
  else if (iVar4 == 0x4001) {
    param_1 = 9;
    piVar2 = (int *)0x0;
    piVar3 = (int *)FUN_00540fc0(&param_1);
    if (piVar3 != (int *)0x0) {
      while (piVar2 = piVar3, iVar4 = (**(code **)(*piVar2 + 0x150))(), iVar4 != iVar1) {
        piVar3 = (int *)piVar2[5];
        if ((int *)piVar2[5] == (int *)0x0) {
          return (int *)0x0;
        }
      }
    }
  }
  return piVar2;
}

