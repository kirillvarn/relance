
void __thiscall FUN_005a0950(int param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_2;
  puVar5 = (undefined4 *)(param_1 + 0x3c);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar2 = FUN_00420d60();
  if (cVar2 != '\0') {
    (**(code **)(**(int **)Engine_exref + 0x94))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x84),param_2);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x84),0,0);
  }
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x1c))(param_2);
  }
  return;
}

