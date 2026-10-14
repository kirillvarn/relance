
void FUN_004eeea0(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_retaddr;
  
  piVar1 = param_2;
  uVar4 = DAT_00679bb0;
  iVar2 = (**(code **)(*param_2 + 0x88))(&param_2);
  if (iVar2 == 0) {
    if ((param_1 & 0x200) != 0) {
      *unaff_retaddr = DAT_00679b80;
      return;
    }
    if ((param_1 & 0x10000000) != 0) {
      *unaff_retaddr = 0xffffffff;
      return;
    }
    if ((param_1 & 0x5000000) != 0) {
      *unaff_retaddr = DAT_00679ba8;
      return;
    }
    iVar2 = FUN_0054baf0();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 1)) {
      puVar3 = (undefined4 *)FUN_0045a4e0(&stack0xfffffff8,iVar2,piVar1);
      uVar4 = *puVar3;
    }
  }
  *unaff_retaddr = uVar4;
  return;
}

