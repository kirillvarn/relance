
void __thiscall FUN_00450680(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = *(int *)(param_1 + 0x4600);
  puVar1 = (undefined4 *)(param_2 * 0x40 + param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[0xc] = 0x3f800000;
  puVar1[8] = 0x3f800000;
  puVar1[4] = 0x3f800000;
  puVar1[0xd] = 0x420c0000;
  puVar1[0xe] = 0x3e800000;
  puVar1[0xf] = 0x49742400;
  iVar4 = -1;
  *(undefined4 *)(param_1 + 0x4000 + param_2 * 4) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4400 + param_1) = 0;
  *(undefined1 *)(param_2 + 0x4500 + param_1) = 0;
  if (param_2 == iVar3) {
    iVar3 = -0x100;
    iVar2 = 0;
    piVar5 = (int *)(param_1 + 0x4000);
    do {
      if (((*(char *)(param_1 + 0x4500 + iVar2) != '\0') &&
          (*(char *)(iVar2 + 0x4400 + param_1) != '\0')) && (iVar3 < *piVar5)) {
        iVar3 = *piVar5;
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x100);
    *(int *)(param_1 + 0x4600) = iVar4;
    if (iVar4 != -1) {
      puVar1 = (undefined4 *)(iVar4 * 0x40 + param_1);
      FUN_00556cb0(*puVar1,puVar1 + 1);
      FUN_00556cc0(*puVar1,puVar1 + 4);
      FUN_00556ce0(*puVar1,puVar1[0xd]);
      FUN_00556e00(*puVar1,puVar1[0xe]);
      FUN_00556f10(*puVar1,puVar1[0xf]);
    }
  }
  return;
}

