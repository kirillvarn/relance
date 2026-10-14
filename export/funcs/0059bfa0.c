
void __thiscall FUN_0059bfa0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_0057b5a0(param_2,0);
  if ((cVar1 != '\0') && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x330) = *param_3;
    *(undefined4 *)(param_1 + 0x334) = param_3[1];
  }
  return;
}

