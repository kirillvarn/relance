
int __thiscall FUN_004f5790(int *param_1,int param_2,int param_3,int param_4)

{
  char *_Str2;
  int iVar1;
  CEquip *pCVar2;
  undefined4 *puVar3;
  code *_Str1;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_20;
  undefined1 local_14 [4];
  CEquipTraverser local_10 [16];
  
  if (param_1[3] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1[4] - param_1[3] >> 2;
  }
  iVar1 = 0;
  if (0 < iVar5) {
    piVar7 = (int *)param_1[3];
    while (*(int *)(*piVar7 + 0x10) != param_2) {
      iVar1 = iVar1 + 1;
      piVar7 = piVar7 + 1;
      if (iVar5 <= iVar1) {
        return 0;
      }
    }
    if (iVar1 != -1) {
      iVar5 = ((int *)param_1[3])[iVar1];
      param_2 = 0;
      if (*(int *)(iVar5 + 4) == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 4;
      }
      iVar1 = *param_1;
      if ((((iVar1 != 0) && (iVar1 != 8)) && (iVar1 != -4)) &&
         ((iVar1 = *(int *)(iVar1 + 8), iVar1 != 0 && ((*(uint *)(iVar1 + 0x4c) & 0x103) == 0x103)))
         ) {
        CEquipTraverser::CEquipTraverser(local_10,0xe0);
        pCVar2 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
        while (pCVar2 != (CEquip *)0x0) {
          puVar3 = (undefined4 *)(**(code **)(*(int *)pCVar2 + 0x60))(local_14);
          _Str2 = (char *)*puVar3;
          if (0 < local_20) {
            iVar8 = 0;
            iVar6 = 0;
            do {
              _Str1 = *(code **)(*(int *)(iVar5 + 4) + iVar8 + 4);
              if (_Str1 == (code *)0x0) {
                _Str1 = _C_exref;
              }
              iVar4 = stricmp((char *)_Str1,_Str2);
              if (iVar4 == 0) {
                *(undefined2 *)(param_3 + param_2 * 2) = *(undefined2 *)(pCVar2 + 8);
                param_2 = param_2 + 1;
                break;
              }
              if (param_4 <= param_2) break;
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < local_20);
          }
          pCVar2 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
        }
      }
      return param_2;
    }
  }
  return 0;
}

