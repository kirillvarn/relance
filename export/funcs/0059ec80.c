
undefined1 __thiscall FUN_0059ec80(int param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  IFileSystem *unaff_EBX;
  char **ppcVar7;
  char *local_54;
  ulong local_50;
  undefined4 uStack_48;
  char *pcStack_44;
  char *apcStack_40 [5];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c4e98;
  pvStack_c = ExceptionList;
  local_54 = param_2;
  ExceptionList = &pvStack_c;
  local_50 = DACOM_CRC::GetCRC32(param_2);
  iStack_4 = (**(code **)(**(int **)Engine_exref + 0x44))(*(int **)Engine_exref,&local_54);
  if (iStack_4 != -1) {
    cVar1 = FUN_00420d70(iStack_4);
    if (cVar1 != '\0') {
      CompoundInstanceAnalyze
                (*(long *)(param_1 + 4),(_func_void_long_void_ptr *)&LAB_0059ec60,
                 (void *)(param_1 + 0x14));
    }
    (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,iStack_4);
    uVar2 = FUN_00420d60();
    ExceptionList = pvStack_1c;
    return uVar2;
  }
  pcStack_44 = "FileSystem";
  iStack_4 = 0xffffffff;
  ppcVar7 = apcStack_40;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar7 = (char *)0x0;
    ppcVar7 = ppcVar7 + 1;
  }
  apcStack_40[2] = (char *)0x80000000;
  apcStack_40[3] = (char *)0x1;
  uStack_2c = 3;
  uStack_28 = 0x8000080;
  apcStack_40[1] = param_2;
  uStack_48 = 0x34;
  uStack_18 = 0xffffffff;
  pvStack_c = (void *)0x0;
  iVar5 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&uStack_48,&stack0xffffffa0)
  ;
  if (iVar5 == 0) {
    FUN_00420f30(param_2,pvStack_c);
    if ((char)puStack_8 == '\0') {
      bVar3 = Archetype::Load(unaff_EBX,&iStack_10,(int *)(param_1 + 0x10));
      if (bVar3) {
        cVar1 = FUN_00420d70(iStack_10);
        if (cVar1 != '\0') {
          CompoundInstanceAnalyze
                    (*(long *)(param_1 + 4),(_func_void_long_void_ptr *)&LAB_0059ec60,
                     (void *)(param_1 + 0x14));
        }
        (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,iStack_10);
      }
    }
    else {
      bVar3 = Archetype::Load(unaff_EBX,&iStack_10,(int *)(param_1 + 0x10));
      if (bVar3) {
        if (DAT_0067dcf8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (DAT_0067dcfc - DAT_0067dcf8) / 0xc;
        }
        iVar4 = 0;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            if (*(int *)(iVar6 + DAT_0067dcf8) == iStack_10) goto LAB_0059ee32;
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 0xc;
          } while (iVar4 < iVar5);
        }
        FUN_0059f5b0(DAT_0067dcfc,&stack0xffffffa0);
LAB_0059ee32:
        cVar1 = FUN_00420d70(iStack_10);
        if (cVar1 != '\0') {
          CompoundInstanceAnalyze
                    (*(long *)(param_1 + 4),(_func_void_long_void_ptr *)&LAB_0059ec60,
                     (void *)(param_1 + 0x14));
        }
      }
    }
  }
  uVar2 = FUN_00420d60();
  uStack_18 = 0xffffffff;
  if (unaff_EBX != (IFileSystem *)0x0) {
    (**(code **)(*(int *)unaff_EBX + 8))(unaff_EBX);
  }
  ExceptionList = pvStack_20;
  return uVar2;
}

