
void __fastcall FUN_00591de0(int param_1)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  return;
}

