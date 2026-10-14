
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7370(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    _DAT_00673408 = 0;
    DAT_0067340c._0_1_ = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _DAT_00673408 = ~uVar2 - 1;
  if (0x103 < _DAT_00673408) {
    _DAT_00673408 = 0x103;
  }
  pcVar3 = (char *)&DAT_0067340c;
  for (uVar2 = _DAT_00673408 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar2 = _DAT_00673408 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(undefined1 *)((int)&DAT_0067340c + _DAT_00673408) = 0;
  return;
}

