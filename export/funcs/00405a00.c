
undefined1 __thiscall FUN_00405a00(int *param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_1;
  
  iVar2 = 0;
  local_1 = 0;
  if (0 < param_1[1]) {
    iVar3 = *param_1;
    piVar4 = (int *)(iVar3 + 0x10);
    do {
      if (*piVar4 == param_2) {
        iVar5 = *(int *)(iVar2 * 0x1c + 0x14 + iVar3);
        piVar4 = (int *)(iVar2 * 0x1c + iVar3);
        local_1 = 1;
        *(undefined1 *)((int)piVar4 + 0x19) = 1;
        if (param_4 != iVar5) {
          iVar2 = 0;
          piVar4[5] = param_4;
          if (0 < *piVar4) {
            iVar3 = 0;
            do {
              *(int *)(iVar3 + 0xc + piVar4[1]) = param_4;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 0x10;
            } while (iVar2 < *piVar4);
          }
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 7;
    } while (iVar2 < param_1[1]);
  }
  if (param_3 != '\0') {
    for (iVar2 = (**(code **)(**(int **)Engine_exref + 0xd8))
                           (*(int **)Engine_exref,param_2,0,0xffffffff); iVar2 != -1;
        iVar2 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,param_2,0,iVar2))
    {
      iVar3 = 0;
      if (0 < param_1[1]) {
        iVar5 = *param_1;
        piVar4 = (int *)(iVar5 + 0x10);
        do {
          if (*piVar4 == iVar2) {
            iVar1 = *(int *)(iVar3 * 0x1c + 0x14 + iVar5);
            piVar4 = (int *)(iVar3 * 0x1c + iVar5);
            local_1 = 1;
            *(undefined1 *)((int)piVar4 + 0x19) = 1;
            if (param_4 != iVar1) {
              iVar3 = 0;
              piVar4[5] = param_4;
              if (0 < *piVar4) {
                iVar5 = 0;
                do {
                  *(int *)(iVar5 + 0xc + piVar4[1]) = param_4;
                  iVar3 = iVar3 + 1;
                  iVar5 = iVar5 + 0x10;
                } while (iVar3 < *piVar4);
              }
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 7;
        } while (iVar3 < param_1[1]);
      }
    }
  }
  return local_1;
}

