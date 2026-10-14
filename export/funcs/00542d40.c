
void __fastcall FUN_00542d40(IAction *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0d89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_005dfc98;
  *(undefined ***)(param_1 + 8) = &PTR_LAB_005dfc78;
  local_4 = 0;
  PhySys::Controller::~Controller((Controller *)(param_1 + 8));
  local_4 = 0xffffffff;
  IAction::~IAction(param_1);
  ExceptionList = local_c;
  return;
}

