
void __fastcall FUN_004f7db0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_68 [10];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [14];
  
  if (*(int *)(param_1 + 0x40) != -1) {
    if ((*(int *)(param_1 + 0x44) == 0) || (*(int *)(param_1 + 0x44) == 8)) {
      if ((*(int *)(param_1 + 0x68) == 0) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
        iVar4 = *(int *)(param_1 + 0x5c);
        puVar2 = (undefined4 *)(param_1 + 0x60);
        *(int *)(param_1 + 0x68) = param_1;
        if (puVar2 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 100) = (&DAT_00674ce4)[iVar4 * 3];
          *puVar2 = 0;
          if ((undefined4 *)(&DAT_00674ce4)[iVar4 * 3] == (undefined4 *)0x0) {
            (&DAT_00674ce8)[iVar4 * 3] = puVar2;
          }
          else {
            *(undefined4 *)(&DAT_00674ce4)[iVar4 * 3] = puVar2;
          }
          (&DAT_00674ce4)[iVar4 * 3] = puVar2;
          (&DAT_00674ce0)[iVar4 * 3] = (&DAT_00674ce0)[iVar4 * 3] + 1;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      }
      FUN_004f7db0();
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
      return;
    }
    piVar1 = (int *)(**(code **)(**(int **)Engine_exref + 0x80))
                              (*(int **)Engine_exref,*(int *)(param_1 + 0x40));
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x54))(&stack0xffffff8c);
      *(undefined4 *)(param_1 + 0x4c) = *puVar2;
      *(undefined4 *)(param_1 + 0x50) = puVar2[1];
      *(undefined4 *)(param_1 + 0x54) = puVar2[2];
    }
    if (((*(int *)(param_1 + 0x44) == 0) || (*(int *)(param_1 + 0x44) == 8)) ||
       (*(int *)(param_1 + 0x40) == -1)) {
      puVar2 = (undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar3 = (**(code **)(**(int **)Engine_exref + 0xa0))
                        (*(int **)Engine_exref,*(int *)(param_1 + 0x40));
      if (DAT_00674f50 == (int *)0x0) {
        DAT_00674f50 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674f50 + 0x1c))(DAT_00674f50,auStack_40,uVar3,param_1 + 0x10);
      puVar2 = auStack_38;
    }
    puVar5 = auStack_68;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = auStack_68;
    puVar5 = (undefined4 *)(param_1 + 0x10);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  return;
}

