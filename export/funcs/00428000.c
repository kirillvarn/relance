
int FUN_00428000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*DAT_00667c70; puVar1 != DAT_00667c70; puVar1 = (undefined4 *)*puVar1)
  {
    if (*(int *)(puVar1[2] + 0x18) == param_1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

