
void FUN_0052c7d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0xc;
    *param_1 = *param_2;
    while( true ) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      *param_1 = *param_2;
    }
  }
  return;
}

