
void __fastcall FUN_005803d0(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x3a0);
      puVar4 = (undefined4 *)(param_1 + 0x360);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00423b30(&fStack_c,param_1 + 0x354,param_1 + 0x60);
      pfVar1 = (float *)(param_1 + 0xa8);
      FUN_00423b30(&fStack_18,&fStack_c,pfVar1);
      *(float *)(param_1 + 900) = fStack_18 + *(float *)(param_1 + 900);
      *(float *)(param_1 + 0x388) = fStack_14 + *(float *)(param_1 + 0x388);
      *(float *)(param_1 + 0x38c) = fStack_10 + *(float *)(param_1 + 0x38c);
      puVar3 = (undefined4 *)(param_1 + 0x444);
      puVar4 = (undefined4 *)(param_1 + 0x404);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00423b30(&fStack_c,param_1 + 0x3f8,param_1 + 0x60);
      FUN_00423b30(&fStack_18,&fStack_c,pfVar1);
      *(float *)(param_1 + 0x428) = fStack_18 + *(float *)(param_1 + 0x428);
      *(float *)(param_1 + 0x42c) = fStack_14 + *(float *)(param_1 + 0x42c);
      *(float *)(param_1 + 0x430) = fStack_10 + *(float *)(param_1 + 0x430);
      puVar3 = (undefined4 *)(param_1 + 0x4e8);
      puVar4 = (undefined4 *)(param_1 + 0x4a8);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00423b30(&fStack_18,param_1 + 0x49c,param_1 + 0x60);
      FUN_00422b80(fStack_18 + *pfVar1,fStack_14 + *(float *)(param_1 + 0xac),
                   fStack_10 + *(float *)(param_1 + 0xb0));
      *(float *)(param_1 + 0x4cc) = fStack_c + *(float *)(param_1 + 0x4cc);
      *(float *)(param_1 + 0x4d0) = fStack_8 + *(float *)(param_1 + 0x4d0);
      *(float *)(param_1 + 0x4d4) = fStack_4 + *(float *)(param_1 + 0x4d4);
      puVar3 = (undefined4 *)(param_1 + 0x5f8);
      puVar4 = (undefined4 *)(param_1 + 0x540);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00422b80(*(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x5a0),
                   *(float *)(param_1 + 0x5a4) + *(float *)(param_1 + 100),
                   *(float *)(param_1 + 0x5a8) + *(float *)(param_1 + 0x68));
      FUN_00422b80(fStack_c + *pfVar1,fStack_8 + *(float *)(param_1 + 0xac),
                   fStack_4 + *(float *)(param_1 + 0xb0));
      *(float *)(param_1 + 0x564) = fStack_18 + *(float *)(param_1 + 0x564);
      *(float *)(param_1 + 0x568) = fStack_14 + *(float *)(param_1 + 0x568);
      *(float *)(param_1 + 0x56c) = fStack_10 + *(float *)(param_1 + 0x56c);
      puVar3 = (undefined4 *)(param_1 + 0x628);
      puVar4 = (undefined4 *)(param_1 + 0x570);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00422b80(*(float *)(param_1 + 0x5ac) + *(float *)(param_1 + 0x60),
                   *(float *)(param_1 + 0x5b0) + *(float *)(param_1 + 100),
                   *(float *)(param_1 + 0x5b4) + *(float *)(param_1 + 0x68));
      FUN_00422b80(fStack_c + *pfVar1,fStack_8 + *(float *)(param_1 + 0xac),
                   fStack_4 + *(float *)(param_1 + 0xb0));
      *(float *)(param_1 + 0x594) = fStack_18 + *(float *)(param_1 + 0x594);
      *(float *)(param_1 + 0x598) = fStack_14 + *(float *)(param_1 + 0x598);
      *(float *)(param_1 + 0x59c) = fStack_10 + *(float *)(param_1 + 0x59c);
    }
  }
  if (*(int *)(param_1 + 0x330) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x9c))
              (*(int **)Engine_exref,*(int *)(param_1 + 0x330),param_1 + 0x360);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x330),0,0);
  }
  if (*(int *)(param_1 + 0x3d4) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x9c))
              (*(int **)Engine_exref,*(int *)(param_1 + 0x3d4),param_1 + 0x404);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x3d4),0,0);
  }
  if (*(int *)(param_1 + 0x478) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x9c))
              (*(int **)Engine_exref,*(int *)(param_1 + 0x478),param_1 + 0x4a8);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x478),0,0);
  }
  FUN_00580290();
  return;
}

