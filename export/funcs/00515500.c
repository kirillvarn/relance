
void __fastcall FUN_00515500(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_4;
  
  puVar4 = (undefined4 *)0x0;
  local_4 = param_1;
  while( true ) {
    piVar5 = DAT_006751c0;
    if (puVar4 != (undefined4 *)0x0) {
      piVar5 = (int *)*puVar4;
    }
    if (piVar5 == (int *)0x0) break;
    puVar4 = (undefined4 *)*piVar5;
    if ((int *)piVar5[1] == (int *)0x0) {
      DAT_006751c0 = (int *)*piVar5;
    }
    else {
      *(int *)piVar5[1] = *piVar5;
    }
    if (*piVar5 == 0) {
      DAT_006751c4 = piVar5[1];
    }
    else {
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    piVar6 = DAT_006751b8;
    DAT_006751c8 = DAT_006751c8 + -1;
    piVar1 = piVar5;
    piVar2 = piVar5;
    if (DAT_006751b8 != (int *)0x0) {
      *DAT_006751b8 = (int)piVar5;
      DAT_006751b8 = piVar1;
      piVar1 = DAT_006751b4;
      piVar2 = DAT_006751b8;
    }
    DAT_006751b8 = piVar2;
    DAT_006751b4 = piVar1;
    piVar5[1] = (int)piVar6;
    *piVar5 = 0;
    DAT_006751bc = DAT_006751bc + 1;
    if ((piVar5[4] != 0) && (piVar6 = *(int **)piVar5[3], piVar6 != (int *)piVar5[3])) {
      do {
        iVar3 = FUN_005416c0(*(undefined4 *)((int)piVar6 + 8),1);
        if (iVar3 != 0) {
          FUN_005139d0(iVar3);
        }
        FUN_00516f70(&local_4,piVar6);
        piVar6 = *(int **)piVar5[3];
      } while (piVar6 != (int *)piVar5[3]);
    }
    FUN_00515640();
  }
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    piVar5 = DAT_006751b4;
    if (puVar4 != (undefined4 *)0x0) {
      piVar5 = (int *)*puVar4;
    }
    if (piVar5 == (int *)0x0) break;
    puVar4 = (undefined4 *)*piVar5;
    if ((int *)piVar5[1] == (int *)0x0) {
      DAT_006751b4 = (int *)*piVar5;
    }
    else {
      *(int *)piVar5[1] = *piVar5;
    }
    if (*piVar5 == 0) {
      DAT_006751b8 = (int *)piVar5[1];
    }
    else {
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    DAT_006751bc = DAT_006751bc + -1;
    FUN_00515730();
    FUN_005b7e1d(piVar5);
  }
  return;
}

