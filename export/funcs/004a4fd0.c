
void __fastcall FUN_004a4fd0(void *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  NewsBroadcastProperties *pNVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcbeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_0043a630(DAT_0066873c);
  uVar13 = 0;
  puVar11 = (uint *)0x0;
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(iVar3 + 4);
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    uVar13 = uVar13 + 1;
  }
  puVar5 = operator_new(uVar13 * 0x60 + 4);
  pcVar2 = NewsBroadcastProperties_exref;
  pcVar1 = ~NewsBroadcastProperties_exref;
  local_4 = 0;
  if (puVar5 != (uint *)0x0) {
    puVar11 = puVar5 + 1;
    *puVar5 = uVar13;
    FUN_005b7fba(puVar11,0x60,uVar13,pcVar2,pcVar1);
  }
  local_4 = 0xffffffff;
  *(uint **)((int)param_1 + 0x584) = puVar11;
  *(uint *)((int)param_1 + 0x588) = uVar13;
  puVar4 = operator_new(uVar13);
  if (0 < (int)uVar13) {
    puVar6 = puVar4;
    for (uVar7 = uVar13 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = uVar13 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  iVar10 = 0;
  iVar12 = 0;
  if (0 < (int)uVar13) {
    iVar14 = 0;
    do {
      if (*(char *)(iVar12 + (int)puVar4) == '\0') {
        pNVar8 = (NewsBroadcastProperties *)0x0;
        iVar9 = 0;
        puVar6 = (undefined4 *)0x0;
        while( true ) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(iVar3 + 4);
          }
          else {
            puVar6 = (undefined4 *)*puVar6;
          }
          if (puVar6 == (undefined4 *)0x0) goto LAB_004a50dd;
          if (iVar9 == iVar12) break;
          iVar9 = iVar9 + 1;
        }
        pNVar8 = (NewsBroadcastProperties *)puVar6[2];
LAB_004a50dd:
        if (pNVar8[9] != (NewsBroadcastProperties)0x0) {
          NewsBroadcastProperties::operator=
                    ((NewsBroadcastProperties *)(*(int *)((int)param_1 + 0x584) + iVar14),pNVar8);
          iVar10 = iVar10 + 1;
          *(undefined1 *)(iVar12 + (int)puVar4) = 1;
          iVar14 = iVar14 + 0x60;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
  }
  iVar12 = 0;
  if (0 < (int)uVar13) {
    iVar14 = iVar10 * 0x60;
    do {
      if (*(char *)(iVar12 + (int)puVar4) == '\0') {
        pNVar8 = (NewsBroadcastProperties *)0x0;
        iVar9 = 0;
        puVar6 = (undefined4 *)0x0;
        while( true ) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(iVar3 + 4);
          }
          else {
            puVar6 = (undefined4 *)*puVar6;
          }
          if (puVar6 == (undefined4 *)0x0) goto LAB_004a513d;
          if (iVar9 == iVar12) break;
          iVar9 = iVar9 + 1;
        }
        pNVar8 = (NewsBroadcastProperties *)puVar6[2];
LAB_004a513d:
        if (*(int *)(pNVar8 + 0xc) == 1) {
          NewsBroadcastProperties::operator=
                    ((NewsBroadcastProperties *)(*(int *)((int)param_1 + 0x584) + iVar14),pNVar8);
          iVar10 = iVar10 + 1;
          *(undefined1 *)(iVar12 + (int)puVar4) = 1;
          iVar14 = iVar14 + 0x60;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
  }
  iVar12 = 0;
  if (0 < (int)uVar13) {
    iVar14 = iVar10 * 0x60;
    do {
      if (*(char *)(iVar12 + (int)puVar4) == '\0') {
        pNVar8 = (NewsBroadcastProperties *)0x0;
        iVar9 = 0;
        puVar6 = (undefined4 *)0x0;
        while( true ) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(iVar3 + 4);
          }
          else {
            puVar6 = (undefined4 *)*puVar6;
          }
          if (puVar6 == (undefined4 *)0x0) goto LAB_004a519d;
          if (iVar9 == iVar12) break;
          iVar9 = iVar9 + 1;
        }
        pNVar8 = (NewsBroadcastProperties *)puVar6[2];
LAB_004a519d:
        if (pNVar8[8] != (NewsBroadcastProperties)0x0) {
          NewsBroadcastProperties::operator=
                    ((NewsBroadcastProperties *)(*(int *)((int)param_1 + 0x584) + iVar14),pNVar8);
          iVar10 = iVar10 + 1;
          *(undefined1 *)(iVar12 + (int)puVar4) = 1;
          iVar14 = iVar14 + 0x60;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
  }
  iVar12 = 0;
  if (0 < (int)uVar13) {
    iVar10 = iVar10 * 0x60;
    do {
      if (*(char *)(iVar12 + (int)puVar4) == '\0') {
        pNVar8 = (NewsBroadcastProperties *)0x0;
        iVar14 = 0;
        puVar6 = (undefined4 *)0x0;
        while( true ) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(iVar3 + 4);
          }
          else {
            puVar6 = (undefined4 *)*puVar6;
          }
          if (puVar6 == (undefined4 *)0x0) goto LAB_004a51fd;
          if (iVar14 == iVar12) break;
          iVar14 = iVar14 + 1;
        }
        pNVar8 = (NewsBroadcastProperties *)puVar6[2];
LAB_004a51fd:
        NewsBroadcastProperties::operator=
                  ((NewsBroadcastProperties *)(*(int *)((int)param_1 + 0x584) + iVar10),pNVar8);
        *(undefined1 *)(iVar12 + (int)puVar4) = 1;
        iVar10 = iVar10 + 0x60;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
  }
  *(undefined4 *)((int)param_1 + 0x578) = 0;
  *(undefined4 *)((int)param_1 + 0x57c) = 0;
  *(undefined4 *)((int)param_1 + 0x580) = 0;
  (**(code **)(**(int **)((int)param_1 + 0x648) + 0xa8))(0x37,0,*(int *)((int)param_1 + 0x588) + -1)
  ;
  FUN_005b7e1d(puVar4);
  ExceptionList = param_1;
  return;
}

