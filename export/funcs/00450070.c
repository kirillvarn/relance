
undefined1 __thiscall FUN_00450070(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = 0;
  if ((*(char *)(param_1 + 0x68) == '\0') && (*(int *)(param_1 + 0x60) == param_2)) {
    pbVar3 = *(byte **)(param_1 + 100);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < *param_3;
      if (bVar1 != *param_3) {
LAB_004500b4:
        iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_004500b9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < param_3[1];
      if (bVar1 != param_3[1]) goto LAB_004500b4;
      pbVar3 = pbVar3 + 2;
      param_3 = param_3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004500b9:
    if (iVar4 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

