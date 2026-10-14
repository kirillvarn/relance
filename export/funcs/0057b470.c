
void __thiscall FUN_0057b470(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c3d68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_2 = (int *)(**(code **)(*param_2 + 0x1c))();
  iVar1 = *(int *)(param_1 + 0x48c);
  piVar3 = *(int **)(iVar1 + 4);
  uStack_4 = 0;
  piVar2 = operator_new(0xc);
  *piVar2 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar2[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  FUN_0046ea00(piVar2 + 2,&param_2);
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  uStack_4 = 0xffffffff;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  *(undefined1 *)(param_1 + 0x400) = 1;
  *(undefined1 *)(param_1 + 0x401) = 1;
  ExceptionList = pvStack_c;
  return;
}

