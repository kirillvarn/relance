
void FUN_0053df80(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CEquip *pCVar4;
  CECargo *this;
  int *piVar5;
  
  bVar1 = SinglePlayer();
  if (!bVar1) {
    iVar3 = FUN_005416c0(param_2,0);
    if (iVar3 != 0) {
      if (((iVar3 == -0xc) || (piVar5 = *(int **)(iVar3 + 0x10), piVar5 == (int *)0x0)) ||
         ((piVar5[0x13] & 0x103U) != 0x103)) {
        piVar5 = (int *)0x0;
      }
      pCVar4 = CEquipManager::FindByID((CEquipManager *)(piVar5 + 0x39),*(ushort *)(param_3 + 2));
      if (pCVar4 == (CEquip *)0x0) {
        (**(code **)(*piVar5 + 0xb0))(param_3);
      }
      else {
        this = CECargo::cast(pCVar4);
        if (this != (CECargo *)0x0) {
          CECargo::SetCount(this,*(uint *)(param_3 + 0x14));
          (**(code **)(*(int *)this + 0x40))
                    (*(float *)(param_3 + 0x10) * *(float *)(*(int *)(this + 0xc) + 0x1c));
        }
      }
    }
  }
  cVar2 = FUN_00548eb0(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_004c45b0(*(undefined2 *)(param_3 + 2));
    if (iVar3 != 0) {
      if (0 < *(int *)(param_3 + 0x14)) {
        FUN_004c4590(*(undefined2 *)(param_3 + 2),param_3 + 8,*(int *)(param_3 + 0x14),
                     *(undefined4 *)(param_3 + 0x10),0);
        return;
      }
      FUN_004c4320(0,*(undefined2 *)(param_3 + 2),0xffffffff);
      return;
    }
    FUN_004c4170(0,param_3);
  }
  return;
}

