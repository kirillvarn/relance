
void __thiscall FUN_0054f830(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  bVar2 = (byte)uVar1;
  iVar4 = 0;
  if ((bVar2 & 0xc) == 0xc) {
    iVar4 = 0x1c;
  }
  else if ((bVar2 & 4) == 4) {
    iVar4 = 0x10;
  }
  else if ((bVar2 & 2) == 2) {
    iVar4 = 0xc;
  }
  iVar5 = 0;
  if ((uVar1 & 0x10) != 0) {
    iVar5 = 0xc;
  }
  iVar6 = 0;
  if ((uVar1 & 0x40) != 0) {
    iVar6 = 4;
  }
  if ((char)bVar2 < '\0') {
    iVar6 = iVar6 + 4;
  }
  iVar3 = FUN_004061a0(uVar1);
  *(int *)(param_1 + 0x6c) = param_2;
  iVar4 = iVar3 + iVar6 + iVar5 + iVar4;
  iVar5 = 0;
  *(int *)(param_1 + 0x70) = iVar4;
  if ((param_3 & 0xc) == 0xc) {
    iVar5 = 0x1c;
  }
  else if ((param_3 & 4) == 4) {
    iVar5 = 0x10;
  }
  else if ((param_3 & 2) == 2) {
    iVar5 = 0xc;
  }
  iVar6 = 0;
  if ((param_3 & 0x10) != 0) {
    iVar6 = 0xc;
  }
  iVar3 = 0;
  *(int *)(param_1 + 0x74) = iVar6 + iVar5 + param_2;
  *(int *)(param_1 + 0x78) = iVar4;
  if ((param_3 & 0xc) == 0xc) {
    iVar3 = 0x1c;
  }
  else if ((param_3 & 4) == 4) {
    iVar3 = 0x10;
  }
  else if ((param_3 & 2) == 2) {
    iVar3 = 0xc;
  }
  iVar5 = 0;
  if ((param_3 & 0x10) != 0) {
    iVar5 = 0xc;
  }
  iVar6 = 0;
  if ((param_3 & 0x40) != 0) {
    iVar6 = 4;
  }
  if ((char)param_3 < '\0') {
    iVar6 = iVar6 + 4;
  }
  *(int *)(param_1 + 0x7c) = iVar6 + iVar5 + iVar3 + param_2;
  *(int *)(param_1 + 0x80) = iVar4;
  return;
}

