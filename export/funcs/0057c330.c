
void __thiscall FUN_0057c330(int *param_1,int param_2)

{
  int unaff_retaddr;
  
  (**(code **)(*param_1 + 0x24))(param_2,0);
  param_1[0xcc] = unaff_retaddr;
  param_1[0xcd] = param_2;
  return;
}

