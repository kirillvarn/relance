
void __thiscall FUN_00427020(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar1 = 0xffffffff;
  puVar3 = param_2;
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
  puVar3 = param_1 + 1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar3 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  *(char *)(uVar1 + (int)(param_1 + 1)) = '\0';
  *param_1 = uVar1;
  return;
}

