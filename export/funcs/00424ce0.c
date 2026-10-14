
char FUN_00424ce0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_34 [7];
  undefined4 local_18;
  undefined4 local_14;
  char local_3;
  
  puVar4 = local_34 + 3;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_004249c0(param_1,local_34 + 3,&DAT_00679bc0);
  if (cVar1 != '\0') {
    return cVar1;
  }
  if (local_3 == '\0') {
    if (DAT_00679bc8 == 0) goto LAB_00424d91;
    if (DAT_00679bcc != 0) {
      local_34[0] = 0x20;
      local_34[1] = 0x18;
      local_34[2] = 0x10;
      uVar3 = 0;
      do {
        local_18 = local_34[uVar3];
        local_14 = 0xffffffff;
        cVar1 = FUN_004249c0(param_1,local_34 + 3,&DAT_00679bc0);
        if (cVar1 != '\0') {
          return cVar1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
    }
  }
  if ((DAT_00679bc8 != 0) && (DAT_00679bcc != 0)) {
    cVar1 = FUN_004249c0(param_1,&DAT_00679bc0,&DAT_00679bc0);
    return cVar1;
  }
LAB_00424d91:
  FUN_00424870(param_1,0,0x280,0x1e0);
  return '\0';
}

