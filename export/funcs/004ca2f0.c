
void __fastcall FUN_004ca2f0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_4;
  
  pcVar5 = (char *)(param_1 + 0x538);
  local_4 = 7;
  puVar6 = (undefined4 *)(param_1 + 0x110);
  do {
    if (pcVar5 == (char *)0x94) {
      uRam00000090 = 0;
      uRam00000094 = 0;
    }
    else {
      uVar2 = 0xffffffff;
      pcVar7 = pcVar5 + -0x94;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2 - 1;
      if (0x7f < uVar2) {
        uVar2 = 0x7f;
      }
      pcVar7 = pcVar5 + -0x94;
      pcVar9 = pcVar5;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcVar5[uVar2] = '\0';
      *(uint *)(pcVar5 + -4) = uVar2;
    }
    *(undefined4 *)(pcVar5 + 0x8c) = *(undefined4 *)(pcVar5 + -8);
    *(undefined4 *)(pcVar5 + 0x80) = *(undefined4 *)(pcVar5 + -0x14);
    *(undefined4 *)(pcVar5 + 0x84) = *(undefined4 *)(pcVar5 + -0x10);
    *(undefined4 *)(pcVar5 + 0x88) = *(undefined4 *)(pcVar5 + -0xc);
    puVar8 = puVar6 + -6;
    puVar10 = puVar6;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar6[1] = pcVar5 + 0x80;
    *(char **)(pcVar5 + 0x84) = pcVar5;
    pcVar5 = pcVar5 + -0x94;
    local_4 = local_4 + -1;
    puVar6 = puVar6 + -6;
    if (local_4 == 0) {
      return;
    }
  } while( true );
}

