
void __thiscall FUN_004f5580(int *param_1,int param_2)

{
  CEquipManager *this;
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CEquip *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 *local_38;
  int *local_34;
  undefined1 local_30 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  CEquipTraverser local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf399;
  pvStack_c = ExceptionList;
  local_38 = (undefined1 *)0x0;
  if (param_1[3] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_1[4] - param_1[3] >> 2;
  }
  iVar3 = 0;
  local_34 = param_1;
  if (0 < iVar7) {
    do {
      if (*(int *)(*(int *)(param_1[3] + iVar3 * 4) + 0x10) == param_2) {
        if (iVar3 != -1) {
          local_38 = *(undefined1 **)(param_1[3] + iVar3 * 4);
          puVar6 = (undefined4 *)(local_38 + 8);
          ExceptionList = &pvStack_c;
          uVar4 = FUN_004f6650(*(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 8),
                               *(undefined4 *)(local_38 + 4));
          FUN_004e5810(uVar4,*puVar6);
          *puVar6 = uVar4;
          goto LAB_004f564a;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  ExceptionList = &pvStack_c;
  local_38 = operator_new(0x14);
  if (local_38 == (undefined1 *)0x0) {
    local_38 = (undefined1 *)0x0;
  }
  else {
    *local_38 = param_2._0_1_;
    *(undefined4 *)(local_38 + 4) = 0;
    *(undefined4 *)(local_38 + 8) = 0;
    *(undefined4 *)(local_38 + 0xc) = 0;
  }
  *(int *)(local_38 + 0x10) = param_2;
  FUN_00537260(param_1[4],1,&local_38);
LAB_004f564a:
  iVar7 = *local_34;
  if ((((iVar7 != 0) && (iVar7 != 8)) && (iVar7 != -4)) &&
     ((iVar7 = *(int *)(iVar7 + 8), iVar7 != 0 && ((*(uint *)(iVar7 + 0x4c) & 0x103) == 0x103)))) {
    CEquipTraverser::CEquipTraverser(local_1c,0xe0);
    this = (CEquipManager *)(iVar7 + 0xe4);
    pCVar5 = CEquipManager::Traverse(this,local_1c);
    while (pCVar5 != (CEquip *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*(int *)pCVar5 + 0x60))(local_30);
      pcVar1 = (char *)*puVar6;
      cVar2 = (**(code **)(*(int *)pCVar5 + 4))();
      if (cVar2 != '\0') {
        param_2._0_1_ = SUB41(this,0);
        uVar8 = 0xffffffff;
        abStack_2c[0] = param_2._0_1_;
        pcVar9 = pcVar1;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (abStack_2c,pcVar1,~uVar8 - 1);
        uStack_4 = 0;
        FUN_004e5ab0(*(undefined4 *)(local_38 + 8),1,abStack_2c);
        uStack_4 = 0xffffffff;
        if (iStack_28 != 0) {
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005b7e1d((char *)(iStack_28 + -1));
          }
          else {
            *(char *)(iStack_28 + -1) = cVar2 + -1;
          }
        }
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
      }
      pCVar5 = CEquipManager::Traverse(this,local_1c);
    }
  }
  FUN_004f5c20();
  ExceptionList = pvStack_c;
  return;
}

