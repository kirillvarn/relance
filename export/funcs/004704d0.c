
int FUN_004704d0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_0046f6d0(param_2);
  iVar2 = FUN_00470040(1);
  iVar6 = 0;
  if (DAT_0066dac0 == 0) {
    param_2 = 0;
  }
  else {
    iVar2 = (DAT_0066dac4 - DAT_0066dac0) * 0x2aaaaaab;
    param_2 = (DAT_0066dac4 - DAT_0066dac0) / 0xc;
  }
  if (0 < param_2) {
    do {
      puVar1 = (uint *)(DAT_0066dac0 + iVar6 * 0xc);
      wcscpy(&DAT_0066fc60,L"\n");
      FUN_004779a0(&DAT_0066dc60,puVar1[1],0xffffffff);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
      wcscat(&DAT_0066fc60,L" ");
      local_10 = *puVar1;
      FUN_00432240(&local_8,&local_10);
      if (local_8 == DAT_0066daa8) {
        pwVar3 = L"???";
      }
      else {
        pwVar3 = *(wchar_t **)(local_8 + 0x10);
      }
      wcscat(&DAT_0066fc60,pwVar3);
      wcscat(&DAT_0066fc60,L", ");
      local_10 = *puVar1;
      FUN_0041bd10(&local_c,&local_10);
      if ((local_c == DAT_0066da94) || (local_10 < *(uint *)(local_c + 0xc))) {
        local_4 = DAT_0066da94;
        piVar5 = &local_4;
      }
      else {
        piVar5 = &local_c;
      }
      if (*piVar5 == DAT_0066da94) {
        pwVar3 = L"???";
      }
      else {
        pwVar3 = *(wchar_t **)(*piVar5 + 0x10);
      }
      wcscat(&DAT_0066fc60,pwVar3);
      if ((char)puVar1[2] != '\0') {
        FUN_004347e0(DAT_0067eca8,0x3e5,&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
      }
      if (iVar6 == 0) {
        FUN_004347e0(DAT_0067eca8,0x3dd,&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
      }
      uVar8 = 0;
      uVar7 = param_1;
      sVar4 = wcslen(&DAT_0066fc60);
      FUN_0057e2c0(&DAT_0066fc60,sVar4,uVar7,uVar8);
      iVar6 = iVar6 + 1;
      iVar2 = param_2;
    } while (iVar6 < param_2);
  }
  return iVar2;
}

