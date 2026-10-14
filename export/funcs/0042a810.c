
void FUN_0042a810(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_4;
  
  iVar4 = (int)param_2 - (int)param_1;
  piVar6 = param_2;
  piVar2 = param_1;
  do {
    if (iVar4 >> 2 < 0x11) {
      return;
    }
    param_1 = (int *)*piVar2;
    param_2 = (int *)piVar6[-1];
    local_4 = piVar2[(iVar4 >> 2) / 2];
    piVar5 = piVar6;
    piVar7 = piVar2;
    if (((param_1 == (int *)0x0) || (local_4 == 0)) ||
       (*(float *)((int)param_1 + 0x28) <= *(float *)(local_4 + 0x28))) {
      cVar3 = FUN_0042a970(&param_1,&param_2);
      iVar4 = (int)param_1;
      if ((cVar3 == '\0') &&
         (cVar3 = FUN_0042a970(&local_4,&param_2), iVar4 = (int)param_2, cVar3 == '\0')) {
        iVar4 = local_4;
      }
    }
    else if ((param_2 == (int *)0x0) ||
            ((iVar4 = local_4, *(float *)(local_4 + 0x28) <= *(float *)((int)param_2 + 0x28) &&
             (iVar4 = (int)param_2,
             *(float *)((int)param_1 + 0x28) <= *(float *)((int)param_2 + 0x28))))) {
      iVar4 = (int)param_1;
    }
LAB_0042a8d4:
    for (; ((iVar1 = *piVar7, iVar1 != 0 && (iVar4 != 0)) &&
           (*(float *)(iVar4 + 0x28) < *(float *)(iVar1 + 0x28))); piVar7 = piVar7 + 1) {
    }
    do {
      piVar5 = piVar5 + -1;
      if ((iVar4 == 0) || (*piVar5 == 0)) break;
    } while (*(float *)(*piVar5 + 0x28) < *(float *)(iVar4 + 0x28));
    if (piVar7 < piVar5) {
      *piVar7 = *piVar5;
      *piVar5 = iVar1;
      piVar7 = piVar7 + 1;
      goto LAB_0042a8d4;
    }
    if ((int)((int)piVar7 - (int)piVar2 & 0xfffffffcU) <
        (int)((int)piVar6 - (int)piVar7 & 0xfffffffcU)) {
      FUN_0042a810(piVar2,piVar7,param_3,0);
    }
    else {
      FUN_0042a810(piVar7,piVar6,param_3,0);
      piVar6 = piVar7;
      piVar7 = piVar2;
    }
    iVar4 = (int)piVar6 - (int)piVar7;
    piVar2 = piVar7;
  } while( true );
}

