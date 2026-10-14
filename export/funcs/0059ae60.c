
void __fastcall FUN_0059ae60(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4ce6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e5804;
  piVar2 = param_1 + 0x23;
  local_4 = 3;
  if (param_1[0x23] != 0) {
    FUN_004c9a30();
    iVar5 = 4;
    do {
      FUN_00420f70();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (*piVar2 != 0) {
      (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*piVar2);
      *piVar2 = 0;
    }
  }
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0xc9) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xc9));
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*piVar2 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,*piVar2);
    piVar4 = param_1 + 0xb8;
    puVar3 = param_1 + 0x34;
    iVar5 = 4;
    do {
      if (*piVar4 != -1) {
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        *piVar4 = -1;
      }
      piVar4 = piVar4 + 1;
      puVar3 = puVar3 + 0x21;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 4;
  do {
    FUN_00420f70();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*piVar2 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*piVar2);
    *piVar2 = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005b7ec6(param_1 + 0x24,0x10,4,FUN_00420d10);
  iVar5 = param_1[0x20];
  if (iVar5 != 0) {
    cVar1 = *(char *)(iVar5 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar5 + -1));
    }
    else {
      *(char *)(iVar5 + -1) = cVar1 + -1;
    }
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar2 = (int *)param_1[3];
  local_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar2 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

