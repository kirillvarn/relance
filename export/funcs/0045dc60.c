
void __fastcall FUN_0045dc60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x508);
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  return;
}

