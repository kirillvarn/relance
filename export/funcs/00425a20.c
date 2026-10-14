
void __fastcall FUN_00425a20(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  piVar5 = (int *)**(int **)(param_1 + 4);
  if (piVar5 != *(int **)(param_1 + 4)) {
    do {
      if (*(int *)((int)piVar5 + 0x28) != 0) {
        (**(code **)(**(int **)TextureLib_exref + 0x38))
                  (*(int **)TextureLib_exref,*(int *)((int)piVar5 + 0x28));
        *(undefined4 *)((int)piVar5 + 0x28) = 0;
      }
      if (*(char *)(*(int *)((int)piVar5 + 8) + 0x59) == '\0') {
        iVar2 = FUN_00427710(*(int *)((int)piVar5 + 8));
LAB_00425a7f:
        piVar5 = (int *)iVar2;
      }
      else {
        iVar2 = *(int *)((int)piVar5 + 4);
        if (piVar5 == (int *)*(int *)(iVar2 + 8)) {
          do {
            piVar5 = (int *)iVar2;
            iVar2 = *(int *)((int)piVar5 + 4);
          } while (piVar5 == (int *)*(int *)(iVar2 + 8));
        }
        if (*(int *)((int)piVar5 + 8) != iVar2) goto LAB_00425a7f;
      }
    } while (piVar5 != (int *)*(int *)(param_1 + 4));
  }
  piVar5 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar5;
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (piVar3 = (int *)FUN_0053e430(local_c), piVar1 == (int *)*piVar3)) &&
     (piVar5 == *(int **)(param_1 + 4))) {
    FUN_00420be0((*(int **)(param_1 + 4))[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(auStack_8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    return;
  }
  if (piVar1 == piVar5) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    return;
  }
  do {
    puVar4 = (undefined4 *)FUN_00426fc0(local_c,0);
    FUN_00420800(auStack_4,*puVar4);
  } while (piVar1 != piVar5);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
  return;
}

