
undefined4 __fastcall FUN_005ac240(int param_1)

{
  CGunWrapper *this;
  int *piVar1;
  ConnectStatus CVar2;
  
  this = *(CGunWrapper **)(param_1 + 0x234);
  if (((this != (CGunWrapper *)0x0) && (*(int *)(this + 0x14) != 0)) &&
     (CVar2 = CGunWrapper::GetStatus(this), CVar2 == 2)) {
    *(undefined1 *)(param_1 + 0x240) = 0;
    if (*(int *)(param_1 + 0x23c) != 0) {
      return 0;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x234) + 0x14);
    (**(code **)(*piVar1 + 0x14))(piVar1,0x65,0,0,0,0);
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x240) = 1;
  return 0;
}

