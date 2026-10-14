
bool __thiscall FUN_00420dd0(int param_1,int param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  IFileSystem *unaff_ESI;
  int *piVar5;
  undefined4 local_44;
  undefined4 local_40;
  char *local_3c;
  int local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b8b18;
  pvStack_c = ExceptionList;
  bVar2 = false;
  local_44 = 0;
  local_3c = "FileSystem";
  piVar5 = local_38;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_4 = 0;
  local_38[2] = 0x80000000;
  local_38[3] = 1;
  local_24 = 3;
  local_20 = 0x8000080;
  local_38[1] = param_2;
  local_40 = 0x34;
  local_10 = 0xffffffff;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&local_40,&local_44);
  if (iVar4 == 0) {
    if (param_2 != 0) {
      uVar3 = FUN_0041aa50(param_2,1,0xffffffff);
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
    if (local_4 != 0) {
      uVar3 = FUN_0041aa50(local_4,1,0xffffffff);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    bVar2 = Archetype::Load(unaff_ESI,(long *)&puStack_8,(int *)0x0);
    puVar1 = puStack_8;
    if (bVar2) {
      if (*(int *)(param_1 + 4) != -1) {
        (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*(int *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        FUN_0041b030(param_1 + 8);
        FUN_0041b030(param_1 + 0xc);
      }
      uVar3 = (**(code **)(**(int **)Engine_exref + 0x5c))(*(int **)Engine_exref,puVar1,0);
      *(undefined4 *)(param_1 + 4) = uVar3;
      (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,uStack_14);
    }
  }
  local_10 = 0xffffffff;
  if (unaff_ESI != (IFileSystem *)0x0) {
    (**(code **)(*(int *)unaff_ESI + 8))(unaff_ESI);
  }
  ExceptionList = pvStack_18;
  return bVar2;
}

