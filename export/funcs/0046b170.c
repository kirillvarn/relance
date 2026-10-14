
void FUN_0046b170(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  bVar4 = SinglePlayer();
  iVar5 = DAT_0066da84;
  if (!bVar4) {
    if (DAT_0066da84 != 0) {
      FUN_0046d380(&local_8,**(undefined4 **)(DAT_0066da84 + 0x344),
                   *(undefined4 **)(DAT_0066da84 + 0x344));
      FUN_004a2f80(&local_8,**(undefined4 **)(iVar5 + 0x358),*(undefined4 **)(iVar5 + 0x358));
      FUN_00462e30();
    }
    if (DAT_0066da7c != 0) {
      FUN_0045fb40();
    }
    DAT_0066da88 = 0;
    if (DAT_0066da80 != 0) {
      *(byte *)(DAT_0066da80 + 0x6c) = *(byte *)(DAT_0066da80 + 0x6c) & 0xfc;
    }
    FUN_0046a3c0(0);
    iVar5 = DAT_0066da60;
    if (DAT_0066da60 != 0) {
      piVar6 = (int *)**(int **)(DAT_0066da60 + 4);
      piVar1 = (int *)(DAT_0066da60 + 4);
      local_8 = DAT_0066da60;
      if (piVar6 != *(int **)(DAT_0066da60 + 4)) {
        do {
          iVar2 = piVar6[2];
          local_c = iVar2;
          FUN_0046bb50();
          *(undefined4 *)(iVar2 + 0xc) = 0;
          FUN_005947a0(local_4,*(undefined4 *)(iVar5 + 0x10),&local_c);
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)*piVar1);
      }
      puVar3 = (undefined4 *)*piVar1;
      FUN_004a2f80(local_4,*puVar3,puVar3);
      FUN_004686e0();
      FUN_004684e0();
    }
    local_8 = DAT_0066da40;
    DAT_0066d3fc = DAT_0066da40;
    iVar5 = FUN_0059da10(&DAT_005cf04c);
    if (iVar5 != 0) {
      FUN_0045eaf0(&local_8);
      FUN_0057d330();
    }
  }
  return;
}

