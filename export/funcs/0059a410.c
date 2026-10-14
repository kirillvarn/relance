
undefined1 __thiscall FUN_0059a410(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = FUN_0057b5a0(param_2,0);
  FUN_0057bff0();
  FUN_0057c0e0(L"TextEdit",0);
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x530) = uVar1;
    *(undefined4 *)(param_1 + 0x330) = uVar1;
    uVar1 = param_3[1];
    *(undefined4 *)(param_1 + 0x534) = uVar1;
    *(undefined4 *)(param_1 + 0x334) = uVar1;
    uVar1 = param_3[2];
    FUN_0057bff0();
    FUN_0057c0e0(uVar1,0);
  }
  FUN_0057bfa0(0);
  return uVar2;
}

