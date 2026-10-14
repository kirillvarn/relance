
uint FUN_004e6960(int param_1)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(**(int **)Engine_exref + 0x80))(*(int **)Engine_exref,param_1);
  piVar5 = *(int **)(iVar2 + 0x68);
  piVar1 = *(int **)(iVar2 + 0x6c);
  piVar4 = piVar5;
  do {
    if (piVar4 == piVar1) {
      iVar2 = 0;
LAB_004e6990:
      uVar3 = (uint3)((uint)piVar1 >> 8);
      if (piVar5 == piVar1) {
        return (uint)uVar3 << 8;
      }
      do {
        if (*piVar5 == iVar2) {
          return CONCAT31(uVar3,(char)piVar5[2]);
        }
        piVar5 = piVar5 + 3;
      } while (piVar5 != piVar1);
      return (uint)piVar1 & 0xffffff00;
    }
    if (piVar4[1] == param_1) {
      iVar2 = *piVar4;
      goto LAB_004e6990;
    }
    piVar4 = piVar4 + 3;
  } while( true );
}

