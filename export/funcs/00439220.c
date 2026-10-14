
void FUN_00439220(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0059da10("NN_Inventory");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 8))();
      (**(code **)(*piVar1 + 0xa8))(0x4b,0,0);
    }
  }
  return;
}

