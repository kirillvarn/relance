
void __thiscall FUN_0041f8a0(int param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_48 [15];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_8;
  uint local_4;
  
  local_8 = 0;
  local_4 = param_2;
  local_48[0] = -1;
  local_48[1] = 0xfffffffe;
  local_48[2] = 0xfffffffd;
  local_48[3] = 0xfffffffc;
  local_48[4] = 0xfffffffb;
  local_48[5] = 0xfffffffa;
  local_48[6] = 0xfffffff9;
  local_48[7] = 0xfffffff8;
  local_48[8] = 0xfffffff7;
  if (param_2 < 9) {
    local_48[10] = local_48[param_2];
    local_c = param_3;
    local_b = 0;
    local_a = param_4;
  }
  else {
    local_48[10] = 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 4);
  piVar1 = operator_new(0x2c);
  *piVar1 = iVar2;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar1[1] = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  if (piVar1 + 2 != (int *)0x0) {
    piVar3 = local_48 + 9;
    piVar1 = piVar1 + 2;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar1 = piVar1 + 1;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

