
void __thiscall FUN_004cffa0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_34 [12];
  undefined4 local_28 [4];
  int local_18;
  uint local_14;
  undefined1 local_2;
  
  if ((0 < *(int *)(param_1 + 0x418)) && (param_2 < *(int *)(param_1 + 0x418))) {
    piVar4 = *(int **)(param_1 + 0x414);
    piVar2 = (int *)*piVar4;
    iVar5 = param_2;
    if (piVar2 != piVar4) {
      while (iVar5 != 0) {
        piVar2 = (int *)*piVar2;
        iVar5 = iVar5 + -1;
        if (piVar2 == piVar4) {
          return;
        }
      }
      if (piVar2 + 2 != (int *)0x0) {
        iVar5 = piVar2[2];
        if (iVar5 == 4) {
          iVar5 = piVar2[7];
          iVar3 = FUN_004c4690();
          if (iVar5 < iVar3) {
            iVar3 = FUN_004c46a0(iVar5);
            local_18 = *(int *)(iVar3 + 0x10);
            if (local_18 == 0) {
              FUN_004f42e0(iVar3,1,iVar5,*(undefined4 *)(iVar3 + 0x14));
              return;
            }
            puVar6 = local_28;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            local_2 = 1;
            local_28[0] = 0x1c;
            local_14 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
            FUN_0054bcb0(local_28);
            return;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = piVar2[7];
          iVar3 = FUN_004c4fb0();
          if (iVar5 < iVar3) {
            FUN_004c4ff0(iVar5);
            piVar4 = (int *)FUN_004c5110();
            if (piVar4 != (int *)0x0) {
              puVar6 = local_28;
              for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              local_2 = 1;
              local_28[0] = 0x1c;
              local_14 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
              local_18 = (**(code **)(*piVar4 + 0x20))();
              FUN_0054bcb0(local_28);
              return;
            }
            cVar1 = FUN_004c52d0(local_34,&param_2);
            if (cVar1 != '\0') {
              FUN_004f42e0(local_34,0,iVar5,iVar5);
              return;
            }
          }
        }
        else {
          piVar4 = (int *)FUN_0054baf0();
          if ((piVar4 != (int *)0x0) &&
             (iVar5 = (**(code **)(*piVar4 + 0x20))(), piVar2[6] == iVar5)) {
            return;
          }
          iVar5 = piVar2[6];
          puVar6 = local_28;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          local_2 = 1;
          local_28[0] = 0x1c;
          local_14 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
          local_18 = iVar5;
          FUN_0054bcb0(local_28);
        }
      }
    }
  }
  return;
}

