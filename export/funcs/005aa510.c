
undefined4 __fastcall FUN_005aa510(int param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  wchar_t local_c4 [39];
  undefined2 local_76;
  wchar_t local_24 [15];
  undefined2 local_6;
  undefined1 local_4;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    return 0;
  }
  local_4 = *(undefined1 *)(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  pcVar2 = *(code **)(param_1 + 0x18c);
  if (*(code **)(param_1 + 0x18c) == (code *)0x0) {
    pcVar2 = _C_exref;
  }
  wcsncpy(local_c4,(wchar_t *)pcVar2,0x28);
  pcVar2 = *(code **)(param_1 + 0x19c);
  if (*(code **)(param_1 + 0x19c) == (code *)0x0) {
    pcVar2 = _C_exref;
  }
  wcsncpy(local_24,(wchar_t *)pcVar2,0x10);
  local_76 = 0;
  local_6 = 0;
  (**(code **)(*DAT_0067ecd0 + 0x48))(local_c4,DAT_00673344);
  iVar3 = FUN_005a89b0((undefined1 *)(param_1 + 0x1b0),0x40a00000,0x42700000);
  if ((iVar3 == 1) && (*(char *)(param_1 + 0x1b1) == '\x03')) {
    bVar1 = SinglePlayer();
    if (!bVar1) {
      FUN_005a9440();
      return 1;
    }
    uVar4 = 1;
    if (DAT_0067ecd0 != (int *)0x0) {
      if (DAT_0067ecc0 != '\0') {
        (**(code **)(*DAT_0067ecd0 + 0x15c))(0,DAT_00673344);
        return 1;
      }
      iVar3 = *DAT_0067ecd0;
      fVar5 = (float10)FUN_005b3510(6,DAT_00673344);
      (**(code **)(iVar3 + 0x15c))((float)fVar5);
      return 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

