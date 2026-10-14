
void __thiscall FUN_004db930(int param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  CEquip *pCVar3;
  CELauncher *pCVar4;
  IObjRW *pIVar5;
  CEGun *this;
  undefined4 uVar6;
  int iVar7;
  CShip *this_00;
  undefined4 *puVar8;
  CSimple *pCVar9;
  undefined4 local_28 [4];
  uint local_18;
  undefined4 local_14;
  undefined1 local_2;
  
  pCVar3 = (CEquip *)FUN_004e7e20(param_2);
  if ((pCVar3 != (CEquip *)0x0) && (pCVar4 = CELauncher::cast(pCVar3), pCVar4 != (CELauncher *)0x0))
  {
    FUN_005645c0(0x17);
    puVar8 = local_28;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_18 = param_2 & 0xffff;
    local_2 = 1;
    local_28[0] = 0x19;
    local_14 = 2;
    FUN_0054bcb0(local_28);
    iVar7 = *(int *)(param_1 + 0x28);
    if ((((iVar7 == 0) || (iVar7 == 8)) || (iVar7 == -4)) ||
       ((this_00 = *(CShip **)(iVar7 + 8), this_00 == (CShip *)0x0 ||
        ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)))) {
      this_00 = (CShip *)0x0;
    }
    pCVar9 = (CSimple *)0x0;
    pIVar5 = CShip::get_target(this_00);
    if (pIVar5 != (IObjRW *)0x0) {
      pIVar5 = CShip::get_target(this_00);
      pCVar9 = (CSimple *)(**(code **)(*(int *)pIVar5 + 0x150))();
      if ((pCVar9 == (CSimple *)0x0) || (((byte)*(undefined4 *)(pCVar9 + 0x4c) & 3) != 3)) {
        pCVar9 = (CSimple *)0x0;
      }
    }
    this = CEGun::cast(pCVar3);
    cVar1 = (**(code **)(*(int *)pCVar3 + 4))();
    if ((cVar1 != '\0') && (this != (CEGun *)0x0)) {
      uVar2 = CShip::get_sub_target(this_00);
      CEGun::SetTarget(this,pCVar9,uVar2);
    }
    uVar6 = FUN_004f6170();
    FUN_004f5580(uVar6);
  }
  return;
}

