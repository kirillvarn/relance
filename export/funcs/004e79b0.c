
void __fastcall FUN_004e79b0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x16c) == '\0') {
    (**(code **)(*(int *)(param_1 + -0x364) + 0x34))(0);
    bVar1 = *(char *)(param_1 + 0x16c) == '\0';
  }
  *(bool *)(param_1 + 0x16c) = bVar1;
  return;
}

