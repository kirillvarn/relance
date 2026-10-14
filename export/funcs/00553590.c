
void FUN_00553590(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)FUN_00430ab0(param_1);
  if (piVar3 == (int *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Voice %u is invalid\n",
               "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x2d1,param_1);
    return;
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0x14))(param_2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
    iVar2 = DAT_00679880;
    piVar3 = *(int **)(DAT_00679880 + 4);
    puVar1 = (undefined4 *)(DAT_00679880 + 4);
    piVar4 = operator_new(0x10);
    *piVar4 = iVar2;
    if (piVar3 == (int *)0x0) {
      piVar3 = piVar4;
    }
    piVar4[1] = (int)piVar3;
    *puVar1 = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (piVar4 + 2 != (int *)0x0) {
      piVar4[2] = param_1;
      piVar4[3] = param_1;
    }
    DAT_00679884 = DAT_00679884 + 1;
    return;
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: Voice message %u is invalid for voice %u\n",
             "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x2cc,param_2,param_1);
  return;
}

