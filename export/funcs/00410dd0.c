
uint __fastcall FUN_00410dd0(int param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 4) == 0) {
    *(byte *)(param_1 + 0xb4) = bVar1 | 4;
    iVar2 = DAT_00610588;
    if (DAT_00610588 == 0) {
      iVar2 = (**(code **)(**(int **)Pipeline_exref + 0x124))(*(int **)Pipeline_exref,param_1 + 0xc)
      ;
    }
  }
  bVar1 = *(byte *)(param_1 + 0xb4) | 8;
  *(byte *)(param_1 + 0xb4) = bVar1;
  return CONCAT31((int3)((uint)iVar2 >> 8),bVar1 >> 3) & 0xffffff01;
}

