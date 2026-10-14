
undefined4 * __thiscall FUN_00427160(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[7] = 0;
  iVar1 = *param_3;
  param_1[7] = iVar1;
  if (iVar1 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x34))(*(int **)TextureLib_exref,iVar1,0);
  }
  param_1[8] = param_3[1];
  param_1[9] = param_3[2];
  param_1[10] = param_3[3];
  param_1[0xb] = param_3[4];
  param_1[0xc] = param_3[5];
  param_1[0xd] = param_3[6];
  param_1[0xe] = param_3[7];
  param_1[0xf] = param_3[8];
  param_1[0x10] = param_3[9];
  param_1[0x11] = param_3[10];
  param_1[0x12] = param_3[0xb];
  return param_1;
}

