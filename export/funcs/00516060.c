
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516060(int *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  undefined1 *puVar10;
  int iVar11;
  float fStack_84;
  undefined1 auStack_80 [4];
  undefined1 local_7c [4];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [84];
  undefined1 auStack_c [12];
  
  piVar2 = (int *)FUN_005416c0(param_2,1);
  if (piVar2 != (int *)0x0) {
    if (param_3 == '\0') {
      iVar8 = piVar2[0x58];
      if (iVar8 != 0) {
        iVar3 = (**(code **)(*piVar2 + 0x20))();
        puVar4 = (undefined4 *)**(undefined4 **)(iVar8 + 0xc);
        while( true ) {
          if (*(undefined4 **)(iVar8 + 0xc) == puVar4) {
            puVar4 = (undefined4 *)FUN_00411c50(0x10000,1);
            (**(code **)FDUMP_exref)
                      (*puVar4,"%s(%d) : ERROR:General:%s",
                       "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,
                       "bad things (tm)");
            return;
          }
          if (puVar4[2] == iVar3) break;
          puVar4 = (undefined4 *)*puVar4;
        }
        if ((char)piVar2[0x61] < '\0') {
          FUN_00514f20(piVar2);
        }
        FUN_005139d0(piVar2);
        FUN_00516f70(&fStack_84,puVar4);
        if ((*(int *)(iVar8 + 0x14) != 0) && (*(int *)(iVar8 + 0x14) != 8)) {
          puVar4 = (undefined4 *)FUN_005163e0();
          if (*(int *)(iVar8 + 0x14) == 0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = (int *)(*(int *)(iVar8 + 0x14) + -8);
          }
          fStack_84 = (float)CONCAT31(fStack_84._1_3_,*(undefined1 *)(iVar8 + 0x1c));
          uVar5 = FUN_00514110(auStack_6c,piVar2,fStack_84);
          (**(code **)(*piVar2 + 0x10))();
          FUN_004e7090(auStack_78,uVar5);
          FUN_00514010(auStack_78);
          uVar5 = 0;
          if (puVar4 != (undefined4 *)0x0) {
            uVar5 = (**(code **)*puVar4)();
            cVar1 = FUN_00503330();
            if ((cVar1 == '\0') && (*(char *)(iVar8 + 0x1d) != '\0')) {
              if (*(int *)(iVar8 + 0x14) == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(iVar8 + 0x14) + -8;
              }
              iVar3 = FUN_005140c0(iVar3);
              if (*(int *)(iVar8 + 0x14) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar8 + 0x14) + -8;
              }
              uVar7 = FUN_00514110(auStack_6c,iVar6,*(undefined1 *)(iVar8 + 0x1c));
              FUN_00514010(uVar7);
              if (*(int *)(iVar8 + 0x14) == 0) {
                piVar2 = (int *)0x0;
              }
              else {
                piVar2 = (int *)(*(int *)(iVar8 + 0x14) + -8);
              }
              if (*(int *)(iVar8 + 0x14) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar8 + 0x14) + -8;
              }
              iVar11 = iVar8 + 0x30;
              puVar10 = auStack_60;
              uVar7 = (**(code **)(*piVar2 + 0x1c))(puVar10,iVar11);
              FUN_00514070(iVar3 + 0x7c,iVar6,uVar7,puVar10,iVar11);
            }
          }
          fVar9 = (float10)FUN_004fcc40(0,auStack_c,uVar5);
          fStack_84 = (float)fVar9;
          if ((*(int *)(iVar8 + 0x10) != 0) || ((float)_DAT_005c75f8 < fStack_84)) {
            FUN_00514050(fStack_84);
            return;
          }
        }
      }
    }
    else {
      if (piVar2[0x58] != 0) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x424,
                   "tradelane activate: server activating a tradelane twice for the same ship. ignoring. "
                  );
        iVar8 = piVar2[0x58];
        if (iVar8 != 0) {
          iVar3 = (**(code **)(*piVar2 + 0x20))();
          FUN_0053e430(&fStack_84);
          if (*(float *)(iVar8 + 0xc) != fStack_84) {
            do {
              if (*(int *)((int)fStack_84 + 8) == iVar3) {
                if ((char)piVar2[0x61] < '\0') {
                  FUN_00514f20(piVar2);
                }
                FUN_005139d0(piVar2);
                FUN_00516f70(auStack_80,fStack_84);
                FUN_00513b40(0);
                goto LAB_00516365;
              }
              FUN_0053ab20(auStack_80,0);
            } while (*(float *)(iVar8 + 0xc) != fStack_84);
          }
          puVar4 = (undefined4 *)FUN_00411c50(0x10000,1);
          (**(code **)FDUMP_exref)
                    (*puVar4,"%s(%d) : ERROR:General:%s",
                     "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)"
                    );
        }
      }
LAB_00516365:
      iVar8 = *param_1;
      uVar5 = (**(code **)(*piVar2 + 0x10))(local_7c);
      iVar8 = (**(code **)(iVar8 + 0x128))(uVar5);
      if (iVar8 != 0) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x42d,
                   " couldnt find lane direction for activation effect. ignoring. ");
        return;
      }
      iVar8 = FUN_00515200(param_1,fStack_84,1);
      if (iVar8 != 0) {
        FUN_005142e0(piVar2);
      }
    }
  }
  return;
}

