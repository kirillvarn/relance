
int __thiscall FUN_00437f70(int param_1,int param_2,int param_3)

{
  GoodInfo *pGVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  piVar5 = (int *)**(int **)(param_1 + 4);
  local_8 = 0;
  if (piVar5 == *(int **)(param_1 + 4)) {
    return 0;
  }
  do {
    if (((0 < *(int *)((int)piVar5 + 0x2c)) &&
        (pGVar1 = GoodList::find_by_id(*(uint *)((int)piVar5 + 0x10)), pGVar1 != (GoodInfo *)0x0))
       && (*(int *)(pGVar1 + 0x4c) == param_3)) {
      iVar3 = *(int *)(param_2 + 4);
      piVar4 = *(int **)(iVar3 + 4);
      piVar2 = operator_new(0xc);
      *piVar2 = iVar3;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar2;
      }
      piVar2[1] = (int)piVar4;
      *(int **)(iVar3 + 4) = piVar2;
      *(int **)piVar2[1] = piVar2;
      if (piVar2 + 2 != (int *)0x0) {
        piVar2[2] = (int)piVar5 + 0x10;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      local_8 = local_8 + 1;
    }
    if (*(char *)(*(int *)((int)piVar5 + 8) + 0x39) == '\0') {
      iVar3 = FUN_0042c9e0(*(int *)((int)piVar5 + 8));
LAB_0043802f:
      piVar5 = (int *)iVar3;
    }
    else {
      iVar3 = *(int *)((int)piVar5 + 4);
      if (piVar5 == (int *)*(int *)(iVar3 + 8)) {
        do {
          piVar5 = (int *)iVar3;
          iVar3 = *(int *)((int)piVar5 + 4);
        } while (piVar5 == (int *)*(int *)(iVar3 + 8));
      }
      if (*(int *)((int)piVar5 + 8) != iVar3) goto LAB_0043802f;
    }
    if (piVar5 == (int *)*(int *)(param_1 + 4)) {
      return local_8;
    }
  } while( true );
}

