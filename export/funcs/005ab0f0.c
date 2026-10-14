
uint __fastcall FUN_005ab0f0(uint param_1)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  do {
    while( true ) {
      while( true ) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(param_1 + 0x1b8);
          in_EAX = param_1;
        }
        else {
          puVar7 = (undefined4 *)*puVar7;
        }
        puVar6 = puVar5;
        if (puVar7 == (undefined4 *)0x0) goto LAB_005ab14e;
        bVar1 = SinglePlayer();
        puVar6 = puVar7;
        if (bVar1) break;
        pcVar4 = *(code **)(puVar7[2] + 0x208);
        if (*(code **)(puVar7[2] + 0x208) == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        in_EAX = _wcsicmp((wchar_t *)pcVar4,(wchar_t *)(param_1 + 0x1e8));
        if (in_EAX == 0) goto LAB_005ab14e;
      }
      iVar3 = _wcsicmp((wchar_t *)(param_1 + 0x1e8),L"AutoSave");
      in_EAX = puVar7[2];
      if (iVar3 == 0) break;
      pcVar4 = *(code **)(in_EAX + 0x208);
      if (*(code **)(in_EAX + 0x208) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      in_EAX = _wcsicmp((wchar_t *)pcVar4,(wchar_t *)(param_1 + 0x1e8));
      if ((in_EAX == 0) &&
         ((puVar5 == (undefined4 *)0x0 ||
          ((in_EAX = 0, *(char *)(puVar5[2] + 0x201) != '\0' &&
           (in_EAX = 0, *(char *)(puVar7[2] + 0x201) == '\0')))))) {
        puVar5 = puVar7;
      }
    }
  } while (*(char *)(in_EAX + 0x201) == '\0');
LAB_005ab14e:
  if (puVar6 == (undefined4 *)0x0) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = FUN_005ab250(puVar6[2]);
  return uVar2;
}

