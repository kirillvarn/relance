
undefined4 FUN_00442810(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_0059da10("NavBar");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      uVar3 = FUN_00441c70(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}

