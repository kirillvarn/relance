
void FUN_004247c0(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28 [9];
  undefined1 local_3;
  
  uVar1 = DAT_006679f4;
  if (DAT_006679f9 == '\0') {
    DAT_006679f9 = 1;
    FUN_00424870(DAT_006679f4,0,10,10);
    if ((*(int *)Pipeline_exref != 0) && (param_1 != '\0')) {
      if ((DAT_00679bc8 != 0) && ((DAT_00679bcc != 0 && (DAT_00679be5 != '\0')))) {
        puVar3 = &DAT_00679bc0;
        puVar4 = local_28;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_3 = 0;
        FUN_00424ce0(uVar1,local_28);
      }
      (**(code **)(**(int **)VertexBuffer_exref + 0x10))(*(int **)VertexBuffer_exref);
      (**(code **)(**(int **)Pipeline_exref + 0x38))(*(int **)Pipeline_exref);
    }
  }
  DAT_006679f9 = 0;
  return;
}

