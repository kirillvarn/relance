
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042b5e0(int *param_1,int *param_2)

{
  float10 fVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined ***pppuVar9;
  uint uVar10;
  float10 fVar11;
  undefined4 uStack_40;
  char *pcStack_3c;
  undefined **appuStack_38 [5];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8cc8;
  local_c = ExceptionList;
  iVar8 = -1;
  if (*(int *)Sound_exref == 0) {
    return -1;
  }
  if (*(int *)Data_exref == 0) {
    return -1;
  }
  ExceptionList = &local_c;
  uVar5 = (**(code **)(*param_1 + 4))();
  param_1 = (int *)0x0;
  uStack_4 = 0;
  pcStack_3c = "FileSystem";
  pppuVar9 = appuStack_38;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pppuVar9 = (undefined **)0x0;
    pppuVar9 = pppuVar9 + 1;
  }
  appuStack_38[2] = (undefined **)0x80000000;
  appuStack_38[3] = (undefined **)0x1;
  uStack_24 = 3;
  uStack_20 = 0x8000080;
  uStack_40 = 0x34;
  uStack_10 = 0xffffffff;
  if (param_2 == (int *)0x0) {
    appuStack_38[0] = &PTR_LAB_005ca5fc;
    piVar6 = *(int **)Data_exref;
  }
  else {
    appuStack_38[0] = (undefined **)&DAT_005c944c;
    piVar6 = param_2;
  }
  appuStack_38[1] = (undefined **)uVar5;
  iVar7 = (**(code **)(*piVar6 + 0xc))(piVar6,&uStack_40,&param_1);
  if (iVar7 == 0) {
    fVar11 = (float10)FUN_005b3510(4);
    fVar1 = (float10)_DAT_005c75dc;
    cVar4 = (**(code **)(*piVar3 + 0x28))();
    if ((cVar4 != '\0') || (uVar10 = 9, fVar11 < fVar1)) {
      uVar10 = 0x11;
    }
    iVar8 = FUN_005792b0(0x2d);
    if ((iVar8 == 0) || (iVar8 = FUN_005792b0(0x34), iVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    cVar4 = (**(code **)(*piVar3 + 0x34))();
    if ((cVar4 != '\0') && (bVar2)) {
      uVar10 = uVar10 | 2;
    }
    iVar8 = (**(code **)(**(int **)Sound_exref + 0x84))(*(int **)Sound_exref,puStack_8,uVar10);
    if (iVar8 != -1) goto LAB_0042b75d;
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Sound filename \"%s\" not found.\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x227,uVar5);
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: Failed to create archetype for sound filename \"%s\"\n"
             ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x22b,uVar5);
LAB_0042b75d:
  uStack_4 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  ExceptionList = local_c;
  return iVar8;
}

