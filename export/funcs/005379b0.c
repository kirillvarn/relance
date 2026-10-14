
void __fastcall FUN_005379b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[0x35] != 0) {
    iVar1 = param_1[0x37];
    if (iVar1 != 0) {
      iVar2 = param_1[0x35];
      puVar3 = (undefined4 *)FUN_005afe60();
      puVar3[1] = *(undefined4 *)(iVar1 + 0x40);
      *puVar3 = 0;
      puVar3[2] = iVar2;
      if (*(undefined4 **)(iVar1 + 0x40) == (undefined4 *)0x0) {
        *(undefined4 **)(iVar1 + 0x3c) = puVar3;
      }
      else {
        **(undefined4 **)(iVar1 + 0x40) = puVar3;
      }
      *(undefined4 **)(iVar1 + 0x40) = puVar3;
      param_1[0x35] = 0;
      param_1[0x37] = 0;
    }
    (**(code **)(*param_1 + 8))();
    iVar1 = param_1[0x34];
    param_1[0x34] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}

