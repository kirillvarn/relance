
undefined4 * FUN_00577ef0(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = stricmp(param_1,(&PTR_s_USER_NONE_00614dd8)[uVar3]);
    if (iVar2 == 0) goto LAB_00577f1d;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xcc);
  uVar3 = 0;
LAB_00577f1d:
  puVar1 = (undefined4 *)*DAT_0067c258;
  while( true ) {
    if (puVar1 == DAT_0067c258) {
      return (undefined4 *)0x0;
    }
    if (uVar3 == puVar1[2]) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}

