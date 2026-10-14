
bool FUN_00454700(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 local_4;
  
  if (DAT_0066d2a8 != '\0') {
    iVar1 = FUN_005792b0(0x25);
    if (iVar1 != 0) {
      iVar1 = FUN_005792b0(0x27);
      if (iVar1 != 0) {
        bVar2 = true;
        if (DAT_0066d2bc != 0) {
          local_4 = 0;
          piVar3 = *(int **)Pipeline_exref;
          (**(code **)(*piVar3 + 0x20))(piVar3,0xd,&local_4);
          bVar2 = piVar3 != (int *)0x0;
        }
        return bVar2;
      }
    }
  }
  return false;
}

