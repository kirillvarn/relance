
void __thiscall FUN_0051a730(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30 [12];
  
  local_30[8] = 0x3f800000;
  local_30[4] = 0x3f800000;
  local_30[0] = 0x3f800000;
  local_30[7] = 0;
  local_30[6] = 0;
  local_30[5] = 0;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[0xb] = 0;
  local_30[10] = 0;
  local_30[9] = 0;
  FUN_0051a7d0(local_30,param_2,0);
  puVar2 = local_30;
  puVar3 = param_1;
  for (iVar1 = 0xc; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_0051d070(param_2);
  return;
}

