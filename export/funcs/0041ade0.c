
int FUN_0041ade0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_4;
  
  local_4 = 0;
  cVar3 = FUN_0041a9a0(param_2,&local_4);
  iVar2 = local_4;
  uVar5 = param_1;
  if (cVar3 != '\0') {
    cVar3 = FUN_0041ad30(param_1,param_4);
    piVar1 = *(int **)MaterialLib_exref;
    iVar8 = -1;
    if (piVar1 != (int *)0x0) {
      iVar8 = (**(code **)(*piVar1 + 0x20))(piVar1,uVar5,iVar2 + 8);
    }
    if (*(int **)MatAnimLibrary_exref != (int *)0x0) {
      uVar4 = (**(code **)(**(int **)MatAnimLibrary_exref + 0xc))(uVar5);
      *(undefined4 *)(iVar2 + 0x10) = uVar4;
    }
    if (*(int **)VMeshLibrary_exref != (int *)0x0) {
      uVar5 = (**(code **)(**(int **)VMeshLibrary_exref + 0xc))(uVar5,0xffffffff);
      *(undefined4 *)(iVar2 + 0xc) = uVar5;
    }
    if ((((cVar3 == '\0') && (iVar8 < 0)) && (*(int *)(iVar2 + 0xc) == 0)) &&
       (*(int *)(iVar2 + 0x10) == 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
      puVar6 = (undefined4 *)FUN_0041bd40(&param_2,iVar2);
      puVar7 = (undefined4 *)FUN_0041bd10(&param_4,iVar2);
      uVar5 = *puVar7;
      uVar4 = *puVar6;
      param_3 = 0;
      FUN_0041bde0(uVar5,uVar4,&param_3,0);
      FUN_0041b590(&param_1,uVar5,uVar4);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
      return 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  if (((char)param_3 != '\0') && (*(int *)(iVar2 + 8) != -1)) {
    (**(code **)(**(int **)MaterialLib_exref + 0x2c))
              (*(int **)MaterialLib_exref,*(int *)(iVar2 + 8),0,0x3f800000);
    (**(code **)(**(int **)MaterialLib_exref + 0x30))
              (*(int **)MaterialLib_exref,*(undefined4 *)(iVar2 + 8),0);
  }
  return iVar2;
}

