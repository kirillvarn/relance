
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00483df0(void)

{
  char cVar1;
  uint uVar2;
  ISystem *pIVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int local_138;
  uint uStack_134;
  float fStack_130;
  uint uStack_12c;
  char acStack_128 [16];
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_bc;
  char local_b8 [32];
  int iStack_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar2 = FUN_004c4830();
  pIVar3 = Universe::get_system(uVar2);
  if (pIVar3 != (ISystem *)0x0) {
    piVar4 = (int *)FUN_004c4900();
    local_138 = *piVar4;
    local_118 = 0;
    local_114 = 0;
    local_bc = 0;
    local_b8[0] = '\0';
    local_8c = 0;
    local_88 = 0;
    local_48 = 0;
    local_44 = 0;
    uStack_134 = (**(code **)(*(int *)pIVar3 + 0x3c))();
    if (uStack_134 != 0) {
      uVar2 = 0;
      do {
        cVar1 = (**(code **)(*(int *)pIVar3 + 0x40))(uVar2,&local_118);
        if ((cVar1 != '\0') && (iStack_98 == local_138)) {
          local_138 = FUN_004c4670();
          uVar2 = 0xffffffff;
          pcVar6 = local_b8;
          goto code_r0x00483eac;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uStack_134);
    }
  }
  goto LAB_00483e87;
  while( true ) {
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x00483eac:
    if (uVar2 == 0) break;
  }
  uStack_12c = ~uVar2 - 1;
  acStack_128[0] = '\0';
  if (0xf < uStack_12c) {
    uStack_12c = 0xf;
  }
  pcVar6 = local_b8;
  pcVar7 = acStack_128;
  for (uVar2 = uStack_12c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uStack_12c & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  acStack_128[uStack_12c] = '\0';
  uStack_134 = Reputation::get_id((TString<16> *)&uStack_12c);
  iVar5 = Reputation::Vibe::GetGroupFeelingsTowards(&local_138,&uStack_134,&fStack_130);
  if (iVar5 == 0) {
    return (float10)fStack_130;
  }
LAB_00483e87:
  return (float10)_DAT_005c75dc;
}

