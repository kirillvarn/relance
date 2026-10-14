
void __fastcall FUN_0059fb60(int param_1)

{
  int *piVar1;
  
  FUN_0059eee0();
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
    __RTDynamicCast(piVar1,0,&Win3D::RTTI_Type_Descriptor,&WinControl::RTTI_Type_Descriptor,0);
    (**(code **)*piVar1)(1);
    piVar1 = *(int **)(param_1 + 0xc);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  return;
}

