
void __thiscall FUN_004ca220(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar4 = param_2;
  puVar6 = (uint *)((param_2 + 2) * 0x94 + param_1);
  if (param_4 == (uint *)0x0) {
    *puVar6 = 0;
    *(char *)(puVar6 + 1) = '\0';
  }
  else {
    uVar5 = 0xffffffff;
    puVar7 = param_4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar3 = *puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while ((char)uVar3 != '\0');
    param_2 = ~uVar5 - 1;
    if (0x7f < param_2) {
      param_2 = 0x7f;
    }
    puVar7 = puVar6;
    for (uVar5 = param_2 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *param_4;
      param_4 = param_4 + 1;
    }
    for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar7 = (char)*param_4;
      param_4 = (uint *)((int)param_4 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    *(char *)(param_2 + 4 + (int)puVar6) = '\0';
    *puVar6 = param_2;
  }
  iVar1 = iVar4 * 0x94 + param_1;
  *(undefined4 *)(iVar1 + 0x1ac) = *(undefined4 *)Data_exref;
  *(int *)(iVar1 + 0x1b0) = iVar1 + 300;
  iVar2 = param_1 + iVar4 * 0x18;
  *(int *)(iVar2 + 0x6c) = iVar1 + 0x1ac;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 1;
  *(undefined4 *)(param_1 + (iVar4 * 3 + 0xf) * 8) = 1;
  *(undefined4 *)(iVar1 + 0x1b8) = param_3;
  return;
}

