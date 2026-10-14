
uint FUN_0057da40(code *param_1,RenderDisplayList *param_2)

{
  HMODULE hModule;
  RenderDisplayList *pRVar1;
  bool bVar2;
  uint uVar3;
  HRSRC pHVar4;
  DWORD DVar5;
  HGLOBAL pvVar6;
  ushort *puVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = (uint)param_1;
  uVar3 = (uint)param_1 >> 0x10;
  uVar10 = (uint)param_1 & 0xffff;
  if ((DAT_0067c400 == 0) || ((uint)(DAT_0067c404 - DAT_0067c400 >> 2) <= uVar3)) {
    return ((uint)param_1 >> 0x18) << 8;
  }
  hModule = *(HMODULE *)(DAT_0067c400 + uVar3 * 4);
  if (hModule == (HMODULE)0x0) goto LAB_0057da7a;
  pHVar4 = FindResourceExA(hModule,(LPCSTR)0x17,(LPCSTR)((uint)param_1 & 0xffff),0);
  if (pHVar4 == (HRSRC)0x0) {
LAB_0057dac9:
    uVar9 = uVar9 & 0xf;
    pHVar4 = FindResourceExA(hModule,(LPCSTR)0x6,(LPCSTR)(uint)(ushort)((short)(uVar10 >> 4) + 1),0)
    ;
    uVar3 = 0;
    if (pHVar4 == (HRSRC)0x0) {
LAB_0057da7a:
      return uVar3 & 0xffffff00;
    }
    pvVar6 = LoadResource(hModule,pHVar4);
    uVar3 = 0;
    if (pvVar6 == (HGLOBAL)0x0) goto LAB_0057da7a;
    puVar7 = LockResource(pvVar6);
    uVar3 = 0;
    if (puVar7 == (ushort *)0x0) goto LAB_0057da7a;
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar7 = puVar7 + *puVar7 + 1;
    }
    uVar9 = (uint)*puVar7;
  }
  else {
    DVar5 = SizeofResource(hModule,pHVar4);
    pvVar6 = LoadResource(hModule,pHVar4);
    if ((pvVar6 == (HGLOBAL)0x0) || (puVar7 = LockResource(pvVar6), puVar7 == (ushort *)0x0))
    goto LAB_0057dac9;
    uVar9 = DVar5 >> 1;
    if (*puVar7 != 0xfeff) goto LAB_0057db16;
    uVar9 = uVar9 - 1;
  }
  puVar7 = puVar7 + 1;
LAB_0057db16:
  pRVar1 = param_2;
  param_1 = _vftable__exref;
  bVar2 = XMLReader::read_buffer((XMLReader *)&param_1,param_2,(char *)puVar7,uVar9 * 2);
  uVar8 = extraout_var;
  if (!bVar2) {
    FUN_0057db50(puVar7,uVar9,pRVar1,1);
    uVar8 = extraout_var_00;
  }
  return CONCAT31(uVar8,1);
}

