
/* WARNING: Removing unreachable block (ram,0x00414007) */
/* WARNING: Removing unreachable block (ram,0x0041401c) */
/* WARNING: Removing unreachable block (ram,0x00414020) */
/* WARNING: Removing unreachable block (ram,0x0041402f) */
/* WARNING: Removing unreachable block (ram,0x00414036) */

void __fastcall FUN_00413e8c(IDPMsgHandler *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int unaff_EBX;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  bool in_ZF;
  int iStack00000004;
  int iStack00000008;
  int iStack00000018;
  
  if (!in_ZF) {
    iStack00000008 = *(int *)(in_EAX + 0x24);
    while( true ) {
      do {
        iStack00000004 = *(int *)(in_EAX + 0x20);
        *(int *)(in_EAX + 0x24) = unaff_EBX;
        *(int *)(in_EAX + 0x20) = unaff_EBX;
        piVar7 = *(int **)(param_1 + 8);
        iStack00000018 = in_EAX;
        if (*(int *)(param_1 + 0xc) - (int)piVar7 >> 2 == 0) {
          iVar1 = *(int *)(param_1 + 4);
          if ((iVar1 == unaff_EBX) || (uVar4 = (int)piVar7 - iVar1 >> 2, uVar4 < 2)) {
            uVar4 = 1;
          }
          if (iVar1 == unaff_EBX) {
            iVar1 = 0;
          }
          else {
            iVar1 = (int)piVar7 - iVar1 >> 2;
          }
          iVar1 = iVar1 + uVar4;
          iVar2 = iVar1;
          if (iVar1 < unaff_EBX) {
            iVar2 = 0;
          }
          pvVar3 = operator_new(iVar2 * 4);
          pvVar5 = pvVar3;
          for (piVar6 = *(int **)(param_1 + 4); piVar6 != piVar7; piVar6 = piVar6 + 1) {
            FUN_005999b0(pvVar5,piVar6);
            pvVar5 = (void *)((int)pvVar5 + 4);
          }
          FUN_00427730(pvVar5,1,&stack0x00000018);
          FUN_00597c70(piVar7,*(undefined4 *)(param_1 + 8),(int)pvVar5 + 4);
          IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
          FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
          *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar1 * 4);
          if (*(int *)(param_1 + 4) == 0) {
            iVar1 = (int)pvVar3 + 4;
            *(void **)(param_1 + 4) = pvVar3;
            unaff_EBX = 0;
          }
          else {
            iVar1 = (int)pvVar3 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4 + 4;
            *(void **)(param_1 + 4) = pvVar3;
            unaff_EBX = 0;
          }
        }
        else {
          FUN_00597c70(piVar7,piVar7,piVar7 + 1);
          FUN_00427730(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)piVar7 >> 2),
                       &stack0x00000018);
          piVar6 = *(int **)(param_1 + 8);
          for (; piVar7 != piVar6; piVar7 = piVar7 + 1) {
            *piVar7 = iStack00000018;
          }
          iVar1 = *(int *)(param_1 + 8) + 4;
        }
        *(int *)(param_1 + 8) = iVar1;
        in_EAX = iStack00000004;
      } while (iStack00000004 != unaff_EBX);
      if (iStack00000008 == unaff_EBX) break;
      in_EAX = iStack00000008;
      iStack00000008 = *(int *)(iStack00000008 + 0x24);
    }
  }
  return;
}

