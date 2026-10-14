
void __fastcall FUN_00448e90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    if (*(undefined4 **)(iVar2 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 8))(1);
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    if (*(undefined4 **)(iVar2 + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0xc))(1);
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

