
void __fastcall FUN_00547500(int param_1)

{
  int *piVar1;
  undefined4 unaff_retaddr;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 == (int *)0x0) || (((byte)piVar1[0x13] & 3) != 3)) {
    piVar1 = (int *)0x0;
  }
  (**(code **)(*piVar1 + 0x98))(0);
  FUN_0053a820(unaff_retaddr);
  return;
}

