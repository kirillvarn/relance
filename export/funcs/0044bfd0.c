
undefined4 __thiscall
FUN_0044bfd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_100 [256];
  
  iVar3 = *(int *)(param_1 + 0x13a4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x13a4) = 1;
    if ((param_6 == '\0') || (cVar1 = FUN_0044bd50("Camera_Track_1"), cVar1 == '\0')) {
      uVar2 = FUN_0044ba60("Camera_Track_1",param_3,param_4,param_5);
      return uVar2;
    }
  }
  else {
    if ((char)param_2 == '\0') {
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x13a4) = iVar3;
      if (iVar3 == 0) {
        while( true ) {
          iVar3 = *(int *)(param_1 + 0x13a4) + 1;
          *(int *)(param_1 + 0x13a4) = iVar3;
          sprintf(local_100,"Camera_Track_%d",iVar3);
          iVar3 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar3 + 0x138) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar3 + 0x13c) - *(int *)(iVar3 + 0x138) >> 2;
          }
          iVar5 = 0;
          if (iVar6 < 1) break;
          while (iVar4 = stricmp(local_100,
                                 (char *)**(undefined4 **)(*(int *)(iVar3 + 0x138) + iVar5 * 4)),
                iVar4 != 0) {
            iVar5 = iVar5 + 1;
            if (iVar6 <= iVar5) goto LAB_0044c1e6;
          }
        }
LAB_0044c1e6:
        iVar3 = *(int *)(param_1 + 0x13a4) + -1;
        *(int *)(param_1 + 0x13a4) = iVar3;
      }
      sprintf(local_100,"Camera_Track_%d",iVar3);
      if ((param_6 != '\0') && (cVar1 = FUN_0044bd50(local_100), cVar1 != '\0')) {
        uVar2 = FUN_0044bfd0(0,param_3,param_4,param_5,0);
        return uVar2;
      }
      uVar2 = FUN_0044ba60(local_100,param_3,param_4,param_5);
      return uVar2;
    }
    *(int *)(param_1 + 0x13a4) = iVar3 + 1;
    sprintf(local_100,"Camera_Track_%d",iVar3 + 1);
    if ((param_6 != '\0') && (cVar1 = FUN_0044bd50(local_100), cVar1 != '\0')) {
      uVar2 = FUN_0044bfd0(param_2,param_3,param_4,param_5,0);
      return uVar2;
    }
    cVar1 = FUN_0044ba60(local_100,param_3,param_4,param_5);
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x13a4) = 1;
    if ((param_6 == '\0') || (cVar1 = FUN_0044bd50("Camera_Track_1"), cVar1 == '\0')) {
      uVar2 = FUN_0044ba60("Camera_Track_1",param_3,param_4,param_5);
      return uVar2;
    }
  }
  uVar2 = FUN_0044bfd0(param_2,param_3,param_4,param_5,0);
  return uVar2;
}

