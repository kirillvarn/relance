
undefined4 __thiscall FUN_004291c0(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *unaff_retaddr;
  
  cVar2 = (**(code **)(*param_1 + 0x14))(param_1);
  if (cVar2 != '\0') {
    if (unaff_retaddr[1] == *(int *)(param_1[6] + 4)) {
      (**(code **)(*param_1 + 100))(param_2);
      return 1;
    }
    (**(code **)(*param_1 + 0x60))();
    uVar3 = (**(code **)(*unaff_retaddr + 4))();
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: attempted to re-play active sound (%s)",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\Sound.cpp",0x557,uVar3);
  }
  if (unaff_retaddr != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*unaff_retaddr + 0x30))();
    param_1[6] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar4 + 8))();
      bVar1 = *(byte *)(param_1 + 3);
      param_1[1] = iVar5;
      param_1[5] = param_2;
      *(byte *)(param_1 + 3) = bVar1 & 0xe7;
      if ((bVar1 & 4) == 0) {
        (**(code **)(*param_1 + 4))(param_1);
        iVar5 = DAT_00667c70;
        iVar6 = FUN_0042a7e0(DAT_00667c70,*(undefined4 *)(DAT_00667c70 + 4));
        *(int *)(iVar5 + 4) = iVar6;
        **(int **)(iVar6 + 4) = iVar6;
        FUN_005999b0(iVar6 + 8,&stack0x00000000);
        DAT_00667c74 = DAT_00667c74 + 1;
        unaff_retaddr[0xb] = *(int *)(DAT_00667c70 + 4);
        return 1;
      }
      if (*(int *)Sound_exref != 0) {
        cVar2 = (**(code **)(*(int *)param_1[6] + 0xc))();
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 4))(param_1);
          iVar5 = DAT_00667c70;
          iVar6 = FUN_0042a7e0(DAT_00667c70,*(undefined4 *)(DAT_00667c70 + 4));
          *(int *)(iVar5 + 4) = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          FUN_005999b0(iVar6 + 8,&stack0x00000000);
          DAT_00667c74 = DAT_00667c74 + 1;
          unaff_retaddr[0xb] = *(int *)(DAT_00667c70 + 4);
          return 1;
        }
      }
    }
  }
  return 0;
}

