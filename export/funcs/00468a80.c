
undefined * FUN_00468a80(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  clock_t cVar5;
  int *piVar6;
  int iVar7;
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if ((DAT_0066d44c & 1) == 0) {
    DAT_0066d44c = DAT_0066d44c | 1;
    RenderDisplayList::RenderDisplayList((RenderDisplayList *)&DAT_0066d440);
    FUN_005b7e6c(&LAB_00468bf0);
  }
  iVar3 = DAT_0066da60;
  if (DAT_0066da60 != 0) {
    if ((*(int *)(DAT_0066da60 + 0x14) == 0) && (*(int *)(DAT_0066da60 + 8) != 0)) {
      iVar1 = *(int *)(**(int **)(DAT_0066da60 + 4) + 8);
      local_18 = iVar1;
      FUN_0046bb50();
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_005556b0(&local_18);
      puVar4 = (undefined4 *)FUN_0053e430(local_10);
      FUN_00516f70(local_c,*puVar4);
      FUN_004686e0();
      FUN_004684e0();
    }
    puVar2 = *(undefined **)(**(int **)(iVar3 + 0x10) + 8);
    local_1c = puVar2;
    FUN_0046c860(local_8,**(undefined4 **)(puVar2 + 4),*(undefined4 **)(puVar2 + 4));
    *(undefined4 *)(puVar2 + 0xc) = 0;
    cVar5 = clock();
    *(int *)(local_1c + 0xc) = (cVar5 / 1000) * 1000;
    local_14 = **(undefined4 **)(iVar3 + 0x10);
    piVar6 = (int *)FUN_0053ab20(local_4,0);
    piVar6 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_005b7e1d(piVar6);
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
    iVar1 = *(int *)(iVar3 + 4);
    iVar7 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_005999b0(iVar7 + 8,&local_1c);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    return local_1c;
  }
  return &DAT_0066d440;
}

