
void FUN_004421a0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0059da10("NavBar");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      FUN_0059da10("NN_Dealer");
      FUN_0055e290();
      FUN_00441a40(1);
      *(undefined1 *)(iVar2 + 0x3d5) = 1;
      FUN_00477bf0(param_1,0,0);
    }
  }
  return;
}

