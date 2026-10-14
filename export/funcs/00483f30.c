
void FUN_00483f30(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ISystem *pIVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
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
  
  iVar2 = FUN_0059da10("NN_Dealer");
  if (iVar2 != 0) {
    uVar3 = FUN_004c4830();
    pIVar4 = Universe::get_system(uVar3);
    if (pIVar4 != (ISystem *)0x0) {
      piVar5 = (int *)FUN_004c4900();
      iVar6 = *piVar5;
      local_118 = 0;
      local_114 = 0;
      local_bc = 0;
      local_b8[0] = '\0';
      local_8c = 0;
      local_88 = 0;
      local_48 = 0;
      local_44 = 0;
      uVar3 = (**(code **)(*(int *)pIVar4 + 0x3c))();
      uVar8 = 0;
      if (uVar3 != 0) {
        while ((cVar1 = (**(code **)(*(int *)pIVar4 + 0x40))(uVar8,&local_118), cVar1 == '\0' ||
               (iStack_98 != iVar6))) {
          uVar8 = uVar8 + 1;
          if (uVar3 <= uVar8) {
            return;
          }
        }
        FUN_004c4670();
        uVar3 = 0xffffffff;
        pcVar7 = local_b8;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uStack_12c = ~uVar3 - 1;
        acStack_128[0] = '\0';
        if (0xf < uStack_12c) {
          uStack_12c = 0xf;
        }
        pcVar7 = local_b8;
        pcVar9 = acStack_128;
        for (uVar3 = uStack_12c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar3 = uStack_12c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        acStack_128[uStack_12c] = '\0';
        uVar3 = Reputation::get_id((TString<16> *)&uStack_12c);
        if ((uVar3 != 0xffffffff) && (iVar6 = 0, 0 < param_1)) {
          while (*param_2 != uVar3) {
            param_2 = param_2 + 2;
            iVar6 = iVar6 + 1;
            if (param_1 <= iVar6) {
              return;
            }
          }
          *(uint *)(iVar2 + 0x990) = param_2[1];
        }
      }
    }
  }
  return;
}

