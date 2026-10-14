
undefined4 __thiscall
FUN_005351d0(int param_1,ushort *param_2,int *param_3,ushort param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CEquip *pCVar5;
  CEGun *this;
  CSimple *pCVar6;
  undefined4 uStack_10;
  ushort uStack_c;
  undefined4 uStack_8;
  ushort uStack_4;
  
  if (param_5 != -1) {
    iVar4 = FUN_0054bb00();
    bVar1 = false;
    if (param_5 != iVar4) goto LAB_005351fa;
  }
  bVar1 = true;
LAB_005351fa:
  bVar2 = SinglePlayer();
  if ((bVar2) && (!bVar1)) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if ((iVar4 == 0) || ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
    iVar4 = 0;
  }
  pCVar5 = CEquipManager::FindByID((CEquipManager *)(iVar4 + 0xe4),*param_2);
  if (pCVar5 != (CEquip *)0x0) {
    cVar3 = (**(code **)(*(int *)pCVar5 + 8))();
    if (cVar3 != '\0') {
      return 0xfffffffe;
    }
    this = CEGun::cast(pCVar5);
    if (this != (CEGun *)0x0) {
      if (((param_3 == (int *)0x0) ||
          (pCVar6 = (CSimple *)(**(code **)(*param_3 + 0x150))(), pCVar6 == (CSimple *)0x0)) ||
         (((byte)*(undefined4 *)(pCVar6 + 0x4c) & 3) != 3)) {
        pCVar6 = (CSimple *)0x0;
      }
      bVar2 = CEGun::SetTarget(this,pCVar6,param_4);
      if ((bVar2) && (bVar1)) {
        uStack_10 = (**(code **)(*(int *)(param_1 + -4) + 0x20))();
        uStack_c = *param_2;
        if (param_3 == (int *)0x0) {
          uStack_8 = 0;
        }
        else {
          uStack_8 = (**(code **)(*param_3 + 0x20))();
        }
        uStack_4 = param_4;
        (**(code **)(*DAT_0067ecd0 + 0x10))(DAT_00673344,&uStack_10);
      }
      return 0;
    }
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

