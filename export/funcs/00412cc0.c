
int __thiscall FUN_00412cc0(IDPMsgHandler *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar4 = param_2;
  for (piVar1 = *(int **)(param_1 + 4); piVar1 != *(int **)(param_1 + 8); piVar1 = piVar1 + 1) {
    iVar5 = *piVar1;
    if ((param_2 <= *(uint *)(iVar5 + 4)) && (param_3 <= *(uint *)(iVar5 + 8))) {
      FUN_00527820(piVar1 + 1,*(int **)(param_1 + 8),piVar1);
      IDPMsgHandler::OnReceive
                (param_1,(uchar *)(*(ulong *)(param_1 + 8) - 4),*(ulong *)(param_1 + 8));
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      return iVar5;
    }
  }
  puVar2 = operator_new(0x28);
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar6 = puVar2;
  }
  puVar2 = puVar6;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_005b7050(0x10,5,5,5,1);
  uVar3 = uVar4;
  if ((uVar4 & uVar4 - 1) != 0) {
    for (uVar3 = (-(uint)(0x40 < uVar4) & 0x7f) + 1; uVar3 < uVar4; uVar3 = uVar3 << 1) {
    }
  }
  puVar6[1] = uVar3;
  uVar4 = param_3;
  if ((param_3 & param_3 - 1) != 0) {
    for (uVar4 = (-(uint)(0x40 < param_3) & 0x7f) + 1; uVar4 < param_3; uVar4 = uVar4 << 1) {
    }
  }
  iVar7 = 1;
  puVar6[2] = uVar4;
  *puVar6 = 0;
  iVar5 = (**(code **)(**(int **)Pipeline_exref + 0xb4))
                    (*(int **)Pipeline_exref,uVar3,uVar4,&param_2,1,0,puVar6);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + puVar6[2] * puVar6[1] * 2;
    return iVar7;
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: %s","E:\\FL\\Scratch\\Source\\Client\\cmn\\Font.cpp",
             0x192,"FontString - failed to create texture");
  FUN_005b7e1d(puVar6);
  return 0;
}

