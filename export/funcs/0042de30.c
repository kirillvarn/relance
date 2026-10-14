
/* WARNING: Removing unreachable block (ram,0x0042e020) */
/* WARNING: Removing unreachable block (ram,0x0042e035) */
/* WARNING: Removing unreachable block (ram,0x0042e044) */
/* WARNING: Removing unreachable block (ram,0x0042e04d) */
/* WARNING: Removing unreachable block (ram,0x0042e050) */

undefined4 __thiscall FUN_0042de30(int param_1,INI_Reader *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  INI_Reader *this;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  this = param_2;
  bVar3 = INI_Reader::is_value(param_2,"effect_crc");
  if (bVar3) {
    iVar4 = INI_Reader::get_value_int(this,0);
    *(int *)(param_1 + 4) = iVar4;
    return 1;
  }
  bVar3 = INI_Reader::is_value(this,"has_alpha");
  if (bVar3) {
    bVar1 = *(byte *)(param_1 + 0x1c);
    bVar3 = INI_Reader::get_value_bool(this,0);
    *(byte *)(param_1 + 0x1c) = (bVar3 ^ bVar1) & 1 ^ bVar1;
    return 1;
  }
  bVar3 = INI_Reader::is_value(this,"alchemy");
  if (bVar3) {
    pcVar5 = INI_Reader::get_value_string(this);
    CacheString::clear((CacheString *)&param_2);
    pcVar5 = StringAlloc(pcVar5,true);
    *(char **)(param_1 + 8) = pcVar5;
    return 1;
  }
  bVar3 = INI_Reader::is_value(this,"textures");
  if (!bVar3) {
    return 0;
  }
  pcVar5 = INI_Reader::get_value_string(this);
  CacheString::clear((CacheString *)&param_2);
  param_2 = (INI_Reader *)StringAlloc(pcVar5,true);
  puVar9 = *(undefined4 **)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x18) - (int)puVar9 >> 2 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if ((iVar4 == 0) || (uVar8 = (int)puVar9 - iVar4 >> 2, uVar8 < 2)) {
      uVar8 = 1;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)puVar9 - iVar4 >> 2;
    }
    iVar4 = iVar4 + uVar8;
    iVar6 = iVar4;
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    pvVar7 = operator_new(iVar6 * 4);
    iVar6 = FUN_0042f0b0(*(undefined4 *)(param_1 + 0x10),puVar9,pvVar7);
    FUN_004304b0(iVar6,&param_2);
    FUN_0042f0b0(puVar9,*(undefined4 *)(param_1 + 0x14),iVar6 + 4);
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(param_1 + 0xc),*(uchar **)(param_1 + 0x10),
               *(ulong *)(param_1 + 0x14));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
    *(void **)(param_1 + 0x18) = (void *)((int)pvVar7 + iVar4 * 4);
    iVar4 = FUN_005ad970();
    *(void **)(param_1 + 0x10) = pvVar7;
    *(int *)(param_1 + 0x14) = (int)pvVar7 + iVar4 * 4 + 4;
    return 1;
  }
  FUN_0042f0b0(puVar9,puVar9,puVar9 + 1);
  FUN_0042fdf0(*(int *)(param_1 + 0x14),1 - (*(int *)(param_1 + 0x14) - (int)puVar9 >> 2),&param_2);
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar9 == puVar2) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    return 1;
  }
  do {
    *puVar9 = param_2;
    puVar9 = puVar9 + 1;
  } while (puVar9 != puVar2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  return 1;
}

