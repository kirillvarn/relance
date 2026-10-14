
void __fastcall FUN_004bf720(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_24 [4];
  undefined1 local_20 [2];
  undefined2 local_1e;
  int local_1c;
  int local_18;
  char local_14;
  int local_10;
  int local_c;
  char local_8;
  int local_4;
  
  iVar1 = FUN_004c4060();
  std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
            ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x20),local_24,
             **(undefined4 **)(param_1 + 0x24),*(undefined4 **)(param_1 + 0x24));
  iVar2 = FUN_004c4ce0();
  if (iVar2 != 0) {
    iVar2 = FUN_004c4ce0();
    EquipDesc::set_count((EquipDesc *)(param_1 + 0x38),iVar2);
    std::list<EquipDesc,std::allocator<EquipDesc>_>::insert
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x20),local_24,
               *(undefined4 *)(param_1 + 0x24),(EquipDesc *)(param_1 + 0x38));
  }
  piVar5 = (int *)**(int **)(iVar1 + 4);
  if (piVar5 != *(int **)(iVar1 + 4)) {
    do {
      local_20[0] = (undefined1)piVar5[2];
      local_1c = piVar5[3];
      local_1e = *(undefined2 *)((int)piVar5 + 10);
      local_18 = piVar5[4];
      local_10 = piVar5[6];
      local_c = piVar5[7];
      local_14 = (char)piVar5[5];
      local_8 = (char)piVar5[8];
      local_4 = piVar5[9];
      if ((local_14 == '\0') && (local_8 == '\0')) {
        iVar2 = *(int *)(param_1 + 0x24);
        piVar4 = *(int **)(iVar2 + 4);
        piVar3 = operator_new(0x28);
        *piVar3 = iVar2;
        if (piVar4 == (int *)0x0) {
          piVar4 = piVar3;
        }
        piVar3[1] = (int)piVar4;
        *(int **)(iVar2 + 4) = piVar3;
        *(int **)piVar3[1] = piVar3;
        FUN_004b7390(piVar3 + 2,local_20);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(iVar1 + 4));
  }
  FUN_004bf850(0xffffffff);
  iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x30);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xa8))(0x37,0,iVar1);
  return;
}

