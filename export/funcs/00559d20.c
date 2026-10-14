
/* WARNING: Removing unreachable block (ram,0x00559d35) */
/* WARNING: Removing unreachable block (ram,0x00559d70) */

void FUN_00559d20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00679a4c;
  iVar1 = DAT_00679a48;
  for (iVar3 = DAT_00679a48; iVar3 != iVar2; iVar3 = iVar3 + 0x24) {
    FUN_004dd9a0();
  }
  DAT_00679a4c = iVar1;
  FUN_00425a20();
  return;
}

