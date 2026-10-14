
void __fastcall FUN_004b4fd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar1 = (int *)param_1[3];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  return;
}

