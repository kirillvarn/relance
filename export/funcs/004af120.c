
undefined4 FUN_004af120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int unaff_retaddr;
  int iStack_1c;
  uint uStack_4;
  
  iVar1 = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1 = 0;
  (**(code **)(**(int **)Pipeline_exref + 0x24))(*(int **)Pipeline_exref,&param_1);
  uVar5 = 0;
  iVar4 = param_2;
  if (uStack_4 != 0) {
    do {
      iVar2 = FUN_005b7010(0);
      FUN_005b7010(0);
      iVar3 = (**(code **)(**(int **)Pipeline_exref + 0x28))
                        (*(int **)Pipeline_exref,&stack0xffffffdc,uVar5);
      if ((((iVar3 == 0) && (iVar2 != 1)) && ((unaff_retaddr == 0 || (unaff_retaddr == unaff_EBP))))
         && ((param_1 == 0 || (param_1 == iStack_1c)))) {
        iVar2 = FUN_005b7030(iVar2);
        if (iVar4 < 1) {
          bVar6 = *(int *)(iVar1 + 0x10) == *(int *)(iVar2 + 4);
        }
        else {
          bVar6 = iVar4 == *(int *)(iVar2 + 4);
        }
        if ((bVar6) && (iVar4 = param_2, unaff_EBP * 3 == iStack_1c * 4)) {
          *(int *)(iVar1 + 8) = unaff_EBP;
          *(int *)(iVar1 + 0xc) = iStack_1c;
          break;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uStack_4);
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    return 1;
  }
  return 0;
}

