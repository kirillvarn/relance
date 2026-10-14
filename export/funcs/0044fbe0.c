
undefined4 * __thiscall
FUN_0044fbe0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = &PTR_LAB_005cc844;
  param_1[2] = &PTR_LAB_005cc828;
  param_1[3] = &PTR_LAB_005cc808;
  param_1[4] = &PTR_LAB_005cc7d0;
  param_1[5] = &PTR_LAB_005cc7a8;
  param_1[6] = &PTR_LAB_005cc784;
  param_1[7] = &PTR_LAB_005cc74c;
  param_1[8] = &PTR_LAB_005cc734;
  param_1[9] = 0xffffffff;
  param_1[10] = 1;
  *param_1 = &PTR_LAB_005cc6d4;
  param_1[1] = &PTR_LAB_005cc6a0;
  param_1[2] = &PTR_LAB_005cc684;
  param_1[3] = &PTR_LAB_005cc664;
  param_1[4] = &PTR_LAB_005cc62c;
  param_1[5] = &PTR_LAB_005cc604;
  param_1[6] = &PTR_LAB_005cc5e0;
  param_1[7] = &PTR_LAB_005cc5a8;
  param_1[8] = &PTR_LAB_005cc590;
  puVar2 = param_1 + 0xb;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x17] = param_3;
  param_1[0x18] = *param_4;
  malloc_strcpy((char **)(param_1 + 0x19),(char *)param_4[0xe]);
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_4 + 1) & 1;
  return param_1;
}

