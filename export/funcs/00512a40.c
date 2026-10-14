
void FUN_00512a40(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar4 = (int)param_2 - (int)param_1;
  do {
    if (iVar4 >> 2 < 0x11) {
      return;
    }
    uVar6 = *param_1;
    uVar2 = param_2[-1];
    uVar3 = param_1[(iVar4 >> 2) / 2];
    puVar5 = param_2;
    puVar7 = param_1;
    if (uVar6 < uVar3) {
      if (uVar3 < uVar2) {
LAB_00512a87:
        uVar6 = uVar3;
      }
      else if (uVar6 < uVar2) {
        uVar6 = uVar2;
      }
    }
    else if ((uVar2 <= uVar6) && (uVar6 = uVar2, uVar2 <= uVar3)) goto LAB_00512a87;
    while( true ) {
      uVar2 = *puVar7;
      while (uVar2 < uVar6) {
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
        uVar2 = *puVar1;
      }
      do {
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -1;
      } while (uVar6 < *puVar1);
      if (puVar5 <= puVar7) break;
      uVar2 = *puVar7;
      *puVar7 = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 1;
    }
    if ((int)((int)puVar7 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)puVar7 & 0xfffffffcU)) {
      FUN_00512a40(param_1,puVar7,0);
    }
    else {
      FUN_00512a40(puVar7,param_2,0);
      param_2 = puVar7;
      puVar7 = param_1;
    }
    iVar4 = (int)param_2 - (int)puVar7;
    param_1 = puVar7;
  } while( true );
}

