
void __thiscall FUN_00579bd0(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    if (*(undefined4 **)(param_1 + 0x3f0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x3f0))(1);
      *(undefined4 *)(param_1 + 0x3f0) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x3f0) == 0) {
    iVar1 = FUN_00579aa0();
    *(int *)(param_1 + 0x3f0) = iVar1;
    if (iVar1 != 0) {
      FUN_00595db0((float)*(int *)(param_1 + 0x364));
      return;
    }
  }
  return;
}

