
void FUN_005afea0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = param_3;
  iVar5 = (int)param_2 - (int)param_1;
  do {
    if (iVar5 >> 2 < 0x11) {
      return;
    }
    uVar7 = *param_1;
    param_3 = (code *)param_1[(iVar5 >> 2) / 2];
    uVar2 = param_2[-1];
    cVar4 = (*pcVar3)(uVar7,param_3);
    puVar8 = param_2;
    puVar9 = param_1;
    if (cVar4 == '\0') {
      cVar4 = (*pcVar3)(uVar7,uVar2);
      uVar6 = param_3;
      if (cVar4 == '\0') goto LAB_005aff05;
LAB_005aff14:
      param_3 = (code *)uVar7;
    }
    else {
      cVar4 = (*pcVar3)(param_3,uVar2);
      uVar6 = uVar7;
      if (cVar4 == '\0') {
LAB_005aff05:
        cVar4 = (*pcVar3)(uVar6,uVar2);
        uVar7 = uVar6;
        param_3 = (code *)uVar2;
        if (cVar4 == '\0') goto LAB_005aff14;
      }
    }
    while( true ) {
      cVar4 = (*pcVar3)(*puVar9,param_3);
      while (cVar4 != '\0') {
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        cVar4 = (*pcVar3)(*puVar1,param_3);
      }
      do {
        puVar1 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        cVar4 = (*pcVar3)(param_3,*puVar1);
      } while (cVar4 != '\0');
      if (puVar8 <= puVar9) break;
      uVar7 = *puVar9;
      *puVar9 = *puVar8;
      *puVar8 = uVar7;
      puVar9 = puVar9 + 1;
    }
    if ((int)((int)puVar9 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)puVar9 & 0xfffffffcU)) {
      FUN_005afea0(param_1,puVar9,pcVar3,0);
      param_1 = puVar9;
    }
    else {
      FUN_005afea0(puVar9,param_2,pcVar3,0);
      param_2 = puVar9;
    }
    iVar5 = (int)param_2 - (int)param_1;
  } while( true );
}

