
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ddd0(int *param_1,Vector *param_2,CObject *param_3,char param_4)

{
  int *piVar1;
  Vector *pVVar2;
  uint uVar3;
  int iVar4;
  CObject *pCVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *unaff_retaddr;
  undefined1 *puVar10;
  int iStack_104;
  undefined1 local_100 [24];
  int aiStack_e8 [58];
  
  puVar10 = local_100;
  iVar9 = 0;
  pCVar5 = param_3;
  pVVar2 = (Vector *)(**(code **)(*(int *)param_2 + 0xc))();
  uVar3 = FUN_00554e90();
  iVar4 = PhySys::FindRayCollisions(uVar3,pVVar2,param_2,(RayHit *)pCVar5,(int)puVar10);
  if (0 < iVar4) {
    piVar7 = &iStack_104;
    do {
      if (((CObject *)*piVar7 != param_3) &&
         (pCVar5 = GetRoot((CObject *)*piVar7), param_3 != pCVar5)) {
        piVar6 = *(int **)(*piVar7 + 0x68);
        piVar1 = *(int **)(*piVar7 + 0x6c);
        if (piVar6 != piVar1) {
          do {
            if (*piVar6 == piVar7[7]) {
              if ((char)piVar6[2] != '\0') goto LAB_0051deac;
              break;
            }
            piVar6 = piVar6 + 3;
          } while (piVar6 != piVar1);
        }
        if ((((param_4 == '\0') || (pCVar5 == (CObject *)0x0)) ||
            ((*(uint *)(pCVar5 + 0x4c) & 0x503) != 0x503)) ||
           (*(float *)(pCVar5 + 0x140) < _DAT_005c75dc)) {
          pCVar5 = *(CObject **)(local_100 + iVar9 * 0x20 + -4);
          if (*(int *)(pCVar5 + 0x5c) == 0) goto LAB_0051df10;
          piVar7 = *(int **)(pCVar5 + 0x68);
          if (piVar7 == *(int **)(pCVar5 + 0x6c)) goto LAB_0051df10;
          goto LAB_0051def8;
        }
      }
LAB_0051deac:
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 8;
    } while (iVar9 < iVar4);
  }
  goto LAB_0051df6b;
  while (piVar7 = piVar7 + 3, piVar7 != *(int **)(pCVar5 + 0x6c)) {
LAB_0051def8:
    if (*piVar7 == aiStack_e8[iVar9 * 8]) break;
  }
LAB_0051df10:
  GetRoot(pCVar5);
  (**(code **)(*param_1 + 0xc))(param_1);
LAB_0051df6b:
  puVar8 = (undefined4 *)&stack0xfffffed4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *unaff_retaddr = *puVar8;
    puVar8 = puVar8 + 1;
    unaff_retaddr = unaff_retaddr + 1;
  }
  return;
}

