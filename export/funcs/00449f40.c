
undefined4 __thiscall FUN_00449f40(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  int iVar9;
  undefined4 *puVar10;
  undefined1 uVar8;
  
  *param_2 = 0;
  *param_3 = -1;
  uVar8 = 0;
  uVar7 = 0;
  iVar1 = FUN_0043ab60(*(undefined4 *)(param_1 + 0x38));
  iVar2 = FUN_0043ad50(*(undefined4 *)(param_1 + 0x38));
  iVar3 = 0;
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(iVar1 + 4);
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    iVar3 = iVar3 + 1;
  }
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      puVar10 = (undefined4 *)0x0;
      iVar5 = 0;
      puVar4 = (undefined4 *)0x0;
      while( true ) {
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(iVar1 + 4);
        }
        else {
          puVar4 = (undefined4 *)*puVar4;
        }
        if (puVar4 == (undefined4 *)0x0) goto LAB_00449fd3;
        if (iVar5 == iVar9) break;
        iVar5 = iVar5 + 1;
      }
      puVar10 = (undefined4 *)puVar4[2];
LAB_00449fd3:
      uVar7 = uVar8;
      if (puVar10[0x17] != -1) {
        puVar4 = (undefined4 *)0x0;
        do {
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = *(undefined4 **)(iVar2 + 4);
          }
          else {
            puVar4 = (undefined4 *)*puVar4;
          }
          piVar6 = (int *)0x0;
          if (puVar4 == (undefined4 *)0x0) goto LAB_0044a000;
        } while (*(int *)puVar4[2] != puVar10[0x17]);
        if (puVar4 != (undefined4 *)0x0) {
          piVar6 = (int *)puVar4[2];
        }
LAB_0044a000:
        if (*(char *)((int)piVar6 + 9) == '\x01') {
          *param_2 = *puVar10;
          *param_3 = *piVar6;
          uVar7 = 1;
        }
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar7;
    } while (iVar9 < iVar3);
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar7);
}

