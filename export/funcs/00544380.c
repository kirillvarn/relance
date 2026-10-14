
void __thiscall FUN_00544380(int *param_1,ID_String *param_2)

{
  bool bVar1;
  long lVar2;
  Root *pRVar3;
  int iVar4;
  undefined4 *puVar5;
  HardpointInfo *pHVar6;
  int *piVar7;
  char *pcVar8;
  HardpointInfo *pHVar9;
  long lStack_98;
  HardpointInfo local_94 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 auStack_3c [15];
  
  bVar1 = ID_String::IsEmpty(param_2);
  if (!bVar1) {
    pHVar6 = (HardpointInfo *)&local_48;
    pHVar9 = local_94;
    pcVar8 = "HpPilot";
    lVar2 = (**(code **)(*param_1 + 0x1c))();
    bVar1 = FindHardpoint_PS(lVar2,pcVar8,(long *)pHVar9,pHVar6);
    if (bVar1) {
      pRVar3 = Archetype::GetSimple(*(uint *)param_2);
      param_1[0x41] = (int)pRVar3;
      if (pRVar3 != (Root *)0x0) {
        (**(code **)(*(int *)pRVar3 + 0xc))();
        (**(code **)(**(int **)(param_1[0x41] + 4) + 0x20))(0);
        lVar2 = Archetype::Root::create_instance((Root *)param_1[0x41],(IEngineInstance *)0x0);
        if (lVar2 != -1) {
          param_1[0x43] = lVar2;
          FindHardpoint_PS(lVar2,"HpConnect",&lStack_98,local_94);
          puVar5 = auStack_3c;
          pHVar6 = local_94;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pHVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            pHVar6 = pHVar6 + 4;
          }
          fStack_6c = fStack_44 - fStack_8c;
          fStack_70 = local_48 - fStack_90;
          fStack_68 = fStack_40 - fStack_88;
          pHVar6 = local_94;
          piVar7 = param_1 + 0x46;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = *(int *)pHVar6;
            pHVar6 = pHVar6 + 4;
            piVar7 = piVar7 + 1;
          }
        }
      }
    }
  }
  return;
}

