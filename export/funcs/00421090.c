
float10 __thiscall FUN_00421090(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 local_10 [4];
  
  iStack_1c = param_2;
  puStack_20 = local_10;
  uStack_28 = *(undefined4 *)(param_1 + 4);
  uStack_24 = 0;
  local_10[0] = 0;
  (**(code **)(**(int **)Engine_exref + 0x88))(*(int **)Engine_exref);
  uVar1 = *(undefined4 *)(param_1 + 4);
  piVar2 = *(int **)Engine_exref;
  fVar3 = (float)(**(code **)(*piVar2 + 0xa0))();
  if (DAT_00616870 == (int *)0x0) {
    DAT_00616870 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00616870 + 0x28))(DAT_00616870,&uStack_28);
  *(int *)param_2 = param_2;
  *(int **)(param_2 + 4) = piVar2;
  *(undefined4 *)(param_2 + 8) = uVar1;
  return (float10)fVar3;
}

