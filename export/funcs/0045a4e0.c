
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a4e0(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_EBX;
  
  piVar1 = param_3;
  if ((param_3 == (int *)0x0) || (param_2 == 0)) {
    *param_1 = DAT_00679b84;
    return;
  }
  uVar3 = (**(code **)(*param_3 + 0x20))(1);
  piVar4 = (int *)FUN_005416c0(uVar3);
  if (piVar4 != (int *)0x0) {
    if ((*(byte *)(piVar4 + 99) & 4) != 0) {
      *param_1 = DAT_00679b9c;
      return;
    }
    cVar2 = (**(code **)(*piVar4 + 0xbc))();
    if ((((cVar2 != '\0') && (piVar4 != (int *)0xfffffff4)) && (iVar6 = piVar4[4], iVar6 != 0)) &&
       (((*(uint *)(iVar6 + 0x4c) & 0x503) == 0x503 && (*(int *)(iVar6 + 0x1b4) != 0)))) {
      iVar5 = FUN_0054baf0();
      if (iVar5 != 0) {
        if (((iVar5 == -0xc) || (iVar5 = *(int *)(iVar5 + 0x10), iVar5 == 0)) ||
           ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)) {
          iVar5 = 0;
        }
        if (*(int *)(iVar5 + 0x1b4) == *(int *)(iVar6 + 0x1b4)) {
          *param_1 = DAT_00679b88;
          return;
        }
      }
    }
  }
  iVar6 = (**(code **)(*piVar1 + 0x68))(&param_3,param_2);
  if (iVar6 != 0) {
    *unaff_EBX = DAT_00679b84;
    return;
  }
  if ((float)param_1 < DAT_005ce7ec != ((float)param_1 == DAT_005ce7ec)) {
    *unaff_EBX = DAT_00679ba8;
    return;
  }
  if (((float)param_1 < _DAT_005ce7f0 == ((float)param_1 == _DAT_005ce7f0)) &&
     (DAT_005ce7f8 <= (float)param_1)) {
    *unaff_EBX = DAT_00679bac;
    return;
  }
  *unaff_EBX = DAT_00679b84;
  return;
}

