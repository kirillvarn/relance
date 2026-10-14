
void __fastcall FUN_00468310(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char cStack_2;
  
  iVar7 = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x3b0) != 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x3b0) + 4);
    puVar4 = (undefined4 *)*puVar2;
    while (puVar4 != puVar2) {
      if (puVar4[3] != DAT_0066da48) {
        cStack_2 = (char)((uint)puVar4[3] >> 0x10);
        if (cStack_2 == '\0') {
          iVar7 = iVar7 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
      puVar5 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = (undefined4 *)*puVar5;
        while (puVar4 = puVar5, cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar5 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        puVar5 = (undefined4 *)puVar4[1];
        if (puVar4 == (undefined4 *)puVar5[2]) {
          do {
            puVar4 = puVar5;
            puVar5 = (undefined4 *)puVar4[1];
          } while (puVar4 == (undefined4 *)puVar5[2]);
        }
        if ((undefined4 *)puVar4[2] != puVar5) {
          puVar4 = puVar5;
        }
      }
    }
  }
  FUN_0058f640(iVar7 * 2,1);
  FUN_0058f640(iVar6,0);
  return;
}

