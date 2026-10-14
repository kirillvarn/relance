
bool __fastcall FUN_004ce460(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0054baf0();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x20))();
    return iVar2 == *param_1;
  }
  return false;
}

