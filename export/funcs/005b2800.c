
void FUN_005b2800(void)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_104 [260];
  
  bVar2 = GetUserLocalDataPath(local_104);
  if (bVar2) {
    iVar4 = -1;
    pcVar5 = local_104;
    do {
      pcVar6 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar6 + -1) = s__FLSpew_txt_005e6d24._0_4_;
    *(undefined4 *)(pcVar6 + 3) = s__FLSpew_txt_005e6d24._4_4_;
    *(undefined4 *)(pcVar6 + 7) = s__FLSpew_txt_005e6d24._8_4_;
    pvVar3 = ErrorHandler::new_log(local_104,-1,7,false,false);
    if (pvVar3 != (void *)0x0) {
      (*(code *)PTR_FUN_0061641c)(0xfde9,0,local_104,0xffffffff,&DAT_0067de50,0x104);
    }
  }
  return;
}

