
void FUN_0053d720(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  CSimple *pCVar7;
  
  piVar2 = (int *)FUN_005416c0(*param_2,0);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_005416c0(param_2[1],0);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0054baf0();
      if (piVar2 == piVar4) {
        if (((iVar3 == -0xc) || (iVar5 = *(int *)(iVar3 + 0x10), iVar5 == 0)) ||
           ((*(uint *)(iVar5 + 0x4c) & 0x303) != 0x303)) {
          iVar5 = 0;
        }
        FUN_0054bc60(iVar5 + 0x164);
      }
      else {
        uVar6 = FUN_0054bb00();
        FUN_005397f0(uVar6);
      }
    }
    bVar1 = SinglePlayer();
    if (!bVar1) {
      pCVar7 = (CSimple *)(**(code **)(*piVar2 + 0x150))();
      if ((pCVar7 == (CSimple *)0x0) || (((byte)*(undefined4 *)(pCVar7 + 0x4c) & 3) != 3)) {
        pCVar7 = (CSimple *)0x0;
      }
      PhySys::RCEnd(pCVar7);
    }
    FUN_00543b40(iVar3,param_2 + 2);
  }
  return;
}

