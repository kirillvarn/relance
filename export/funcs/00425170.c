
int FUN_00425170(void)

{
  bool bVar1;
  int iVar2;
  int *unaff_EDI;
  undefined4 local_298;
  char local_294 [116];
  undefined1 auStack_220 [12];
  char local_214 [260];
  char local_110 [248];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005b8b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = GetScreenShotPath(local_110);
  if (bVar1) {
    do {
      DAT_006679fc = DAT_006679fc + 1;
      sprintf(local_294,"screen%d",DAT_006679fc);
      _makepath(local_214,(char *)0x0,local_110,local_294,"BMP");
      iVar2 = _access(local_214,0);
    } while (iVar2 != -1);
    local_298 = 0;
    local_4 = 0;
    iVar2 = (**(code **)**(undefined4 **)Pipeline_exref)
                      (*(undefined4 **)Pipeline_exref,"1.11_IRPTexture",&local_298);
    if (iVar2 == 0) {
      (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,0,auStack_220);
    }
    iVar2 = DAT_006679fc;
    uStack_10 = 0xffffffff;
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    ExceptionList = pvStack_18;
    return iVar2;
  }
  ExceptionList = local_c;
  return -1;
}

