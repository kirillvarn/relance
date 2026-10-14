
void FUN_004a3c20(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 0x17;
    do {
      puVar4 = (uint *)(param_3 + 4);
      if (puVar4 == (uint *)0x0) {
        *param_1 = 0;
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
        puVar5 = puVar3 + -0x16;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar5 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        *(char *)(uVar1 + (int)(puVar3 + -0x16)) = '\0';
        *param_1 = uVar1;
      }
      puVar3[-0xe] = *(uint *)(param_3 + 0x24);
      puVar3[-0xd] = *(uint *)(param_3 + 0x28);
      puVar3[-0xc] = *(uint *)(param_3 + 0x2c);
      puVar4 = (uint *)(param_3 + 0x38);
      puVar3[-0xb] = *(uint *)(param_3 + 0x30);
      if (puVar4 == (uint *)0x0) {
        puVar3[-10] = 0;
        *(char *)(puVar3 + -9) = '\0';
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
        puVar5 = puVar3 + -9;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar5 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        *(char *)(uVar1 + (int)(puVar3 + -9)) = '\0';
        puVar3[-10] = uVar1;
      }
      puVar4 = (uint *)(param_3 + 0x5c);
      if (puVar4 == (uint *)0x0) {
        puVar3[-1] = 0;
        *(char *)puVar3 = '\0';
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
        puVar5 = puVar3;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar5 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        *(char *)((int)puVar3 + uVar1) = '\0';
        puVar3[-1] = uVar1;
      }
      param_1 = param_1 + 0x1f;
      puVar3 = puVar3 + 0x1f;
    } while (param_1 != param_2);
  }
  return;
}

