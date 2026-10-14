
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059d6d0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  DAT_0067dcdc = 0;
  DAT_0067dce0 = 0;
  for (iVar4 = DAT_0067dbdc; iVar3 = DAT_0067dbdc, iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    piVar2 = *(int **)(iVar4 + 8);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      piVar5 = (int *)piVar2[1];
      piVar2[2] = 0;
      FUN_005b7e1d(piVar2);
      piVar2 = piVar5;
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar5;
        piVar2 = DAT_0067dbe8;
      }
      DAT_0067dbe8 = piVar2;
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar3;
        iVar3 = _DAT_0067dbec;
      }
      _DAT_0067dbec = iVar3;
      _DAT_0067dbe4 = _DAT_0067dbe4 + -1;
    }
  }
  while (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
    FUN_005b7e1d(iVar3);
    iVar3 = iVar4;
  }
  _DAT_0067dbd8 = 0;
  _DAT_0067dbe0 = 0;
  DAT_0067dbdc = 0;
  piVar2 = DAT_0067dbe8;
  do {
    do {
      do {
        iVar4 = DAT_0067dbdc;
        if (piVar2 == (int *)0x0) {
          for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
            piVar2 = *(int **)(iVar4 + 8);
            if (piVar2 != (int *)0x0) {
              iVar3 = *piVar2;
              piVar5 = (int *)piVar2[1];
              piVar2[2] = 0;
              FUN_005b7e1d(piVar2);
              piVar2 = piVar5;
              if (iVar3 != 0) {
                *(int **)(iVar3 + 4) = piVar5;
                piVar2 = DAT_0067dbe8;
              }
              DAT_0067dbe8 = piVar2;
              if (piVar5 != (int *)0x0) {
                *piVar5 = iVar3;
                iVar3 = _DAT_0067dbec;
              }
              _DAT_0067dbec = iVar3;
              _DAT_0067dbe4 = _DAT_0067dbe4 + -1;
            }
          }
          FUN_0059e860();
          piVar2 = DAT_0067dbe8;
          while (piVar2 != (int *)0x0) {
            piVar5 = (int *)piVar2[1];
            FUN_005b7e1d(piVar2);
            piVar2 = piVar5;
          }
          _DAT_0067dbe4 = 0;
          _DAT_0067dbec = 0;
          DAT_0067dbe8 = (int *)0x0;
          FUN_0059e8d0();
          FUN_0041b030(&DAT_0067dbc8);
          FUN_0041e610();
          FUN_005a2990();
          IDPMsgHandler::OnDisconnect((IDPMsgHandler *)&DAT_0067dbf8);
          return;
        }
        iVar4 = piVar2[2];
        piVar2 = (int *)piVar2[1];
      } while ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x6c) & 4) != 0));
      *(byte *)(iVar4 + 0x6c) = *(byte *)(iVar4 + 0x6c) | 4;
      if (DAT_0067dcdc == iVar4) {
        DAT_0067dcdc = 0;
      }
      if (DAT_0067dce0 == iVar4) {
        DAT_0067dce0 = 0;
      }
      if (DAT_0067dcd8 == iVar4) {
        DAT_0067dcd8 = 0;
      }
      piVar5 = DAT_0067dbe8;
    } while (DAT_0067dbe8 == (int *)0x0);
    do {
      if (piVar5[2] == iVar4) {
        if (piVar5[2] != 0) {
          if (*(int *)(iVar4 + 4) != 0) {
            FUN_0059e7d0(iVar4);
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          FUN_0059e810(piVar5);
          piVar5[2] = 0;
        }
        break;
      }
      piVar1 = piVar5 + 1;
      piVar5 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  } while( true );
}

