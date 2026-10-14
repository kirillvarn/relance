
uint * FUN_004d9f00(int param_1,int param_2,uint *param_3)

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
    puVar3 = param_3 + 0x2b;
    puVar5 = (uint *)(param_2 + 0x28);
    do {
      param_2 = param_2 + -0x148;
      puVar6 = puVar5 + -0x52;
      param_3 = param_3 + -0x52;
      puVar4 = puVar3 + -0x52;
      if (puVar5 == (uint *)0x16c) {
        *param_3 = 0;
        *(char *)(puVar3 + -0x7c) = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar7 = puVar5 + -0x5b;
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
        puVar7 = puVar5 + -0x5b;
        puVar8 = puVar3 + -0x7c;
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
        *(char *)((int)puVar3 + (uVar1 - 0x1f0)) = '\0';
        *param_3 = uVar1;
      }
      if (puVar6 == (uint *)0x0) {
        puVar3[-0x74] = 0;
        *(char *)(puVar3 + -0x73) = '\0';
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
        if (0x7f < uVar1) {
          uVar1 = 0x7f;
        }
        puVar7 = puVar6;
        puVar8 = puVar3 + -0x73;
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
        *(char *)((int)puVar3 + (uVar1 - 0x1cc)) = '\0';
        puVar3[-0x74] = uVar1;
      }
      puVar7 = puVar5 + -0x31;
      if (puVar7 == (uint *)0x0) {
        puVar3[-0x53] = 0;
        *(char *)puVar4 = '\0';
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
        if (0x7f < uVar1) {
          uVar1 = 0x7f;
        }
        puVar8 = puVar4;
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
        *(char *)((int)puVar4 + uVar1) = '\0';
        puVar3[-0x53] = uVar1;
      }
      puVar3[-0x32] = puVar5[-0x11];
      puVar3[-0x31] = puVar5[-0x10];
      puVar3[-0x30] = puVar5[-0xf];
      puVar3[-0x2f] = puVar5[-0xe];
      *(char *)(puVar3 + -0x2e) = (char)puVar5[-0xd];
      puVar3[-0x2d] = puVar5[-0xc];
      puVar3[-0x2c] = puVar5[-0xb];
      puVar3 = puVar4;
      puVar5 = puVar6;
    } while (param_2 != param_1);
  }
  return param_3;
}

