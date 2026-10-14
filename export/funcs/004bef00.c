
void __thiscall FUN_004bef00(int param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined1 local_84 [132];
  
  FUN_004bedc0();
  if (*(int *)(param_2 + 4) == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xa8))
              (4,"equipment\\models\\commodities\\nn_icons\\COMMOD_credits.3db",0);
    (**(code **)(**(int **)(param_1 + 0x18) + 0xa8))(0x1e,0x476,0);
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0xa8))(1,1,0);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x334) = 0;
  }
  else {
    CacheString::clear((CacheString *)&local_8c);
    CacheString::clear((CacheString *)&local_88);
    local_90 = 0;
    FUN_004be6c0(param_2,&local_8c,&local_88,&local_90,local_84,0);
    if (local_8c != 0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0xa8))(4,local_8c,local_88);
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 0xa8))(0x1e,local_90,0);
    iVar4 = ftol();
    *(float *)(*(int *)(param_1 + 0x20) + 0x334) = (float)iVar4;
  }
  swprintf((wchar_t *)&stack0xffffff68,0x5d0ec4,*(wchar_t **)(param_2 + 0x14));
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa8))(0x1d,&local_8c,0);
  *(char **)(param_1 + 0x24) = param_2;
  cVar1 = *param_2;
  bVar2 = *(byte *)(*(int *)(param_1 + 8) + 0x330);
  bVar3 = cVar1 << 6;
  *(byte *)(*(int *)(param_1 + 8) + 0x330) = (bVar2 ^ bVar3) & 0x40 ^ bVar2;
  bVar2 = *(byte *)(*(int *)(param_1 + 0xc) + 0x330);
  *(byte *)(*(int *)(param_1 + 0xc) + 0x330) = (bVar2 ^ bVar3) & 0x40 ^ bVar2;
  if (cVar1 != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x70) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x70) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x70) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70) = 2;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x70) = 2;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar4 + 0x330) & 1) == 0) {
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x70) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x70) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x70) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x70) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x70) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x70) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70) = 1;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x70) = 1;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}

