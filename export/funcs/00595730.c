
int __thiscall FUN_00595730(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  char local_18 [24];
  
  iVar1 = param_2;
  iVar3 = 0;
  local_1c = 0;
  local_18[0] = '\0';
  if (param_2 == 0) {
    local_1c = 0;
    local_18[0] = '\0';
  }
  else {
    local_1c = FUN_00417c50(local_18,0x18,param_2);
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x14)) {
    iVar2 = _stricmp((char *)(*(int *)(param_1 + 0x14) + 0x10),local_18);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      goto LAB_005957a6;
    }
  }
  FUN_004206c0(&param_2,&local_1c);
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_2;
LAB_005957a6:
  if ((iVar2 == *(int *)(param_1 + 4)) || (iVar3 = iVar2 + 0x28, iVar3 == 0)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
               "cmn\\shapedb.h",0xf2,iVar1);
  }
  return iVar3;
}

