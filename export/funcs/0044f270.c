
undefined1 __thiscall FUN_0044f270(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *unaff_retaddr;
  
  piVar2 = *(int **)(param_1 + 0x3c);
  uVar4 = 0;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x40))(piVar2,param_2);
  if (*piVar2 == 3) {
    unaff_retaddr[2] = piVar2[1];
    unaff_retaddr[3] = piVar2[6] + piVar2[1];
    *(byte *)(unaff_retaddr + 4) = (byte)((uint)piVar2[2] >> 3) & 1;
    iVar1 = piVar2[7];
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x3c) + 0x24))
                              (*(int **)(param_1 + 0x3c),iVar1);
    if ((*piVar2 == 6) && ((*(byte *)(piVar2 + 1) & 1) == 0)) {
      *(byte *)((int)unaff_retaddr + 0x11) = (byte)((uint)piVar2[1] >> 1) & 1;
      iVar3 = stricmp((char *)piVar2[0xf],PTR_s_PlayerShipSound_00611004);
      if ((iVar3 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + iVar1 * 4), iVar1 != 0)) {
        *unaff_retaddr = *(undefined4 *)(iVar1 + 0x7c);
        unaff_retaddr[1] = iVar1;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

