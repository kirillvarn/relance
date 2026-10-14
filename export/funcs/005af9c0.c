
int __thiscall FUN_005af9c0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 local_4 [4];
  
  if (param_1 != param_2) {
    piVar2 = *(int **)(param_1 + 4);
    piVar10 = (int *)*piVar2;
    if (*(int *)(param_1 + 0x10) == 0) {
      while (piVar10 != piVar2) {
        FUN_00595150();
        FUN_0046dfb0(local_4,piVar10);
      }
    }
    else {
      piVar10 = (int *)piVar2[1];
      if ((int *)piVar2[1] != *(int **)(param_1 + 8)) {
        do {
          FUN_005afde0(piVar10[2]);
          piVar2 = (int *)*piVar10;
          FUN_005b7e1d(piVar10);
          piVar10 = piVar2;
        } while (piVar2 != (int *)*(int *)(param_1 + 8));
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
      *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar7 = (undefined4 *)FUN_005afe40(*(undefined4 *)(param_1 + 4),*(undefined1 *)(puVar3 + 4));
      FUN_005999b0(puVar7 + 3,puVar3 + 3);
      *puVar7 = *(undefined4 *)(param_1 + 8);
      puVar7[2] = *(undefined4 *)(param_1 + 8);
      if (puVar9 == *(undefined4 **)(param_1 + 8)) {
        puVar9 = puVar7;
      }
      uVar8 = FUN_005afd60(*puVar3,puVar7);
      *puVar7 = uVar8;
      uVar8 = FUN_005afd60(puVar3[2],puVar7);
      puVar7[2] = uVar8;
    }
    *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar9;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    piVar2 = *(int **)(param_1 + 4);
    piVar10 = (int *)piVar2[1];
    if (piVar10 != *(int **)(param_1 + 8)) {
      cVar1 = *(char *)(*piVar10 + 0x11);
      piVar6 = (int *)*piVar10;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar10 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *piVar2 = (int)piVar10;
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar5 = *(int *)(iVar4 + 8);
      cVar1 = *(char *)(iVar5 + 0x11);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x11);
        iVar4 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      *(int *)(*(int *)(param_1 + 4) + 8) = iVar4;
      return param_1;
    }
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  return param_1;
}

