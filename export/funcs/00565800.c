
int __fastcall FUN_00565800(int param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 2) & 7;
  iVar1 = 0;
  if (bVar2 == 1) {
    return (int)*(short *)(param_1 + 5) + (int)*(short *)(param_1 + 3);
  }
  if (bVar2 == 3) {
    iVar1 = 0x100;
  }
  return iVar1;
}

