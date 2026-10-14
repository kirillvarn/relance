
void __thiscall
FUN_005340b0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  CEquip *pCVar5;
  undefined1 local_18 [8];
  undefined1 auStack_10 [12];
  undefined4 uStack_4;
  
  bVar3 = SubObjectID::IsShieldEquipID((ushort)param_3);
  if (bVar3) {
    if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
        (iVar4 = param_1[4], iVar4 == 0)) || ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
      iVar4 = 0;
    }
    pCVar5 = CEquipManager::FindByID((CEquipManager *)(iVar4 + 0xe4),(ushort)param_3);
    for (puVar1 = *(undefined4 **)param_1[0x2e]; puVar1 != (undefined4 *)param_1[0x2e];
        puVar1 = (undefined4 *)*puVar1) {
      if (*(CEquip **)(puVar1[2] + 4) == pCVar5) {
        piVar2 = (int *)puVar1[2];
        if ((piVar2 != (int *)0x0) && (*(int *)(piVar2[1] + 0x14) == 0x100)) {
          (**(code **)(*param_1 + 4))(local_18);
          (**(code **)(*param_3 + 4))(auStack_10);
          (**(code **)(*param_3 + 0x30))();
          (**(code **)(*piVar2 + 0x14))(uStack_4,param_3,param_3);
          return;
        }
        break;
      }
    }
  }
  FUN_00539cd0(param_2,param_3,param_4,param_5);
  return;
}

