
int __thiscall FUN_00456540(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba086;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x13c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00454920();
  }
  local_4 = 0xffffffff;
  puVar4 = operator_new(0x804);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar4 + 1;
    *puVar4 = 0x20;
    FUN_005b7fba(puVar5,0x40,0x20,&LAB_00454e20,&LAB_00454d70);
  }
  *(undefined4 **)(iVar3 + 0xb4) = puVar5;
  *(undefined4 *)(iVar3 + 0xb8) = 0x20;
  *(undefined4 *)(iVar3 + 0xbc) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = param_2;
  *(undefined1 *)(iVar3 + 0x2f) = param_3;
  iVar1 = *(int *)(param_1 + 8);
  piVar7 = *(int **)(iVar1 + 4);
  local_4 = 0xffffffff;
  piVar6 = operator_new(0xc);
  *piVar6 = iVar1;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar6;
  }
  piVar6[1] = (int)piVar7;
  *(int **)(iVar1 + 4) = piVar6;
  *(int **)piVar6[1] = piVar6;
  if (piVar6 + 2 != (int *)0x0) {
    piVar6[2] = iVar3;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  ExceptionList = local_c;
  return iVar3;
}

