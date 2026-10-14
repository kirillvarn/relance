
void FUN_00401e30(CacheString *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8381;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (CacheString *)0x0) {
    ExceptionList = &local_c;
    CacheString::clear(param_1);
    *(undefined4 *)param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = param_2[1];
    *(undefined4 *)(param_1 + 8) = param_2[2];
  }
  ExceptionList = local_c;
  return;
}

