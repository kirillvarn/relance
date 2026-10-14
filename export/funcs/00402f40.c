
int * FUN_00402f40(void)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  int local_80;
  char local_7c;
  int *local_78 [4];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b83c1;
  local_c = ExceptionList;
  if (DAT_00616498 == (int *)0x0) {
    local_78[0] = (int *)0x0;
    local_78[1] = (int *)0x0;
    local_78[2] = (int *)0x0;
    local_78[3] = (int *)0x0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_48 = 0xffffffff;
    local_44 = DAT_00616474;
    local_4 = 0;
    ppiVar6 = local_78;
    piVar2 = local_40;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar2 = (int)*ppiVar6;
      ppiVar6 = ppiVar6 + 1;
      piVar2 = piVar2 + 1;
    }
    local_4._0_1_ = 1;
    ExceptionList = &local_c;
    FUN_00404f20(&local_80,&local_44);
    local_4._0_1_ = 2;
    while (iVar4 = local_40[3], local_40[3] != 0) {
      FUN_00404d90(local_40[3]);
      FUN_00404d50(iVar4,0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00403190();
    local_4 = 3;
    while (piVar2 = local_78[3], local_78[3] != (int *)0x0) {
      piVar1 = local_78[3] + 1;
      if ((int *)local_78[3][1] == (int *)0x0) {
        local_78[3] = (int *)*local_78[3];
      }
      else {
        *(int *)local_78[3][1] = *local_78[3];
      }
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        local_68 = *piVar1;
      }
      else {
        *(int *)(iVar4 + 4) = *piVar1;
      }
      local_64 = local_64 + -1;
      FUN_00404d50(piVar2,0);
    }
    local_4 = 0xffffffff;
    FUN_00403190();
    piVar2 = (int *)(local_80 + 0x10);
    DAT_00616498 = piVar2;
    if (local_7c != '\0') {
      piVar1 = (int *)(local_80 + 0x2c);
      iVar4 = *(int *)(local_80 + 0x28);
      piVar7 = &DAT_006101d8;
      piVar8 = piVar1;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != *piVar1)) {
        iVar4 = *(int *)(local_80 + 0x1c);
        *(int *)(local_80 + 0x28) = iVar4;
        while ((iVar4 != 0 && ((*(int **)(local_80 + 0x28))[8] != *piVar1))) {
          iVar4 = **(int **)(local_80 + 0x28);
          *(int *)(local_80 + 0x28) = iVar4;
        }
      }
      if (*(int *)(local_80 + 0x28) == 0) {
        iVar4 = *piVar2;
        if (iVar4 == 0) {
          pvVar3 = operator_new(0x28);
          local_4 = 4;
          if (pvVar3 == (void *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00403160();
          }
          local_4 = 0xffffffff;
        }
        else {
          FUN_00404d90(iVar4);
        }
        *(int *)(local_80 + 0x28) = iVar4;
        FUN_00404d50(iVar4,0);
        iVar4 = *(int *)(local_80 + 0x28);
        *(int *)(iVar4 + 0x20) = *piVar1;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x18) = 0;
      }
    }
  }
  ExceptionList = local_c;
  return DAT_00616498;
}

