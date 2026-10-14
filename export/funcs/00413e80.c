
/* WARNING: Removing unreachable block (ram,0x00414007) */
/* WARNING: Removing unreachable block (ram,0x0041401c) */
/* WARNING: Removing unreachable block (ram,0x00414020) */
/* WARNING: Removing unreachable block (ram,0x0041402f) */
/* WARNING: Removing unreachable block (ram,0x00414036) */

void __thiscall FUN_00413e80(IDPMsgHandler *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  int iStack_c;
  
  if (param_2 != 0) {
    iStack_c = *(int *)(param_2 + 0x24);
    while( true ) {
      do {
        iVar1 = *(int *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x24) = 0;
        *(undefined4 *)(param_2 + 0x20) = 0;
        piVar8 = *(int **)(param_1 + 8);
        if (*(int *)(param_1 + 0xc) - (int)piVar8 >> 2 == 0) {
          iVar2 = *(int *)(param_1 + 4);
          if ((iVar2 == 0) || (uVar5 = (int)piVar8 - iVar2 >> 2, uVar5 < 2)) {
            uVar5 = 1;
          }
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)piVar8 - iVar2 >> 2;
          }
          iVar2 = iVar2 + uVar5;
          iVar3 = iVar2;
          if (iVar2 < 0) {
            iVar3 = 0;
          }
          pvVar4 = operator_new(iVar3 * 4);
          pvVar6 = pvVar4;
          for (piVar7 = *(int **)(param_1 + 4); piVar7 != piVar8; piVar7 = piVar7 + 1) {
            FUN_005999b0(pvVar6,piVar7);
            pvVar6 = (void *)((int)pvVar6 + 4);
          }
          FUN_00427730(pvVar6,1,&param_2);
          FUN_00597c70(piVar8,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 4);
          IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
          FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
          *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar2 * 4);
          if (*(int *)(param_1 + 4) == 0) {
            iVar2 = (int)pvVar4 + 4;
            *(void **)(param_1 + 4) = pvVar4;
          }
          else {
            iVar2 = (int)pvVar4 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4 + 4;
            *(void **)(param_1 + 4) = pvVar4;
          }
        }
        else {
          FUN_00597c70(piVar8,piVar8,piVar8 + 1);
          FUN_00427730(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)piVar8 >> 2),&param_2
                      );
          piVar7 = *(int **)(param_1 + 8);
          for (; piVar8 != piVar7; piVar8 = piVar8 + 1) {
            *piVar8 = param_2;
          }
          iVar2 = *(int *)(param_1 + 8) + 4;
        }
        *(int *)(param_1 + 8) = iVar2;
        param_2 = iVar1;
      } while (iVar1 != 0);
      if (iStack_c == 0) break;
      param_2 = iStack_c;
      iStack_c = *(int *)(iStack_c + 0x24);
    }
  }
  return;
}

