
bool __fastcall FUN_00429840(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 3);
  if ((bVar1 & 1) != 0) {
    return false;
  }
  if (((undefined4 *)param_1[6] != (undefined4 *)0x0) &&
     ((*(int *)Sound_exref != 0 || ((bVar1 & 4) == 0)))) {
    if ((bVar1 & 8) == 0) {
      return false;
    }
    if ((bVar1 & 4) == 0) {
      return false;
    }
    iVar2 = (*(code *)**(undefined4 **)param_1[6])();
    if (iVar2 != -1) {
      uVar3 = (**(code **)(**(int **)Sound_exref + 0xb0))();
      iVar2 = (**(code **)(*param_1 + 0x78))();
      return (uint)(param_1[5] + iVar2) < uVar3;
    }
  }
  return true;
}

