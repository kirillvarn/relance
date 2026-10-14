
float10 FUN_004e68d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 local_10 [4];
  
  iStack_1c = param_2;
  puStack_20 = local_10;
  uStack_24 = 0;
  local_10[0] = 0;
  uStack_28 = param_1;
  (**(code **)(**(int **)Engine_exref + 0x88))(*(int **)Engine_exref);
  piVar1 = *(int **)Engine_exref;
  fVar2 = (float)(**(code **)(*piVar1 + 0xa0))();
  if (DAT_00674b1c == (int *)0x0) {
    DAT_00674b1c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b1c + 0x28))(DAT_00674b1c,&uStack_28);
  *(int *)param_2 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  *(undefined4 *)(param_2 + 8) = param_1;
  return (float10)fVar2;
}

