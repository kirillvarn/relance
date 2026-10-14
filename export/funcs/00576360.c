
void __thiscall FUN_00576360(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_005762f0(param_2);
  iVar1 = DAT_0067c270;
  piVar3 = *(int **)(DAT_0067c270 + 4);
  piVar2 = operator_new(0xc);
  *piVar2 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar2[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = param_1;
  }
  DAT_0067c274 = DAT_0067c274 + 1;
  return;
}

