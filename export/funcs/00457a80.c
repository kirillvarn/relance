
undefined4 * __thiscall
FUN_00457a80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_3,param_4);
  *param_1 = &PTR_LAB_005ce71c;
  param_1[1] = &PTR_LAB_005ce6e8;
  param_1[2] = &PTR_LAB_005ce6cc;
  param_1[3] = &PTR_LAB_005ce6ac;
  param_1[4] = &PTR_LAB_005ce674;
  param_1[5] = &PTR_LAB_005ce64c;
  param_1[6] = &PTR_LAB_005ce628;
  param_1[7] = &PTR_LAB_005ce5f0;
  param_1[8] = &PTR_LAB_005ce5d8;
  local_4 = 0;
  iVar1 = FUN_00456790(6,*(undefined4 *)(param_4 + 0x38));
  param_1[0x1b] = iVar1;
  if (iVar1 == 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: invalid sound reference to name %s",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ScriptSound.cpp",0x2f2,
               *(undefined4 *)(param_4 + 0x38));
  }
  ExceptionList = local_c;
  return param_1;
}

