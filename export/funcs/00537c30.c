
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537c30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_006789a0 = 200000;
  DAT_00678980 = 0;
  DAT_00678984 = 0;
  DAT_00678988 = 0;
  DAT_0067898c = 0;
  DAT_00678990 = 0;
  DAT_00678994 = 0;
  DAT_00678998 = 0;
  _DAT_0067899c = 100000;
  iVar3 = 0x100;
  puVar1 = &DAT_00675578;
  puVar2 = (undefined4 *)0x0;
  do {
    _DAT_00676978 = puVar1;
    *_DAT_00676978 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = _DAT_00676978 + 5;
    puVar2 = _DAT_00676978;
  } while (iVar3 != 0);
  iVar3 = 0x100;
  puVar1 = &DAT_0067697c;
  puVar2 = (undefined4 *)0x0;
  do {
    _DAT_0067897c = puVar1;
    *_DAT_0067897c = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = _DAT_0067897c + 8;
    puVar2 = _DAT_0067897c;
  } while (iVar3 != 0);
  iVar3 = 0;
  while( true ) {
    local_10 = DAT_00675570;
    if (iVar3 != 0) {
      local_10 = *(int *)(iVar3 + 200);
    }
    if (local_10 == 0) break;
    iVar3 = local_10;
    if ((*(byte *)(local_10 + 0xb4) & 8) != 0) {
      local_14 = 0;
      local_c = ftol();
      local_8 = ftol();
      local_4 = ftol();
      FUN_00537d20(&DAT_00678980,&local_14);
    }
  }
  return;
}

