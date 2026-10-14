
undefined4 * __thiscall FUN_00410ca0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x25] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *param_1 = &PTR_FUN_005c89d4;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
    param_1[3] = param_2;
  case 0xfffffffe:
    param_1[0x2c] = param_2;
    break;
  default:
    param_1[0x2c] = 0xffffffff;
  }
  if (DAT_00610588 == -1) {
    DAT_00610588 = 1;
    (**(code **)(**(int **)Pipeline_exref + 0x18))(*(int **)Pipeline_exref,7,&DAT_00610588);
  }
  puVar2 = param_1 + 3;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}

