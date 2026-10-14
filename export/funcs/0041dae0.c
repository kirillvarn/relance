
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041dae0(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_1c [28];
  
  iVar7 = 0;
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     ((uVar1 = *(uint *)(param_1 + 0x60), 1 < uVar1 || (*(int *)(param_1 + 0x28) == 0)))) {
    if (*(float *)(param_1 + 0x68) != _DAT_005c7474) {
      uVar4 = ftol();
      *(uint *)(param_1 + 100) = uVar4 % uVar1;
    }
    FUN_00420620(param_1 + 0x28,param_1 + 0x70,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_004205c0(param_1 + 0x2c);
    iVar2 = param_2;
    cVar3 = FUN_00420690(local_1c);
    if (cVar3 == '\0') {
      piVar5 = (int *)FUN_004206c0(&param_2,local_1c);
      iVar6 = *piVar5;
      *(int *)(iVar2 + 0x14) = iVar6;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x14);
    }
    if ((iVar6 == *(int *)(iVar2 + 4)) || (iVar7 = iVar6 + 0x28, iVar7 == 0)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\ShapeDB.h",0xf2,param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x24) = iVar7;
    if (iVar7 == 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: missing cursor shape (%s)\n",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\mouse.cpp",0x430,param_1 + 0x2c);
    }
  }
  if (*(float *)(param_1 + 0x5c) != _DAT_005c7474) {
    *(float *)(param_1 + 0x58) = param_3 * *(float *)(param_1 + 0x5c);
  }
  return;
}

