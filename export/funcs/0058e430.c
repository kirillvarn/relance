
void __fastcall FUN_0058e430(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      puVar1[1] = puVar1[1] + -1;
    }
    if (puVar1[1] == 0) {
      puVar1[1] = 1;
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

