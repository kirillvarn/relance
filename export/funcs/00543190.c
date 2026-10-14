
bool __fastcall FUN_00543190(int param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    PhySys::Controller::wakeup((Controller *)(param_1 + 8));
  }
  return *(char *)(param_1 + 0x60) == '\0';
}

