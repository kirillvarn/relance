
undefined1 __thiscall FUN_004f17c0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 unaff_retaddr;
  
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar1 = FUN_004b5060(unaff_retaddr,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_005760d0(6);
  return 1;
}

