
int FUN_0041aa50(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  char local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  undefined4 local_40;
  char *local_3c;
  int *local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b89f8;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && ((char)*param_1 != '\0')) {
    ExceptionList = &local_c;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    FUN_0041acf0(piVar1);
    FUN_0041b380(local_60,local_58);
    FUN_0046d660(local_60,local_5c);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    iVar6 = local_68 + 0xc;
    if (local_64 == '\0') {
      *(int *)(local_68 + 0x20) = *(int *)(local_68 + 0x20) + 1;
    }
    else {
      local_3c = "FileSystem";
      ppiVar7 = local_38;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar7 = (int *)0x0;
        ppiVar7 = ppiVar7 + 1;
      }
      local_38[2] = (int *)0x80000000;
      local_38[3] = (int *)0x1;
      local_24 = 3;
      local_20 = 0x8000080;
      local_38[1] = piVar1;
      local_40 = 0x34;
      local_10 = 0xffffffff;
      param_1 = (int *)0x0;
      local_4 = 0;
      iVar5 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&local_40,&param_1);
      piVar2 = param_1;
      if (iVar5 < 0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: DATA: MaterialLib::Load(%s) couldn\'t load file.",
                   "E:\\FL\\Scratch\\Source\\Client\\cmn\\MaterialLib.cpp",0x10a,piVar1);
      }
      else {
        cVar3 = FUN_0041ad30(param_1,param_3);
        piVar1 = *(int **)MaterialLib_exref;
        iVar5 = -1;
        if (piVar1 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar1 + 0x20))(piVar1,piVar2,local_68 + 0x14);
        }
        if (*(int **)MatAnimLibrary_exref != (int *)0x0) {
          uVar4 = (**(code **)(**(int **)MatAnimLibrary_exref + 0xc))(piVar2);
          *(undefined4 *)(local_68 + 0x1c) = uVar4;
        }
        if (*(int **)VMeshLibrary_exref != (int *)0x0) {
          uVar4 = (**(code **)(**(int **)VMeshLibrary_exref + 0xc))(piVar2,0xffffffff);
          *(undefined4 *)(local_68 + 0x18) = uVar4;
        }
        if ((((cVar3 == '\0') && (iVar5 < 0)) && (*(int *)(local_68 + 0x18) == 0)) &&
           (*(int *)(local_68 + 0x1c) == 0)) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
          FUN_0041ba10(&uStack_70,iVar6);
          iVar6 = 0;
          param_3 = 0;
          FUN_0041bde0(uStack_70,uStack_6c,&param_3);
          FUN_0041b590(auStack_74,uStack_70,uStack_6c);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
        }
      }
      local_4 = 0xffffffff;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if (iVar6 != 0) {
      if ((param_2 != '\0') && (*(int *)(iVar6 + 8) != -1)) {
        (**(code **)(**(int **)MaterialLib_exref + 0x2c))
                  (*(int **)MaterialLib_exref,*(int *)(iVar6 + 8),0,0x3f800000);
        (**(code **)(**(int **)MaterialLib_exref + 0x30))
                  (*(int **)MaterialLib_exref,*(undefined4 *)(iVar6 + 8),0);
      }
      ExceptionList = local_c;
      return iVar6;
    }
  }
  ExceptionList = local_c;
  return 0;
}

