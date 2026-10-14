
bool FUN_004247a0(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)Pipeline_exref;
  bVar3 = false;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,0);
    bVar3 = -1 < iVar2;
  }
  return bVar3;
}

