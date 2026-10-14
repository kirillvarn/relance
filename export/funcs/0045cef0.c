
void __fastcall FUN_0045cef0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x3a8) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x3a8) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  piVar2 = *(int **)(param_1 + 0x508);
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (piVar2 != (int *)0x0) {
    iVar4 = piVar2[3];
    while (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 8);
      FUN_0043d2a0(iVar4);
      iVar4 = iVar3;
    }
    (**(code **)(*piVar2 + 0x28))();
    (**(code **)*piVar2)(1);
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  FUN_0055e290();
  return;
}

