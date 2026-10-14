
void __thiscall FUN_0046cdc0(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 4);
  bVar2 = true;
  piVar3 = piVar1;
  piVar4 = (int *)piVar1[1];
  while (piVar4 != *(int **)(param_1 + 8)) {
    bVar2 = (uint)piVar4[3] < *param_3;
    piVar3 = piVar4;
    if ((uint)piVar4[3] < *param_3) {
      piVar4 = (int *)*piVar4;
    }
    else {
      piVar4 = (int *)piVar4[2];
    }
  }
  local_4 = param_1;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (bVar2) {
      if (piVar3 == (int *)*piVar1) {
        puVar5 = (undefined4 *)FUN_0046e670(&local_4,piVar4,piVar3,param_3);
        *param_2 = *puVar5;
        *(undefined1 *)(param_2 + 1) = 1;
        return;
      }
      FUN_0045a020();
    }
    if ((uint)piVar3[3] <= *param_3) {
      *param_2 = piVar3;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
  }
  puVar5 = (undefined4 *)FUN_0046e670(&local_4,piVar4,piVar3,param_3);
  *param_2 = *puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

