
void FUN_004298b0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if ((bVar1 & 8) == 0) {
    if (((bVar1 & 4) != 0) && ((bVar1 & 0x10) == 0)) {
      iVar2 = (**(code **)(**(int **)Sound_exref + 0xb0))();
      if (*(int *)(param_1 + 0x14) != 0) {
        iVar2 = iVar2 - *(int *)(param_1 + 0x14);
      }
      *(int *)(param_1 + 0x14) = iVar2;
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
    }
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  }
  return;
}

