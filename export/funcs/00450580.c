
int __thiscall FUN_00450580(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x4500 + iVar1) == '\0') {
      if (iVar1 == -1) {
        return -1;
      }
      puVar2 = (undefined4 *)(iVar1 * 0x40 + param_1);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[0xc] = 0x3f800000;
      puVar2[8] = 0x3f800000;
      puVar2[4] = 0x3f800000;
      puVar2[0xd] = 0x420c0000;
      puVar2[0xe] = 0x3e800000;
      puVar2[0xf] = 0x49742400;
      *puVar2 = param_3;
      *(int *)(param_1 + 0x4000 + iVar1 * 4) = param_2;
      *(char *)(iVar1 + 0x4400 + param_1) = param_4;
      *(undefined1 *)(iVar1 + 0x4500 + param_1) = 1;
      iVar3 = -0x100;
      if (*(int *)(param_1 + 0x4600) != -1) {
        iVar3 = *(int *)(param_1 + 0x4000 + *(int *)(param_1 + 0x4600) * 4);
      }
      if ((param_4 != '\0') && (iVar3 < param_2)) {
        *(int *)(param_1 + 0x4600) = iVar1;
      }
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return -1;
}

