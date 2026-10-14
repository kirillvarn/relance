
uint * FUN_004a3d60(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 0x17;
    puVar5 = (uint *)(param_2 + 4);
    do {
      param_2 = param_2 + -0x7c;
      puVar6 = puVar5 + -0x1f;
      param_3 = param_3 + -0x1f;
      puVar4 = puVar3 + -0x1f;
      if (puVar6 == (uint *)0x0) {
        *param_3 = 0;
        *(char *)(puVar3 + -0x35) = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar7 = puVar6;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar7 = puVar6;
        puVar8 = puVar3 + -0x35;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        *(char *)((int)puVar3 + (uVar1 - 0xd4)) = '\0';
        *param_3 = uVar1;
      }
      puVar3[-0x2d] = puVar5[-0x17];
      puVar3[-0x2c] = puVar5[-0x16];
      puVar3[-0x2b] = puVar5[-0x15];
      puVar7 = puVar5 + -0x12;
      puVar3[-0x2a] = puVar5[-0x14];
      if (puVar7 == (uint *)0x0) {
        puVar3[-0x29] = 0;
        *(char *)(puVar3 + -0x28) = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar8 = puVar7;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar8 = puVar3 + -0x28;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        *(char *)((int)puVar3 + (uVar1 - 0xa0)) = '\0';
        puVar3[-0x29] = uVar1;
      }
      puVar5 = puVar5 + -9;
      if (puVar5 == (uint *)0x0) {
        puVar3[-0x20] = 0;
        *(char *)puVar4 = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar7 = puVar5;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar7 = puVar4;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar7 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        *(char *)((int)puVar4 + uVar1) = '\0';
        puVar3[-0x20] = uVar1;
      }
      puVar3 = puVar4;
      puVar5 = puVar6;
    } while (param_2 != param_1);
  }
  return param_3;
}

