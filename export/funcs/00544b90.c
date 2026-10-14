
void __thiscall FUN_00544b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  CEquip *pCVar2;
  uint uStack_4;
  
  (**(code **)(*(int *)(param_1 + 4) + 0x48))(param_2,param_3,DAT_00673344);
  CEquipTraverser::CEquipTraverser((CEquipTraverser *)&stack0xffffffe4,0x80);
  while( true ) {
    if (((param_1 == -0xc) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) ||
       ((*(uint *)(iVar1 + 0x4c) & 0x503) != 0x503)) {
      iVar1 = 0;
    }
    pCVar2 = CEquipManager::Traverse
                       ((CEquipManager *)(iVar1 + 0xe4),(CEquipTraverser *)&stack0xffffffe4);
    if (pCVar2 == (CEquip *)0x0) break;
    uStack_4 = (uint)*(ushort *)(pCVar2 + 8);
    FUN_005351d0(&uStack_4,param_2,param_3,DAT_00673344);
  }
  return;
}

