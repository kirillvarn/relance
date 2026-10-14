
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00512be0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_1c;
  undefined1 local_18;
  
  *(uint *)(param_1 + 0x6c) = param_2;
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 0xc) + 4);
  param_2 = (uint)*(byte *)(iVar1 + 0x56);
  iVar6 = 0;
  local_1c = 0;
  local_18 = 0;
  fVar2 = (float)*(byte *)(iVar1 + 0x55) * _DAT_005c7f68;
  *(float *)(param_1 + 0x70) = (float)*(byte *)(iVar1 + 0x54) * _DAT_005c7f68;
  fVar3 = (float)param_2 * _DAT_005c7f68;
  *(float *)(param_1 + 0x74) = fVar2;
  *(float *)(param_1 + 0x78) = fVar3;
  FUN_00427020(&DAT_005db700);
  cVar4 = FUN_00420690(&local_1c);
  if (cVar4 == '\0') {
    piVar5 = (int *)FUN_004206c0(&param_2,&local_1c);
    DAT_00674f38 = *piVar5;
  }
  if ((DAT_00674f38 == DAT_00674f28) || (iVar6 = DAT_00674f38 + 0x28, iVar6 == 0)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
               "cmn\\ShapeDB.h",0xf2,&DAT_005db700);
  }
  *(int *)(param_1 + 0x7c) = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00427020(&DAT_005db6f8);
  cVar4 = FUN_00420690(&local_1c);
  if (cVar4 == '\0') {
    piVar5 = (int *)FUN_004206c0(&param_2,&local_1c);
    DAT_00674f38 = *piVar5;
  }
  if ((DAT_00674f38 == DAT_00674f28) || (iVar6 = DAT_00674f38 + 0x28, iVar6 == 0)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
               "cmn\\ShapeDB.h",0xf2,&DAT_005db6f8);
  }
  *(int *)(param_1 + 0x80) = iVar6;
  if (iVar6 != 0) {
    FUN_004f7af0();
    return 1;
  }
  return 0;
}

