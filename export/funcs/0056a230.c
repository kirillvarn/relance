
void __fastcall FUN_0056a230(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  bVar2 = operator==((CHARACTER_ID *)(param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
  iVar4 = *(int *)(param_1 + 0x2c0);
  if (bVar2) {
    *(byte *)(iVar4 + 0x6c) = *(byte *)(iVar4 + 0x6c) & 0xfe;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x2c8) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x498) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x2c8) + 0x498) = 0;
  }
  else {
    *(byte *)(iVar4 + 0x6c) = *(byte *)(iVar4 + 0x6c) | 1;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x2c8) + 0x6c);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x498) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x2c8) + 0x498) = 1;
  }
  iVar4 = 0;
  piVar3 = DAT_0067e970;
  if (DAT_0067e970 != (int *)0x0) {
    do {
      piVar3 = (int *)*piVar3;
      iVar4 = iVar4 + 1;
    } while (piVar3 != (int *)0x0);
    if (4 < iVar4) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x2c4) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined1 *)(*(int *)(param_1 + 0x2c4) + 0x498) = 0;
      return;
    }
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x2c4) + 0x6c);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)(*(int *)(param_1 + 0x2c4) + 0x498) = 1;
  return;
}

