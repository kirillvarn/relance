
undefined4 __fastcall FUN_00540a20(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + 4);
  *param_1 = (int)puVar1;
  if (puVar1 != DAT_00678ac8) {
    return *puVar1;
  }
  return 0;
}

