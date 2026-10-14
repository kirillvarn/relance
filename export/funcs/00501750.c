
/* WARNING: Removing unreachable block (ram,0x005017bc) */
/* WARNING: Removing unreachable block (ram,0x005017c0) */

void __thiscall FUN_00501750(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    FUN_00537260(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&local_4);
  }
  else if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2))) {
    *(uint *)(param_1 + 8) = iVar2 + param_2 * 4;
  }
  iVar2 = 0;
  if (0 < (int)param_2) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) = *param_3;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + param_4;
    } while (iVar2 < (int)param_2);
  }
  FUN_005018a0(*(undefined4 *)(param_1 + 4),param_2 - 1,param_1 + 0x10);
  return;
}

