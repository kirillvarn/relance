
uint FUN_004347e0(undefined4 param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = param_4;
  puVar1 = param_3;
  uVar4 = FUN_00434720(param_1,param_2,param_3,param_4);
  if (uVar4 == 0) {
    uVar5 = FUN_0057d980(&param_2);
    param_4 = 0;
    param_3 = (undefined4 *)0x0;
    cVar3 = FUN_0057d9c0(uVar5,param_2 & 0xffff,&param_3,&param_4);
    if (cVar3 != '\0') {
      uVar4 = param_4 - 1U;
      if (iVar2 - 1U <= param_4 - 1U) {
        uVar4 = iVar2 - 1U;
      }
      puVar7 = (undefined4 *)((int)param_3 + 2);
      puVar8 = puVar1;
      for (uVar6 = (uVar4 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar4 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined2 *)(uVar4 * 2 + (int)puVar1) = 0;
      return uVar4;
    }
  }
  return uVar4;
}

