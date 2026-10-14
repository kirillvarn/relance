
void FUN_00536070(Fuse *param_1,Fuse *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0981;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (Fuse *)0x0) {
    ExceptionList = &local_c;
    Fuse::Fuse(param_1,param_2);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined ***)param_1 = &PTR_FUN_005dd328;
  }
  ExceptionList = local_c;
  return;
}

