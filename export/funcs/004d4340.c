
void __fastcall FUN_004d4340(undefined1 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  int local_f4;
  int *local_f0;
  int local_ec;
  int *local_e8;
  uint local_e4;
  undefined4 *local_e0;
  int *local_dc;
  uint local_d8;
  undefined1 *local_d4;
  int *local_d0;
  undefined1 local_cc [4];
  int local_c8 [45];
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bdf91;
  local_c = ExceptionList;
  if (1 < *(uint *)(param_1 + 8)) {
    local_f4._0_1_ = *param_1;
    ExceptionList = &local_c;
    local_d4 = param_1;
    local_f0 = operator_new(0x24);
    *local_f0 = (int)local_f0;
    local_f0[1] = (int)local_f0;
    uVar7 = 0;
    local_ec = 0;
    local_4 = 0;
    FUN_005b7fba(local_cc,0xc,0x10,&LAB_004d4710,FUN_004d42e0);
    local_4._0_1_ = 1;
    local_e4 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar8 = (int *)**(int **)(param_1 + 4);
        piVar1 = (int *)*local_f0;
        if ((piVar1 != piVar8) && (piVar1 != (int *)*piVar8)) {
          FUN_004d4970(piVar1,param_1,piVar8,(int *)*piVar8);
          local_ec = local_ec + 1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        local_d8 = 0;
        if (uVar7 == 0) {
LAB_004d4599:
          uVar10 = local_d8;
          FUN_004d47f0(&local_f4);
          if (uVar10 == uVar7) {
            uVar7 = uVar7 + 1;
            local_e4 = uVar7;
          }
        }
        else {
          piVar8 = local_c8;
          do {
            uVar10 = local_d8;
            if (piVar8[1] == 0) break;
            if (&local_f4 != piVar8 + -1) {
              puVar2 = (undefined4 *)*piVar8;
              puVar3 = (undefined4 *)*puVar2;
              FUN_0053e430(&local_dc);
              local_d0 = local_f0;
              piVar1 = local_f0;
              piVar6 = local_dc;
              while (puVar3 != puVar2) {
                if (piVar6 == piVar1) goto LAB_004d449e;
                if ((float)puVar3[5] <= (float)piVar6[5]) {
                  puVar3 = (undefined4 *)*puVar3;
                }
                else {
                  piVar4 = (int *)*piVar6;
                  FUN_004d4970(puVar3,&local_f4,piVar6,piVar4);
                  piVar1 = local_d0;
                  piVar6 = piVar4;
                  local_dc = piVar4;
                  uVar10 = local_d8;
                }
              }
              if (piVar6 != piVar1) {
                FUN_004d4970(puVar2,&local_f4,piVar6,piVar1);
              }
LAB_004d449e:
              piVar8[1] = piVar8[1] + local_ec;
              local_ec = 0;
              uVar7 = local_e4;
              param_1 = local_d4;
            }
            piVar1 = (int *)*piVar8;
            *piVar8 = (int)local_f0;
            iVar5 = piVar8[1];
            piVar8[1] = local_ec;
            local_d8 = uVar10 + 1;
            piVar8 = piVar8 + 3;
            local_f0 = piVar1;
            local_ec = iVar5;
          } while (local_d8 < uVar7);
          if (local_d8 != 0xf) goto LAB_004d4599;
          FUN_0053e430(&local_e0);
          puVar2 = local_14;
          FUN_0053e430(&local_e8);
          piVar1 = local_f0;
          piVar8 = local_e8;
          while (local_e0 != puVar2) {
            if (piVar8 == piVar1) goto LAB_004d4575;
            if ((float)local_e0[5] <= (float)piVar8[5]) {
              local_e0 = (undefined4 *)*local_e0;
            }
            else {
              piVar6 = (int *)*piVar8;
              FUN_004d4970(local_e0,&local_f4,piVar8,piVar6);
              piVar8 = piVar6;
              local_e8 = piVar6;
            }
          }
          if (piVar8 != piVar1) {
            FUN_004d4970(puVar2,&local_f4,piVar8,piVar1);
          }
LAB_004d4575:
          local_10 = local_10 + local_ec;
          local_ec = 0;
          uVar7 = local_e4;
          param_1 = local_d4;
        }
      } while (*(int *)(param_1 + 8) != 0);
      if (uVar7 != 0) {
        puVar9 = local_cc + uVar7 * 0xc;
        do {
          puVar9 = puVar9 + -0xc;
          FUN_004d4820(puVar9);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005b7ec6(local_cc,0xc,0x10,FUN_004d42e0);
    local_4 = 0xffffffff;
    FUN_004d42e0();
  }
  ExceptionList = local_c;
  return;
}

