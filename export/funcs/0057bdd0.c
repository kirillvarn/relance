
void __thiscall FUN_0057bdd0(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x4f8);
  *(char *)(param_1 + 0x4f8) = param_2;
  if (param_2 != cVar1) {
    FUN_0057d330();
  }
  return;
}

