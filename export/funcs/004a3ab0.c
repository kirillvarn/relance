
void FUN_004a3ab0(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar4 = (uint *)(param_1 + 4);
    puVar3 = param_3 + 0x17;
    do {
      if (puVar4 == (uint *)0x0) {
        *param_3 = 0;
        *(char *)(puVar3 + -0x16) = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar5 = puVar4;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar5 = puVar4;
        puVar6 = puVar3 + -0x16;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar6 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        *(char *)(uVar1 + (int)(puVar3 + -0x16)) = '\0';
        *param_3 = uVar1;
      }
      puVar3[-0xe] = puVar4[8];
      puVar3[-0xd] = puVar4[9];
      puVar3[-0xc] = puVar4[10];
      puVar5 = puVar4 + 0xd;
      puVar3[-0xb] = puVar4[0xb];
      if (puVar5 == (uint *)0x0) {
        puVar3[-10] = 0;
        *(char *)(puVar3 + -9) = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar6 = puVar5;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar6 = puVar3 + -9;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar6 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        *(char *)((int)puVar3 + (uVar1 - 0x24)) = '\0';
        puVar3[-10] = uVar1;
      }
      puVar5 = puVar4 + 0x16;
      if (puVar5 == (uint *)0x0) {
        puVar3[-1] = 0;
        *(char *)puVar3 = '\0';
      }
      else {
        uVar1 = 0xffffffff;
        puVar6 = puVar5;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          uVar2 = *puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while ((char)uVar2 != '\0');
        uVar1 = ~uVar1 - 1;
        if (0x1f < uVar1) {
          uVar1 = 0x1f;
        }
        puVar6 = puVar3;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar6 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        *(char *)((int)puVar3 + uVar1) = '\0';
        puVar3[-1] = uVar1;
      }
      param_1 = param_1 + 0x7c;
      param_3 = param_3 + 0x1f;
      puVar4 = puVar4 + 0x1f;
      puVar3 = puVar3 + 0x1f;
    } while (param_1 != param_2);
  }
  return;
}

