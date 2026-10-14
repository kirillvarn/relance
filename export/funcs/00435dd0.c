
void FUN_00435dd0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar8 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x38);
  }
  local_40 = 0;
  if (param_3 != (undefined4 *)0x0) {
    local_40 = *param_3;
  }
  FUN_0043ad50(uVar2);
  iVar3 = FUN_00437020(param_4);
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), iVar3 != 0)) {
    puVar4 = (undefined4 *)FUN_00456540(param_2,0);
    if (puVar4 != (undefined4 *)0x0) {
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      FUN_004215b0();
      if (0 < *(int *)(iVar3 + 0x21c)) {
        puVar7 = (undefined4 *)(iVar3 + 0x19c);
        do {
          pcVar1 = (char *)puVar7[-0x20];
          if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
            FUN_00454eb0(pcVar1,*puVar7,&local_30,0);
          }
          iVar8 = iVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar8 < *(int *)(iVar3 + 0x21c));
      }
      FUN_00454f30(*(undefined4 *)(iVar3 + 0x220),*(undefined4 *)(iVar3 + 0x224),
                   *(undefined4 *)(iVar3 + 0x228),iVar3 + 0x22c,iVar3 + 0x244);
      if (*(char *)(iVar3 + 0x14) == '\0') {
        iVar8 = 0;
        param_3 = (undefined4 *)0x2;
        if (0 < *(int *)(iVar3 + 0x118)) {
          puVar7 = (undefined4 *)(iVar3 + 0x98);
          do {
            uVar2 = *puVar7;
            uVar5 = FUN_00449c90(puVar7[-0x20]);
            FUN_00453a40(uVar5,uVar2);
            iVar8 = iVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar8 < *(int *)(iVar3 + 0x118));
        }
      }
      else {
        param_3 = (undefined4 *)0x1;
        FUN_00453a40(param_1,0);
      }
      *puVar4 = param_3;
      *(undefined1 *)((int)puVar4 + 6) = 1;
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(iVar3 + 8);
      FUN_00454e80(local_40);
      puVar4[4] = 0;
      puVar4[6] = param_5;
      puVar4[8] = 0;
      *(undefined1 *)((int)puVar4 + 10) = 1;
      *(undefined1 *)((int)puVar4 + 0xb) = 1;
      puVar4[7] = param_6;
      puVar4[10] = *(undefined4 *)(iVar3 + 0xc);
      *(undefined1 *)((int)puVar4 + 0x15) = *(undefined1 *)(iVar3 + 10);
      puVar4[9] = *(undefined4 *)(iVar3 + 0x25c);
      iVar8 = *(int *)(param_1 + 0x300);
      uVar6 = 0;
      if (((iVar8 == 2) || (iVar8 == 3)) || (iVar8 == 4)) {
        uVar6 = 1;
      }
      *(undefined1 *)((int)puVar4 + 0x16) = uVar6;
      FUN_00454f80();
    }
  }
  return;
}

