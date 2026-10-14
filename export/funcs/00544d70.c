
undefined4 __thiscall FUN_00544d70(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  CEquip *pCVar3;
  int iVar4;
  int *piVar5;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  uint auStack_8 [2];
  
  cVar1 = FUN_0042d740();
  if (cVar1 == '\0') {
    piVar5 = local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *param_2;
      param_2 = param_2 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_00544e70(local_28);
    cVar1 = FUN_00534460(local_28);
    if (cVar1 == '\0') {
      if (local_28[0] == 0x1c) {
        iVar4 = FUN_005416c0(local_18,0);
        if (iVar4 != 0) {
          (**(code **)(*(int *)(param_1 + 4) + 0x48))(iVar4,local_14,DAT_00673344);
          CEquipTraverser::CEquipTraverser((CEquipTraverser *)&stack0xffffffbc,0x80);
          while( true ) {
            if (((param_1 == -0xc) || (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) ||
               ((*(uint *)(iVar2 + 0x4c) & 0x503) != 0x503)) {
              iVar2 = 0;
            }
            pCVar3 = CEquipManager::Traverse
                               ((CEquipManager *)(iVar2 + 0xe4),(CEquipTraverser *)&stack0xffffffbc)
            ;
            if (pCVar3 == (CEquip *)0x0) break;
            auStack_8[0] = (uint)*(ushort *)(pCVar3 + 8);
            FUN_005351d0(auStack_8,iVar4,local_14,DAT_00673344);
          }
        }
      }
      else if (local_28[0] == 0xbb) {
        FUN_00544880();
      }
    }
  }
  return 1;
}

