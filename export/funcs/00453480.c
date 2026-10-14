
undefined4 * __thiscall
FUN_00453480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_3,param_4);
  *param_1 = &PTR_LAB_005cd734;
  param_1[1] = &PTR_LAB_005cd700;
  param_1[2] = &PTR_LAB_005cd6e4;
  param_1[3] = &PTR_LAB_005cd6c4;
  param_1[4] = &PTR_LAB_005cd68c;
  param_1[5] = &PTR_LAB_005cd664;
  param_1[6] = &PTR_LAB_005cd640;
  param_1[7] = &PTR_LAB_005cd608;
  param_1[8] = &PTR_LAB_005cd5f0;
  local_4 = 0;
  iVar1 = FUN_00456790(5,*(undefined4 *)(param_4 + 0x38));
  param_1[0x1b] = iVar1;
  if (iVar1 == 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: invalid light reference to name %s",
               "E:\\FL\\Scratch\\Source\\Client\\GF\\ScriptLight.cpp",0x177,
               *(undefined4 *)(param_4 + 0x38));
  }
  ExceptionList = local_c;
  return param_1;
}

