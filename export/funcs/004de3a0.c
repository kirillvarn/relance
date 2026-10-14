
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004de3a0(void)

{
  CEqObj *this;
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  IBehaviorManager *pIVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)FUN_0054baf0();
  if ((((puVar3 != (undefined4 *)0x0) && (cVar1 = FUN_004c7b90(), cVar1 == '\0')) &&
      (puVar3 != (undefined4 *)0xfffffff4)) &&
     (((this = (CEqObj *)puVar3[4], this != (CEqObj *)0x0 &&
       ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) &&
      ((pIVar4 = CEqObj::get_behavior_interface(this), pIVar4 != (IBehaviorManager *)0x0 &&
       ((pIVar4[0x168] != (IBehaviorManager)0x0 &&
        (bVar2 = CShip::is_using_tradelane((CShip *)this), !bVar2)))))))) {
    local_4 = 7;
    for (puVar5 = (undefined4 *)FUN_00540fc0(&local_4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[5]) {
      pfVar6 = (float *)(**(code **)*puVar3)();
      pfVar7 = (float *)(**(code **)*puVar5)();
      if ((pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
          (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]) +
          (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) < _DAT_005d848c) {
        if (((puVar5 == (undefined4 *)0xfffffff4) || (iVar8 = puVar5[4], iVar8 == 0)) ||
           ((*(uint *)(iVar8 + 0x4c) & 0x803) != 0x803)) {
          iVar8 = 0;
        }
        iVar8 = CShip::get_space_for_cargo_type((CShip *)this,*(Equipment **)(iVar8 + 0xec));
        if (0 < iVar8) {
          return 1;
        }
      }
    }
  }
  return 0;
}

