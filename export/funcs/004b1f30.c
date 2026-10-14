
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1f30(int param_1,int param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int *local_38;
  int local_34;
  uint uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  int local_18 [5];
  char local_4;
  char local_2;
  
  if (*(char *)(param_1 + 0x32e) == '\0') {
    cVar5 = '\0';
    local_18[0] = -1;
    local_4 = '\0';
    local_2 = '\0';
    if ((*(int *)(param_1 + 0x8b8) != *(int *)(param_1 + 0x330)) ||
       (*(char *)(param_1 + 0x8bc) != *(char *)(param_1 + 0x334))) {
      cVar5 = '\x01';
    }
    local_38 = (int *)(param_1 + 0x5e4);
    local_34 = 0;
    do {
      if (cVar5 != '\0') break;
      iVar2 = *(int *)(param_1 + 0x7f4);
      if (iVar2 == 1) {
        iVar2 = *(int *)(param_1 + 0x508);
LAB_004b1fc3:
        piVar6 = (int *)(iVar2 + local_34);
        piVar7 = local_18;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
      }
      else {
        if (iVar2 == 2) {
          iVar2 = *(int *)(param_1 + 0x548);
          goto LAB_004b1fc3;
        }
        if (iVar2 == 3) {
          iVar2 = *(int *)(param_1 + 0x528);
          goto LAB_004b1fc3;
        }
      }
      if (local_2 == '\0') {
        if (local_4 == '\0') {
          if ((*(byte *)((int *)*local_38 + 0x1b) & 2) != 0) {
            if (local_18[0] == param_2) {
              if ((float)local_38[0x75] == param_3) {
                cVar5 = '\x01';
              }
            }
            else {
              (**(code **)(*(int *)*local_38 + 0xa8))(0x2f,&local_2c,0);
              uStack_20 = local_2c;
              uStack_1c = 0;
              uStack_30 = (uint)(_DAT_005c8b68 < (double)local_2c);
              if ((float)uStack_30 != (float)local_38[0x75]) goto LAB_004b20b3;
            }
          }
        }
        else if (local_18[0] != 0x536) {
          uStack_28 = (**(code **)(*(int *)local_38[0x1c] + 0xa8))(0x3b,0,0);
          uStack_24 = 0;
          iVar2 = ftol();
          iVar4 = ftol();
          if (iVar2 != iVar4) {
LAB_004b20b3:
            cVar5 = '\x01';
          }
        }
      }
      local_34 = local_34 + 0x18;
      local_38 = local_38 + 1;
    } while (local_34 < 0x150);
    *(char *)(param_1 + 0x848) = cVar5;
    uVar3 = DAT_00679bb0;
    if (cVar5 == '\0') {
      uVar3 = DAT_00679b94;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x348) = uVar3;
    *(bool *)(*(int *)(param_1 + 0x7a8) + 0x37c) = cVar5 == '\0';
    bVar1 = *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388);
    *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388) = (cVar5 << 2 ^ bVar1) & 4 ^ bVar1;
  }
  return;
}

