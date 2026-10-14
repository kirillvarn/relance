
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00511b90(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  local_28 = 0;
  piVar3 = (int *)FUN_0054baf0();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x134))((int)&uStack_2c + 3);
    if (uStack_2c._3_1_ != '\0') {
      return (float10)_DAT_005c75dc;
    }
  }
  iVar4 = FUN_005553a0();
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
  uStack_1c = *puVar5;
  uStack_18 = puVar5[1];
  uStack_14 = puVar5[2];
  puVar5 = (undefined4 *)(**(code **)**(undefined4 **)(param_1 + 4))();
  local_28 = *puVar5;
  uStack_24 = puVar5[1];
  uStack_20 = puVar5[2];
  piVar3 = *(int **)(iVar4 + 4);
  piVar7 = (int *)*piVar3;
  bVar8 = false;
  if (piVar7 != piVar3) {
    do {
      if (bVar8) goto LAB_00511c92;
      piVar6 = (int *)(**(code **)(*(int *)piVar7[2] + 0x4c))();
      cVar2 = (**(code **)(*piVar6 + 0x4c))(&uStack_1c,&local_28,auStack_10);
      if (cVar2 != '\0') {
        uStack_2c = 1.0;
        bVar8 = true;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != piVar3);
    if (bVar8) goto LAB_00511c92;
  }
  bVar8 = false;
  iVar4 = FUN_005201d0();
  puVar5 = *(undefined4 **)(iVar4 + 4);
  puVar1 = (undefined4 *)*puVar5;
  while ((puVar1 != puVar5 && (!bVar8))) {
    cVar2 = (**(code **)(**(int **)(puVar1[2] + 0x1c) + 0x4c))(&uStack_1c,&local_28,auStack_10);
    bVar8 = cVar2 != '\0';
    if (bVar8) {
      uStack_2c = 1.0;
    }
    puVar1 = (undefined4 *)*puVar1;
  }
LAB_00511c92:
  return (float10)uStack_2c;
}

