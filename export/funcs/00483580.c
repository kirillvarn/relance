
uint __fastcall FUN_00483580(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc048;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x3a4) != -1) &&
     (((*(int *)(param_1 + 0x978) == 1 || (*(int *)(param_1 + 0x978) == 3)) && (DAT_00668740 != 0)))
     ) {
    ExceptionList = &local_c;
    FUN_0043a510(DAT_0066873c);
    iVar4 = *(int *)(param_1 + 0x978);
    iVar8 = 0;
    local_14 = operator_new(0xc);
    *local_14 = (int)local_14;
    local_14[1] = (int)local_14;
    local_10 = 0;
    local_4 = 0;
    FUN_00437f70(local_18,iVar4 == 3);
    if (*(int *)(param_1 + 0x978) == 3) {
      FUN_00483230(local_18);
    }
    else {
      FUN_00482f10(local_18);
    }
    piVar7 = (int *)*local_14;
    piVar5 = local_14;
    if (piVar7 != local_14) {
      do {
        puVar1 = (uint *)piVar7[2];
        if (0 < (int)puVar1[7]) {
          if (*(int *)(param_1 + 0x978) == 3) {
            uVar3 = Good2Arch(*puVar1);
            iVar4 = FUN_0047e460(uVar3);
            piVar5 = local_14;
            if (*(int *)(param_1 + 0x32c) == iVar4) {
              if (iVar8 == *(int *)(param_1 + 0x3a4)) {
                piVar7 = (int *)*local_14;
                uVar3 = *puVar1;
                local_4 = 0xffffffff;
                while (piVar7 != piVar5) {
                  puVar6 = (undefined4 *)FUN_0053ab20(local_24,0);
                  FUN_00516f70(local_20,*puVar6);
                }
                FUN_005b7e1d(local_14);
                ExceptionList = local_c;
                return uVar3;
              }
              iVar8 = iVar8 + 1;
            }
          }
          else {
            if (iVar8 == *(int *)(param_1 + 0x3a4)) {
              uVar3 = *puVar1;
              local_4 = 0xffffffff;
              piVar7 = (int *)*piVar5;
              piVar2 = piVar5;
              while (piVar7 != piVar5) {
                piVar2 = (int *)*piVar7;
                FUN_00516f70(local_20,piVar7);
                piVar7 = piVar2;
                piVar2 = local_14;
              }
              FUN_005b7e1d(piVar2);
              ExceptionList = local_c;
              return uVar3;
            }
            iVar8 = iVar8 + 1;
          }
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != piVar5);
    }
    local_4 = 0xffffffff;
    piVar7 = (int *)*piVar5;
    piVar2 = piVar5;
    while (piVar7 != piVar5) {
      piVar2 = (int *)*piVar7;
      FUN_00516f70(local_1c,piVar7);
      piVar7 = piVar2;
      piVar2 = local_14;
    }
    FUN_005b7e1d(piVar2);
  }
  ExceptionList = local_c;
  return 0;
}

