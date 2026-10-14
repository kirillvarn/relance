
void __fastcall FUN_0055fa00(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  *(undefined1 *)((int)param_1 + 0x349) = 1;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xa8))(0x2c,uVar3);
    }
  }
  return;
}

