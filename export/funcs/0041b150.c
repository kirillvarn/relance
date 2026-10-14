
int FUN_0041b150(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
  piVar5 = (int *)*DAT_006166dc;
  if (piVar5 != DAT_006166dc) {
    do {
      iVar4 = iVar4 + 1;
      if (piVar5[4] != -1) {
        (**(code **)(**(int **)TextureLib_exref + 0x1c))(*(int **)TextureLib_exref,piVar5[4]);
        piVar5[4] = -1;
      }
      if (piVar5[5] != -1) {
        (**(code **)(**(int **)MaterialLib_exref + 0x28))(*(int **)MaterialLib_exref,piVar5[5]);
        piVar5[5] = -1;
      }
      if (piVar5[7] != 0) {
        (**(code **)(**(int **)MatAnimLibrary_exref + 0x10))(piVar5[7]);
        piVar5[7] = 0;
      }
      if (piVar5[6] != 0) {
        (**(code **)(**(int **)VMeshLibrary_exref + 0x10))(piVar5[6]);
        piVar5[6] = 0;
      }
      if (*(char *)(piVar5[2] + 0x25) == '\0') {
        piVar1 = (int *)FUN_0041bd70(piVar5[2]);
LAB_0041b203:
        piVar5 = piVar1;
      }
      else {
        piVar1 = (int *)piVar5[1];
        if (piVar5 == (int *)piVar1[2]) {
          do {
            piVar5 = piVar1;
            piVar1 = (int *)piVar5[1];
          } while (piVar5 == (int *)piVar1[2]);
        }
        if ((int *)piVar5[2] != piVar1) goto LAB_0041b203;
      }
    } while (piVar5 != DAT_006166dc);
  }
  piVar1 = DAT_006166dc;
  piVar5 = (int *)*DAT_006166dc;
  if (((DAT_006166e8 != 0) && (piVar2 = (int *)FUN_0053e430(local_c), piVar5 == (int *)*piVar2)) &&
     (piVar1 == DAT_006166dc)) {
    FUN_0041ba80(DAT_006166dc[1]);
    DAT_006166dc[1] = DAT_006166e0;
    DAT_006166e8 = 0;
    *DAT_006166dc = (int)DAT_006166dc;
    DAT_006166dc[2] = (int)DAT_006166dc;
    FUN_0053e430(auStack_8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    return iVar4;
  }
  while (piVar5 != piVar1) {
    puVar3 = (undefined4 *)FUN_004323f0(local_c,0);
    FUN_0041b640(auStack_4,*puVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
  return iVar4;
}

