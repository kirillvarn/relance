
void FUN_004d9d70(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 0x2b;
    do {
      puVar4 = (uint *)(param_3 + 4);
      if (puVar4 == (uint *)0x0) {
        *param_1 = 0;
        *(char *)(puVar3 + -0x2a) = '\0';
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
        puVar5 = puVar3 + -0x2a;
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
        *(char *)(uVar1 + (int)(puVar3 + -0x2a)) = '\0';
        *param_1 = uVar1;
      }
      puVar4 = (uint *)(param_3 + 0x28);
      if (puVar4 == (uint *)0x0) {
        puVar3[-0x22] = 0;
        *(char *)(puVar3 + -0x21) = '\0';
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
        if (0x7f < uVar1) {
          uVar1 = 0x7f;
        }
        puVar5 = puVar3 + -0x21;
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
        *(char *)((int)puVar3 + (uVar1 - 0x84)) = '\0';
        puVar3[-0x22] = uVar1;
      }
      puVar4 = (uint *)(param_3 + 0xac);
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
        if (0x7f < uVar1) {
          uVar1 = 0x7f;
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
      puVar3[0x20] = *(uint *)(param_3 + 300);
      puVar3[0x21] = *(uint *)(param_3 + 0x130);
      puVar3[0x22] = *(uint *)(param_3 + 0x134);
      puVar3[0x23] = *(uint *)(param_3 + 0x138);
      *(char *)(puVar3 + 0x24) = *(char *)(param_3 + 0x13c);
      puVar3[0x25] = *(uint *)(param_3 + 0x140);
      puVar3[0x26] = *(uint *)(param_3 + 0x144);
      param_1 = param_1 + 0x52;
      puVar3 = puVar3 + 0x52;
    } while (param_1 != param_2);
  }
  return;
}

