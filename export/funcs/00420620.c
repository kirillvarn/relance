
void FUN_00420620(uint *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_18 [6];
  
  vsprintf((char *)local_18,param_2,&stack0x0000000c);
  uVar1 = 0xffffffff;
  puVar3 = local_18;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar2 != '\0');
  uVar1 = ~uVar1 - 1;
  if (0x17 < uVar1) {
    uVar1 = 0x17;
  }
  puVar3 = local_18;
  puVar4 = param_1 + 1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar4 = (char)*puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  *(undefined1 *)(uVar1 + (int)(param_1 + 1)) = 0;
  *param_1 = uVar1;
  return;
}

