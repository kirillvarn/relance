
undefined4 __thiscall FUN_00441c70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  int local_4;
  
  if (*(char *)(param_1 + 0x3e4) == '\0') {
    local_4 = param_1;
    iVar1 = FUN_0059da10("NN_Dealer");
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x6c) & 2) != 0)) && (*(int *)(iVar1 + 4) != 0)) {
      return 1;
    }
    if (param_3 == 4) {
      pcVar3 = *(code **)(param_1 + 0x370);
      if (*(code **)(param_1 + 0x370) == (code *)0x0) {
        pcVar3 = _C_exref;
      }
      iVar1 = stricmp((char *)pcVar3,"Equipment");
      if (iVar1 != 0) {
        piVar4 = (int *)**(int **)(param_1 + 0x380);
        if (piVar4 != *(int **)(param_1 + 0x380)) {
          do {
            piVar2 = piVar4 + 2;
            if (((*(char *)((int)piVar4 + 9) != '\0') && (piVar4[9] != 0)) &&
               (pcVar6 = *(char **)(piVar4[9] + 4), pcVar6 != (char *)0x0)) {
              iVar1 = 10;
              bVar7 = true;
              pcVar5 = "Equipment";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar7);
              if (bVar7) {
LAB_00441d24:
                *(undefined1 *)(param_1 + 0x3e4) = 1;
                *(undefined4 *)(param_1 + 0x3e0) = param_2;
                if ((piVar2[7] != 0) && (*(int *)(piVar2[7] + 0x18) != 0)) {
                  if (*(int *)(param_1 + 0x3b8) == 0) {
                    *(int **)(param_1 + 0x3b8) = piVar2;
                  }
                  FUN_00441700(*(undefined4 *)(param_1 + 0x3b8),piVar2);
                  return 1;
                }
                FUN_00440ac0(piVar2);
                return 1;
              }
            }
            piVar4 = (int *)*piVar4;
          } while (piVar4 != (int *)*(int *)(param_1 + 0x380));
        }
      }
    }
    else if (param_3 == 2) {
      pcVar3 = *(code **)(param_1 + 0x370);
      if (*(code **)(param_1 + 0x370) == (code *)0x0) {
        pcVar3 = _C_exref;
      }
      iVar1 = stricmp((char *)pcVar3,"Trader");
      if (iVar1 != 0) {
        piVar4 = (int *)**(int **)(param_1 + 0x380);
        if (piVar4 != *(int **)(param_1 + 0x380)) {
          do {
            piVar2 = piVar4 + 2;
            if (((*(char *)((int)piVar4 + 9) != '\0') && (piVar4[9] != 0)) &&
               (pcVar6 = *(char **)(piVar4[9] + 4), pcVar6 != (char *)0x0)) {
              iVar1 = 7;
              bVar7 = true;
              pcVar5 = "Trader";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar7);
              if (bVar7) goto LAB_00441d24;
            }
            piVar4 = (int *)*piVar4;
            if (piVar4 == (int *)*(int *)(param_1 + 0x380)) {
              return 0;
            }
          } while( true );
        }
      }
    }
    else if (param_3 == 3) {
      pcVar3 = *(code **)(param_1 + 0x370);
      if (*(code **)(param_1 + 0x370) == (code *)0x0) {
        pcVar3 = _C_exref;
      }
      iVar1 = stricmp((char *)pcVar3,"ShipDealer");
      if (iVar1 != 0) {
        piVar4 = (int *)**(int **)(param_1 + 0x380);
        if (piVar4 != *(int **)(param_1 + 0x380)) {
          do {
            piVar2 = piVar4 + 2;
            if (((*(char *)((int)piVar4 + 9) != '\0') && (piVar4[9] != 0)) &&
               (pcVar6 = *(char **)(piVar4[9] + 4), pcVar6 != (char *)0x0)) {
              iVar1 = 0xb;
              bVar7 = true;
              pcVar5 = "ShipDealer";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar7);
              if (bVar7) goto LAB_00441d24;
            }
            FUN_0053ab20(&local_4,0);
            if (piVar4 == (int *)*(int *)(param_1 + 0x380)) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}

