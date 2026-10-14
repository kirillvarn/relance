
uint * __thiscall FUN_00575450(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *(char *)puVar1 = '\0';
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    *(char *)puVar1 = '\0';
    return param_1;
  }
  uVar2 = 0xffffffff;
  puVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    uVar3 = *puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
  } while ((char)uVar3 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  puVar4 = puVar1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar4 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  *(char *)(uVar2 + (int)puVar1) = '\0';
  *param_1 = uVar2;
  return param_1;
}

