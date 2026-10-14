
void __fastcall FUN_004b2440(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint unaff_EBP;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 auStack_34 [4];
  undefined4 local_30 [2];
  undefined4 local_28 [10];
  
  local_30[0] = 0;
  piVar5 = *(int **)Pipeline_exref;
  puVar4 = &DAT_00679bc0;
  puVar6 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_28[2] = 0;
  local_28[3] = 0;
  (**(code **)(*piVar5 + 0x20))(piVar5,3,local_30);
  if (unaff_EBP >> 0x14 < 0x11) {
    *(undefined1 *)(param_1 + 0x97c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x97c) = 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x954);
  *(undefined4 *)(param_1 + 0x950) = 0;
  pcVar7 = (char *)(param_1 + 0x944);
  piVar5 = (int *)(param_1 + 0x8d4);
  do {
    iVar3 = *piVar5;
    iVar1 = piVar5[-1];
    *puVar4 = 0xffffffff;
    cVar2 = FUN_004af120(auStack_34,piVar5[-2],iVar1,iVar3);
    *pcVar7 = cVar2;
    if (cVar2 != '\0') {
      if ((*(char *)(param_1 + 0x97c) == '\0') && (*piVar5 != 0x10)) {
        *pcVar7 = '\0';
      }
      else {
        *puVar4 = *(undefined4 *)(param_1 + 0x950);
        *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + 1;
      }
    }
    puVar4 = puVar4 + 1;
    piVar5 = piVar5 + 3;
    pcVar7 = pcVar7 + 1;
  } while ((int)(pcVar7 + (-0x944 - param_1)) < 10);
  return;
}

