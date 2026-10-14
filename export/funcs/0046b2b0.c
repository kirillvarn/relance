
void FUN_0046b2b0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  bVar4 = SinglePlayer();
  iVar6 = DAT_0066da84;
  if (!bVar4) {
    if (DAT_0066da84 != 0) {
      uVar2 = *(undefined4 *)(DAT_0066da84 + 0x344);
      puVar5 = (undefined4 *)FUN_0053e430(&local_8);
      FUN_0046d380(&local_c,*puVar5,uVar2);
      FUN_004a2f80(&local_8,**(undefined4 **)(iVar6 + 0x358),*(undefined4 **)(iVar6 + 0x358));
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
    iVar6 = DAT_0066da60;
    if (DAT_0066da60 != 0) {
      piVar7 = (int *)**(int **)(DAT_0066da60 + 4);
      piVar1 = (int *)(DAT_0066da60 + 4);
      local_8 = DAT_0066da60;
      if (piVar7 != *(int **)(DAT_0066da60 + 4)) {
        do {
          iVar3 = piVar7[2];
          local_c = iVar3;
          FUN_0046bb50();
          *(undefined4 *)(iVar3 + 0xc) = 0;
          FUN_005947a0(local_4,*(undefined4 *)(iVar6 + 0x10),&local_c);
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)*piVar1);
      }
      iVar6 = *piVar1;
      puVar5 = (undefined4 *)FUN_0053e430(local_4);
      FUN_004a2f80(&local_8,*puVar5,iVar6);
      FUN_004686e0();
      FUN_004684e0();
    }
    local_8 = DAT_0066da40;
    DAT_0066d3fc = DAT_0066da40;
    iVar6 = FUN_0059da10(&DAT_005cf04c);
    if (iVar6 != 0) {
      FUN_0045eaf0(&local_8);
      FUN_0057d330();
    }
  }
  return;
}

