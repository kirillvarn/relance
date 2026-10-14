
void __thiscall FUN_00531c20(INotify *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  if (param_2 == 10) {
    FUN_004fcef0(param_1 + 0x10);
  }
  else {
    if (param_2 == 0xb) {
      if ((*(int *)(param_1 + 0x18) != 0) && ((*(byte *)(*(int *)(param_1 + 0x18) + 8) & 2) == 0)) {
        return;
      }
      piVar1 = *(int **)(param_1 + 0x14);
      if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1), cVar2 != '\0'))
      {
        return;
      }
      if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) == 0)) {
        return;
      }
      FUN_00531cf0();
      return;
    }
    if (param_2 == 0xc) {
      if (((*(int *)(param_1 + 0x18) == 0) || ((*(byte *)(*(int *)(param_1 + 0x18) + 8) & 2) != 0))
         && ((piVar1 = *(int **)(param_1 + 0x14), piVar1 == (int *)0x0 ||
             (cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1), cVar2 == '\0')))) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          return;
        }
        if (*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) != 0) {
          return;
        }
      }
      FUN_004fcef0(param_1 + 0x10);
      return;
    }
    if (param_2 != 10) {
      return;
    }
  }
  CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

