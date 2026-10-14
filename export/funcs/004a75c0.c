
void FUN_004a75c0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((DAT_0067dcc8 == '\0') && (cVar1 = FUN_0042d730(), cVar1 == '\0')) && (DAT_00668761 == '\0'))
  {
    cVar1 = FUN_0041dd90();
    if (((cVar1 != '\0') && (cVar1 = FUN_004c4810(), cVar1 == '\0')) &&
       (iVar2 = FUN_0054baf0(), iVar2 == 0)) {
      return;
    }
    iVar2 = FUN_0059d9c0("NN_Pause");
    if ((iVar2 == 0) &&
       (piVar3 = (int *)FUN_0059db20("NN_Pause","NN_Pause",0,0), piVar3 != (int *)0x0)) {
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      (**(code **)(*piVar3 + 0xa8))(0x42,&local_c,0);
      (**(code **)(*piVar3 + 0x80))();
    }
  }
  return;
}

