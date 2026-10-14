
void __fastcall FUN_00471e00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0xce] != '\0') {
    FUN_004a7690(*(undefined1 *)((int)param_1 + 0x339));
    if ((code *)param_1[0xcc] != (code *)0x0) {
      (*(code *)param_1[0xcc])(param_1[0xcd],0);
    }
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    DestroyWindow(DAT_0067eca0);
  }
  return;
}

