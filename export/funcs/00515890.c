
undefined4 FUN_00515890(int *param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint unaff_EBP;
  int unaff_ESI;
  int *unaff_retaddr;
  char local_c [4];
  undefined1 local_8;
  undefined1 auStack_4 [4];
  
  local_8 = 1;
  iVar4 = (**(code **)(*param_1 + 0x130))(local_c,1);
  if ((iVar4 < 0) || (iVar4 = (**(code **)(*unaff_retaddr + 0x20))(), unaff_ESI != iVar4)) {
    unaff_EBP = unaff_EBP & 0xffffff00;
    iVar4 = (**(code **)(*param_1 + 0x130))(&stack0xffffffec,0);
    if ((iVar4 < 0) || (iVar4 = (**(code **)(*unaff_retaddr + 0x20))(), unaff_ESI != iVar4)) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x3bc,
                 "server passed non-contigious ring information.... start tradlane command ignored")
      ;
      return 0;
    }
  }
  piVar8 = unaff_retaddr;
  if (param_2 == '\0') {
    piVar8 = param_1;
  }
  iVar4 = FUN_00515200(piVar8,unaff_EBP,1);
  if ((param_1[0x58] != 0) && (param_1[0x58] != iVar4)) {
    FUN_00515200(piVar8,unaff_EBP,1);
    iVar1 = param_1[0x58];
    if (iVar1 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x20))();
      for (puVar6 = (undefined4 *)**(undefined4 **)(iVar1 + 0xc);
          *(undefined4 **)(iVar1 + 0xc) != puVar6; puVar6 = (undefined4 *)*puVar6) {
        if (puVar6[2] == iVar5) {
          if ((char)param_1[0x61] < '\0') {
            FUN_00514f20(param_1);
          }
          piVar8 = (int *)FUN_0054baf0();
          if (param_1 == piVar8) {
            FUN_00515640();
            *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xbf;
          }
          cVar3 = FUN_00503330();
          if (cVar3 != '\0') {
            FUN_004fcef0(param_1 + 0x59);
          }
          param_1[0x61] = 0;
          param_1[0x58] = 0;
          piVar8 = (int *)FUN_0053ab20(local_c,0);
          piVar8 = (int *)*piVar8;
          *(int *)piVar8[1] = *piVar8;
          *(int *)(*piVar8 + 4) = piVar8[1];
          FUN_005b7e1d(piVar8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
          goto LAB_005159c1;
        }
      }
      puVar6 = (undefined4 *)FUN_00411c50(0x10000,1);
      (**(code **)FDUMP_exref)
                (*puVar6,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)");
    }
  }
LAB_005159c1:
  iVar1 = *unaff_retaddr;
  uVar7 = (**(code **)(*param_1 + 0x10))(auStack_4);
  (**(code **)(iVar1 + 300))(uVar7);
  bVar2 = (local_c[0] << 1 ^ *(byte *)(param_1 + 0x61)) & 2 ^ *(byte *)(param_1 + 0x61) | 0x80;
  *(byte *)(param_1 + 0x61) = bVar2;
  *(byte *)(param_1 + 0x61) = (*(byte *)(iVar4 + 0x1c) ^ bVar2) & 1 ^ bVar2;
  if ((char)unaff_retaddr != '\0') {
    *(byte *)((int)param_1 + 0x185) = *(byte *)((int)param_1 + 0x185) | 2;
  }
  if (param_1[0x58] != 0) {
    if (param_1[0x58] == iVar4) {
      if (-1 < (char)param_1[0x61]) {
        return 1;
      }
      FUN_00514750(param_1);
      return 1;
    }
    FUN_00515b60(param_1);
  }
  param_1[0x58] = iVar4;
  *(byte *)((int)param_1 + 0x185) = *(byte *)((int)param_1 + 0x185) & 0xfa;
  if ((char)param_1[0x61] < '\0') {
    FUN_00514750(param_1);
  }
  (**(code **)(*param_1 + 0x20))();
  iVar1 = *(int *)(iVar4 + 0xc);
  iVar5 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  FUN_005999b0(iVar5 + 8,&stack0x00000000);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  return 1;
}

