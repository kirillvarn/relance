
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004cad10(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x1bc);
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004caae0();
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  FUN_004ca910();
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  FUN_004cae10(param_2,0,0,param_3,(undefined4 *)(param_1 + 0x1c4),(undefined4 *)(param_1 + 0x1c8),
               (undefined4 *)(param_1 + 0x1cc));
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x90);
  return;
}

