
void __fastcall FUN_004c9150(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_00420d60();
  if (cVar2 != '\0') {
    FUN_0059eee0();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  return;
}

