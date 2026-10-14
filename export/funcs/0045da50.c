
void __thiscall FUN_0045da50(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_30 [12];
  
  if (param_2 == 0) {
    pcVar6 = "interface\\NeuroNet\\icons\\NN_request.3db";
  }
  else if (param_2 == 1) {
    pcVar6 = "interface\\NeuroNet\\icons\\NN_traderequest.3db";
  }
  else {
    if (param_2 != 2) {
      return;
    }
    pcVar6 = "interface\\NeuroNet\\icons\\NN_grouprequest.3db";
  }
  local_30[8] = 0x3f800000;
  local_30[4] = 0x3f800000;
  local_30[0] = 0x3f800000;
  local_30[7] = 0;
  local_30[6] = 0;
  local_30[5] = 0;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[0xb] = 0;
  local_30[10] = 0;
  local_30[9] = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 900) + 0x84);
  if (iVar4 != -1) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,iVar4)
    ;
    puVar7 = local_30;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  pcVar3 = (char *)(*(int *)(param_1 + 900) + 0xd0);
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0059eee0();
  FUN_0059ec80(pcVar6,0,0);
  iVar4 = *(int *)(*(int *)(param_1 + 900) + 0x84);
  if (iVar4 != -1) {
    (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,iVar4,local_30);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 900) + 0x84),0,0);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x3a0) + 0x84);
  if (iVar4 != -1) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,iVar4)
    ;
    puVar7 = local_30;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  pcVar3 = (char *)(*(int *)(param_1 + 0x3a0) + 0xd0);
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0059eee0();
  FUN_0059ec80(pcVar6,0,0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x3a0) + 0x84);
  if (iVar4 != -1) {
    (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,iVar4,local_30);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x3a0) + 0x84),0,0);
  }
  return;
}

