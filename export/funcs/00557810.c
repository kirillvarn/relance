
void __thiscall FUN_00557810(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30 [9];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_2 + 3;
  puVar3 = local_30;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  puVar2 = local_30;
  puVar3 = (undefined4 *)(param_1 + 0x4c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

