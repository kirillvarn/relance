
/* WARNING: Removing unreachable block (ram,0x0059ebc4) */

undefined1 __thiscall FUN_0059e980(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  char **ppcVar10;
  undefined4 unaff_retaddr;
  int aiStack_60 [2];
  char *local_58;
  ulong local_54 [3];
  undefined4 uStack_48;
  char *pcStack_44;
  char *apcStack_40 [5];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  long lStack_4;
  
  lStack_4 = -1;
  puStack_8 = &LAB_005c4e78;
  pvStack_c = ExceptionList;
  local_58 = param_2;
  ExceptionList = &pvStack_c;
  local_54[0] = DACOM_CRC::GetCRC32(param_2);
  aiStack_60[0] = (**(code **)(**(int **)Engine_exref + 0x44))(*(int **)Engine_exref,&local_58);
  if (aiStack_60[0] == -1) {
    uVar9 = 0;
    pcStack_44 = "FileSystem";
    lStack_4 = -1;
    ppcVar10 = apcStack_40;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar10 = (char *)0x0;
      ppcVar10 = ppcVar10 + 1;
    }
    apcStack_40[2] = (char *)0x80000000;
    apcStack_40[3] = (char *)0x1;
    uStack_2c = 3;
    uStack_28 = 0x8000080;
    apcStack_40[1] = param_2;
    uStack_48 = 0x34;
    uStack_18 = 0xffffffff;
    pvStack_c = (void *)0x0;
    iVar8 = (**(code **)(**(int **)Data_exref + 0xc))
                      (*(int **)Data_exref,&uStack_48,&stack0xffffff98);
    if (iVar8 == 0) {
      uVar3 = FUN_0041ade0(0,param_2,1,0xffffffff);
      uVar4 = FUN_0041aa50(unaff_retaddr,1,0xffffffff);
      bVar1 = Archetype::Load((IFileSystem *)0x0,&lStack_4,(int *)&stack0xffffff9c);
      if (bVar1) {
        iVar8 = *(int *)(param_1 + 4);
        if (iVar8 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(int *)(param_1 + 8) - iVar8) / 0xc;
        }
        iVar5 = 0;
        if (0 < iVar2) {
          iVar7 = 0;
          do {
            if (*(int *)(iVar7 + iVar8) == lStack_4) goto LAB_0059eb6b;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar5 < iVar2);
        }
        FUN_0059ebf0(lStack_4);
        FUN_0059f5b0(*(undefined4 *)(param_1 + 8),local_54);
LAB_0059eb6b:
        if (*(int *)(param_1 + 4) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
        }
        if (0 < iVar8) {
          iVar2 = 0;
          do {
            if (*(int *)(iVar2 + *(int *)(param_1 + 4)) == lStack_4) {
              *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 4)) = uVar3;
              *(undefined4 *)(iVar2 + 8 + *(int *)(param_1 + 4)) = uVar4;
            }
            iVar2 = iVar2 + 0xc;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar9 = 1;
      }
    }
  }
  else {
    piVar6 = *(int **)(param_1 + 4);
    if (piVar6 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(param_1 + 8) - (int)piVar6) / 0xc;
    }
    iVar2 = 0;
    lStack_4 = aiStack_60[0];
    if (0 < iVar8) {
      do {
        if (*piVar6 == aiStack_60[0]) {
          (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,aiStack_60[0]);
          ExceptionList = pvStack_14;
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar2 < iVar8);
    }
    aiStack_60[1] = 0;
    local_58 = (char *)0x0;
    FUN_00470c90(*(undefined4 *)(param_1 + 8),1,aiStack_60);
    uVar9 = 1;
  }
  ExceptionList = pvStack_14;
  return uVar9;
}

