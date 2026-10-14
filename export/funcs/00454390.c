
undefined4 * __thiscall
FUN_00454390(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [15];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b9ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_3,param_4);
  *param_1 = &PTR_LAB_005cdfec;
  param_1[1] = &PTR_LAB_005cdfb8;
  param_1[2] = &PTR_LAB_005cdf9c;
  param_1[3] = &PTR_LAB_005cdf7c;
  param_1[4] = &PTR_LAB_005cdf44;
  param_1[5] = &PTR_LAB_005cdf1c;
  param_1[6] = &PTR_LAB_005cdef8;
  param_1[7] = &PTR_LAB_005cdec0;
  param_1[8] = &PTR_LAB_005cdea8;
  puVar2 = (undefined4 *)(param_4 + 0x44);
  puVar3 = local_48;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b] = local_48[0];
  param_1[0x1c] = local_48[1];
  param_1[0x1d] = local_48[2];
  ExceptionList = local_c;
  return param_1;
}

