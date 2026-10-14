
void FUN_005b3520(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c59d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = (undefined1)param_1;
    ExceptionList = &local_c;
    DAT_0067ed04 = operator_new(0xc);
    *(void **)DAT_0067ed04 = DAT_0067ed04;
    *(void **)((int)DAT_0067ed04 + 4) = DAT_0067ed04;
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  pvVar2 = DAT_0067ed04;
  local_10 = 0;
  piVar4 = *(int **)((int)DAT_0067ed04 + 4);
  puVar1 = (undefined4 *)((int)DAT_0067ed04 + 4);
  local_4 = 0;
  piVar3 = operator_new(0xc);
  *piVar3 = (int)pvVar2;
  if (piVar4 == (int *)0x0) {
    piVar4 = piVar3;
  }
  piVar3[1] = (int)piVar4;
  *puVar1 = piVar3;
  *(int **)piVar3[1] = piVar3;
  FUN_005999b0(piVar3 + 2,&local_10);
  DAT_0067ed08 = DAT_0067ed08 + 1;
  FUN_005b7e1d(local_10);
  *(int *)(*(int *)((int)DAT_0067ed04 + 4) + 8) = param_1;
  if (param_2 != 0) {
    *(int *)(param_1 + 8) = param_2;
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0xc) = param_3;
  }
  ExceptionList = local_c;
  return;
}

