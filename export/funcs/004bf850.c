
void __thiscall FUN_004bf850(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *local_4;
  
  if (param_2 < 0) {
    local_4 = (undefined4 *)**(undefined4 **)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x2c);
    piVar8 = *(int **)(param_1 + 0x14);
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        local_4 = (undefined4 *)*local_4;
      } while (iVar3 != 0);
    }
    if (piVar8 != *(int **)(param_1 + 0x18)) {
      do {
        if (local_4 == *(undefined4 **)(param_1 + 0x24)) break;
        FUN_004bef00(local_4 + 2);
        if (*(char *)(param_1 + 0x5d) == '\0') {
          iVar3 = *piVar8;
          bVar1 = *(byte *)(*(int *)(iVar3 + 8) + 0x331);
          cVar2 = *(char *)(param_1 + 0x5e);
          bVar5 = cVar2 << 2;
          *(byte *)(*(int *)(iVar3 + 8) + 0x331) = (bVar1 ^ bVar5) & 4 ^ bVar1;
          bVar1 = *(byte *)(*(int *)(iVar3 + 8) + 0x331);
          bVar6 = cVar2 << 3;
          *(byte *)(*(int *)(iVar3 + 8) + 0x331) = (bVar6 ^ bVar1) & 8 ^ bVar1;
          bVar1 = *(byte *)(*(int *)(iVar3 + 0xc) + 0x331);
          *(byte *)(*(int *)(iVar3 + 0xc) + 0x331) = (bVar1 ^ bVar5) & 4 ^ bVar1;
          bVar1 = *(byte *)(*(int *)(iVar3 + 0xc) + 0x331);
          *(byte *)(*(int *)(iVar3 + 0xc) + 0x331) = (bVar1 ^ bVar6) & 8 ^ bVar1;
        }
        else {
          iVar3 = *piVar8;
          FUN_004bed40();
          (**(code **)(**(int **)(iVar3 + 8) + 0xa8))(1,0,0);
          (**(code **)(**(int **)(iVar3 + 0x14) + 0xa8))(1,0,0);
          (**(code **)(**(int **)(iVar3 + 0x20) + 0xa8))(1,0,0);
          if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(*(int *)(iVar3 + 0x24) + 4) == 0)) {
            (**(code **)(**(int **)(iVar3 + 8) + 0xa8))(2,1,0);
            (**(code **)(**(int **)(iVar3 + 0x14) + 0xa8))(2,1,0);
          }
          FUN_004bee70(1);
        }
        local_4 = (undefined4 *)*local_4;
        piVar8 = piVar8 + 1;
      } while (piVar8 != *(int **)(param_1 + 0x18));
      if (piVar8 != *(int **)(param_1 + 0x18)) {
        do {
          iVar3 = *piVar8;
          (**(code **)(**(int **)(iVar3 + 0x14) + 0xa8))
                    (4,"interface\\multiplayer\\trade\\TRADE_item_view.3db",0);
          (**(code **)(**(int **)(iVar3 + 0x18) + 0xa8))(0x1e,0,0);
          (**(code **)(**(int **)(iVar3 + 0x1c) + 0xa8))(0x1e,0,0);
          *(undefined1 *)(iVar3 + 0x28) = 0;
          FUN_004bed40();
          piVar8 = piVar8 + 1;
        } while (piVar8 != *(int **)(param_1 + 0x18));
        return;
      }
    }
  }
  else {
    puVar7 = (undefined4 *)**(undefined4 **)(param_1 + 0x24);
    uVar9 = param_2 - *(int *)(param_1 + 0x2c);
    if (((int)uVar9 < *(int *)(param_1 + 0x30)) && (-1 < (int)uVar9)) {
      if (0 < param_2) {
        do {
          param_2 = param_2 + -1;
          puVar7 = (undefined4 *)*puVar7;
        } while (param_2 != 0);
      }
      if ((*(int *)(param_1 + 0x14) == 0) ||
         ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) <= uVar9)) {
        FUN_004c38b0();
      }
      FUN_004bef00(puVar7 + 2);
      if (*(char *)(param_1 + 0x5d) != '\0') {
        if ((*(int *)(param_1 + 0x14) == 0) ||
           ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) <= uVar9)) {
          FUN_004c38b0();
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + uVar9 * 4);
        FUN_004bed40();
        (**(code **)(**(int **)(iVar3 + 8) + 0xa8))(1,0,0);
        (**(code **)(**(int **)(iVar3 + 0x14) + 0xa8))(1,0,0);
        (**(code **)(**(int **)(iVar3 + 0x20) + 0xa8))(1,0,0);
        if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(*(int *)(iVar3 + 0x24) + 4) == 0)) {
          (**(code **)(**(int **)(iVar3 + 8) + 0xa8))(2,1,0);
          (**(code **)(**(int **)(iVar3 + 0x14) + 0xa8))(2,1,0);
        }
        FUN_004bee70(1);
        return;
      }
      uVar4 = FUN_005ad970();
      if (uVar4 <= uVar9) {
        FUN_004c38b0();
      }
      FUN_004bee70(*(undefined1 *)(param_1 + 0x5e));
    }
  }
  return;
}

