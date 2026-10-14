
void __thiscall FUN_00405930(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    piVar3 = (int *)(*param_1 + 0x10);
    do {
      if (*piVar3 == param_2) {
        *(undefined1 *)(iVar1 * 0x1c + 0x18 + *param_1) = 1;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 7;
    } while (iVar1 < param_1[1]);
  }
  if (param_3 != '\0') {
    for (iVar1 = (**(code **)(**(int **)Engine_exref + 0xd8))
                           (*(int **)Engine_exref,param_2,0,0xffffffff); iVar1 != -1;
        iVar1 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,param_2,0,iVar1))
    {
      iVar2 = 0;
      if (0 < param_1[1]) {
        piVar3 = (int *)(*param_1 + 0x10);
        do {
          if (*piVar3 == iVar1) {
            *(undefined1 *)(iVar2 * 0x1c + 0x18 + *param_1) = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 7;
        } while (iVar2 < param_1[1]);
      }
    }
  }
  return;
}

