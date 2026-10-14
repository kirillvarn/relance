
void __fastcall FUN_00568d10(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  CHARACTER_ID *pCVar4;
  undefined1 *puVar5;
  byte bVar6;
  uint uVar7;
  size_t _NumOfElements;
  int iVar8;
  uint uVar9;
  uint local_c;
  
  FUN_0058d4a0();
  _NumOfElements = 0;
  uVar7 = 1;
  for (puVar1 = DAT_0067e970; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    _NumOfElements = _NumOfElements + 1;
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x2b8) + 0x4a4);
  if (iVar8 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(*(int *)(param_1 + 0x2b8) + 0x4a8) - iVar8 >> 2;
  }
  FUN_00595d60(0,(float)(int)_NumOfElements);
  FUN_00595de0((float)(int)(local_c - 1));
  FUN_00595e10(0x3f800000);
  FUN_00595dd0();
  uVar3 = ftol();
  *(undefined4 *)(param_1 + 0x59c) = uVar3;
  bVar6 = *(byte *)(*(int *)(param_1 + 700) + 0x6c);
  if ((int)(local_c - 1) < (int)_NumOfElements) {
    bVar6 = bVar6 | 3;
  }
  else {
    bVar6 = bVar6 & 0xfc;
  }
  *(byte *)(*(int *)(param_1 + 700) + 0x6c) = bVar6;
  FUN_005b7e90();
  iVar8 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      pCVar4 = (CHARACTER_ID *)FUN_005aaca0(iVar8);
      *(CHARACTER_ID **)(&stack0xffffffe0 + iVar8 * 4) = pCVar4;
      operator==(pCVar4,(CHARACTER_ID *)(param_1 + 0x399));
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)_NumOfElements);
  }
  if (_NumOfElements == 0) {
    CHARACTER_ID::operator=((CHARACTER_ID *)(param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x390);
    if (*(char *)(iVar8 + 0x394 + param_1) == '\0') {
      qsort(&stack0xffffffe0,_NumOfElements,4,(_PtFuncCompare *)(&PTR_LAB_00614b84)[iVar8]);
    }
    else {
      qsort(&stack0xffffffe0,_NumOfElements,4,(_PtFuncCompare *)(&PTR_LAB_00614b98)[iVar8]);
    }
  }
  iVar8 = *(int *)(param_1 + 0x59c);
  while( true ) {
    if ((int)_NumOfElements <= iVar8) {
      for (; uVar7 < local_c; uVar7 = uVar7 + 1) {
        uVar9 = 0;
        while( true ) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x2b8) + 0x4b4);
          if ((iVar8 == 0) ||
             ((uint)(*(int *)(*(int *)(param_1 + 0x2b8) + 0x4b8) - iVar8 >> 2) <= uVar9)) break;
          FUN_0058cbf0(uVar7,uVar9);
          uVar9 = uVar9 + 1;
        }
        iVar8 = FUN_0058d0b0(uVar7);
        if ((iVar8 != 0) && (*(int *)(iVar8 + 8) != 0)) {
          FUN_00599980();
          *(undefined4 *)(iVar8 + 8) = 0;
        }
        iVar8 = FUN_0058d0b0(uVar7);
        *(undefined1 *)(iVar8 + 1) = 0;
        puVar5 = (undefined1 *)FUN_0058d0b0(uVar7);
        *puVar5 = 0;
      }
      return;
    }
    if (local_c <= uVar7) break;
    pCVar4 = *(CHARACTER_ID **)(&stack0xffffffe0 + iVar8 * 4);
    if (pCVar4 != (CHARACTER_ID *)0x0) {
      FUN_00569170(uVar7,pCVar4);
      bVar2 = operator==(pCVar4,(CHARACTER_ID *)(param_1 + 0x399));
      if (bVar2) {
        FUN_0058d4b0(uVar7);
      }
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 1;
  }
  return;
}

