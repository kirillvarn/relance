
void FUN_0059e300(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piStack_20;
  int aiStack_1c [2];
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_005b7e90();
  if (DAT_0067dcf0 < 1) {
    uStack_c = 0xb50;
    uStack_10 = 0x59e323;
    FUN_00421ed0();
    uStack_10 = 0xde1;
    piStack_14 = (int *)0x59e32d;
    FUN_00421ed0();
    piStack_14 = (int *)0xb44;
    aiStack_1c[1] = 0x59e337;
    FUN_00421ed0();
    aiStack_1c[1] = 0xb71;
    aiStack_1c[0] = 0x59e341;
    FUN_00421ed0();
    aiStack_1c[0] = 0xb60;
    piStack_20 = (int *)0x59e34b;
    FUN_00421ed0();
    piStack_20 = (int *)0x487;
    FUN_00422610(&DAT_0067dbf8,"E:\\FL\\Scratch\\Source\\Client\\Interface\\Win3D.cpp");
    FUN_00422950(&DAT_0067dbf8);
    piStack_14 = *(int **)MaterialBatcher_exref;
    uStack_c = 0xffffffff;
    uStack_10 = 1;
    aiStack_1c[1] = 0x59e37d;
    (**(code **)(*piStack_14 + 0x20))();
    aiStack_1c[1] = 0x59e382;
    FUN_004101e0();
    piStack_20 = *(int **)Pipeline_exref;
    aiStack_1c[1] = 0xffffffff;
    aiStack_1c[0] = 0x8b;
    (**(code **)(*piStack_20 + 0xf0))();
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1a,0);
    FUN_005a29b0();
    FUN_00559c10();
    piVar4 = (int *)0x0;
    piStack_20 = (int *)0x0;
    for (iVar7 = DAT_0067dbe8; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
      piVar1 = *(int **)(iVar7 + 8);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 0)) && ((*(byte *)(piVar1 + 0x1b) & 2) != 0)) {
        uVar2 = piVar1[0x1c];
        if (uVar2 == 0) {
          (**(code **)(*piVar1 + 0x34))();
          piVar4 = piStack_20;
        }
        else {
          if ((piVar4 == (int *)0x0) || ((uint)(&piStack_20)[(int)piVar4][0x1c] < uVar2)) {
            if ((int *)0x3ff < piVar4) goto LAB_0059e48e;
            aiStack_1c[(int)piVar4] = (int)piVar1;
          }
          else {
            iVar5 = 0;
            if (0 < (int)piVar4) {
              piVar6 = aiStack_1c;
              do {
                uVar3 = *(uint *)(*piVar6 + 0x70);
                if ((uVar2 < uVar3) ||
                   ((uVar2 == uVar3 && ((float)piVar1[0x1a] < *(float *)(*piVar6 + 0x68))))) break;
                iVar5 = iVar5 + 1;
                piVar6 = piVar6 + 1;
              } while (iVar5 < (int)piVar4);
            }
            if ((int)piVar4 - iVar5 != 0) {
              memmove(aiStack_1c + iVar5 + 1,aiStack_1c + iVar5,((int)piVar4 - iVar5) * 4);
            }
            aiStack_1c[iVar5] = (int)piVar1;
          }
          piVar4 = (int *)((int)piStack_20 + 1);
          piStack_20 = piVar4;
        }
      }
LAB_0059e48e:
    }
    iVar7 = 0;
    do {
      iVar5 = 0;
      if (0 < (int)piVar4) {
        do {
          if (((int *)aiStack_1c[iVar5])[0x1e] == iVar7) {
            (**(code **)(*(int *)aiStack_1c[iVar5] + 0x34))();
            piVar4 = piStack_20;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)piVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_00559c20();
    FUN_005a2a20();
    FUN_00417f10();
    FUN_00563af0();
    FUN_0041f150();
    (**(code **)(**(int **)MaterialBatcher_exref + 0x20))(*(int **)MaterialBatcher_exref,1,1);
  }
  return;
}

