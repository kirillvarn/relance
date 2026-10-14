
void __fastcall FUN_00566ab0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  char local_20 [32];
  
  FUN_00576190();
  if (*(HMODULE *)(param_1 + 0x54c) != (HMODULE)0x0) {
    BVar4 = FreeLibrary(*(HMODULE *)(param_1 + 0x54c));
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      ErrorHandler::log_last_error
                ("E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x17ed,2,
                 "%s(%d) : WARNING:LastError:%s",DVar5);
    }
    *(undefined4 *)(param_1 + 0x54c) = 0;
  }
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  piVar2 = *(int **)(param_1 + 0xc);
  do {
    piVar3 = piVar2;
    if (piVar3 == (int *)0x0) {
      if (*(undefined4 **)(param_1 + 0x548) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x548))(1);
      }
      *(undefined4 *)(param_1 + 0x548) = 0;
      FUN_0059dc00(param_1);
      return;
    }
    pcVar9 = (char *)piVar3[4];
    piVar2 = (int *)piVar3[2];
    local_20[0] = '\0';
    if (pcVar9 == (char *)0x0) {
      local_20[0] = '\0';
    }
    else {
      uVar6 = 0xffffffff;
      pcVar10 = pcVar9;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      if (0x1f < uVar6) {
        uVar6 = 0x1f;
      }
      pcVar10 = local_20;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_20[uVar6] = '\0';
    }
    (**(code **)(*piVar3 + 0x28))();
    iVar8 = 0xe;
    bVar11 = true;
    pcVar9 = local_20;
    pcVar10 = "StaticControl";
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar11 = *pcVar9 == *pcVar10;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (bVar11);
    if (bVar11) {
      (**(code **)*piVar3)(1);
    }
  } while( true );
}

