
void FUN_00435cf0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  FUN_0043a460();
  iVar1 = FUN_0043a3d0(DAT_00668740);
  iVar5 = 0;
  while( true ) {
    iVar3 = *(int *)(iVar1 + 0x168);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x16c) - iVar3 >> 2;
    }
    if (iVar2 <= iVar5) break;
    puVar6 = *(undefined4 **)(iVar3 + iVar5 * 4);
    iVar3 = stricmp((char *)*puVar6,param_1);
    if (iVar3 == 0) {
      local_30 = puVar6[1];
      local_2c = puVar6[2];
      local_28 = puVar6[3];
      puVar6 = puVar6 + 4;
      puVar7 = local_24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      piVar4 = (int *)FUN_00449cd0();
      if (piVar4 != (int *)0x0) {
        iVar1 = piVar4[0xc];
        (**(code **)(**(int **)Deform_exref + 0x4c))(*(int **)Deform_exref,iVar1,&local_30);
        (**(code **)(**(int **)Deform_exref + 0x50))(*(int **)Deform_exref,iVar1,&local_30);
        (**(code **)(*piVar4 + 0xc))(unaff_EDI);
      }
      return;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}

