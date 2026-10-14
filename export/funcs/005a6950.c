
void __thiscall FUN_005a6950(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 4);
  bVar5 = true;
  piVar2 = piVar1;
  piVar3 = (int *)piVar1[1];
  while (piVar3 != *(int **)(param_1 + 8)) {
    bVar5 = *param_3 < (uint)piVar3[3];
    piVar2 = piVar3;
    if (bVar5) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  local_4 = param_1;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (bVar5) {
      if (piVar2 == (int *)*piVar1) {
        puVar4 = (undefined4 *)FUN_005a76e0(&local_4,piVar3,piVar2,param_3);
        *param_2 = *puVar4;
        *(undefined1 *)(param_2 + 1) = 1;
        return;
      }
      FUN_005a7bc0();
    }
    if (*param_3 <= (uint)piVar2[3]) {
      *param_2 = piVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
  }
  puVar4 = (undefined4 *)FUN_005a76e0(&local_4,piVar3,piVar2,param_3);
  *param_2 = *puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

