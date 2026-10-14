
/* WARNING: Removing unreachable block (ram,0x004bf5a2) */

void __fastcall FUN_004bf540(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd5a7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d628c;
  piVar4 = (int *)param_1[5];
  local_4 = 1;
  if (piVar4 != (int *)param_1[6]) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)param_1[6]);
  }
  param_1[6] = param_1[5];
  puVar1 = (undefined4 *)param_1[9];
  local_4 = local_4 & 0xffffff00;
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 8),auStack_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_005b7e1d(param_1[5]);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = pvStack_c;
  return;
}

