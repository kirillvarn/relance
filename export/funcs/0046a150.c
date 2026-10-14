
void FUN_0046a150(RenderDisplayList *param_1,char *param_2,RenderDisplayList *param_3)

{
  undefined4 *puVar1;
  RenderDisplayList *pRVar2;
  int iVar3;
  bool bVar4;
  clock_t cVar5;
  RenderDisplayList *pRVar6;
  code *local_4;
  
  if (param_1 == (RenderDisplayList *)DAT_0066da34) {
    if (DAT_0066da84 != 0) {
      FUN_00463630(param_2,param_3);
      return;
    }
  }
  else {
    if ((DAT_0066d44c & 1) == 0) {
      DAT_0066d44c = DAT_0066d44c | 1;
      RenderDisplayList::RenderDisplayList((RenderDisplayList *)&DAT_0066d440);
      FUN_005b7e6c(&LAB_00468bf0);
    }
    iVar3 = DAT_0066da60;
    if (DAT_0066da60 == 0) {
      pRVar6 = (RenderDisplayList *)&DAT_0066d440;
    }
    else {
      if (*(int *)(DAT_0066da60 + 0x14) == 0) {
        FUN_0046a300();
      }
      pRVar6 = *(RenderDisplayList **)(**(int **)(iVar3 + 0x10) + 8);
      param_1 = pRVar6;
      FUN_0046bb50();
      *(undefined4 *)(pRVar6 + 0xc) = 0;
      cVar5 = clock();
      *(int *)(param_1 + 0xc) = (cVar5 / 1000) * 1000;
      FUN_0046c5f0();
      FUN_005556b0(&param_1);
      pRVar6 = param_1;
    }
    local_4 = _vftable__exref;
    bVar4 = BinaryRDLReader::read_buffer((BinaryRDLReader *)&local_4,pRVar6,param_2,(uint)param_3);
    iVar3 = DAT_0066da60;
    if (!bVar4) {
      if (DAT_0066da60 != 0) {
        for (puVar1 = (undefined4 *)**(undefined4 **)(DAT_0066da60 + 4);
            puVar1 != *(undefined4 **)(DAT_0066da60 + 4); puVar1 = (undefined4 *)*puVar1) {
          pRVar2 = (RenderDisplayList *)puVar1[2];
          param_3 = pRVar2;
          if (pRVar2 == pRVar6) {
            FUN_0046bb50();
            *(undefined4 *)(pRVar2 + 0xc) = 0;
            FUN_005947a0(&param_2,*(undefined4 *)(iVar3 + 0x10),&param_3);
            FUN_00516f70(&param_2,puVar1);
            break;
          }
        }
      }
      (**(code **)FDUMP_exref)
                (0x100003,"%s(%d) : NOTICE:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Chat.cpp",0x1249,
                 "Failed to decode a chat message!\n");
      return;
    }
    if (DAT_0066da60 != 0) {
      FUN_004686e0();
      FUN_004684e0();
    }
  }
  return;
}

