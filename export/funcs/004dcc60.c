
void __thiscall FUN_004dcc60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_2c [12];
  undefined1 local_20 [32];
  
  iVar1 = FUN_0054baf0();
  if (iVar1 != 0) {
    FUN_004f1da0(local_2c);
    if (param_2 == *(int *)(param_1 + 0x504)) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x34))(0,0,local_2c,DAT_00673344);
      return;
    }
    iVar2 = FUN_004f5790(param_2,local_20,0x10);
    if (0 < iVar2) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x34))(local_20,iVar2,local_2c,DAT_00673344);
    }
  }
  return;
}

