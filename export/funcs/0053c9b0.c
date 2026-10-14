
void FUN_0053c9b0(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_005416c0(*param_2,0);
  if (piVar2 != (int *)0x0) {
    bVar1 = SinglePlayer();
    if (!bVar1) {
      (**(code **)(*piVar2 + 0x1a8))
                (*(undefined2 *)(param_2 + 1),param_2[2],*(undefined2 *)(param_2 + 3));
    }
    uVar3 = FUN_005416c0(param_2[2],0);
    if (*(short *)(param_2 + 1) == *(short *)SUBOBJ_ID_NONE_exref) {
      (**(code **)(piVar2[1] + 0x48))();
      return;
    }
    (**(code **)(piVar2[1] + 0x44))(param_2 + 1,uVar3,*(undefined2 *)(param_2 + 3),0);
  }
  return;
}

