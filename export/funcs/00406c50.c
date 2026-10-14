
void __thiscall FUN_00406c50(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    return;
  }
  bVar1 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
  if (!bVar1) {
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  if (iVar2 != 3) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    uStack_4 = 0;
    if (iVar2 != 2) goto LAB_00406c98;
  }
  uStack_4 = 1;
LAB_00406c98:
  if (*(int *)(param_1 + 4) != 0) {
    fVar3 = (float10)FUN_004022f0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40),
                                  *(int *)(param_1 + 4),param_2,uStack_4);
    *(float *)(param_1 + 0xc) = (float)fVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  return;
}

