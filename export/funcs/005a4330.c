
void __fastcall FUN_005a4330(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1[0x33] != 0) {
    FUN_004be390();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xa8))(0x2d,uVar3);
    }
  }
  *(byte *)(param_1 + 0xd7) = *(byte *)(param_1 + 0xd7) & 0xfe;
  return;
}

