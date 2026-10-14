
int FUN_004cdf40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  local_4 = -100;
  piVar1 = (int *)FUN_00430ab0(*(undefined4 *)(param_1 + 0x3c));
  if ((piVar1 != (int *)0x0) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x84))) {
    puVar5 = (undefined4 *)(param_1 + 0x44);
    do {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x14))(*puVar5);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x38))();
        if (local_4 < iVar3) {
          local_4 = iVar3;
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x84));
    return local_4;
  }
  return -100;
}

