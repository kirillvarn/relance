
void FUN_005b2cb0(uint *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*param_1 == 0) {
    return;
  }
  puVar4 = param_1 + 1;
  if (*param_1 != 0) goto LAB_005b2cd4;
  pcVar5 = (char *)0x0;
  cVar1 = (char)param_1;
  do {
    if ((cVar1 == 'G') || (cVar1 == 'g')) {
      DAT_0067ecc0 = 1;
    }
    else if ((cVar1 == 'P') || (cVar1 == 'p')) {
      uVar3 = atoi(pcVar5);
      if (uVar3 != 0) {
        CDPClient::SetSourcePort(uVar3);
      }
    }
    else if ((cVar1 == 'S') || (cVar1 == 's')) {
      FUN_005ac710(pcVar5);
    }
    do {
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
      if (*param_1 <= uVar6) {
        return;
      }
LAB_005b2cd4:
      pcVar5 = (char *)*puVar4;
    } while ((*pcVar5 != '+') && (*pcVar5 != '-'));
    iVar2 = toupper((int)pcVar5[1]);
    cVar1 = (char)iVar2;
    pcVar5 = pcVar5 + 2;
  } while( true );
}

